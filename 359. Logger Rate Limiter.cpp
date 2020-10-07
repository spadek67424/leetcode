class Logger {
public:
    /** Initialize your data structure here. */
    Logger() {
        
    }
    
    /** Returns true if the message should be printed in the given timestamp, otherwise returns false.
        If this method returns false, the message will not be printed.
        The timestamp is in seconds granularity. */
    bool shouldPrintMessage(int timestamp, string message) {
        map<string,int>::iterator iter = this->mesmap.find(message);
        
        if (iter==mesmap.end())
        {
            mesmap[message]=timestamp;
            return true;
        }
        else
        {
            if(timestamp-(iter->second)>=10)
            {
                mesmap[message]=timestamp;
                return true;
            }
            return false;
        }
    }
private:
    map<string, int> mesmap;
};

/**
 * Your Logger object will be instantiated and called as such:
 * Logger* obj = new Logger();
 * bool param_1 = obj->shouldPrintMessage(timestamp,message);
 */
