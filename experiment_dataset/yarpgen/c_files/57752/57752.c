/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57752
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57752 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57752
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_19 = (!0);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    var_20 = (max((!66), (((~(arr_0 [i_0] [i_1]))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_21 = ((min((max(var_3, var_14)), ((((arr_8 [i_4] [i_4] [i_4]) && (arr_8 [i_1] [i_3] [i_4])))))));
                                arr_11 [i_0] [i_0] [i_2] [i_0] [i_4 - 3] |= var_15;
                                var_22 ^= var_3;
                            }
                        }
                    }
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        arr_14 [i_5] = ((!(var_9 > var_13)));
        var_23 = 644506989;
    }
    var_24 ^= ((var_18 ? ((min(((min(76, -67))), var_4))) : (min(((1879773016774665494 ? 2658937232719329265 : 21980)), 5301766223286598201))));
    var_25 = (((((1 ? 3945527657 : 83))) ? (max(var_4, -var_6)) : ((var_10 - (((var_11 ? var_9 : var_2)))))));
    /* LoopNest 2 */
    for (int i_6 = 3; i_6 < 21;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 1;i_7 += 1)
        {
            {
                var_26 = ((!(((-66 ? 2147483647 : 2147483647)))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 23;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 24;i_9 += 1)
                    {
                        {
                            var_27 ^= (((-66 && ((min(var_5, var_10))))));
                            arr_27 [i_6] [i_6] [i_6] [i_8 + 1] [i_7] = (arr_25 [i_7] [i_8]);
                        }
                    }
                }
            }
        }
    }

    for (int i_10 = 1; i_10 < 1;i_10 += 1)
    {
        arr_30 [i_10] = (max((((var_6 << (var_13 - 2932482089414110695)))), ((min(28231, 89)))));
        var_28 ^= (min(((var_9 << (((max((arr_17 [i_10] [1] [2]), (arr_0 [i_10] [i_10]))) - 8058514958312327541)))), (arr_15 [i_10] [i_10 - 1])));
        var_29 = ((!(!var_18)));
    }
    for (int i_11 = 0; i_11 < 13;i_11 += 1)
    {
        var_30 ^= (min(((-(var_12 / var_5))), ((min(9223372036854775807, (((-(arr_18 [18])))))))));
        /* LoopNest 2 */
        for (int i_12 = 0; i_12 < 13;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                {
                    var_31 = (min((((~(-51 | 3945527646)))), ((65535 ? 1 : -7384470025163594201))));
                    arr_38 [i_11] = ((~((((max((-2147483647 - 1), 5)) > var_1)))));
                    arr_39 [i_11] [9] [i_13] = ((~((var_9 ? var_10 : (arr_15 [i_11] [i_12])))));
                    var_32 = (0 & 66);
                }
            }
        }
        var_33 = (arr_7 [i_11]);
        var_34 = (min(var_34, var_12));
    }
    #pragma endscop
}
