class node:
	def __init__(self, value):

		#constructor for initializing data and next pointer
		self.value = value
		self.next = None

class linked:

	def __init__(self,value):
		self.head=node(value)
		self.tail=self.head     # tail is last node
		self.length=1


	def insert(self,value):   
		self.length += 1
		newNode=node(value)
		self.tail.next=newNode
		self.tail=newNode		# tail gets updated

	def insert_at_Beginning(self,value):
		self.length += 1
		newNode = node(value)
		newNode.next = self.head
		self.head = newNode

	def printl(self):
		t = self.head
		x = self.length
		while(x != 0):
			print(str(t.value), end = " -> ")
			x -= 1
			t = t.next
		print("Null\n")

LinkedList = linked(10)

LinkedList.printl()

LinkedList.insert(5)
LinkedList.insert(67)
LinkedList.insert(55)

LinkedList.printl()

LinkedList.insert_at_Beginning(11)
LinkedList.insert(60)


LinkedList.printl()