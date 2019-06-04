class Solution(object):
    def reverse(self, x):
        """
        :type x: int
        :rtype: int
        """

        y = x if x > 0 else -x
        z = 0
        while y > 0:
            z = z * 10 + y % 10
            y /= 10
        z = z if x > 0 else -z
        if z > 0xffffffff or z < -0xffffffff:
            return 0
        else:
            return z
