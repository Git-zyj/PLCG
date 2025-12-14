/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_18 = (((((246 ? (arr_8 [i_0] [i_1] [i_2] [i_2] [i_4] [14]) : var_14))) ? (var_16 | var_4) : var_8));
                                var_19 = (var_9 ? (arr_4 [i_3 + 2]) : (arr_4 [i_3 - 3]));
                                var_20 = ((var_15 ? (var_12 != 5438) : var_5));
                            }
                        }
                    }

                    for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                    {
                        var_21 = (((var_10 ? var_3 : 246)) / var_1);
                        var_22 -= ((var_17 ? var_2 : (arr_6 [i_0] [i_0 + 3] [i_2 - 2] [i_2 - 2])));
                        var_23 = ((10 ? -22 : 9));
                    }
                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_24 = (((((var_13 ? (arr_3 [i_6]) : -5214839464067853297))) ? (arr_16 [i_0] [i_0] [i_0 + 4] [i_2 - 2] [i_2 - 3]) : var_13));
                        var_25 = (var_7 ^ var_9);
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {
                        var_26 -= (((arr_17 [i_0] [i_0 - 2] [i_2] [i_2 - 2]) - (arr_17 [i_0] [i_0 + 3] [i_1] [i_2 - 3])));
                        var_27 = (((arr_14 [i_2] [i_2] [i_2] [5] [i_2] [i_2 - 3]) + (arr_14 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 2])));
                        var_28 = (((((arr_15 [i_7] [i_1] [i_0]) ? var_11 : (arr_7 [17] [18] [i_2 - 3] [17] [i_7])))) ? (arr_6 [8] [i_0 + 2] [i_2 - 2] [i_7]) : var_1);
                        var_29 = ((((var_11 ? (arr_19 [i_0] [7] [i_0] [i_7]) : var_14))) ? var_13 : 9);
                        var_30 = (min(var_30, ((((((arr_13 [18]) >= var_14)) || var_0)))));
                    }
                }
                var_31 -= ((var_11 ? 19387 : (((var_17 ? 9 : (35343 / var_8))))));

                for (int i_8 = 0; i_8 < 21;i_8 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 1;i_9 += 1)
                    {
                        for (int i_10 = 1; i_10 < 1;i_10 += 1)
                        {
                            {
                                var_32 = max((arr_3 [i_0 + 1]), (arr_11 [i_0] [i_0] [i_0] [i_0 - 2] [i_0 + 2]));
                                var_33 = (((var_0 ^ var_11) == ((((arr_23 [i_0 + 1] [i_10 - 1] [i_10 - 1] [i_10] [i_10]) * var_8)))));
                            }
                        }
                    }
                    var_34 = (((((max((((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]) >= 32247)), ((!(arr_10 [i_1] [i_1]))))))) > (max(((1 ? var_8 : var_2)), (((3121449288 ? 1 : 131056)))))));
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    var_35 = var_6;
                    var_36 = ((-1316833420 ? var_12 : var_10));
                    var_37 = ((var_1 ^ ((var_11 ? var_0 : var_9))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_12 = 0; i_12 < 24;i_12 += 1)
    {
        for (int i_13 = 3; i_13 < 23;i_13 += 1)
        {
            {
                var_38 = (min(var_38, (((5442 << (33277 - 33259))))));
                var_39 = (arr_34 [i_13]);
            }
        }
    }
    var_40 -= (var_4 != var_17);
    var_41 = var_17;
    var_42 = (max((((18446744073709551615 && (var_17 != var_4)))), var_13));
    #pragma endscop
}
