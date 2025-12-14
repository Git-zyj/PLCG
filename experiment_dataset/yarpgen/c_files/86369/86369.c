/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86369
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] [10] = ((((((arr_3 [i_0]) ? (arr_3 [i_0]) : 17559413564909424822))) ? 1 : (max((887330508800126793 >> 1), (arr_2 [i_1] [i_1] [i_0])))));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_18 = (min(var_18, ((((arr_3 [i_0]) / (arr_3 [i_0]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_19 *= (((arr_10 [i_4] [i_4] [12] [12] [i_1] [i_0]) % ((2305843009213693888 ? (arr_8 [i_2] [i_4] [8] [i_3]) : 1))));
                                var_20 += ((arr_10 [i_0] [i_1] [i_1] [14] [i_3] [i_1]) ? (var_16 % 17559413564909424822) : (arr_9 [i_0] [i_1] [12]));
                                arr_14 [i_1] [i_1] [i_2] [i_2] [i_4] [i_0] = (((((17559413564909424843 % (arr_9 [i_0] [i_0] [i_2])))) ? (((3840 ? (arr_7 [i_2] [i_3]) : (arr_11 [i_0] [i_1] [i_2] [i_3])))) : (((arr_2 [i_4] [i_4] [i_4]) ? 17862658432401278549 : 12))));
                                var_21 *= ((((var_6 <= (arr_6 [i_4] [8] [8] [i_0]))) ? (887330508800126789 | 262080) : (arr_10 [i_2] [i_2] [i_2] [0] [i_4] [i_1])));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((((-60 ? -7475114303584163006 : var_8)) % (arr_12 [i_2] [i_4] [i_3] [i_2] [i_1] [i_2])));
                            }
                        }
                    }
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    var_22 -= ((((11932588581946346931 ? (arr_6 [i_0] [i_5] [i_5] [i_5]) : (arr_4 [i_0]))) >= 1));
                    var_23 = (((arr_10 [i_0] [i_0] [i_5] [i_5] [i_0] [i_1]) && var_5));
                    var_24 = (max(var_24, ((((-123 || var_9) > var_0)))));
                    var_25 = (((1505225070 ? var_13 : (arr_7 [i_0] [i_1]))));
                }
            }
        }
    }
    var_26 *= ((var_6 <= (~var_6)));
    var_27 += (-9223372036854775807 - 1);
    var_28 = (min(var_28, (((1 ? 60 : var_6)))));
    var_29 = var_13;
    #pragma endscop
}
