#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> solution(vector<int> &nums1, vector<int> &nums2)
{
    /*
    space(1)
    vector<int> data;
        sort(nums1.begin() , nums1.end());
        sort(nums2.begin() , nums2.end());
        int size1 = nums1.size();
        int size2 = nums2.size();
       // int size = size1 >= size2 ? size1 : size2;
        int min = 0, max = 0;
        while(min < size1 && max < size2) {
            if(nums1[min] > nums2[max]) {
                max++;
            }
            else if (nums1[min] < nums2[max]) {
                min++;
            }
            else if (nums1[min] == nums2[max]) {
                data.push_back(nums1[min]);
                min++;
                max++;
            }
        }

        return data;
    */
    unordered_map<int, int> counter;

    for (int value : nums1)
    {
        if (counter.count(value))
        {
            counter[value] += 1;
        }
        else
        {
            counter[value] = 1;
        }
    }

    vector<int> result;

    for (int value : nums2)
    {
        if (counter.count(value) && counter[value] != 0)
        {
            result.push_back(value);
            counter[value]--;
        }
    }

    return result;
}

int main()
{
    vector<int> test1 = {9, 4, 9, 8, 4};
    vector<int> test2 = {4, 9, 5, 4};
    vector<int> result = solution(test1, test2);
    for (int value : result)
    {
        cout << value;
    }
}