/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, ((((var_7 * var_8) ? (var_8 != 13991) : var_1)))));
    var_16 = (min(var_16, (((-13995 ? (((!(((var_3 ? var_10 : var_14)))))) : var_0)))));

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 11;i_1 += 1)
        {
            var_17 = (min(var_17, (((((30 * -14018) ? (arr_5 [4] [0] [i_1 + 1]) : (var_14 >= 0)))))));
            arr_6 [i_0] [i_0] = var_2;
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 12;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 1; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 -= ((+((8388608 ? (arr_8 [i_3]) : var_1))));
                        arr_16 [i_0] [i_0] [i_4] [6] [4] = var_14;
                        var_19 += (((((arr_4 [10]) | 187))) ? ((var_7 ? (arr_12 [i_0] [i_2] [i_2] [i_4 - 2]) : var_11)) : var_11);
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_5 = 2; i_5 < 9;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 12;i_6 += 1)
                {
                    {
                        var_20 = (((var_6 >= var_4) ? (arr_5 [3] [i_5 - 1] [i_5 - 1]) : (arr_2 [i_5 + 2] [i_2])));
                        var_21 = 5;
                        arr_23 [i_2] [i_5] = ((-(arr_22 [i_0] [i_0] [i_0] [i_0])));
                        var_22 *= var_3;
                    }
                }
            }
        }
        var_23 |= ((!((max(-1, 19176)))));
    }
    #pragma endscop
}
