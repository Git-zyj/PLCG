/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = 22;
    var_11 = (min(236, ((var_2 ? (((var_7 >> (var_9 - 3465011601090248567)))) : (var_4 ^ var_6)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_11 [i_0] [11] = ((0 >> (var_6 - 2521315782)));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = 5;
                    arr_13 [i_0] = (((!var_0) ? var_6 : -1));
                    arr_14 [i_0] [5] [8] = (((((min(var_9, var_7))) ? (max(var_4, var_8)) : (min(-9223372036854775802, -9223372036854775784)))) | (((~(0 | var_6)))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_17 [i_0] [i_1] [5] [i_0] [i_1] [i_1] = var_0;
                        arr_18 [i_0] [4] [4] [4] [2] = (var_9 && var_1);
                        arr_19 [i_0] = (((var_3 & var_3) || var_3));
                        arr_20 [i_0] [12] [12] [i_0] = ((131071 ? var_3 : var_7));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 11;i_4 += 1)
                    {

                        for (int i_5 = 3; i_5 < 9;i_5 += 1)
                        {
                            arr_28 [5] [i_1] [5] [i_1] [i_0] = var_1;
                            arr_29 [2] [i_5] [i_4] [4] [i_5] = 0;
                            arr_30 [2] [i_0] = (var_1 && var_1);
                        }
                        for (int i_6 = 2; i_6 < 12;i_6 += 1)
                        {
                            arr_33 [i_0] [5] [i_2] = 208;
                            arr_34 [i_0] [i_1] [i_0] = (~var_8);
                            arr_35 [i_0] [i_0] [i_2] [i_4] [i_6 + 1] = ((var_2 ? 255 : var_5));
                        }
                        arr_36 [i_0] [i_0] = (~-var_8);
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {

                        for (int i_8 = 2; i_8 < 11;i_8 += 1)
                        {
                            arr_43 [i_0] [i_1] [i_0] [3] [4] = ((~((var_8 ? var_1 : var_1))));
                            arr_44 [i_0] [11] [i_0] = ((248 ? var_8 : 27));
                            arr_45 [i_0] [i_7] = ((var_5 ? var_6 : var_9));
                        }
                        arr_46 [i_0] [i_0] [11] [7] [i_0] = var_1;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 13;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                {
                    arr_53 [i_0] [i_0] [0] [i_0] = (max(var_0, (((!var_6) ? 254 : ((var_6 ? (-9223372036854775807 - 1) : var_7))))));
                    arr_54 [i_0] [i_9] [i_0] = (((((-9223372036854775807 - 1) ? 0 : 5)) - ((-0 ? -9223372036854775803 : 5))));
                }
            }
        }
    }
    var_12 = (((((((26 ? -20 : 13))) ? var_7 : (!var_3))) > ((((var_2 & 248) < var_8)))));
    #pragma endscop
}
