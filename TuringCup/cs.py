def solve():
    import sys
    input = sys.stdin.read
    data = input().split()
    
    idx = 0
    T = int(data[idx])
    idx += 1
    
    for _ in range(T):
        N = int(data[idx])
        K = int(data[idx + 1])
        idx += 2
        
        W = list(map(int, data[idx:idx + N]))
        idx += N
          
        W.sort()
        
        if K > N:
            total = sum(W)
            print(total)
            continue
        
        junior_sum = sum(W[:K])
        
        lead_sum = sum(W[K:])
        
        difference = lead_sum - junior_sum
        print(difference)

if __name__ == "__main__":
    solve()