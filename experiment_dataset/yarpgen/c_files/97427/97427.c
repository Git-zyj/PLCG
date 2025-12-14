/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_2 [12] = -4202;
        arr_3 [i_0] [i_0] = (max((min(var_3, (arr_1 [i_0] [i_0]))), ((((var_10 | (arr_1 [i_0] [i_0])))))));
        arr_4 [i_0] = (((max(var_8, var_2))));
        arr_5 [i_0] [i_0] = 11427;
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = (arr_1 [i_1] [i_1]);
        arr_9 [i_1] = (arr_1 [i_1] [3]);
        arr_10 [i_1] = ((max((max(var_7, -123)), (!65526))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_13 [i_2] [7] |= (((arr_0 [i_2]) ? (arr_1 [i_2] [i_2]) : (arr_0 [i_2])));

        /* vectorizable */
        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            arr_17 [i_2] [i_2] [i_2] = 65527;
            arr_18 [i_2] [i_3] [i_2] = (arr_14 [i_3 + 2] [i_3 + 1]);
        }
        arr_19 [i_2] = (((((arr_0 [i_2]) >= 6482869692373296024)) ? 4185 : ((max(31022, 119)))));

        for (int i_4 = 0; i_4 < 15;i_4 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_5 = 3; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 15;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        {
                            arr_30 [i_4] [i_4] [i_4] [11] [14] [i_4] [i_4] = ((8128 != (-127 - 1)));
                            arr_31 [2] [2] [2] [i_6] [i_7] = (((arr_20 [i_5 + 2]) ? (((((arr_20 [i_5 + 2]) <= var_0)))) : (max(-898852188, (arr_20 [i_5 - 1])))));
                        }
                    }
                }
            }
            arr_32 [i_2] = (arr_29 [i_2] [i_4] [i_2] [i_2] [i_4]);
            arr_33 [i_4] = ((arr_23 [i_2] [i_4] [i_4]) < ((var_10 ? (arr_25 [i_4] [i_2] [i_2] [i_2]) : var_0)));
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        arr_44 [i_2] [i_9] [i_8] [7] [i_9] [i_10] = ((-4206 ? 4209 : (((~(arr_38 [i_10] [i_9] [i_2]))))));
                        arr_45 [i_10] [i_10] [i_9] [i_10] = (arr_0 [i_2]);
                    }
                }
            }
            arr_46 [i_2] = var_9;
            arr_47 [i_2] = var_8;
        }
        arr_48 [i_2] [i_2] = (((min(var_0, -4217))) ? var_10 : (max(65535, var_9)));
    }
    var_13 = -109;
    var_14 = (!var_1);
    var_15 = var_3;
    #pragma endscop
}
