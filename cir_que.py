class CircularQueue:
    def __init__(self, N):
        self.N = N
        self.Q = [None] * N
        self.F = self.R = -1

    def Enqueue(self, val):
        if (self.R + 1) % self.N == self.F:
            print('Circular Queue is full!')
        elif self.F == -1:
            self.F += 1
            self.R += 1
            self.Q[self.R] = val
        else:
            self.R = (self.R + 1) % self.N
            self.Q[self.R] = val

    def Dequeue(self):
        if self.F == -1:
            print('Circular Queue is empty!')
        elif self.F == self.R:
            removed_element = self.Q[self.F]
            self.F = self.R = -1
            return removed_element
        else:
            removed_element = self.Q[self.F]
            self.F = (self.F + 1) % self.N
            return removed_element

    def printCQ(self):
        if self.F == -1:
            print('Empty')
        elif self.R > self.F:
            for i in range(self.F, self.R+1):
                print(self.Q[i], end = ' ')
        else:
            for i in range(self.F, self.N):
                print(self.Q[i], end= ' ')
            for i in range(0, self.R+1):
                print(self.Q[i], end= ' ')
                


Queue = CircularQueue(4)
Queue.Enqueue(10)
Queue.Enqueue(20)
Queue.Enqueue(30)
Queue.Enqueue(40)
Queue.printCQ()
print("\n")
removed_element = Queue.Dequeue()

Queue.printCQ()
print(f"\nDequeued element: {removed_element}")