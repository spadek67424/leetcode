class LRUCache:

    def __init__(self, capacity: int):
        self.capacity=capacity        
        self.lru=list()
        self.dic=dict()
    def get(self, key: int) -> int:
        if key in self.dic.keys():
            self.lru.remove(key)
            self.lru.append(key)
            return self.dic[key]
        else:
            return -1

    def put(self, key: int, value: int) -> None:
        if key in self.dic.keys():
            self.lru.remove(key)
            self.lru.append(key)
            self.dic[key]=value
        elif len(self.dic.keys())==self.capacity:
            del self.dic[self.lru[0]]
            del self.lru[0]
            self.lru.append(key)
            self.dic[key]=value
        else:
            self.lru.append(key)
            self.dic[key]=value
        
        
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)
