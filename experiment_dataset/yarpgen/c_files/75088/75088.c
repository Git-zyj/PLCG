/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_16 |= ((!(((26 << (-8416187371466676692 + 8416187371466676710))))));
        var_17 = ((~6223401136909625145) ? (~2309350902) : (1985616421 <= 2309350900));
        arr_2 [i_0] [i_0] = (~1131240883);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_20 [i_2] [i_2] [i_3] [i_3] [i_5] [i_5] = (var_4 & 17179869183);
                                var_18 = var_0;
                                var_19 = (!var_4);
                            }
                        }
                    }
                    var_20 = (min(var_20, (arr_17 [10] [i_1] [i_2] [i_3] [6])));
                }
            }
        }
        var_21 = var_15;
    }
    for (int i_6 = 4; i_6 < 12;i_6 += 1)
    {
        arr_23 [i_6] = (((var_8 ? ((max(16, 2309350895))) : var_5)));
        arr_24 [i_6] = ((~(((arr_22 [i_6]) & (arr_21 [2])))));
        var_22 = ((1938379276961993449 & ((max(1985616401, (max(1985616392, -2251787206654921172)))))));
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 15;i_7 += 1)
        {
            for (int i_8 = 2; i_8 < 13;i_8 += 1)
            {
                {
                    var_23 = (min(var_23, (arr_25 [i_6 + 3] [i_6 + 3])));
                    arr_29 [i_6] [i_6] [4] [4] = ((~(((arr_21 [i_6 + 1]) & var_4))));
                    var_24 = (((max((!var_7), (~var_9))) + var_9));
                    var_25 = (min(var_25, var_13));
                }
            }
        }

        for (int i_9 = 1; i_9 < 14;i_9 += 1)
        {
            var_26 = ((((((~-906782141) ? (max(126, var_14)) : -var_4))) ? (min((!var_10), (max(var_0, 9478297147796759798)))) : ((max((arr_25 [i_6 - 1] [i_9 - 1]), (arr_25 [12] [4]))))));
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 15;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        arr_38 [i_6] [i_9] [i_6] [i_9] = ((((~(((arr_34 [i_6] [13] [i_10] [i_11]) - var_4)))) >> (((1073741823 & 1356557419) - 282815586))));
                        arr_39 [i_10] |= (min((((!(var_9 > var_9)))), (arr_25 [4] [i_9])));
                        arr_40 [9] [9] [i_10] [i_6] [0] = (((-906782141 <= ((~(arr_32 [5] [i_9] [5]))))));
                    }
                }
            }
        }
    }
    var_27 = (max((var_10 > var_4), var_4));
    #pragma endscop
}
