class Solutions(object):
	def reverse(self, x):
		res, limit, abs_x = 0, 0x7FFFFFFF, abs(x)
		abs_x = abs_x // 10
		if res > limit:
			return 0
		else:
			return res if x > 0 else res * -1
