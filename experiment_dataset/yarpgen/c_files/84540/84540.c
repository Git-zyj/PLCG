/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84540
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_9 [i_3] [i_0] = var_8;
                        arr_10 [i_0] [i_0] [i_2] [i_0] = (((((5 - (arr_1 [i_0])))) < (max(2305842734335787008, (((arr_8 [i_0] [i_0] [i_0] [i_3] [i_0]) & var_5))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_3] = ((((((32 & 1) ? var_0 : 14710))) ? ((((((-9223372036854775807 - 1) & var_4))) ? ((var_4 ? var_1 : var_5)) : (((var_4 ? var_3 : 0))))) : (((var_2 ? (arr_2 [i_3]) : 1)))));
                        arr_12 [i_0] [i_0] [i_2] [i_2] [i_1] [i_3] = (max(1, (arr_5 [i_1])));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = ((-1 ? -2896281408724672622 : 24));
                    }

                    for (int i_4 = 2; i_4 < 14;i_4 += 1)
                    {
                        arr_16 [i_1] [i_0] [i_1] = var_6;
                        arr_17 [i_4] [i_1] [i_2] [i_0] [i_0] = (((max(1, 1))));
                        arr_18 [i_2 - 1] [i_0] = (((arr_8 [i_1] [i_1] [i_0] [i_0] [i_1]) ? ((var_8 ? 2 : ((max(29573, var_3))))) : var_3));
                        arr_19 [i_0] [i_0] [i_0] = (max((((arr_5 [i_0]) ? 1 : 5137190873243825242)), 30279));
                        arr_20 [i_1] [i_0] [i_0] [i_0] = 1;
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 15;i_5 += 1)
                    {
                        arr_23 [i_0] [i_1] = (arr_2 [i_1]);

                        for (int i_6 = 1; i_6 < 1;i_6 += 1)
                        {
                            arr_28 [i_0] [i_0] [i_1] [i_1] = (!-2370);
                            arr_29 [i_0] [i_1] = var_1;
                            arr_30 [i_0] [i_0] [i_0] [i_2 - 1] [i_5] [i_0] = var_0;
                            arr_31 [i_0] [i_1] [i_1] [i_1] [i_1] [i_1] [i_6 - 1] = (var_2 < var_1);
                        }
                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            arr_34 [i_0] |= (-11 | 1);
                            arr_35 [i_0] [i_0] [i_0] [i_1] [i_1] [i_1] = (((((17 ? 192 : -5139875940683298602))) ? ((-3 ? -2988387397799026919 : 0)) : 1));
                            arr_36 [i_0] [i_1] [i_5] [i_0] [i_5] [i_5] = -4195;
                            arr_37 [i_1] [i_1] [i_1] [i_7] [i_1] = (((arr_5 [i_1]) ? -16384 : ((-(arr_3 [i_0] [i_0] [i_0])))));
                            arr_38 [i_0] [i_1] [i_5] [i_5] = var_0;
                        }
                    }
                }
                arr_39 [i_0] = arr_33 [i_0] [i_0];
            }
        }
    }
    var_10 = (((var_0 & -432) & ((var_2 ? var_2 : var_5))));
    #pragma endscop
}
