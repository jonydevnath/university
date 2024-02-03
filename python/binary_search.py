li = [1,3, 5, 6, 7, 9]
ln = len(li) - 1 
key = 12

first = li.index(li[0])
last = li.index(li[ln])

while True:
    mid = round((first + last) / 2)

    if first > last:
        print("not found")
        break

    if li[mid] == key:
        print("found")
        print(mid)
        break
    elif li[mid] < key:
        first = mid + 1
    elif li[mid] > key:
        last = mid - 1

# print(first)
# print(last)
# print(round(mid))