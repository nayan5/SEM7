class Item:
	def __init__(self, value, weight):
		self.value = value
		self.weight = weight

def fractionalKnapsack(W, arr):
	finalvalue = 0.0

	for item in arr:
		if item.weight <= W:
			W = W - item.weight
			finalvalue += item.value
		else:
			finalvalue += item.value * W / item.weight
			break
	return finalvalue


# Driver Code
if __name__ == "__main__":
	W = 50
	arr = [Item(60, 10), Item(100, 20), Item(120, 30)]
	max_val = fractionalKnapsack(W, arr)
	print(max_val)

