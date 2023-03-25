class Solution {
    function searchInsert($nums, $target) {
        $left = 0;
        $right = count($nums) - 1;
        while ($left <= $right) {
            $mid = $left + (int) (($right - $left) / 2);
            if ($nums[$mid] === $target) {
                return $mid;
            } else if ($nums[$mid] < $target) {
                $left = $mid + 1;
            } else {
                $right = $mid - 1;
            }
        }
        return $left;
    }
}

$nums = [1, 3, 5, 6];
$target = 5;
$expected_index = 2;

$solution = new Solution();
$index = $solution->searchInsert($nums, $target);
echo "Index: $index\n";

// Check if the output is correct
assert($index === $expected_index);
