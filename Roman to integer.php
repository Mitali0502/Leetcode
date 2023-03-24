class Solution {
    /**
     * @param String $s
     * @return Integer
     */
    function romanToInt($s) {
        $map = array(
            'I' => 1,
            'V' => 5,
            'X' => 10,
            'L' => 50,
            'C' => 100,
            'D' => 500,
            'M' => 1000
        );
        $result = 0;
        $prev = 0;
        for($i = strlen($s) - 1; $i >= 0; $i--){
            $curr = $map[$s[$i]];
            if($curr < $prev){
                $result -= $curr;
            }
            else{
                $result += $curr;
            }
            $prev = $curr;
        }
        return $result;
    }
}
