/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 12;i_1 += 1)
        {
            {
                var_18 = ((-(!18446744073709551605)));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 11;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_5, var_6));
                            var_20 += (!var_9);
                            var_21 = var_12;
                            var_22 = ((((max((var_14 && var_7), (arr_9 [i_2 + 2] [i_2 - 1] [i_2 + 1] [i_2 - 1])))) ? (((var_2 ? (var_9 > 32711) : (var_11 ^ var_14)))) : ((var_13 ? 17106885276752221812 : (max(var_12, var_6))))));
                        }
                    }
                }
                var_23 = (min(var_23, -var_4));
                arr_10 [i_0 + 1] = (((((329531748 * (max(10, 11))))) ? -18446744073709551604 : -20));

                for (int i_4 = 4; i_4 < 12;i_4 += 1)
                {
                    var_24 = max((max((18446744073709551612 & var_3), (arr_13 [i_4 + 1] [9] [i_4 - 1]))), ((((((var_15 << (((arr_12 [i_0 - 1] [3] [5]) + 6932837006677067624))))) ? (var_7 + var_16) : (max(var_11, 8029973809135972427))))));
                    var_25 &= var_0;
                }
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    var_26 = (~-var_13);
                    var_27 = ((((min(var_6, var_1))) | (((arr_13 [i_1 - 1] [i_1] [i_0 - 1]) & var_11))));
                    arr_16 [i_5] [i_5] = ((!var_14) ? (max(17068486999643518854, var_14)) : var_2);
                    var_28 = var_14;
                }
            }
        }
    }
    var_29 = (min(var_29, (max(8029973809135972427, var_17))));
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 12;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 11;i_7 += 1)
        {
            {
                arr_22 [i_7] = ((max(12, 3)));
                var_30 -= ((18446744073709551607 ? (max((var_14 - var_1), (max(var_1, var_12)))) : ((-(max(0, var_4))))));
                var_31 *= (max((((!(var_6 * var_12)))), ((-(arr_12 [i_7 - 1] [i_7 - 1] [i_7])))));
            }
        }
    }
    #pragma endscop
}
