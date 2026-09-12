class Solution {
public:
    void merge(vector<int>& arr, int start, int mid, int end){
        vector<int> temp;
        int i = start, j = mid+1;

        while(i<=mid && j<= end){
            if(arr[i] <= arr[j]){
                temp.push_back(arr[i]);
                i++;
            }else{
                temp.push_back(arr[j]);
                j++;
            }
        }
        while(i<= mid){
            temp.push_back(arr[i]);
            i++;
        }
        while(j<=end){
            temp.push_back(arr[j]);
            j++;
        }
        for(int idx=0;idx<temp.size();idx++){
            arr[start + idx] =temp[idx];
        }
    }
    void mergesort(vector<int>& arr, int start, int end){
        if(start<end){

            int mid =start + (end-start)/2;

            mergesort(arr,start,mid);
            mergesort(arr,mid+1,end);
            merge(arr,start,mid,end);
        }
    }
    vector<int> sortArray(vector<int>& arr) {
        mergesort(arr,0,arr.size()-1);
        return arr;
    }
};