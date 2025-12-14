/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71020
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71020 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71020
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_8;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0] = (var_2 ^ 938846601);

        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            var_16 = ((128 - (arr_7 [i_0 - 1] [i_0 - 1])));
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        {
                            var_17 = 2353150883521507007;
                            arr_14 [i_0] [i_0] = (~-1);
                            arr_15 [i_3] [i_3] [i_0] [i_3] [i_4] [i_1] = ((((var_3 != (arr_13 [i_0 + 1] [i_1] [i_2] [i_4]))) ? (!var_7) : -32767));
                            var_18 &= (!1);
                            var_19 *= (arr_4 [5]);
                        }
                    }
                }
            }
        }
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {
            var_20 = (max(var_20, (((var_2 ? ((var_3 ? var_5 : -938121484)) : var_14)))));
            var_21 ^= ((!((((arr_10 [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0]) ? (arr_17 [i_5]) : 9223372036854775807)))));
            var_22 = (max(var_22, var_8));
            var_23 *= (((var_2 < 169) <= (arr_9 [i_5] [i_5] [i_5] [i_0])));

            for (int i_6 = 1; i_6 < 9;i_6 += 1)
            {
                var_24 = (min(var_24, -1));
                var_25 = (min(var_25, var_1));
                arr_22 [i_0] [i_5] [i_6] &= 5;
                arr_23 [i_0] [i_0] [i_0] [i_0] = (-127 - 1);

                for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                {

                    for (int i_8 = 0; i_8 < 11;i_8 += 1)
                    {
                        arr_30 [i_8] [i_0] [i_6] [i_5 + 3] [i_0] [i_0] = var_8;
                        arr_31 [i_0] [6] [i_6] [i_6] [i_6 + 1] = ((var_11 ? (arr_29 [i_5 + 3] [i_6 - 1] [i_6]) : var_0));
                    }
                    arr_32 [i_0 - 1] [i_0] [7] [i_5] [7] [i_7] = var_4;
                }
                for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                {
                    var_26 = (min(var_26, ((!(((1 ? var_5 : var_0)))))));
                    var_27 = var_9;

                    for (int i_10 = 0; i_10 < 1;i_10 += 1) /* same iter space */
                    {
                        var_28 = (((var_14 + var_12) ? 1 : (!2)));
                        var_29 *= 0;
                    }
                    for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
                    {
                        var_30 = 1;
                        arr_41 [1] [i_5] [i_5] [i_0] [i_5] = (-1 != -240);
                        arr_42 [i_0 + 1] [i_5] [i_6] [i_0] [i_6] = 8;
                        var_31 *= (19 % -1075977066115554638);
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1) /* same iter space */
                    {
                        arr_45 [i_0 + 1] [i_5] [i_6 + 1] [i_0] = 225;
                        var_32 = (((arr_18 [i_0 - 1] [i_0 - 1]) ? (arr_28 [i_6 + 1] [i_0 - 1] [i_0] [i_9] [i_5 + 3]) : (-32767 - 1)));
                        var_33 = (((arr_43 [i_6 + 2] [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 - 1]) & (arr_43 [i_6 + 2] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1])));
                        var_34 &= 0;
                    }
                    for (int i_13 = 0; i_13 < 1;i_13 += 1) /* same iter space */
                    {
                        var_35 = (min(var_35, ((((arr_5 [i_5]) ^ 1)))));
                        var_36 *= 9223372036854775807;
                    }
                }
            }
            for (int i_14 = 0; i_14 < 1;i_14 += 1)
            {
                var_37 ^= 25;
                arr_50 [i_0] [i_5] [i_14] = ((2366281366 ? ((var_4 ? 1075977066115554638 : var_1)) : var_5));
            }
        }
        for (int i_15 = 1; i_15 < 8;i_15 += 1)
        {
            var_38 = (!var_3);
            arr_54 [i_15 + 1] [i_0] [i_0 + 1] = ((((var_8 / (arr_2 [i_15]))) * 1075977066115554643));
            arr_55 [i_0] = (((arr_52 [i_0]) ? var_12 : (arr_52 [i_0])));
        }
        var_39 = ((((((arr_34 [i_0] [i_0 + 1] [i_0]) ? 223 : (arr_21 [i_0] [i_0] [i_0])))) != ((var_5 ? -14 : (arr_38 [i_0] [9] [i_0] [i_0 - 1] [i_0])))));
    }
    for (int i_16 = 0; i_16 < 1;i_16 += 1)
    {
        var_40 &= var_4;
        var_41 = (arr_0 [i_16]);
    }
    #pragma endscop
}
