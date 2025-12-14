/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_16));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 22;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = (arr_0 [i_0] [i_0]);

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_19 &= (min((min((arr_11 [i_2] [i_2 - 1] [1] [i_2]), 32767)), (!var_5)));
                        arr_12 [0] [5] [i_3] [i_3] [1] [i_0] = (min(((3574373775543064509 ? -2790206799 : 9)), -18108));
                        var_20 = (var_9 ? var_6 : (arr_1 [i_2 + 1]));

                        for (int i_4 = 1; i_4 < 22;i_4 += 1)
                        {
                            arr_16 [i_4] [i_1] = (max(var_10, (~var_1)));
                            var_21 = (min(var_21, ((max(var_1, (max(32783, 151)))))));
                            var_22 ^= ((((((arr_5 [i_0] [i_0] [i_2 + 1] [4]) % (arr_5 [i_1] [i_1] [i_2 - 1] [17])))) ? ((var_12 ? (arr_5 [i_1] [i_1] [i_2 - 2] [i_2]) : (arr_10 [i_0] [i_4 - 1] [i_2 + 1] [9]))) : ((((arr_5 [i_0] [7] [i_2 - 2] [7]) ? 32774 : var_13)))));
                            var_23 = (max(var_23, (((((162 + 2147483647) << (((-26 + 34) - 8))))))));
                            arr_17 [i_0] [17] [i_0] [17] [20] = (max((((var_4 ? var_2 : var_16))), ((var_15 ? ((var_6 ? var_17 : 32767)) : ((32788 ? -18097 : 9223372036854775807))))));
                        }
                    }
                    var_24 &= 37;
                    arr_18 [i_2] [21] [21] &= (~var_17);
                }
            }
        }
    }
    var_25 = (max(((~((-9223372036854775786 ? var_13 : var_8)))), (~var_15)));
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 3; i_6 < 12;i_6 += 1)
        {
            {
                var_26 = (max(var_26, ((((((min(125, (arr_10 [19] [19] [14] [i_6]))))) == (max((var_9 || 12631), (arr_5 [i_6 - 3] [i_6] [15] [i_5]))))))));
                arr_24 [i_6] [i_6 - 1] [10] = (((9 == -24) > var_6));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 19;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 20;i_8 += 1)
        {
            {
                arr_29 [i_7] [i_8 + 1] [i_8] = ((((~26) ? (((arr_26 [1] [4]) ? var_13 : 68)) : (var_8 * var_8))));
                /* LoopNest 3 */
                for (int i_9 = 3; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 22;i_10 += 1)
                    {
                        for (int i_11 = 0; i_11 < 22;i_11 += 1)
                        {
                            {
                                var_27 = (min(var_27, (120 / 144115188075855871)));
                                var_28 -= (min((((var_7 || 26161) ? ((var_9 ? (arr_36 [14] [i_8] [i_8] [i_8] [i_8] [17]) : 16)) : ((var_2 ? (arr_28 [i_11]) : var_15)))), (((max(1, (arr_10 [2] [i_8] [12] [i_10]))) ? (arr_0 [i_9 - 3] [i_8 + 1]) : ((21 ? var_15 : 18099))))));
                                var_29 = (((((((min(-9223372036854775794, -10))) && ((max(26161, (arr_27 [i_7 - 2] [0]))))))) % (~var_11)));
                            }
                        }
                    }
                }
                var_30 = (max((222 % -26183), 198));
            }
        }
    }
    #pragma endscop
}
