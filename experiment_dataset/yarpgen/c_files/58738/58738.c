/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (((-var_15 * var_15) ? (min(var_11, var_8)) : var_9));
    var_20 &= (((!3289076371) <= (min(1005890916, 3289076366))));

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = (((arr_1 [i_0]) ^ ((min((arr_0 [i_0] [i_0]), ((60313 ? 33898 : 484796792)))))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {
                        var_21 -= var_13;
                        arr_12 [i_1] = ((~((63430 ? (arr_11 [i_0] [i_3 - 3] [i_2] [i_0 - 1]) : (arr_11 [i_0] [i_3 - 1] [12] [i_0 - 1])))));
                        arr_13 [i_1] [i_1] = (((var_5 ? var_3 : (arr_7 [i_0] [i_3] [i_1] [i_1]))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 4; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 18;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    {
                        arr_21 [i_0] [6] = ((((-1468817723 ? var_1 : (arr_1 [i_0 - 1]))) <= ((min((arr_1 [i_0 + 4]), (arr_1 [i_0 + 2]))))));
                        arr_22 [i_0] [13] [i_5] [i_6] = ((((min(5828, (max((arr_18 [i_6] [11] [i_0] [i_0]), var_3))))) ? ((var_9 ? ((max((arr_7 [i_0] [i_4] [i_4] [i_0]), -1))) : 11291984301052427367)) : ((((16503992624238335773 ? (arr_3 [i_4] [i_4]) : 1468817705))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18;i_7 += 1) /* same iter space */
                        {
                            var_22 = (arr_20 [15] [i_0] [i_0 - 1] [i_0] [i_4 - 1]);
                            arr_27 [i_0] [i_4] [i_4] [i_4] [i_6] [i_5] = (3289076376 ^ -5827);
                            var_23 = (min(var_23, (((((~(arr_15 [i_0] [i_0]))) ^ (arr_11 [i_0 + 2] [i_7] [i_5] [i_0 + 2]))))));
                            arr_28 [i_0] [i_4] = var_5;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
                        {
                            var_24 = (max(((min((arr_20 [i_0 + 2] [i_4] [i_5] [0] [i_8]), var_10))), (!-5843)));
                            arr_31 [i_4] [i_4] [i_6] [i_4] [i_4] [i_4] [i_0] = (max(1005890943, 1));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
                        {
                            var_25 = var_16;
                            var_26 = var_11;
                        }

                        for (int i_10 = 4; i_10 < 17;i_10 += 1)
                        {
                            arr_36 [i_5] [i_4] [i_5] [2] [i_5] = (min((arr_14 [i_10 - 2] [i_0 + 2]), ((((arr_14 [i_10 - 2] [i_0 + 2]) <= 1)))));
                            arr_37 [i_0] [i_0] [i_6] [i_10] &= var_8;
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
