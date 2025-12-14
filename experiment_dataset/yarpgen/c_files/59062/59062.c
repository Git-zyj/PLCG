/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= ((46758 ? 46758 : 18170720130840603651));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = (max(177, (((arr_5 [i_0] [i_0] [i_2]) * (arr_5 [i_0] [i_0] [i_0])))));

                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        arr_11 [i_0] [i_1] [i_0] = var_1;
                        arr_12 [i_0] [i_0] [i_1] [i_0] = (min(((18773 ? ((~(arr_10 [i_1] [i_2] [i_1] [i_1]))) : (~var_2))), -2147483623));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_12 += ((((var_3 ? 0 : var_4))) ? (arr_0 [i_3]) : (((arr_1 [1]) << (var_7 - 45936))));
                            var_13 -= (((arr_14 [i_0] [i_0] [i_1 - 1] [i_0] [i_3 + 2]) ? (arr_14 [i_1] [i_1] [i_1 - 2] [i_1] [i_3 + 1]) : (arr_14 [15] [i_0] [i_1 + 1] [i_1 + 1] [i_3 - 1])));
                            var_14 ^= ((!((((arr_7 [i_0] [i_1] [i_2] [i_3] [i_2]) ? var_3 : (arr_14 [i_0] [12] [i_2] [12] [i_4]))))));
                        }
                        var_15 = ((~(((arr_14 [i_3] [i_3 - 2] [i_1 - 2] [i_1 - 3] [i_1 - 2]) ? ((min(158, var_7))) : (var_1 - 131040)))));
                        arr_15 [i_0] [i_2] [i_2] |= (~var_6);
                    }

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        arr_19 [i_0] [i_0] [i_1] [i_0] = (((145046699 ? var_3 : -208672886)));
                        arr_20 [13] [i_1] [i_2] [i_1] = ((var_8 ? (arr_0 [i_1 - 2]) : ((~(arr_8 [i_1])))));
                    }
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        arr_24 [i_1] [i_1 + 2] [2] [1] = (arr_7 [i_6] [i_1] [i_2] [i_1] [i_2]);
                        arr_25 [i_0] [i_1] [i_6] [9] [i_0] [i_1] = (max((max(((16 ? (arr_13 [2] [1] [1] [i_6] [1]) : -4)), 2)), var_7));
                        var_16 ^= (~-461137437);
                        arr_26 [i_1] = 0;
                        arr_27 [i_0] [i_0] [i_0] [i_1] [i_0] = 8;
                    }
                }
            }
        }
    }
    #pragma endscop
}
