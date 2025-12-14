/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91392
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91392 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91392
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((~var_10) ? (var_1 - var_10) : var_5)) - (min(-var_0, (~var_5)))));
    var_13 = var_10;

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        var_14 = (min(var_14, (((-(((var_3 >= ((max(var_4, (-32767 - 1))))))))))));
        var_15 = ((((((-23472 & -29311) ? (arr_0 [i_0 - 1] [i_0 + 1]) : (var_1 & var_8)))) ? ((~(arr_1 [i_0] [i_0]))) : (~1819)));
    }
    /* vectorizable */
    for (int i_1 = 1; i_1 < 11;i_1 += 1)
    {
        arr_4 [i_1] = arr_2 [i_1] [i_1];
        arr_5 [i_1] = (!var_4);

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            var_16 = (~26537);
            arr_9 [i_1] [i_1] [i_1] = (((((23481 ? -8561 : -1836))) ? (!var_9) : var_0));
            arr_10 [i_1] [i_1] = ((var_11 > (arr_8 [i_1])));
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_17 = ((var_2 * (arr_6 [i_3] [i_4] [i_3 + 2])));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 14;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {
                        {
                            var_18 ^= (((var_2 > var_4) ? var_6 : var_11));
                            arr_20 [3] [i_1] = 0;
                            var_19 = ((~((var_0 ? var_2 : var_1))));
                            arr_21 [i_1] [i_1] = ((-var_6 ? (~-1286) : (arr_14 [i_5])));
                        }
                    }
                }
                var_20 += var_4;
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_21 = (min(var_21, ((((arr_12 [i_7]) ? (((((arr_16 [i_1] [i_1 + 1] [i_1] [i_1 + 3]) + 2147483647)) << (((var_4 + 12802) - 26)))) : (arr_8 [i_3]))))));
                arr_24 [i_1] = ((-(~-23472)));

                for (int i_8 = 2; i_8 < 12;i_8 += 1)
                {
                    var_22 = ((-var_7 ? var_4 : (var_0 && -22420)));
                    var_23 = (var_0 - var_11);

                    for (int i_9 = 3; i_9 < 13;i_9 += 1)
                    {
                        var_24 = ((var_2 ? var_8 : var_11));
                        var_25 = (~10723);
                    }
                    for (int i_10 = 0; i_10 < 15;i_10 += 1)
                    {
                        var_26 = var_0;
                        var_27 = ((!((var_3 > (arr_32 [i_1] [i_3] [i_7] [i_8 - 1] [i_10])))));
                    }
                    for (int i_11 = 0; i_11 < 15;i_11 += 1)
                    {
                        arr_38 [i_7] [i_7] [i_7] &= arr_23 [10] [i_7] [i_7];
                        var_28 ^= ((((-28375 && (arr_3 [i_1 - 1]))) ? ((var_11 ? var_2 : var_1)) : ((var_11 - (arr_12 [i_8])))));
                    }
                    var_29 -= (((!var_5) ? ((var_3 - (arr_27 [i_8] [i_1] [i_1] [i_1]))) : ((var_10 ? var_11 : (arr_33 [2] [2] [i_3 - 1] [i_1 - 1] [i_1])))));
                }
                var_30 = (max(var_30, var_9));
            }
            var_31 = (min(var_31, (var_11 & var_4)));
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 15;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 15;i_13 += 1)
                {
                    {
                        arr_45 [i_3] [i_3] [i_1] [i_1] [i_12] = (((((~(arr_42 [i_1])))) ? -398 : (4677 >= 30894)));
                        var_32 = ((((-(arr_31 [i_1] [i_12] [i_12] [12] [i_1]))) % (var_2 ^ var_5)));
                        arr_46 [i_1] [i_1] [12] [i_13] = ((((!(arr_34 [i_1] [i_1])))));
                    }
                }
            }
            var_33 = (min(var_33, (((-(((arr_39 [12] [i_3] [12]) ? 1819 : var_9)))))));
        }
        var_34 = ((!(arr_25 [i_1] [i_1] [i_1 + 3] [i_1])));
        var_35 += ((~(((!(arr_43 [i_1 + 2] [i_1 + 2] [i_1] [i_1]))))));
    }
    #pragma endscop
}
