/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(var_7, var_5));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = -7463;
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_17 = ((((arr_8 [i_1] [i_0] [i_0] [i_1]) && (((var_2 ? var_9 : 8383))))));
                                var_18 = ((-(min((var_2 || 2147483647), 239431670))));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        var_19 = (((((((arr_2 [i_0 - 3] [i_5]) == (arr_7 [i_1]))))) - 9223372036854775807));
                        arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] |= (min((((511378402665718881 / 7461) ? 23628 : var_4)), (42225 / var_10)));
                        var_20 = var_0;
                    }
                    /* vectorizable */
                    for (int i_6 = 0; i_6 < 12;i_6 += 1) /* same iter space */
                    {
                        var_21 *= -23310;
                        arr_19 [i_0] [i_1] [i_2] [i_6] [i_6] = (((((var_4 && (arr_11 [i_0] [i_0] [i_1] [i_2] [i_2] [i_6])))) >= (((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) - 34561))));
                        var_22 = (arr_5 [i_2] [i_1] [i_0]);
                        var_23 = (((var_1 ? -26148 : (arr_13 [i_6] [i_1] [i_1] [i_1] [i_1] [i_0]))));
                        var_24 = ((4135 ? (arr_18 [i_0 - 4] [i_1] [i_2] [i_6]) : 329198147));
                    }
                    for (int i_7 = 0; i_7 < 12;i_7 += 1) /* same iter space */
                    {
                        var_25 = var_5;
                        var_26 = 116;
                        var_27 = 21530;
                        arr_22 [i_0] [i_1] [i_2] [i_7] = ((((var_13 ? 18446744073709551615 : (arr_10 [i_1] [i_2]))) << ((((~(var_3 ^ var_12))) - 12226))));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 12;i_8 += 1) /* same iter space */
                    {
                        arr_26 [i_1] [i_1] = 1741093199644256531;
                        var_28 = var_5;
                    }
                    var_29 -= (!4294967295);
                }
            }
        }
    }
    var_30 = var_7;
    #pragma endscop
}
