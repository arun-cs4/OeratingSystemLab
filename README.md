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
        
      
# CPU SCHEDULING ALGORITHMS

INPUT : 
        5
        4
        0
        1
        3
        0
        2
        7
        6
        1
        4
        11
        3
        2
        12
        2

    OUTPUT :
        FCFS
        ----

        PID 	 RESPONCE TIME 	 COMPLETION TIME 	 TURNAROUND TIME 	 WAITING TIME
        ___ 	 _____________ 	 _______________ 	 _______________ 	 ____________
        P1   	 0      	  4             	  4      	         0
        P2   	 4      	  7             	  7      	         4
        P3   	 1      	  14             	  8      	         1
        P4   	 3      	  18             	  7      	         3
        P5   	 6      	  20             	  8      	         6

        AVERAGE RESPONCE TIME     : 2.800000
        AVERAGE COMPLETION TIME   : 12.600000
        AVERAGE TURNAROUND TIME   : 6.800000
        AVERAGE WAITING TIME      : 2.800000

        sjf
        ---

        PID 	 RESPONCE TIME 	 COMPLETION TIME 	 TURNAROUND TIME 	 WAITING TIME
        ___ 	 _____________ 	 _______________ 	 _______________ 	 ____________
        P1   	 3      	  7             	  7      	         3
        P2   	 0      	  3             	  3      	         0
        P3   	 1      	  14             	  8      	         1
        P4   	 5      	  20             	  9      	         5
        P5   	 2      	  16             	  4      	         2

        AVERAGE RESPONCE TIME     : 2.200000
        AVERAGE COMPLETION TIME   : 12.000000
        AVERAGE TURNAROUND TIME   : 6.200000
        AVERAGE WAITING TIME      : 2.200000

        PRIORITY
        --------

        PID 	 RESPONCE TIME 	 COMPLETION TIME 	 TURNAROUND TIME 	 WAITING TIME
        ___ 	 _____________ 	 _______________ 	 _______________ 	 ____________
        P1   	 0      	  4             	  4      	         0
        P2   	 4      	  7             	  7      	         4
        P3   	 1      	  14             	  8      	         1
        P4   	 5      	  20             	  9      	         5
        P5   	 2      	  16             	  4      	         2

        AVERAGE RESPONCE TIME     : 2.400000
        AVERAGE COMPLETION TIME   : 12.200000
        AVERAGE TURNAROUND TIME   : 6.400000
        AVERAGE WAITING TIME      : 2.400000

        ROUND ROBIN
        -----------

        PID 	 RESPONCE TIME 	 COMPLETION TIME 	 TURNAROUND TIME 	 WAITING TIME
        ___ 	 _____________ 	 _______________ 	 _______________ 	 ____________
        P1   	 0      	  10             	  10      	         6
        P2   	 1      	  6             	  6      	         3
        P3   	 0      	  20             	  14      	         7
        P4   	 0      	  17             	  6      	         2
        P5   	 0      	  15             	  3      	         1

        AVERAGE RESPONCE TIME     : 0.200000
        AVERAGE COMPLETION TIME   : 13.600000
        AVERAGE TURNAROUND TIME   : 7.800000
        AVERAGE WAITING TIME      : 3.800000
