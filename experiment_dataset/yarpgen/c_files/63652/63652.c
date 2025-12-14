/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63652
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63652 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63652
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [10] &= ((((~(arr_2 [i_0])))) ? (max(1884234538, 2410732755)) : (arr_2 [i_0]));
        arr_4 [16] = (max(var_7, var_17));
        arr_5 [i_0] = ((~(arr_1 [i_0])));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        arr_8 [i_1] = (~var_16);
        arr_9 [i_1] = (!var_9);
        /* LoopNest 3 */
        for (int i_2 = 1; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 18;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 20;i_4 += 1)
                {
                    {
                        arr_18 [i_2] [i_2] [i_1 - 1] [8] [i_2 + 1] = (arr_13 [i_1 + 2] [i_2]);

                        /* vectorizable */
                        for (int i_5 = 2; i_5 < 19;i_5 += 1) /* same iter space */
                        {
                            arr_23 [i_1] [i_4] [i_2] [i_2 + 1] [i_2] [i_2 + 1] [i_1] = ((~(((arr_22 [i_1] [i_1] [i_1] [i_5]) ? var_18 : (arr_22 [i_3] [i_3] [i_3] [i_1])))));
                            arr_24 [i_1] [i_4] [i_3] [i_3] [i_3] [14] [i_5 - 2] = 3394836072;
                        }
                        for (int i_6 = 2; i_6 < 19;i_6 += 1) /* same iter space */
                        {
                            arr_27 [i_1] [i_2] [i_3 - 1] [i_4] [i_6 - 2] = (arr_6 [i_2] [i_6]);
                            arr_28 [i_1] [i_2] [i_1 + 3] [i_4] [i_2] = (arr_12 [i_3 - 2] [18] [i_6]);
                            arr_29 [i_2] [i_2] [i_2] [i_2] [i_6] [i_4] = ((+(((arr_2 [i_6 - 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_3 - 2])))));
                        }
                        for (int i_7 = 2; i_7 < 18;i_7 += 1)
                        {
                            arr_32 [i_1] [4] [i_7 - 1] [i_4] [i_2] = var_2;
                            arr_33 [i_2] = (min((arr_6 [i_7 + 1] [i_3 - 1]), ((var_7 - (arr_6 [i_7 - 2] [i_3 + 1])))));
                        }

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            arr_37 [i_8 + 1] [i_2] [i_2] [i_1 + 3] = (min((arr_35 [i_1] [i_1 - 1] [i_1] [i_1] [i_8 + 1] [5]), var_9));
                            arr_38 [i_2] [i_2] [i_3] [i_1] [i_3] &= ((((((arr_10 [i_1 + 2]) ? (arr_10 [i_1 + 2]) : var_9))) | (((arr_10 [i_1 + 2]) ? (arr_21 [i_3] [i_8 + 1] [i_8] [i_8] [i_8] [i_8] [i_8]) : (arr_21 [i_4] [i_8 + 1] [1] [i_8] [4] [i_8 + 1] [i_8 + 1])))));
                        }
                        for (int i_9 = 0; i_9 < 20;i_9 += 1)
                        {
                            arr_43 [i_1] [i_2] [i_3] [19] [i_9] [i_2] [i_2] = 1217640517;
                            arr_44 [i_1 - 1] [i_3] [i_3 + 2] [i_4] [i_9] [i_3] &= ((-var_7 ? (var_16 + var_18) : var_12));
                        }
                        arr_45 [i_1] [i_1] [i_3] [i_3] [i_1] [i_3] = (((-(!var_6))));
                    }
                }
            }
        }
    }
    var_19 = var_15;
    var_20 = var_0;
    var_21 = (var_4 > var_3);
    var_22 = (max(32751, var_6));
    #pragma endscop
}
