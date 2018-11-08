# Insertion Sort In Python
# Using [8,2,1,3,5,4] as the array
# Performance Complexity = O(n^2)
# Space Complexity = O(n)

def insertionSort(my_list):
    # for every element in our array
    for index in range(1, len(my_list)):
        current = my_list[index]
        position = index

        while position > 0 and my_list[position-1] > current:
            my_list[position] = my_list[position-1]
            print(my_list)
            position -= 1

        my_list[position] = current

    return my_list

my_list=[]
n=int(input("Enter size of the list:\n"))

for i in range(0,n):
    temp=int(input("Enter number to append:\n"))
    my_list.append(temp)

print(insertionSort(my_list))
