/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76025
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76025 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76025
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((-1581277613 | 123) ? ((var_12 ? 1955120127 : 1830816739)) : var_0))) ? ((~(var_13 ^ var_11))) : (((123 ^ (~var_8)))));
    var_15 = (min(var_15, (((((~(var_4 < var_3))) < var_7)))));

    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 11;i_2 += 1)
            {
                {
                    var_16 = ((arr_1 [i_1]) ? ((((max((arr_0 [i_0 + 2]), var_8))) ? var_12 : (arr_3 [i_0 + 2] [i_2 + 1]))) : ((max((arr_4 [i_0] [i_2]), 78))));
                    arr_9 [i_0] [i_0] = ((arr_3 [i_2 - 3] [i_2]) < (arr_8 [i_0] [i_1] [i_1] [i_2]));
                    var_17 = ((+((((~var_8) > var_10)))));
                    var_18 = (min(var_18, (((~((((max(1955120127, 2143290850281848550))) ? (arr_7 [i_0] [i_0] [i_2 + 2] [i_2]) : var_4)))))));
                    var_19 = ((arr_6 [i_0] [6] [i_2 + 1] [i_2 + 1]) ? (max((arr_5 [i_0 + 4] [i_1] [i_2] [i_0 - 1]), (~var_10))) : (((((var_10 ? (arr_0 [i_1]) : var_1)) < 26))));
                }
            }
        }
        var_20 = (max(var_20, (((!((((((var_9 ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (~var_8) : ((max((arr_5 [i_0] [4] [i_0] [i_0]), (arr_8 [i_0] [5] [i_0 + 4] [7]))))))))))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_21 = ((+(((!(min((arr_11 [i_3] [2]), (arr_11 [i_3] [i_3]))))))));
        var_22 = (min(var_22, ((min((0 < 26), ((!(arr_10 [i_3]))))))));
    }
    var_23 = -var_6;
    #pragma endscop
}
