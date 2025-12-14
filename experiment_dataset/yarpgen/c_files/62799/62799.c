/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] [i_0] = var_2;
                    var_16 = (((((~(var_2 != var_12)))) / ((var_6 & (var_13 + var_12)))));
                    arr_8 [i_2] [i_1] [i_1] [i_0] = (arr_1 [i_2] [i_0]);
                }
                for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
                {
                    var_17 = (arr_5 [i_0] [i_1] [i_3] [i_0]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 14;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 14;i_5 += 1)
                        {
                            {
                                arr_19 [i_0] [i_0] [i_3] [7] [i_1] = var_10;
                                arr_20 [i_0] [7] [i_0] [i_0] [i_0] = ((var_9 && ((max((arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]), (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0 - 1]))))));
                            }
                        }
                    }
                    arr_21 [i_0] [i_0] [i_0] |= var_4;
                }
                for (int i_6 = 0; i_6 < 14;i_6 += 1) /* same iter space */
                {
                    var_18 = (min(var_18, (((~(arr_23 [i_0] [i_0] [i_0] [i_0 + 2]))))));
                    arr_24 [i_0] [i_0] [i_0] [i_0 + 2] = (arr_14 [7] [i_6] [i_6] [i_6] [i_6]);
                    var_19 *= (max(var_3, 18446744073709551611));

                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 2] = ((~((max(var_10, 16)))));
                        var_20 = (((((~(((arr_10 [1]) ? var_14 : 4371))))) ? var_3 : ((45018 ? (16 ^ 977) : 3724173311))));
                    }
                    for (int i_8 = 0; i_8 < 14;i_8 += 1)
                    {
                        var_21 = (max(((((((arr_15 [i_0] [i_1] [i_6] [i_6] [5]) % (arr_12 [i_6] [i_6] [i_6])))) ? var_10 : (((arr_11 [i_8] [i_6] [i_1]) | -976419974)))), ((max((((var_7 != (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0 - 1])))), var_10)))));
                        var_22 |= var_11;
                        var_23 = (var_1 - (arr_27 [i_0] [i_0] [i_1] [i_0] [i_0 + 1]));
                    }
                }
                var_24 = var_3;
            }
        }
    }
    var_25 = (~var_7);
    var_26 = ((~((var_12 ^ (10 * var_1)))));
    #pragma endscop
}
