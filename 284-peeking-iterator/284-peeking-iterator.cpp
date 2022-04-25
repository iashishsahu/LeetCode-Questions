/*
 * Below is the interface for Iterator, which is already defined for you.
 * **DO NOT** modify the interface for Iterator.
 *
 *  class Iterator {
 *		struct Data;
 * 		Data* data;
 *  public:
 *		Iterator(const vector<int>& nums);
 * 		Iterator(const Iterator& iter);
 *
 * 		// Returns the next element in the iteration.
 *		int next();
 *
 *		// Returns true if the iteration has more elements.
 *		bool hasNext() const;
 *	};
 */

class PeekingIterator : public Iterator {
    int i,last;
    vector<int> arr;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
        arr=nums;
        i=0;
        last = arr.size()-1;
	}
	
	int peek() {
        return arr[i];
	}
	
	int next() {
	    return arr[i++];
	}
	
	bool hasNext() const {
	    if(i>last) return false;
        return true;
	}
};