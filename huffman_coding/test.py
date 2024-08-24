string = input("Enter the string: ")
tuple_list = []  # Correct spelling and initialization

for letter in string:
    found = False  # Flag to check if letter is already in the list
    for idx, tuple in enumerate(tuple_list):
        if letter == tuple[0]:  # If letter is found, update its count
            tuple_list[idx] = (tuple[0], tuple[1] + 1)
            found = True
            break
    
    if not found:  # If letter was not found, add it to the list
        tuple_list.append((letter, 1))

tuple_list.sort()

print(tuple_list)
