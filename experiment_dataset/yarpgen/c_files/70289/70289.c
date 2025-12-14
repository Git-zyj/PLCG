/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70289
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70289 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70289
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((min(var_10, (var_0 >= -2051028701)))) < (~-122)));
    var_15 = var_3;
    var_16 = (max((var_1 * var_11), (min((max(-768293593, 768293592)), var_8))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_3 = 1; i_3 < 18;i_3 += 1) /* same iter space */
                    {

                        for (int i_4 = 2; i_4 < 17;i_4 += 1)
                        {
                            var_17 &= (arr_3 [i_4]);
                            arr_16 [i_4] [i_3] [i_2] [i_3] [i_0] = -var_10;
                            var_18 = (~-768293593);
                        }
                        for (int i_5 = 1; i_5 < 18;i_5 += 1)
                        {
                            var_19 = 65535;
                            var_20 = (max(var_20, (arr_11 [i_5 + 1] [i_5] [i_5] [i_5 + 1])));
                            arr_20 [i_3] [i_1] [i_1] [0] [i_2] [11] [i_5 - 1] = 120259084288;
                            arr_21 [i_0] [i_5] [12] [i_3] = ((var_0 ? var_10 : var_8));
                            var_21 = (!9223372036854775807);
                        }
                        var_22 += var_2;
                    }
                    for (int i_6 = 1; i_6 < 18;i_6 += 1) /* same iter space */
                    {
                        arr_26 [i_0] [i_2] [i_1 + 1] [i_0] |= ((((max((arr_9 [i_6] [i_6 - 1]), (arr_9 [i_1] [i_6 + 1])))) && (((-(arr_0 [i_1 - 3]))))));
                        var_23 -= (min(8829478938094165567, 768293592));
                        var_24 = var_5;
                        var_25 = (min(var_25, (((~(arr_17 [i_6 - 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6]))))));

                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 19;i_7 += 1)
                        {
                            var_26 += (((arr_23 [i_1] [i_1 + 1] [i_1] [i_1] [18] [i_1]) || var_6));
                            var_27 = (((var_8 | var_3) >= (arr_22 [i_0] [i_0] [i_0] [i_0] [i_6])));
                            arr_31 [i_2] [i_1] [i_6] [i_1] [i_6] [i_6] [11] = (arr_6 [i_6 + 1]);
                        }
                    }
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {

                        for (int i_9 = 1; i_9 < 1;i_9 += 1)
                        {
                            arr_36 [8] [i_8] [i_1] [i_2] [i_1] [i_1] [i_0] = (min(768293590, 8160));
                            var_28 += 68;
                        }
                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 19;i_10 += 1)
                        {
                            var_29 = (max(var_29, var_1));
                            var_30 = (((arr_28 [i_1 - 1] [i_8] [i_0] [i_2] [2]) ? var_12 : (arr_14 [i_1 - 1] [i_1] [i_1])));
                            arr_41 [i_10] = arr_34 [i_0] [i_1] [i_1] [i_8] [6] [i_8] [6];
                            arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = var_1;
                            var_31 += (-768293603 && 24622);
                        }
                        arr_43 [i_8] [1] [i_0] = (((arr_25 [i_0] [i_0]) | (max((arr_39 [i_1 - 3] [0] [i_1] [i_1] [i_1] [i_0]), (arr_39 [i_1 + 1] [i_1] [i_0] [17] [i_1] [i_0])))));
                    }
                    arr_44 [i_0] [i_2] = ((((~(arr_30 [i_1] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 1]))) + ((((!(arr_30 [i_2] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 1])))))));
                    var_32 -= (max((arr_5 [i_0] [5]), ((((arr_23 [i_1] [i_1] [i_1 - 1] [11] [9] [i_1]) & (arr_23 [i_0] [i_1 + 1] [i_1 - 1] [i_1] [i_2] [i_2]))))));
                    var_33 -= var_5;
                    var_34 &= ((768293590 | 57352) ? (arr_1 [6] [i_2]) : (arr_3 [i_1]));
                }
            }
        }
    }
    #pragma endscop
}
