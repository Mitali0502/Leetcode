class Solution {
    /**
     * @param Integer[] $nums
     * @param Integer $target
     * @return Integer[]
     */
    function twoSum($nums, $target) {
        $map = array();
        $result = array();
        foreach($nums as $i => $num){
            $diff = $target - $num;
            if(array_key_exists($diff, $map)){
                $result[] = $map[$diff];
                $result[] = $i;
                return $result;
            }
            $map[$num] = $i;
        }
        return $result;
    }
}
