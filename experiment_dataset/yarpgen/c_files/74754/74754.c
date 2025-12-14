/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= (1991 < 1508904603);
    var_16 = (min(var_4, var_13));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            {
                var_17 -= (max(((((arr_4 [20] [20] [i_0]) < (((var_13 < (arr_1 [20]))))))), ((((((arr_1 [4]) * (arr_0 [10] [1])))) ? ((((arr_4 [24] [24] [i_1]) || (arr_4 [16] [16] [i_0])))) : ((-(arr_2 [4])))))));
                arr_6 [i_0] [i_0] = var_11;
                arr_7 [i_0] = max(((((-1984 < (arr_5 [i_0]))) ? (-1024209362 ^ -1969) : (max((arr_0 [i_0] [i_0]), (arr_1 [i_0]))))), (!7447629782916738401));
                var_18 = (arr_4 [i_0] [i_1 - 2] [i_1 - 2]);
            }
        }
    }
    #pragma endscop
}
