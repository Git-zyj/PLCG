/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71184
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((238 ? var_0 : (((17671109189327611298 ? (1927183296 + var_5) : var_14)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_19 = var_6;
        var_20 = var_14;
        arr_2 [4] [i_0] = ((-32767 - 1) ? var_3 : (((!((!(arr_0 [7])))))));
        arr_3 [i_0] = (arr_1 [12] [12]);
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 4; i_4 < 15;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_1] = (max((((44499523 && ((((arr_0 [i_0]) + -44499523)))))), (arr_9 [i_4] [i_3] [i_1] [11] [i_1] [i_0])));
                                var_21 &= (((((arr_12 [i_0] [i_1] [i_2] [i_2] [i_0]) ? ((var_10 << (((arr_6 [i_0] [i_0] [i_3]) - 1397535077)))) : var_15)) | 1927183296));
                                var_22 = arr_9 [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_2 - 1];
                            }
                        }
                    }
                    var_23 = ((~(((arr_5 [i_2 + 1]) ? var_6 : (arr_5 [i_2 + 1])))));
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {

        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            arr_19 [i_5] = ((-4083 ? ((min((max(44499523, -1927183297)), (min(var_3, (arr_9 [i_6] [i_6] [i_6] [i_6] [i_5] [i_5])))))) : ((min(var_8, var_14)))));
            /* LoopNest 2 */
            for (int i_7 = 2; i_7 < 11;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    {
                        arr_25 [i_5] [i_5] [i_5] [i_7] |= max(((max((arr_0 [i_6 + 1]), (!-44499505)))), (~729));
                        var_24 = ((!(!-1927183297)));

                        for (int i_9 = 3; i_9 < 10;i_9 += 1)
                        {
                            var_25 = ((((~(min((arr_22 [i_5] [i_5] [i_7] [i_8]), var_2)))) ^ ((((((arr_23 [i_5] [6] [6] [i_8]) ? (arr_6 [i_5] [i_5] [i_5]) : -1927183296)) % (arr_5 [i_5]))))));
                            var_26 = ((~((((!(arr_24 [i_5] [i_6 - 1] [i_6 - 1] [i_8] [i_5]))) ? (((10 << (((arr_5 [i_5]) - 156))))) : ((var_6 ? -1927183296 : var_15))))));
                        }
                        for (int i_10 = 1; i_10 < 10;i_10 += 1)
                        {
                            var_27 = -1927183270;
                            arr_31 [i_5] [i_6] [i_5] = (((max(((((arr_4 [i_5] [i_8]) ? 0 : var_14))), ((var_10 * (arr_18 [i_7] [7]))))) + ((((!(arr_16 [i_10])))))));
                            var_28 = (min(var_28, (((((min(44499518, (!-44499514)))) ? (min((arr_30 [i_7] [i_10 + 1] [i_10 + 1] [i_10 + 1] [i_7]), ((var_14 ? var_2 : (arr_11 [i_8] [i_8] [i_8] [i_8] [10] [7]))))) : var_5)))));
                        }
                        for (int i_11 = 1; i_11 < 11;i_11 += 1)
                        {
                            var_29 = ((-(((arr_27 [4] [i_7 - 1] [i_8 + 2]) ? ((((!(arr_10 [i_5] [i_5] [i_5] [i_5]))))) : (arr_23 [i_5] [i_5] [i_7] [i_7])))));
                            var_30 = (max(6241740543915229267, ((((244 ^ 17) ? (arr_20 [i_5]) : 22596)))));
                            var_31 = (max((arr_21 [i_5] [i_11 - 1]), (((((min((arr_9 [i_5] [i_5] [i_5] [i_7] [i_7] [i_5]), (arr_4 [i_8 + 1] [i_11])))) ? (arr_27 [i_5] [i_5] [1]) : (arr_7 [i_5]))))));
                        }
                        var_32 = (min((~var_5), (((91 << (var_4 + 2115771358))))));
                    }
                }
            }
            var_33 = (((min(var_4, (arr_4 [i_6 - 1] [i_6 - 1]))) > -1927183281));
            arr_34 [i_5] = ((!((((min((arr_10 [i_5] [i_5] [i_5] [i_5]), (arr_27 [i_5] [i_5] [i_6]))) & var_17)))));
            var_34 = min((arr_5 [i_5]), ((~((var_16 ? 1013509148 : (arr_18 [i_5] [i_5]))))));
        }
        for (int i_12 = 0; i_12 < 12;i_12 += 1)
        {
            var_35 = ((1927183295 & ((((((min((arr_10 [i_5] [i_5] [i_5] [i_5]), var_12))) && (arr_18 [i_5] [i_12])))))));
            arr_37 [i_5] = (((var_2 > (arr_8 [i_5] [i_12] [i_5]))));
        }
        var_36 = (~var_0);
        var_37 -= var_16;
    }
    for (int i_13 = 0; i_13 < 13;i_13 += 1)
    {
        var_38 = (min(var_38, (arr_1 [i_13] [i_13])));
        var_39 = (min(var_39, var_1));
        var_40 = arr_11 [6] [6] [16] [0] [i_13] [0];
    }
    var_41 = var_13;
    var_42 *= var_13;
    var_43 += var_1;
    #pragma endscop
}
