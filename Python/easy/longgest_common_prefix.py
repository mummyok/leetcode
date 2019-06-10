class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        if len(strs) == 0:
            return ''
        cpre = strs[0]
        for onestr in strs[1:]:
            i = 0
            while i < len(cpre) and i < len(onestr) and cpre[i] == onestr[i]:
                i = i + 1
            cpre = cpre[:i]

        return cpre
