/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58739
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [10] [3] &= (arr_0 [i_0] [i_0]);
        var_19 += (min((arr_1 [11] [i_0]), ((max(var_18, (arr_2 [i_0] [i_0]))))));
        var_20 += (max(((var_6 ? 8 : 127)), ((max((arr_2 [2] [11]), ((-119 ? (arr_2 [i_0] [i_0]) : var_2)))))));
    }

    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 18;i_3 += 1)
            {
                {
                    var_21 = (max(var_21, ((((((arr_4 [i_1 - 1]) ? (arr_6 [i_3]) : var_14))) ? var_13 : ((-(arr_7 [i_1 + 1] [i_1 + 1] [4])))))));
                    arr_12 [i_1] [i_2] [11] [8] = (((((arr_11 [i_1 - 1] [i_1]) & -124)) - (arr_9 [i_1] [i_2] [i_1])));
                }
            }
        }

        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 4; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 17;i_6 += 1)
                {
                    {
                        var_22 = (min(((((1 ? (arr_14 [i_1] [1] [14]) : (arr_7 [i_1] [i_1] [i_1]))) / var_9)), (arr_13 [i_1])));
                        var_23 ^= (arr_11 [i_1] [i_4]);
                        arr_20 [i_1] = var_14;
                    }
                }
            }
            var_24 = (min(var_24, ((((36335 & 11965) && ((((arr_19 [i_1 + 1]) ? ((var_16 + (arr_10 [i_1] [1] [i_1]))) : (arr_4 [9])))))))));
        }
        for (int i_7 = 0; i_7 < 18;i_7 += 1)
        {
            var_25 = ((!(((-(((arr_5 [i_1] [i_7]) ? 63 : var_12)))))));

            for (int i_8 = 2; i_8 < 17;i_8 += 1)
            {
                arr_27 [i_1 + 1] [11] [11] [i_1] = ((-(((arr_16 [i_1] [i_1]) / (arr_13 [i_1])))));
                arr_28 [i_1] [8] [i_8 - 2] [11] = ((arr_18 [10] [3] [6] [i_8 + 1]) ? (((((~(arr_26 [i_1] [i_1] [i_1] [i_1]))) >= (arr_18 [i_1] [13] [3] [i_1])))) : ((((arr_17 [i_1] [i_1] [i_8] [i_1]) || (arr_21 [i_1 + 1] [i_1 - 1] [i_1 + 1])))));
                var_26 = (max(var_26, ((((var_13 + var_14) ? (((arr_19 [i_1 - 1]) + (arr_25 [i_1 + 1] [2] [6]))) : ((-(((arr_21 [i_8] [i_7] [i_1 - 1]) ? var_2 : var_10)))))))));
            }
        }
    }
    var_27 = (max((((((var_7 ? -39 : var_14))) ? (max(-1624832315, var_11)) : ((max(var_12, 1))))), var_17));
    #pragma endscop
}
