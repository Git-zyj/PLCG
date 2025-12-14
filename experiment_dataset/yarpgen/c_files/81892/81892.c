/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81892
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81892 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81892
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_13;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_10 [1] [5] [i_2] = (arr_6 [i_0 + 1] [i_0 + 1]);
                    arr_11 [i_0] = ((-((9 * (arr_1 [i_2])))));

                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        arr_14 [i_3] [6] [i_3] = ((var_4 && ((!(arr_9 [3] [i_1] [i_0])))));
                        arr_15 [i_3] [23] [14] [i_3] = (((!18446744073709551605) ? -4 : 32767));
                        arr_16 [20] [20] [i_3] [i_3] = (((arr_9 [i_0 - 1] [i_0 + 1] [i_0 + 1]) | (arr_0 [i_2] [i_3])));
                        arr_17 [i_3] [i_3] [i_3] [i_3] [i_0 - 1] = (-27048 % 2);
                    }
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        arr_20 [i_1] |= ((+(((arr_1 [i_0]) ? var_8 : (arr_6 [i_0] [i_1])))));
                        arr_21 [i_0 - 1] [i_2] |= (((arr_13 [i_0 + 1] [22]) ? (arr_1 [i_0 - 1]) : -27));
                    }
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_24 [i_0] [6] [1] [i_0] [12] = ((-2 < ((var_0 ? 68 : 1943785511))));
                        arr_25 [i_0] [i_0] [6] [i_5] = var_3;
                    }
                    arr_26 [i_0] [15] [23] = ((((((arr_7 [i_0 - 1] [i_1] [i_2] [i_1]) ^ var_0))) ? (!var_17) : (arr_7 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1])));
                    /* LoopNest 2 */
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 25;i_7 += 1)
                        {
                            {
                                arr_33 [16] [24] [i_1] [i_0] [i_0] = (!7);
                                arr_34 [i_0] [i_0] [14] [i_1] [i_7] [i_0] [24] = 1;
                                arr_35 [i_0] [i_0] [16] [i_6] = ((((!(arr_31 [i_0 - 1] [6] [21] [i_6] [i_6] [i_7]))) && 18446744073709551600));
                            }
                        }
                    }
                }

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    arr_38 [i_8] [5] [i_0 - 1] = (~110);

                    for (int i_9 = 0; i_9 < 25;i_9 += 1)
                    {

                        /* vectorizable */
                        for (int i_10 = 0; i_10 < 25;i_10 += 1)
                        {
                            arr_44 [17] [3] [i_8] [i_8] [i_10] = ((!(((1 ? var_17 : 18446744073709551602)))));
                            arr_45 [i_1] [21] [i_1] = var_3;
                        }
                        arr_46 [i_0] [i_0] [6] = ((max(((2 ? 7501344512531877936 : (arr_18 [i_0 - 1] [i_0] [i_0])), -var_2))));
                        arr_47 [i_9] [1] [i_1] [i_0] [i_0 - 1] = ((((min(((var_4 ? (arr_7 [i_0] [i_0] [i_1] [18]) : (arr_1 [i_0]))), (arr_32 [0] [i_1] [i_0] [0] [i_1] [i_8] [i_8])))) ? (((var_11 > (arr_6 [i_0] [1])))) : var_8));
                    }
                    arr_48 [12] [24] [i_1] [i_8] = var_11;
                    arr_49 [i_8] [i_1] [6] = (arr_43 [2] [i_8] [16] [i_0 - 1] [16] [2] [2]);
                }
                arr_50 [i_0] = arr_19 [i_0] [i_1];
                arr_51 [17] [1] = ((((((arr_0 [i_0] [i_0 - 1]) == var_4))) | (((((var_5 ? (arr_13 [i_0] [i_1]) : (arr_9 [i_0] [i_0] [i_0])))) ? (arr_19 [18] [i_1]) : -22))));
                arr_52 [i_0] [i_0 + 1] [i_0 + 1] = (arr_22 [i_0] [i_0 - 1] [i_1] [i_1] [18] [8]);
            }
        }
    }
    #pragma endscop
}
