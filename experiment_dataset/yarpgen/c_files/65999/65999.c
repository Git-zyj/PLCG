/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 -= (min((((-(!var_2)))), ((var_11 ? (((min(65535, 255)))) : ((var_8 ? -1 : -19))))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((~var_19) + (min((~65535), (min(18, 5151782684214037828))))));

        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            arr_5 [i_0] [i_0] [i_1] &= (((max((max(-1723188401, 18)), -25)) / ((((arr_3 [i_0]) * 10277)))));
            var_21 = (((((~(arr_4 [i_0] [i_1] [i_1])))) ? var_5 : ((var_11 | (arr_4 [i_0] [i_0] [i_1])))));

            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_1] = -19;
                var_22 ^= ((-(((((~(arr_4 [i_1] [i_0] [i_1])))) ? ((var_6 ? (arr_0 [i_2]) : 127)) : (arr_0 [i_0])))));
                var_23 = (9 && 28160);
            }
            /* vectorizable */
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                var_24 = (((var_10 == (arr_4 [i_0] [i_1] [9]))));
                arr_13 [i_1] = ((-25 ? (arr_11 [i_0]) : 165));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            arr_21 [i_0] [i_1] [i_3] [i_3] [i_0] |= (((arr_6 [i_1] [i_4 + 1] [i_4 + 1] [i_4 + 1]) ? (arr_6 [i_4] [i_4 - 1] [i_4] [i_4 - 1]) : -1));
                            var_25 ^= ((!(!var_8)));
                            var_26 = (-16 - 127);
                        }
                    }
                }
            }
        }
        for (int i_6 = 2; i_6 < 20;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 24;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 24;i_8 += 1)
                {
                    {
                        var_27 = ((((((-((var_13 ? 55 : var_0)))) + 2147483647)) >> 9));
                        var_28 &= (min(89, 129));
                        arr_30 [i_6] [i_6] [i_7] [i_8] [i_6] [i_8] = ((~((min(((max((arr_6 [i_8] [10] [i_6] [i_0]), -1))), 19621)))));
                    }
                }
            }
            arr_31 [i_0] = (arr_18 [i_0] [i_0]);
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 24;i_9 += 1)
        {
            var_29 = ((var_3 + (!var_16)));
            arr_35 [i_0] [i_0] = var_11;
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 24;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            var_30 = (arr_26 [i_9] [i_9] [i_9] [i_12]);
                            var_31 += var_13;
                            arr_43 [i_12] [i_10] [6] [i_10] [i_0] = (((arr_19 [i_0] [i_9] [i_10] [i_11] [i_12]) >> (((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]) - 20))));
                        }
                    }
                }
            }
            arr_44 [i_0] [i_0] [i_9] &= 89;
            arr_45 [i_0] = (~(arr_12 [i_0] [i_0]));
        }
    }
    for (int i_13 = 0; i_13 < 18;i_13 += 1) /* same iter space */
    {

        for (int i_14 = 0; i_14 < 18;i_14 += 1)
        {
            var_32 ^= (min(((((arr_3 [i_13]) ? (arr_3 [i_13]) : (arr_3 [i_13])))), (((arr_3 [i_13]) ? var_9 : (arr_3 [i_13])))));
            arr_50 [i_14] [i_14] = (((((arr_14 [i_13] [i_13] [10] [i_14] [i_14] [i_14]) == ((var_10 ? var_5 : (arr_28 [i_13] [i_13] [i_13] [10]))))) ? (!var_3) : ((max((4037669845533789598 && 61932), (((arr_15 [i_14] [i_14] [i_13] [20]) >= (arr_34 [1]))))))));
        }
        var_33 = (min((~129), ((-(arr_17 [i_13] [i_13] [i_13] [i_13])))));
    }
    for (int i_15 = 0; i_15 < 18;i_15 += 1) /* same iter space */
    {
        var_34 *= (min((~110), (((!31) % (((arr_1 [i_15]) & var_19))))));
        var_35 ^= (!((min((((~(arr_33 [i_15])))), (((arr_16 [i_15] [i_15] [6] [i_15] [i_15]) ? (arr_47 [i_15]) : (arr_0 [i_15])))))));
    }
    var_36 = var_3;
    var_37 = var_5;
    var_38 = (min((max(-1, ((max(1905113190, var_16))))), ((((max(var_10, 1)))))));
    #pragma endscop
}
