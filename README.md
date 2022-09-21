# OeratingSystemLab Programs Sample Input and Output

# Bankers algorithm

INPUT : 
    5
		0
		7
		1
		5
		0
		3
		2
		3
		0
		2
		0
		2
		3
		9
		0
		0
		2
		2
		2
		2
		1
		2
		1
		2
		0
		4
		0
		3
		2
		3
    
    OUTPUT :
    
		System is in safe state
		Safe sequence is
		P2 -> P4 -> P5 -> P1 -> P3 ->
        
# Page replacement algorithm

 INPUT : 
        14
        7
        0
        1
        2
        0
        3
        0
        4
        2
        3
        0
        3
        2
        3
        
    OUTPUT :
    
        FIFO
        page 7 is allocated  on frame 0
        page 1 is allocated  on frame 1
        page 2 is allocated  on frame 2
        page fault occured
        page 7 replaced with page 3
        page 1 is in frame
        page fault occured
        page 1 replaced with page 4
        page fault occured
        page 2 replaced with page 1
        page fault occured
        page 3 replaced with page 5
        page fault occured
        page 4 replaced with page 3
        page fault occured
        page 1 replaced with page 4
        Number of page faults is : 6

        LRU
        page 7 is allocated  on frame 0
        page 1 is allocated  on frame 1
        page 2 is allocated  on frame 2
        page fault occured
        page 7 replaced with page 3
        page 1 is in frame
        page fault occured
        page 2 replaced with page 4
        page 1 is in frame
        page fault occured
        page 3 replaced with page 5
        page fault occured
        page 4 replaced with page 3
        page fault occured
        page 1 replaced with page 4
        Number of page faults is : 5

        LFU
        page 7 is allocated  on frame 0
        page 1 is allocated  on frame 1
        page 2 is allocated  on frame 2
        page fault occured
        page 7 replaced with page 3
        page 1 is in frame
        page fault occured
        page 2 replaced with page 4
        page 1 is in frame
        page fault occured
        page 3 replaced with page 5
        page fault occured
        page 4 replaced with page 3
        page fault occured
        page 5 replaced with page 4
        Number of page faults is : 5
        
      

