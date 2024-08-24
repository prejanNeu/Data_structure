class huffman:

    def __init__(self,str):
        data=str

    def frequency(self,str):
        tuple_list=[]
        for letter in str:
            found = False 
            for idx, tuple in enumerate(tuple_list):
                if letter == tuple[0]: 
                    tuple_list[idx] = (tuple[0], tuple[1] + 1)
                    found = True
                    break
            
            if not found: 
                tuple_list.append((letter, 1))


        tuple_list.sort()

        return tuple_list
    def huffman_tree(self,str):
        ...
    def encryption(str):
        ...


