#include "assignment/find_sum.hpp"  // find_elements

namespace assignment {

  std::optional<std::pair<int, int>> find_sum(const std::vector<int>& data, int sum) {
    if (data.empty()){
      return std::nullopt;
    }
    // Tips: для создания пары (pair) используйте функцию std::make_pair
    int left = 0;
    int right = static_cast<int>(data.size() - 1);
    while(data[left] + data[right] != sum and left != right){
      if(data[left] + data[right] < sum){
        left++;
      }
      else{
        right--;
      }
    }
    if(left != right){
      return std::make_pair(left, right);
    }
    return std::nullopt;
  }

}  // namespace assignment