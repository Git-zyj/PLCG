/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82724
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_2;
                                arr_13 [i_0 - 1] [i_0] [i_0] [i_0] [i_0 + 1] [i_0 - 1] [i_0 - 1] = ((((((3076146867 ? 17973788291089952114 : -1))) ? 127 : ((-127 ? -2147483621 : 21)))));
                                var_19 = -1725173737246953160;
                                var_20 = (min(var_20, (((+(((arr_9 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1]) ? (var_1 + var_17) : 16)))))));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 11;i_6 += 1)
                        {
                            {
                                var_21 = ((2099850315 ? (255 ^ var_17) : 15));
                                var_22 = (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]);
                                arr_19 [i_0] [i_2 - 1] = var_14;
                                var_23 = (max(var_23, (((((15 ? 1 : (!17973788291089952114)))) ? 1 : ((max(127, 127)))))));
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 14;i_8 += 1)
        {
            for (int i_9 = 3; i_9 < 12;i_9 += 1)
            {
                {
                    arr_30 [i_9] = (((((((0 ? var_16 : (arr_23 [i_8] [i_8] [i_8])))) ? 6687725932004497438 : (arr_28 [i_7] [i_7] [i_7 - 1] [i_7]))) / ((((0 + var_0) ? var_11 : (59 == var_8))))));
                    /* LoopNest 2 */
                    for (int i_10 = 1; i_10 < 13;i_10 += 1)
                    {
                        for (int i_11 = 2; i_11 < 11;i_11 += 1)
                        {
                            {
                                var_24 += (((((((var_11 ? 1 : var_12))) ? ((var_0 ? var_16 : var_1)) : 32764)) == ((((min(var_5, (arr_24 [i_7 + 1] [i_7 + 1])))) >> (-1218820429 - 3076146838)))));
                                var_25 ^= (arr_20 [i_7] [i_7]);
                                arr_35 [i_9] = (max(0, (max(var_17, ((max(0, var_8)))))));
                                var_26 = (min(var_26, (arr_31 [i_11 - 2] [i_11] [i_11] [i_11])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_12 = 2; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 0; i_13 < 14;i_13 += 1)
                        {
                            {
                                var_27 *= -4035225266123964416;
                                var_28 = (((((66 ? (var_9 ^ var_18) : ((var_15 ? var_1 : 126))))) > 3076146874));
                                arr_43 [i_7 + 1] [i_7 + 1] [i_9] [i_7 - 1] [i_7] [i_7] = (max(((-(((arr_28 [i_7] [i_7] [i_7] [i_7]) ? var_0 : var_15)))), (((((var_15 ? var_7 : 4270889443)) + var_18)))));
                            }
                        }
                    }
                    var_29 = ((!var_2) * (22 * var_0));
                }
            }
        }
    }
    #pragma endscop
}
