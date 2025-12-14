/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_5 ? ((((var_6 ? var_9 : var_4)) << (((min(var_9, var_4)) - 84)))) : (((((min(9223372036854775807, var_7))) ? (max(var_16, var_5)) : var_18)))));
    var_20 &= (((((~((-121 ? 126 : 2535948252))))) ? var_8 : (max(((min(var_11, var_10))), var_10))));
    var_21 = (min(var_21, (((var_4 < ((((var_4 ? var_3 : var_15)))))))));
    var_22 = ((227 ? 123 : (120 == 111)));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        var_23 = ((var_4 ? ((~(var_1 || var_7))) : 0));
                        var_24 = (min((((arr_1 [i_1]) ? var_9 : (arr_1 [i_1]))), -0));
                        var_25 = (!((!((min(var_18, (arr_7 [i_3] [i_1] [i_2 - 1] [i_3])))))));
                    }
                    for (int i_4 = 4; i_4 < 20;i_4 += 1)
                    {
                        var_26 = ((180 ^ ((((var_7 < (arr_4 [i_0] [i_0] [i_0 - 3]))) ? (((!(arr_0 [i_4])))) : (arr_2 [i_4 - 2])))));
                        var_27 = ((-2147483643 ? (max((arr_6 [i_0] [i_1] [5] [i_1]), (arr_4 [i_0 + 1] [i_1] [i_4]))) : 147));
                    }
                    for (int i_5 = 1; i_5 < 22;i_5 += 1)
                    {

                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 23;i_6 += 1)
                        {
                            var_28 = (min(var_28, (((var_0 ? (arr_13 [15] [i_5 - 1] [i_5] [i_5] [i_5] [i_5] [i_5 - 1]) : var_9)))));
                            var_29 = -111;
                        }
                        for (int i_7 = 1; i_7 < 1;i_7 += 1)
                        {
                            var_30 = ((1 >> (127 - 101)));
                            var_31 += ((((!(arr_10 [i_2 - 2] [i_5] [i_5] [i_5 + 1])))));
                        }
                        var_32 = ((((var_10 < (arr_7 [i_2] [i_2] [i_2] [i_5]))) ? (((((7338 ? 1316788198 : -4))) ? (var_14 - var_0) : (arr_17 [i_5] [i_2 + 1] [i_2 - 1] [i_0 - 3] [i_0 - 3]))) : var_9));
                    }
                    arr_18 [i_0 - 1] [i_0] = (arr_17 [i_2 - 2] [i_2] [i_2] [6] [i_2 - 2]);
                    var_33 = (arr_10 [i_2] [i_2] [i_0] [i_0]);
                    var_34 &= (71 ? 19 : -102);
                    var_35 |= (!-78);
                }
            }
        }
    }
    #pragma endscop
}
