/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61028
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((-((var_9 + (var_6 | var_14)))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        var_18 += (arr_1 [i_0 - 2]);
        arr_2 [i_0] [i_0] &= (((((var_5 ? (arr_1 [i_0]) : var_12))) ? (!var_16) : (arr_1 [i_0 + 1])));
        var_19 = (((((arr_0 [i_0 + 1] [i_0]) != 178)) ? ((((arr_1 [i_0]) && (arr_1 [i_0 - 2])))) : (arr_0 [i_0 + 2] [i_0 + 2])));
        var_20 = (arr_0 [i_0] [i_0 + 1]);
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] &= ((!((((arr_4 [i_1]) / (arr_4 [i_1]))))));
        arr_6 [i_1] = (((arr_4 [i_1]) & -var_2));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
    {
        var_21 = (arr_4 [i_2]);
        var_22 = (min(var_22, var_1));
    }
    var_23 = var_12;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            {
                var_24 += ((~(arr_12 [10] [i_4 - 3] [10])));
                var_25 = var_14;
                arr_14 [12] [i_4] = (!-37);

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    arr_18 [i_4] [i_4] [i_4] = ((~(((arr_8 [i_5] [i_4 - 2]) ^ (arr_8 [i_3] [i_4])))));
                    var_26 &= ((-44 ? 254250522 : 4294967295));
                }
                for (int i_6 = 1; i_6 < 13;i_6 += 1)
                {
                    arr_21 [i_6] [i_4] [i_4] [8] = ((((arr_8 [i_6 - 1] [i_4 - 3]) + (arr_19 [i_6] [i_3] [i_4 - 1] [i_3]))) >> (((arr_8 [i_6 - 1] [i_4 - 1]) - 1869029581)));
                    var_27 = (max(var_27, (((((-(arr_8 [18] [i_4 - 2]))) < (((0 ? 14 : 114))))))));
                    var_28 = (((((arr_3 [i_6 - 1]) ? (arr_13 [i_4] [11]) : (arr_19 [i_3] [i_3] [i_3] [i_3]))) > (arr_12 [i_4] [i_4] [i_4 + 1])));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 13;i_8 += 1)
                        {
                            {
                                arr_28 [i_8] [i_4] [5] [i_4] [i_3] = ((((((((arr_16 [i_8] [2] [i_4] [i_3]) ? 843754215 : 226))) || ((((arr_16 [i_8] [i_7] [i_6 + 1] [i_3]) / var_14))))) && (((var_9 ? (min(var_6, var_13)) : (arr_4 [i_6]))))));
                                arr_29 [i_7] [i_4] [i_6] [i_8 - 3] [i_8 - 2] [i_4] [i_6] = (-(arr_11 [i_8] [i_7] [10]));
                                arr_30 [i_3] [i_3] [i_4] [i_3] [i_3] = arr_26 [i_4 - 2];
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
