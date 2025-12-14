/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((~((61 & (var_15 && -5707555632400819465)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_16;
                arr_6 [i_1] = min(((var_5 ? -582076562 : (arr_0 [i_1]))), 31);

                /* vectorizable */
                for (int i_2 = 4; i_2 < 15;i_2 += 1)
                {
                    var_19 = var_9;
                    var_20 += -32;
                    var_21 = (((arr_8 [i_2 - 3] [i_2 - 4] [i_2 - 4] [i_2 - 4]) & 189));
                }
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {

                    for (int i_4 = 0; i_4 < 16;i_4 += 1)
                    {
                        arr_16 [i_0] [i_0] [i_0] [i_0] = (((((min((arr_7 [i_3]), var_17)))) == ((~(max(-26728367696853218, 3916333829))))));
                        var_22 *= (~-9);
                    }
                    var_23 = ((~((1086442657 << (var_0 + 5978023757495298463)))));
                }
                for (int i_5 = 0; i_5 < 16;i_5 += 1)
                {
                    var_24 *= 12148948871044483074;

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_25 += -var_1;
                        var_26 += (~-32);
                        var_27 = min((~2147483647), 1);
                    }
                    var_28 = (!var_4);
                }
                /* vectorizable */
                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_29 *= -255;
                    arr_28 [i_0] [i_1] [i_7] = (!var_1);
                    arr_29 [i_7] [i_1] [i_0] = ((6297795202665068526 <= (((((arr_14 [i_1] [i_1] [i_0]) != var_3))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 15;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 16;i_9 += 1)
                        {
                            {
                                var_30 = (((arr_14 [15] [i_1] [i_9]) ^ 597679750));
                                var_31 *= var_5;
                                var_32 = var_5;
                            }
                        }
                    }
                    var_33 *= (~(var_16 * var_1));
                }
            }
        }
    }
    var_34 += (min((!-var_6), var_12));
    /* LoopNest 3 */
    for (int i_10 = 0; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 0;i_12 += 1)
            {
                {

                    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
                    {
                        var_35 += (((((var_13 * (arr_42 [i_10] [i_11] [i_11] [i_13])))) * (((arr_39 [i_11] [i_12 + 1]) / 3770698907))));
                        var_36 += ((+(min((8 - 0), 3916333831))));
                        var_37 = (-(((!(arr_38 [i_10] [i_10])))));

                        for (int i_14 = 0; i_14 < 20;i_14 += 1)
                        {
                            var_38 *= var_16;
                            arr_45 [i_10] [i_11] [i_10] [i_13] [i_10] [i_13] = var_5;
                        }
                        /* vectorizable */
                        for (int i_15 = 0; i_15 < 20;i_15 += 1)
                        {
                            var_39 *= 190;
                            var_40 += (~var_0);
                        }
                    }
                    /* vectorizable */
                    for (int i_16 = 0; i_16 < 20;i_16 += 1) /* same iter space */
                    {
                        arr_53 [i_10] = (-(arr_51 [i_10] [i_12 + 1] [i_12] [i_16]));
                        var_41 = -41;
                        var_42 += 524287;
                        arr_54 [i_12] [i_10] [i_12 + 1] [i_16] = 1;
                    }
                    for (int i_17 = 0; i_17 < 20;i_17 += 1)
                    {
                        var_43 = 3236652929302921980;
                        var_44 = var_1;
                        var_45 *= (!-var_15);
                    }
                    for (int i_18 = 3; i_18 < 19;i_18 += 1)
                    {
                        arr_59 [i_10] [i_10] = ((-(min((var_2 + var_6), (arr_58 [i_10] [i_10] [i_12 + 1])))));
                        var_46 *= (var_13 == -213405997);
                    }
                    var_47 += var_1;
                }
            }
        }
    }
    #pragma endscop
}
