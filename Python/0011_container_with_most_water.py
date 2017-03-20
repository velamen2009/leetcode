class Solution(object):
	def maxArea(self, height):
		L, R, res = 0, len(height) - 1, 0
		if R <= L: return 0
		while L < R:
			temp = (R - L) * min(height[R], height[L])
			if temp > res: res = temp
			if height[R] > height[L]: L += 1
			else: R -= 1
		return res
