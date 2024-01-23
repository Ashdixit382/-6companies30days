class DataStream {
public:
    int value;
    int k;
    int cnt = 0;

    DataStream(int value, int k) {
       this->value = value;
       this->k = k; 
    }
    
    bool consec(int num) {
        if(num == value){
            cnt++;
            if(cnt >= k){
                return true;
            }
        }
        else{
            cnt = 0;
        }
        return false;
    }
};

/**
 * Your DataStream object will be instantiated and called as such:
 * DataStream* obj = new DataStream(value, k);
 * bool param_1 = obj->consec(num);
 */