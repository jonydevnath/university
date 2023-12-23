# -*- coding: utf-8 -*-
"""
Created on Sun Dec 17 11:37:50 2023

@author: DELL
"""
class Node:
    # constractor
    def __init__(self, info):
        self.info = info
        self.link = None
        
class LinkdedList:    
    def __init__(self):
        self.head = None
        
    def traverse(self, head):
        while head != None:
            print(head.info)
            head = head.link
    
    def insert_at_begin(self,val):
        newNode = Node(val)
        newNode.link = self.head
        self.head= newNode
    
   
    def insert_at_end(self, val):
        newNode = Node(val)
        if self.head == None:
            self.head = newNode
            return
        lastNode = self.head
        while lastNode.link != None:
            lastNode = lastNode.link
        lastNode.link = newNode
    
    def totalsize(self):
        c = 1
        current = self.head
        while(current):
            c += 1
            current = current.link
        return c
    
    
    def update_by_node(self,loc):
        current = self.head
        N = L.totalsize()
        if loc > N:
            print("Invalid node!")
            return
        c = 1
        while current != None:
            if c == loc:
                break
            else:
                c = c + 1
                current = current.link
        current.info = 300
          
    def delete_from_begin(self):
        #current = self.head
        self.head = self.head.link
    
    def delete_from_end(self):
        current = self.head
        while current.link.link != None:
            current = current.link
        current.link = None
    
    def delete_from_pos_by_value(self, value):
        current = self.head
        if current != None and current.info == value:
            self.head = current.link
            return

        while current.link != None:
            if current.link.info == value:
                current.link = current.link.link
                return
            current = current.link

first = Node(10)
second = Node(20)
third = Node(30)

L = LinkdedList()
L.head = first
first.link = second
second.link  = third

L.insert_at_begin(100)
L.insert_at_end(200)

L.update_by_node(3)

L.delete_from_begin()
L.delete_from_end()
L.delete_from_pos_by_value(30)
L.traverse(L.head)
