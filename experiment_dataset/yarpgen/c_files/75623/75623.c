/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75623
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75623 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75623
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 -= ((~(min(((min(var_2, var_7))), var_7))));
    var_13 = (var_11 >> var_10);
    var_14 = (max(var_14, ((2280704210 ? var_8 : var_1))));
    var_15 = var_2;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {
                        arr_9 [i_0] [i_0 + 1] [i_0] [i_0] = ((((3 ? 1 : 65525)) << ((((9678769015291700634 ? 52503 : 1)) - 52485))));

                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            var_16 = (min(var_16, var_3));
                            var_17 = (min(var_17, 1));
                            var_18 = (max(var_18, (((+((var_11 ? var_6 : (((arr_3 [i_0] [1] [i_0]) - var_0)))))))));
                            arr_12 [i_0] [20] [i_2] [i_3 + 2] = (arr_1 [i_1] [i_4]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            var_19 = ((var_9 ? var_6 : var_11));
                            var_20 = var_3;
                            var_21 = (((((var_7 ? var_7 : (arr_4 [i_0 + 1] [i_1] [i_2])))) ? (((var_0 <= (arr_13 [i_0] [i_1] [i_2] [i_2] [i_5])))) : (var_0 > var_10)));
                            arr_15 [i_0 + 1] [i_0] = (var_6 ? (arr_4 [9] [i_3 + 2] [i_5]) : (((1 ? var_11 : var_0))));
                        }
                        for (int i_6 = 1; i_6 < 23;i_6 += 1)
                        {
                            var_22 = ((~(var_4 + var_9)));
                            var_23 = (min(var_23, ((((arr_2 [i_0 + 1]) ? ((((!(((var_5 ? var_3 : (arr_7 [i_6 + 1] [i_3 - 1] [i_2] [i_1] [i_0])))))))) : ((((max(var_5, var_2))) ? (((var_5 ? var_11 : var_2))) : (min(var_5, var_10)))))))));
                            arr_19 [i_6] [i_6] [i_6] [i_6] [i_0] = var_8;
                            var_24 = (var_0 > (max(var_1, var_4)));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] = min((min(var_3, var_10)), ((((1354486973 <= 4072447979) || 3690355605))));
                        arr_21 [i_1] = (var_9 / (((~(max(var_0, var_2))))));
                    }
                    for (int i_7 = 1; i_7 < 21;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            var_25 = (min(var_25, (2947306851 | 13)));
                            arr_26 [i_0 + 1] [i_1] [i_2] [i_7] [i_7] [i_8] = 1;
                            var_26 = ((((min(-1, 55574))) ? 4003036424 : ((((!(((var_5 ? 1 : 2644532285)))))))));
                            var_27 = (min(var_27, (arr_6 [i_0 + 1] [i_2] [i_7] [i_7])));
                            var_28 = (min(var_28, var_6));
                        }
                        for (int i_9 = 2; i_9 < 23;i_9 += 1) /* same iter space */
                        {
                            var_29 = (min(var_29, var_10));
                            arr_30 [i_0] [i_1] [i_0] [i_9] [i_7 + 3] [i_0 + 1] = ((var_11 ? var_10 : 60088));
                            var_30 = (((((var_2 ? (!65523) : var_7))) ? -7017208147910087385 : ((~(max(var_9, var_11))))));
                            arr_31 [i_0 + 1] [12] [10] = (~991317914);
                        }
                        for (int i_10 = 2; i_10 < 23;i_10 += 1) /* same iter space */
                        {
                            arr_35 [i_0 - 1] [5] [i_2] [i_7] [i_10] [i_0 + 1] [5] = (((((((var_0 << (var_11 - 26170)))) ? (max(var_11, var_0)) : (var_0 && var_5)))) ? (~4294967292) : (max(((min(65534, var_7))), (max(19, 806807631)))));
                            arr_36 [i_0] [i_1] [i_2] [i_1] [i_10 + 1] = (((((((2 ? var_3 : 51638))) ? (((24 ? var_4 : 1))) : (min(var_8, 4294967287)))) > ((var_4 ? (max(var_3, var_5)) : (var_8 || var_8)))));
                            var_31 &= (((1 ^ 26589) > (var_1 || var_11)));
                        }
                        var_32 = ((var_2 > (((min(21, var_6)) >> (var_0 < var_11)))));
                        var_33 = (!((((((arr_14 [i_0] [1] [i_1] [1] [1] [i_7] [19]) ? var_7 : var_0)) >> (((max(51984, var_4)) - 3393981557))))));
                    }
                    for (int i_11 = 1; i_11 < 21;i_11 += 1) /* same iter space */
                    {
                        arr_40 [i_11 + 2] [i_2] [i_1] [i_0] = var_0;
                        var_34 = ((((1 ? (1 && 1) : 32768))) ? (min(((var_9 ? (arr_39 [i_0 + 1] [i_1] [i_1] [i_2] [i_2] [i_2]) : var_7)), var_4)) : (((((var_4 ? var_4 : var_6))) ? ((min(1896813421, 4134139985))) : (max(var_8, var_6)))));
                    }
                    arr_41 [i_0] [i_0 + 1] [i_0] = (min((max((~var_6), 65531)), var_1));
                }
            }
        }
    }
    #pragma endscop
}
