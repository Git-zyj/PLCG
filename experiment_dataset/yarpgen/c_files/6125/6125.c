/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_15;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 11;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = (((((((max((arr_6 [i_0] [i_1] [i_2]), 1005692313456931014)) >= ((~(arr_6 [i_0 + 1] [i_0 + 1] [1]))))))) * (((arr_5 [i_1] [i_0] [i_2 - 3]) / var_16))));
                    var_18 = (min(var_18, (~67043328)));
                    arr_9 [i_0] [i_1] [i_0] = ((((((((((!(arr_2 [i_0] [i_1 - 1] [4]))))) <= (arr_6 [i_0] [i_1 - 1] [i_2 + 1]))))) > ((max(67043328, (arr_2 [i_0 + 1] [i_2] [i_1]))))));
                }
            }
        }
    }
    var_19 = 18446744073642508287;
    var_20 = (max(((((max(var_15, var_3))) ? (67043328 >= 67043329) : var_4)), var_0));
    var_21 = var_11;
    #pragma endscop
}
