/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65899
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_19 -= var_14;
        var_20 = (max(var_20, (((53651 ? -69 : -1)))));
        var_21 = ((((var_15 ^ ((((arr_2 [i_0]) > 1))))) - (((arr_1 [i_0]) ? (arr_2 [i_0]) : (arr_2 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 18;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 19;i_3 += 1)
            {
                {
                    var_22 = (max(var_22, var_9));
                    var_23 = (!2491);
                    var_24 = (((arr_8 [i_2 + 2] [i_3 - 1] [7]) ? (((arr_8 [i_2 - 2] [i_3 + 1] [12]) | (arr_8 [i_2 + 1] [i_3 - 1] [i_3]))) : (4592222546068761360 >= -64)));
                    var_25 = (~((((min((arr_6 [i_1 + 1] [i_2 + 1] [18]), -64))) ? var_3 : var_5)));

                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            var_26 &= ((-1619791543 ? (arr_13 [i_1] [i_2 + 2] [i_1 - 1] [0]) : 63049));
                            var_27 = ((arr_7 [18] [4] [i_3]) < (arr_7 [i_1 - 1] [i_1 + 1] [17]));
                        }
                        for (int i_6 = 0; i_6 < 20;i_6 += 1)
                        {
                            arr_19 [i_1] [i_2 - 1] [i_3 + 1] [i_4] [i_2] = ((~(arr_14 [i_1 - 1] [i_1 - 1] [i_2 + 2] [i_2 - 1] [i_3 - 1] [i_3 - 1])));
                            arr_20 [i_4] [i_4] [i_4] [i_4] [1] [i_2] [i_4] = (((arr_17 [i_1 - 1] [i_3 + 1] [i_2 + 2] [0] [17] [i_1] [i_6]) <= var_17));
                        }
                        arr_21 [i_2] [i_3 + 1] [i_4] = (arr_5 [i_2 + 2]);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 20;i_7 += 1)
                    {
                        var_28 = (arr_12 [i_3 - 1] [i_3 - 1] [i_2] [4] [i_3]);
                        arr_24 [i_1 - 1] [i_2 + 1] [i_7] [16] [i_2] [i_7] &= (~-69);
                    }
                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_29 = (max(var_29, (~69)));
                        arr_27 [3] [i_2 + 2] [i_2 + 2] [i_2] = (min((arr_10 [i_1]), (((arr_11 [i_1 - 1]) >> (25228 - 25207)))));
                        var_30 &= 53651;
                        var_31 = (((arr_5 [i_1]) + ((max(1, (arr_6 [i_3 + 1] [i_3 - 1] [i_3 - 1]))))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        var_32 = (max(var_32, var_12));
                        var_33 = (max(2491, (arr_6 [i_2 + 1] [i_3 - 1] [1])));
                        arr_30 [i_2] [i_2 + 1] [i_3 - 1] [i_9] [i_1 + 1] [10] = ((!((((arr_18 [i_2 + 1] [i_3 + 1]) ? (arr_18 [i_2 - 1] [i_3 - 1]) : (arr_18 [i_2 + 2] [i_3 + 1]))))));
                    }
                }
            }
        }
        var_34 = (((~-var_7) ? (((((arr_16 [i_1 + 1] [i_1 + 1] [13] [19] [i_1] [7]) > ((-(arr_18 [i_1 - 1] [i_1]))))))) : (max(((((arr_11 [i_1]) ? (arr_29 [i_1 + 1] [15] [i_1 + 1] [i_1 + 1]) : 63035))), var_3))));

        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_35 = ((((min((max((arr_15 [i_10] [5] [15] [15] [i_10] [i_1 - 1]), (arr_11 [i_1]))), (arr_32 [i_1 + 1] [i_1 - 1])))) ? (((11885 ? 2557 : 1619791543))) : (max(103, 3732099020))));
            var_36 = ((-1619791544 ? (1 >= 63035) : 1));
        }
        var_37 = (arr_29 [i_1 - 1] [1] [16] [1]);
        var_38 = ((~((-(arr_31 [i_1 - 1])))));
    }
    for (int i_11 = 2; i_11 < 12;i_11 += 1)
    {
        var_39 = (max(var_39, (((((arr_9 [i_11 + 1]) || (arr_25 [i_11 - 1])))))));
        var_40 = max(var_1, ((max((max((arr_7 [i_11] [i_11] [i_11]), -1619791527)), (arr_26 [i_11 + 2] [i_11 - 2])))));
    }
    var_41 = (!192);
    var_42 = ((var_13 ? (max(1735384560, var_9)) : (min((2491 - var_12), (max(var_9, var_15))))));
    var_43 = -7670575942230888514;
    var_44 = (((2491 ? 1 : ((2509 ? 2501 : 63044)))) >> (2491 - 2470));
    #pragma endscop
}
