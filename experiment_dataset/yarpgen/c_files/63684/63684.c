/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63684
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 &= min(((((var_16 >= var_0) > var_16))), var_1);

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    {
                        var_20 = ((~((((arr_1 [i_3 + 1]) && (arr_1 [i_3 - 1]))))));
                        var_21 = (min(var_21, (((4255682420 < (((arr_8 [i_3 + 2] [8] [13] [i_3 + 2]) / (((((arr_10 [i_0] [i_0] [i_0] [i_0]) > (arr_9 [i_0] [i_0] [i_0] [i_0]))))))))))));
                    }
                }
            }
        }
        var_22 ^= (-(((arr_10 [3] [i_0] [i_0] [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))));
        var_23 = (min(var_23, (((((arr_2 [i_0]) ? (arr_2 [i_0]) : 4211100259)) % (arr_9 [i_0] [i_0] [i_0] [i_0])))));
        var_24 = max(((max(1579503106, (arr_2 [i_0])))), (((((arr_10 [i_0] [i_0] [i_0] [10]) || (arr_8 [i_0] [11] [i_0] [i_0]))) ? (((arr_0 [i_0]) ? 4294967295 : (arr_0 [i_0]))) : (max(1574804075, 1040187392)))));
        var_25 = 39284867;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 17;i_4 += 1)
    {
        var_26 = ((((arr_13 [i_4] [i_4]) > 4211100259)) ? ((-(arr_13 [i_4] [i_4]))) : (((arr_13 [i_4] [i_4]) ? (arr_12 [i_4]) : (arr_12 [i_4]))));
        var_27 += (((((arr_13 [i_4] [i_4]) & (arr_12 [i_4])))) ? (arr_13 [i_4] [i_4]) : (((arr_13 [i_4] [i_4]) | (arr_12 [i_4]))));
    }
    var_28 = (min(var_28, (min((((((var_11 ? var_7 : var_14))) ? (var_0 | 4255682420) : (var_8 ^ 1569660564))), var_15))));
    #pragma endscop
}
