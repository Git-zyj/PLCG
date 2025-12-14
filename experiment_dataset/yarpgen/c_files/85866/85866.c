/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 ^= ((((-7 ? var_10 : ((var_4 ? 189 : 1034089772)))) > var_4));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_17 = (~((min(var_1, var_9))));

                            for (int i_4 = 2; i_4 < 9;i_4 += 1) /* same iter space */
                            {
                                var_18 ^= -1034089786;
                                var_19 = 5010854977533192671;
                                var_20 -= var_11;
                                arr_11 [i_0] [i_1] [i_2] [i_2] [i_4 + 3] = -var_2;
                            }
                            /* vectorizable */
                            for (int i_5 = 2; i_5 < 9;i_5 += 1) /* same iter space */
                            {
                                var_21 ^= 1;
                                var_22 = var_8;
                            }
                        }
                    }
                }
                arr_15 [i_0] [i_1] = (((((arr_10 [i_0] [i_0] [i_0] [i_1] [0]) ? (arr_10 [i_0] [i_0] [i_1] [i_1] [i_0]) : (((arr_14 [i_0] [i_1] [i_0] [i_0] [i_0] [4] [4]) ? 142 : var_5)))) + (arr_12 [i_0] [i_1] [i_0] [i_0] [i_0])));
                var_23 = ((((var_13 ? (((1 ? 34828 : 1))) : (max(-530776871543611032, var_6)))) * (((-1034089777 + (var_15 | var_12))))));
            }
        }
    }

    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        var_24 -= var_8;
        var_25 |= (!26);
        arr_18 [16] |= (min(var_4, var_5));
        var_26 -= ((-593412142 != (arr_17 [i_6 + 1])));
    }
    for (int i_7 = 2; i_7 < 14;i_7 += 1)
    {
        var_27 = (((min(var_5, ((var_0 ? var_11 : var_8)))) % ((((984 ? var_8 : 0)) + var_3))));
        var_28 = ((((((-67 | 1) % 73))) ? ((((((var_11 + 2147483647) >> (((arr_20 [i_7]) - 7246282990182091921))))) ? ((64573 ? 1 : var_1)) : (((arr_19 [i_7]) ? var_3 : (arr_17 [i_7]))))) : ((((182 ? 0 : var_0))))));
        arr_22 [i_7] = 221;
        arr_23 [i_7] = (min(var_14, ((46181 ? 530776871543611032 : (arr_19 [i_7 + 1])))));
    }
    var_29 = ((var_6 * (((((9221256445976240011 ? var_12 : var_3))) ? 0 : var_14))));
    #pragma endscop
}
