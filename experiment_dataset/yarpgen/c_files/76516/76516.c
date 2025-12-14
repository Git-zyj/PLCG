/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((1 ? (arr_1 [i_0]) : ((((!-5) <= var_3)))));
        var_17 = (min(var_17, (((((-(arr_0 [i_0] [i_0])))) ? (((var_8 > (arr_0 [i_0] [i_0])))) : (arr_0 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = var_0;
            var_19 += (((((max((arr_5 [i_1] [i_0] [i_0]), (arr_5 [i_0] [i_0] [i_1]))))) - var_15));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 23;i_3 += 1)
                {
                    {

                        for (int i_4 = 2; i_4 < 22;i_4 += 1)
                        {
                            var_20 = (min((((!(arr_8 [i_2] [i_3])))), (~268435455)));
                            var_21 = (arr_2 [i_4 + 1] [i_4]);
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_22 += (min(var_15, -1));
                            var_23 += ((var_4 >> (((((((-(arr_16 [i_0] [i_0])))) ? 58705 : (min(-1, var_11)))) - 58684))));
                            var_24 = var_10;
                        }
                        for (int i_6 = 2; i_6 < 21;i_6 += 1)
                        {
                            arr_21 [i_6] [i_6] [15] [i_6] [i_3] [i_6 - 2] [15] = (((arr_11 [i_1] [i_6 - 2] [i_2] [i_6 - 2] [i_6 - 2] [i_3]) ? ((~(arr_11 [i_0] [i_6 - 1] [i_6 - 1] [i_3] [i_3] [i_3]))) : 6830));
                            arr_22 [i_0] [i_3] [i_2] [i_3] [i_2] [13] [i_1] = (max((~var_3), (~var_11)));
                            arr_23 [i_3] = (((arr_2 [i_3] [i_3]) ? ((((max(6830, var_11))))) : (((arr_20 [i_3] [i_3] [i_3] [i_3] [i_3]) - ((var_7 ? -54 : (arr_15 [i_0] [i_0])))))));
                            var_25 = (min(var_25, (((min(var_0, -1))))));
                            arr_24 [i_3] [i_3] [i_3] [i_3] [i_3] = (min((((var_15 == (430515444 == -1561320513)))), 0));
                        }
                        var_26 = (((((((((-1 + 9223372036854775807) << (((arr_10 [i_0] [i_0] [5]) - 3782))))) ? ((var_5 * (arr_1 [i_2]))) : (-9 - 29)))) ? (max((arr_17 [i_0] [i_3] [20] [i_3] [i_2] [i_3]), (arr_17 [i_0] [i_3] [16] [i_3] [i_3] [i_2]))) : var_0));
                        arr_25 [i_3] = -8;
                        var_27 = (max(var_27, ((((var_12 == var_0) ? ((min((arr_6 [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_0] [i_0] [i_2] [i_3])))) : (min(var_13, (arr_14 [i_0] [i_1] [i_0] [i_3] [9]))))))));
                    }
                }
            }
            arr_26 [i_0] [i_1] [i_0] = ((max((arr_5 [i_1] [i_1] [i_0]), var_4)) < ((-(arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_28 += (min((arr_17 [12] [i_1] [i_1] [i_1] [i_1] [i_1]), ((max((~0), (arr_6 [i_0] [i_0] [i_0]))))));
        }
        arr_27 [i_0] = (min(var_12, var_14));
    }
    for (int i_7 = 0; i_7 < 24;i_7 += 1) /* same iter space */
    {
        var_29 = (arr_30 [i_7]);
        var_30 = arr_30 [i_7];
        var_31 += (min((((0 && (!var_10)))), (min((min(14303266615875685434, var_4)), (1 * 0)))));
        arr_31 [i_7] = ((((((1 >= (arr_28 [i_7]))))) ? (min(((var_5 ? 6815 : -24)), ((((arr_28 [i_7]) < var_3))))) : var_8));
        var_32 += arr_28 [i_7];
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 24;i_8 += 1) /* same iter space */
    {
        var_33 = (max(var_33, (var_1 | var_5)));
        var_34 += ((((var_15 ? var_15 : 25712)) <= (~-1971716865)));
        var_35 = (((((arr_29 [i_8] [14]) ^ var_7))) ? var_0 : (var_11 || var_2));
        var_36 += (arr_33 [i_8]);
    }
    #pragma endscop
}
