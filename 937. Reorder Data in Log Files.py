class Solution:
    
    def takeorder(self,ele):
        sig,id=ele.split(" ",1)
        return (id,sig)
    
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        dig_list=list()
        let_list=list()
        for x in logs:
            if x.split()[1].isnumeric():
                dig_list.append(x)
            else:
                let_list.append(x)
        print(let_list)
        let_list.sort(key=self.takeorder)
        print(let_list)
        let_list.extend(dig_list)
        return let_list
