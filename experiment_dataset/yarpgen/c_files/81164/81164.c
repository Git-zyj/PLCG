/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81164
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    arr_9 [i_2] [i_0] [i_1] [i_2] = ((((((562657978 & 2147483647) != ((562657993 ? 1 : (arr_0 [i_0])))))) | (min(456917223, 1))));
                    arr_10 [8] [4] [8] &= (max((((var_4 != (arr_1 [i_0])))), ((((((arr_3 [i_2] [i_1]) ? 2924761992 : var_4))) ? (arr_6 [i_0]) : (max(var_5, var_9))))));

                    for (int i_3 = 3; i_3 < 22;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            arr_19 [i_2] [i_3] [16] [i_1] [i_2] = (min(((((((var_2 ? (arr_8 [i_2]) : (arr_6 [i_0])))) && (((38 ? var_5 : 0)))))), (max((!-297920215), (2198789259 * var_0)))));
                            arr_20 [i_1] [i_2] [i_4] = -var_2;
                            arr_21 [i_4] [i_3 - 3] [i_2] [i_3 - 3] [i_2] [i_4] = -562657979;
                            arr_22 [i_2] [i_2] [i_0] = (min(1, (((0 ? 47861 : 0)))));
                            arr_23 [i_0] [i_2] [i_2] [0] = 40325;
                        }
                        arr_24 [i_2] [i_2] [i_1] [i_0] [i_0] [i_2] = (((arr_15 [i_3 - 2] [i_2] [i_1] [i_0] [i_0] [i_0]) == (max((arr_3 [i_3 - 2] [i_0]), (arr_3 [i_0] [i_0])))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                    {
                        arr_28 [i_0] [i_0] [i_1] [4] [i_2] [i_5] = (arr_7 [i_0] [14] [i_0]);
                        arr_29 [i_2] = ((var_10 == (arr_18 [i_2] [i_5] [i_2] [i_5] [i_2])));
                        arr_30 [i_2] [i_1] [i_2] [i_5] = (~(arr_15 [i_0] [i_0] [i_1] [i_2] [i_2] [i_5]));
                    }
                    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
                    {

                        for (int i_7 = 0; i_7 < 23;i_7 += 1)
                        {
                            arr_36 [i_7] [i_6] [i_2] [i_1] [i_0] = min(((max((max(1536, 1)), (arr_32 [i_1] [i_2] [i_6] [i_7])))), (min((arr_12 [i_7] [i_6] [i_2] [i_2] [8] [i_0]), (arr_12 [i_0] [i_1] [i_2] [i_2] [i_6] [i_7]))));
                            arr_37 [i_2] [i_1] [i_0] [i_6] [0] = 1;
                        }
                        for (int i_8 = 0; i_8 < 23;i_8 += 1)
                        {
                            arr_41 [i_2] [i_1] = ((0 && ((max(1, (arr_13 [i_0] [i_0] [i_2] [i_0] [i_0]))))));
                            arr_42 [i_6] [i_0] [12] [i_6] = 2773059706;
                        }
                        arr_43 [i_0] [i_1] [i_2] [i_2] = ((+(((arr_38 [i_0] [i_2] [i_2] [i_2] [i_0] [i_2] [i_0]) ? (max(32736, (arr_38 [i_6] [i_2] [i_2] [18] [i_1] [i_2] [i_0]))) : 4294967284))));
                    }
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_46 [i_9] [i_1] [i_1] [i_0] = ((-297920188 ? (((max((max(var_0, -20)), 1)))) : 2685154688));
                    arr_47 [i_9] [i_0] = (((-43 + 2147483647) >> ((((-97 ? 2902283388 : (arr_31 [i_9]))) - 2902283377))));
                }
                arr_48 [i_0] [i_1] = 0;
            }
        }
    }
    var_11 = var_6;
    var_12 = (max(304120292, ((min(-var_1, ((max(var_0, var_2))))))));
    #pragma endscop
}
