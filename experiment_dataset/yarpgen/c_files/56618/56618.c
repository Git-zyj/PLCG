/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56618
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56618 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56618
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] [i_0 - 3] = ((+(((~2335372644126150151) ? (arr_3 [i_0]) : (var_18 % var_3)))));
        arr_5 [i_0] [i_0 + 1] = 16111371429583401476;
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_20 = ((((((!var_3) ? (var_1 == 17444159365351176074) : (min(var_12, var_17))))) ? var_8 : var_13));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            {
                                arr_18 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = (((((max(var_11, var_5)) ^ ((var_0 ? var_5 : 95)))) ^ (((((min(var_1, var_12))) << (((min((arr_11 [i_2] [i_5]), var_6)) - 17389962660328789583)))))));
                                var_21 -= ((((2335372644126150158 ? var_8 : (arr_13 [i_2 + 3] [i_2 + 3] [i_1] [i_2 + 2]))) == (arr_13 [i_1] [i_2 - 1] [i_4] [i_2 + 3])));
                                var_22 = (max(var_22, ((((((-(((arr_16 [i_4] [i_2] [i_4] [i_4] [i_4]) + var_13))))) ? (((max(var_7, var_1)) * (((var_13 ? (arr_15 [i_5] [i_5] [i_3] [i_5] [i_1]) : var_14))))) : (max((2335372644126150142 / 28), (16111371429583401482 != 16111371429583401482))))))));
                                var_23 ^= ((max(((var_1 ? var_11 : var_17), (var_10 || var_12)))));
                            }
                        }
                    }
                }
            }
        }
        var_24 *= var_8;
        var_25 = 68;
        /* LoopNest 3 */
        for (int i_6 = 0; i_6 < 13;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 13;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 13;i_8 += 1)
                {
                    {
                        arr_25 [i_8] [i_7] [i_1] [i_1] = min(-var_4, -1023);
                        var_26 *= min((((!(arr_8 [i_6])))), ((2335372644126150158 ? 14745162304650652541 : 2335372644126150133)));
                        var_27 = min((16111371429583401476 | 16111371429583401487), (max(var_3, ((var_11 | (arr_14 [i_8] [i_8]))))));
                    }
                }
            }
        }
    }
    for (int i_9 = 0; i_9 < 10;i_9 += 1)
    {
        var_28 = (~var_3);
        var_29 = ((!(var_7 ^ 134)));
        var_30 = (var_4 != var_7);
        arr_28 [i_9] = ((117 * (max((min(var_10, 26)), (min((arr_19 [i_9]), var_1))))));
    }
    var_31 = (max(((var_11 ? 229 : (var_14 & var_9))), ((((max(var_8, var_15))) ? (var_18 + var_8) : 181))));
    var_32 = (-((((min(13, var_2))) ? ((var_7 ? var_5 : var_19)) : (max(26, 2335372644126150139)))));
    #pragma endscop
}
