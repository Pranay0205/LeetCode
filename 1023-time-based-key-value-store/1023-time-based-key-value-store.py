class TimeMap:

    def __init__(self):
        self.timeMap = {}
        

    def set(self, key: str, value: str, timestamp: int) -> None:
        if key not in self.timeMap:
            self.timeMap[key] = [[value, timestamp]]
        else:
            self.timeMap[key].append([value, timestamp])

        

    def get(self, key: str, timestamp: int) -> str:

        if key not in self.timeMap:
            return ""
        
        valueArray = self.timeMap[key]

        return self.binary_search(valueArray, timestamp)
    
    def binary_search(self, array, timestamp) -> str:
        l, r = 0, len(array) - 1

        while l <= r:
            mid_idx = (l + r) // 2
            mid_val = array[mid_idx]
            if mid_val[1] > timestamp:
                r = mid_idx - 1
            elif mid_val[1] < timestamp:
                l = mid_idx + 1
            else:
                return mid_val[0]

        if r == -1:
            return ""
        return array[r][0]



# Your TimeMap object will be instantiated and called as such:
# obj = TimeMap()
# obj.set(key,value,timestamp)
# param_2 = obj.get(key,timestamp)