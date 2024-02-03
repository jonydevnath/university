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
        
class LinkedList:    
    def __init__(self):
        self.head = None
        
    def traverse(self, head):
        while head != None:
            print(head.info)
            head = head.link
    
        
    def delete_from_begin(self):
        # current = self.head
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


def main():
    first = Node(10)
    second = Node(20)
    third = Node(30)
    fourth = Node(40)

    L = LinkedList()
    L.head = first
    first.link = second
    second.link  = third
    third.link  = fourth


    L.delete_from_begin()
    L.delete_from_end()

    L.delete_from_pos_by_value(30)
        
    L.traverse(L.head)

main()
