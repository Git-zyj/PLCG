/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = var_6;
        arr_5 [i_0] [i_0] = (arr_3 [i_0] [i_0]);
        arr_6 [9] = 4294967295;
    }
    var_17 = (~var_9);
    var_18 = var_3;
    /* LoopNest 2 */
    for (int i_1 = 3; i_1 < 18;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            {
                arr_13 [i_1] [i_2] [8] = (arr_10 [i_1] [i_1]);
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 19;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 21;i_4 += 1)
                    {
                        {
                            arr_18 [i_1] = (((((8377532574865242975 ? 8377532574865242975 : var_7))) ? (var_3 < var_16) : (arr_9 [i_1] [i_2 - 2])));
                            arr_19 [i_1] [i_2] [i_1] [4] = (max((max((arr_12 [i_3 + 2] [i_1]), 0)), var_1));
                            arr_20 [i_1] [i_2] [i_1] [i_4] = (arr_9 [i_1] [i_1]);
                            arr_21 [i_1] [i_1 + 3] [i_2] [i_1] [17] [i_4] = var_9;
                        }
                    }
                }
                arr_22 [i_1] [i_2] [i_2 - 2] = (((~2342579194) ^ (((((!80) || (var_5 < 3029339774191348603)))))));
                arr_23 [i_1] [i_2] = ((!((((arr_10 [i_1] [i_2]) / (min(21, var_0)))))));

                for (int i_5 = 0; i_5 < 21;i_5 += 1) /* same iter space */
                {
                    arr_26 [i_1] [17] [i_5] = var_11;
                    arr_27 [i_1] [i_1] [i_1] = (((arr_3 [11] [i_5]) ? var_8 : ((min(((~(arr_7 [13]))), (-2147483647 - 1))))));
                    arr_28 [i_1] [i_2 + 1] [i_2 - 2] = ((((~(arr_17 [i_1])))) * ((((!(arr_15 [i_1] [i_1 + 2] [i_5] [i_1]))))));
                    arr_29 [i_1] = (max(var_14, (max(-3323241400177538620, 4))));
                    arr_30 [i_1] [i_1] [i_1] = ((var_8 || (((-((max((arr_17 [i_1]), var_10))))))));
                }
                /* vectorizable */
                for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                {
                    arr_33 [i_1] [i_1] [i_1] = (((arr_7 [i_1 + 3]) ? (arr_7 [i_6]) : (arr_7 [i_1 - 2])));
                    arr_34 [i_1] [i_1] = 1952388101;
                    arr_35 [i_1] [i_2] [8] = var_9;
                    arr_36 [i_1] [i_1] [i_2] [i_1] = (var_6 ? (arr_25 [i_1 + 1] [9] [i_2] [9]) : (arr_17 [i_1 + 2]));

                    for (int i_7 = 1; i_7 < 20;i_7 += 1)
                    {
                        arr_41 [i_1] [i_2] [i_2] [i_1] = ((-3323241400177538610 ? 24 : 1));
                        arr_42 [i_1] [i_2] [i_6] [i_7 - 1] = 1;
                        arr_43 [i_1 + 1] [i_1] [i_1 + 2] [i_1] = -1864627194424255437;
                    }
                }
            }
        }
    }
    var_19 = (-var_12 | var_6);
    #pragma endscop
}
