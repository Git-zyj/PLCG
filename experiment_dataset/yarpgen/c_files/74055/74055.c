/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [10] |= (1 * 2454710042);
        var_20 -= ((1 || (-55 + var_10)));
        var_21 += (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_7 [i_1] [i_1] = (((arr_5 [i_1]) % (((min((arr_6 [i_1] [i_1]), 1)) ? (~var_9) : (max(var_16, var_0))))));
        var_22 ^= (((65531 >= -55) <= 255));
        var_23 = (arr_6 [i_1] [i_1]);
        var_24 = ((!(((~(arr_6 [i_1] [i_1]))))));
        var_25 -= ((((((min(45399, var_8))) ? 65531 : 20137)) ^ (~-1652978778)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                {
                    arr_15 [i_2] [i_3] [8] [i_4] &= ((var_17 ? (arr_3 [i_3 - 1] [i_2]) : ((~(arr_1 [i_2])))));
                    arr_16 [i_2] [i_3] [i_2] [i_3] = ((~(arr_11 [i_3 + 2] [i_3 - 2])));
                }
            }
        }
        var_26 -= ((var_3 <= (arr_12 [1])));
        arr_17 [i_2] [i_2] = ((((arr_12 [i_2]) / (arr_3 [i_2] [i_2]))));
        var_27 &= ((-1 ? (16515072 >= 1652978778) : var_1));
    }
    var_28 *= var_8;
    #pragma endscop
}
