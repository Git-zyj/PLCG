/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((!-1) == var_1)) ? var_6 : (((~(min(882367632, 0))))));
    var_14 = 1;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        var_15 += (((max(1, (min(-2180, var_5)))) <= var_8));
        var_16 = min(var_11, var_1);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 19;i_3 += 1)
                    {
                        arr_10 [i_0] [i_3] [i_3] &= var_10;
                        var_17 = (arr_7 [i_0] [i_0] [i_2] [i_3]);
                    }
                    for (int i_4 = 2; i_4 < 17;i_4 += 1)
                    {
                        arr_15 [i_2] = (1 ? 1 : 3979258564);
                        var_18 = (min(var_18, ((((((((min(var_1, var_12))) < (min(var_11, var_9))))) == var_5)))));
                        var_19 = var_11;
                    }
                    for (int i_5 = 0; i_5 < 20;i_5 += 1)
                    {
                        arr_18 [i_0 - 1] [i_2] [i_2] [16] [i_2] = var_2;
                        arr_19 [i_0] [i_1] [i_2] [i_5] = (max((var_0 || var_4), (((var_0 ? 1943124526 : var_6)))));
                    }
                    arr_20 [i_0] [1] [i_2] [i_2] &= (((((min(var_0, 215225882510345221)) * ((((arr_4 [i_0]) ? 79 : var_10))))) - (((((1 ? 2180 : var_5)) * ((min(-17057, (arr_11 [i_0] [14] [14] [i_0 - 3] [14])))))))));
                }
            }
        }
        var_20 -= ((-82 && 1) || ((min(((min(-32741, (arr_0 [i_0])))), ((var_2 ? var_2 : var_2))))));
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 20;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 1;i_8 += 1)
            {
                {
                    var_21 += ((5286723048076795252 ? var_12 : ((1 ? (max(var_10, var_0)) : (((var_5 ? var_8 : (arr_24 [i_6] [i_7] [19]))))))));
                    var_22 *= ((min(var_11, (arr_6 [i_8] [i_8 - 1] [i_7]))));
                    arr_30 [i_6] [i_6] = ((+((var_10 ? (~-1995610120) : (((arr_2 [8]) ? (arr_2 [i_6]) : var_5))))));
                    var_23 = var_5;
                }
            }
        }
        arr_31 [i_6] = (var_1 ? (((arr_26 [i_6]) ? (arr_26 [i_6]) : 0)) : (((arr_29 [i_6] [i_6] [i_6] [i_6]) / (min(var_11, -34844518)))));

        /* vectorizable */
        for (int i_9 = 1; i_9 < 16;i_9 += 1)
        {
            arr_35 [i_6] [5] [i_6] = (1 & -248);
            var_24 += ((79 ? var_5 : (arr_28 [i_6] [16] [i_9 + 4] [i_9 + 3])));
            arr_36 [i_6] [1] = (((arr_28 [i_9] [i_9] [i_9 + 4] [i_9]) - (arr_8 [i_9 + 3] [19] [i_9 + 2] [i_9 + 2] [i_9] [i_9])));
        }
        for (int i_10 = 2; i_10 < 18;i_10 += 1)
        {
            var_25 = (arr_33 [i_6]);

            for (int i_11 = 2; i_11 < 19;i_11 += 1)
            {
                var_26 = ((+((var_11 ? (arr_28 [i_10 + 2] [i_10] [i_10 + 2] [i_11 + 1]) : (arr_28 [i_10 - 1] [i_10] [18] [i_11 + 1])))));
                arr_44 [i_6] [i_10] = (min((min(var_9, (arr_34 [i_11 + 1] [i_10 - 1]))), (!16564179686563717691)));
            }
        }
        for (int i_12 = 1; i_12 < 16;i_12 += 1)
        {
            var_27 = (max(-64, (max((min((arr_1 [1]), 1)), ((min((arr_4 [i_12]), 1)))))));
            arr_48 [i_12] [i_12] = (min((((arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 - 1]) ? (arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 + 1]) : (arr_9 [i_12] [i_12] [i_12] [i_12] [i_12 - 1]))), (((arr_46 [i_6] [i_12 + 4]) ? -14157 : (248 * var_7)))));
            var_28 *= ((var_9 ? -215225882510345221 : (min((arr_17 [i_6] [i_6] [i_6] [i_6]), -var_6))));
        }
    }
    for (int i_13 = 0; i_13 < 20;i_13 += 1) /* same iter space */
    {
        arr_51 [19] = (((arr_17 [4] [i_13] [i_13] [i_13]) >= (arr_38 [i_13] [i_13] [i_13])));
        var_29 = (-127 - 1);
    }
    #pragma endscop
}
