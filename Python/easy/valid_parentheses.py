class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        pattern = {'(':0, ')':1, '{':2, '}':3, '[':4, ']':5}
        expect = []
        
        tot = len(s)
        idx = 0;
        for i in range(tot):
            if not expect:
                if pattern[s[i]] % 2 == 1:
                    return False
                expect.append(pattern[s[i]])
                idx += 1
            else:
                if pattern[s[i]]-1 == expect[idx-1]:
                    expect.pop();
                    idx-=1
                else:
                    expect.append(pattern[s[i]])
                    idx += 1
        
        if not expect:
            return True
        else:
            return False
