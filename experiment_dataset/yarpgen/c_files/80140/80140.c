/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_10 = (((var_0 ? var_4 : var_2)));
        var_11 += var_4;
        arr_3 [i_0 + 1] [i_0] = ((~(~var_4)));
        var_12 = 22;
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 23;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 21;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 24;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 22;i_5 += 1)
                        {
                            {
                                arr_17 [i_1] [17] = var_6;
                                arr_18 [20] [i_2] [i_3] [i_4] [6] |= var_4;
                                var_13 = (min(var_13, (((var_1 ? var_6 : var_9)))));
                                arr_19 [i_1] [i_3] [i_3] [i_2] [5] [i_2] [10] = var_4;
                            }
                        }
                    }
                    arr_20 [i_1] [i_2] [i_2] |= var_5;

                    for (int i_6 = 0; i_6 < 24;i_6 += 1)
                    {
                        var_14 = var_7;

                        for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
                        {
                            var_15 = var_9;
                            var_16 = ((var_3 ? var_7 : var_3));
                        }
                        for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
                        {
                            arr_28 [i_1] [i_1] [i_1] [i_6] [i_8] = var_4;
                            arr_29 [i_1 + 1] [i_1 + 1] [i_3 + 2] [0] [i_1] [i_8] = ((9223372036854775807 ? 4066830231 : -42));
                            var_17 += var_0;
                            arr_30 [i_1] = var_3;
                        }
                    }
                    for (int i_9 = 4; i_9 < 23;i_9 += 1)
                    {
                        var_18 = (!var_1);
                        var_19 = var_0;
                        arr_34 [i_2] [i_3] [i_1] = ((var_5 ? var_8 : -var_0));
                    }
                    var_20 = ((var_9 ? var_7 : var_8));
                    arr_35 [i_1] [i_1] [i_2] [i_1] = var_1;
                }
            }
        }
        var_21 *= -var_5;
    }
    for (int i_10 = 3; i_10 < 10;i_10 += 1)
    {
        var_22 += var_2;
        var_23 = (~var_6);
    }
    for (int i_11 = 0; i_11 < 17;i_11 += 1)
    {

        for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
        {
            var_24 ^= (!var_2);
            var_25 |= (min(var_6, (~var_2)));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 17;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 17;i_14 += 1)
                {
                    {

                        for (int i_15 = 0; i_15 < 17;i_15 += 1)
                        {
                            arr_53 [i_15] [9] [i_11] [i_11] [9] [i_11] = (!var_4);
                            var_26 = (max(var_26, (!var_9)));
                        }
                        for (int i_16 = 0; i_16 < 1;i_16 += 1)
                        {
                            var_27 = (((min(var_5, var_0))));
                            arr_58 [i_11] [i_12] [i_13] [i_12] [i_16] = (~var_8);
                            arr_59 [i_11] [i_11] = -2;
                        }
                        var_28 = (!var_4);
                        var_29 = (((((max(var_0, var_2)))) ? var_2 : ((((var_2 ? var_3 : var_0))))));
                    }
                }
            }
            var_30 = ((((max((~var_8), var_5))) ? var_4 : (((min(var_2, var_5))))));
            arr_60 [i_11] [i_11] [i_11] = ((min(var_4, var_3)));
        }
        for (int i_17 = 0; i_17 < 17;i_17 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_18 = 1; i_18 < 15;i_18 += 1)
            {
                for (int i_19 = 2; i_19 < 15;i_19 += 1)
                {
                    {
                        var_31 = (~var_5);
                        arr_70 [3] [i_11] [i_11] [i_19] [i_17] [i_17] = (((!((min(var_5, var_8))))));

                        for (int i_20 = 4; i_20 < 15;i_20 += 1)
                        {
                            var_32 = (((47 ? 1123361755 : 1164032413)));
                            var_33 = -var_4;
                        }
                        var_34 &= -var_2;
                    }
                }
            }
            var_35 = 6751906459285999278;
            arr_73 [i_11] [i_11] = ((-(((!(~var_6))))));
            arr_74 [i_11] [i_11] [i_11] = ((var_9 ? (!var_0) : ((var_0 ? var_7 : var_4))));
            var_36 = (((var_8 ? var_3 : var_8)));
        }
        var_37 |= ((var_4 ? var_2 : (((~((max(18, var_1))))))));
        var_38 = (max(var_38, (!var_4)));
    }
    var_39 = (((((-(min(var_2, var_4))))) ? var_9 : var_1));
    #pragma endscop
}
