/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60206
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60206 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60206
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_11;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            var_21 = ((-(((arr_5 [1]) ? (arr_3 [i_1 + 2] [i_0]) : 37))));
            arr_6 [1] [7] [i_1] = ((~((var_3 ? (arr_5 [i_0]) : var_13))));
        }
        var_22 = (min(var_22, var_9));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        arr_9 [i_2] = 77;
        /* LoopNest 3 */
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {

                        /* vectorizable */
                        for (int i_6 = 3; i_6 < 13;i_6 += 1)
                        {
                            var_23 = 42;
                            var_24 = (~var_8);
                        }
                        for (int i_7 = 0; i_7 < 0;i_7 += 1)
                        {
                            arr_23 [i_7] [0] [i_3] [i_4] [i_3] [i_3 - 1] [i_2] = (min(var_8, 65037));
                            arr_24 [i_3] = var_18;
                        }
                        for (int i_8 = 2; i_8 < 14;i_8 += 1)
                        {
                            var_25 = ((-((~(arr_26 [i_2] [i_3] [i_4] [i_2] [i_3])))));
                            var_26 &= (((((((~65015) + 2147483647)) << ((((211 << (63863 - 63860))) - 1688)))) >= (max((var_9 % var_2), ((var_10 ? var_13 : 211))))));
                            var_27 = ((!var_13) >= ((max((arr_13 [1] [i_3 - 1] [i_3] [i_8 - 1]), (arr_13 [i_2] [i_3 - 1] [i_3] [i_8 - 2])))));
                        }

                        for (int i_9 = 0; i_9 < 15;i_9 += 1)
                        {
                            arr_29 [i_3] [i_4] [i_3 - 1] [i_3] = var_19;
                            arr_30 [i_9] [i_3] [i_4] [i_4] [i_3] [i_2] = (max((((-(arr_7 [i_2])))), ((~((var_12 ? -7592 : (arr_15 [i_2] [i_2] [i_9] [i_5])))))));
                        }
                        for (int i_10 = 0; i_10 < 15;i_10 += 1)
                        {
                            arr_34 [i_2] [i_3 - 1] [10] [i_3] [i_10] = (((!((((arr_31 [i_4] [i_3 - 1] [i_2]) ? 7592 : 65001))))));
                            arr_35 [i_10] [i_10] [i_3] [i_2] [i_10] [i_3 - 1] = var_2;
                        }

                        for (int i_11 = 0; i_11 < 15;i_11 += 1)
                        {
                            var_28 = (((((min(1, -97)))) * ((var_11 ? var_5 : var_12))));
                            var_29 = (527352493 - 31028);
                            var_30 = 195;
                            var_31 ^= 3276315767;
                            arr_38 [i_11] [i_2] [i_4] [i_3] [i_11] &= (max((min(-187, 4412991508183646963)), -var_17));
                        }
                        for (int i_12 = 2; i_12 < 14;i_12 += 1)
                        {
                            arr_42 [i_12] [i_5] [i_3] [i_4] [i_3] [i_3 - 1] [i_2] = (((((65037 ? 0 : 240))) ? 68 : (max((!var_3), ((520 ? var_15 : var_9))))));
                            var_32 = (((arr_12 [i_3] [i_3 - 1] [i_12] [i_4]) ? (max(72, 7963894661985910675)) : ((~((~(arr_18 [i_2])))))));
                            var_33 *= max((min((max(var_1, var_3)), (arr_14 [i_2] [i_3]))), var_17);
                        }
                        arr_43 [i_3] [i_2] [i_4] [i_4] = (((-29830 + 2147483647) << (205 - 205)));
                    }
                }
            }
        }
    }
    #pragma endscop
}
