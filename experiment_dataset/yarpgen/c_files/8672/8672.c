/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8672
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((~(((var_5 + 2147483647) >> (49 - 31)))))) ? ((((var_7 ? var_9 : -56)) >> (8936830510563328 & var_13))) : ((max((~var_14), (var_15 ^ var_15))))));
    var_17 = ((max((((var_6 >> (18437807243198988266 - 18437807243198988261))), (min(var_9, var_6))))));
    var_18 = var_14;

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_1] = ((((((arr_6 [i_0] [i_0] [i_0] [i_0]) + (arr_7 [i_1])))) + (((((!(arr_5 [i_1]))) ? 63 : 65535)))));
                    var_19 = (min(var_19, ((min(0, 0)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_8 [i_1] [i_1] [i_2]);
                                var_21 = (~(((~26) ? ((0 ? (arr_11 [i_0 + 1] [i_1] [8] [i_0 + 1] [i_3] [i_4]) : var_8)) : ((1 ? 65535 : 1)))));
                                var_22 = (min(((max((arr_12 [i_1] [i_4] [i_4 - 1] [i_1]), (arr_12 [i_1] [i_4] [i_4 - 1] [i_1])))), (((arr_12 [i_1] [i_4 - 1] [i_4 - 1] [i_1]) ? 63 : (arr_12 [i_1] [i_4 - 1] [i_4 - 1] [i_1])))));
                            }
                        }
                    }
                }
            }
        }
        arr_16 [i_0 - 1] = ((((max((-9223372036854775807 - 1), (arr_2 [i_0] [10])))) ? (arr_10 [i_0] [i_0] [2] [i_0 + 1] [i_0]) : -var_14));
        var_23 = (min(var_23, (((!(((~(arr_11 [i_0 - 1] [i_0] [i_0] [7] [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 19;i_5 += 1)
    {
        var_24 -= (1278879326 + 1);
        var_25 &= (((arr_17 [i_5] [i_5]) ? var_15 : (arr_19 [i_5])));
    }
    #pragma endscop
}
