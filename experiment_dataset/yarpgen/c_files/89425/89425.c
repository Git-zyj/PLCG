/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_13 = ((-(min((arr_1 [i_0] [i_0]), (((arr_1 [i_0] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))))));
        var_14 |= (((((4171386135 ? (min(var_2, (arr_0 [i_0] [i_0]))) : (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? ((var_0 >> (((arr_1 [i_0] [i_0]) - 12845)))) : (arr_1 [i_0] [i_0]))) : ((-((var_8 ? var_10 : var_6))))));
        arr_2 [i_0] [i_0] = (arr_0 [i_0] [i_0]);
        var_15 = (((((((arr_1 [i_0] [i_0]) <= var_7)))) ? 65530 : var_4));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = ((98 ? 22027 : 1983079068));
        var_17 = ((((((~8191) ? var_2 : (arr_0 [i_1] [i_1])))) ? (arr_6 [i_1] [i_1]) : (((arr_6 [0] [i_1]) >> (((max(7, 8179)) - 8170))))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 10;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    var_18 *= (((((((min((arr_0 [i_1] [i_2]), (arr_9 [i_1] [i_2])))) ? (arr_1 [11] [11]) : (~-3477427534026724202)))) ? (min(var_2, (43527 % var_4))) : ((((min((arr_7 [i_1] [i_2] [5]), 1465040434))) * (max(var_8, var_4))))));
                    arr_13 [i_3] = (arr_1 [i_2 + 1] [i_2 + 1]);
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 11;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_21 [2] [i_2] [i_3] = ((((var_5 ? (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3]) ? var_1 : var_11)) : ((min(var_9, (arr_1 [i_1] [i_1])))))) & (min(var_7, var_10))));
                                var_19 = (arr_9 [i_3] [i_3]);
                            }
                        }
                    }
                    arr_22 [i_1] [i_3] [i_3] = max(((((((arr_3 [i_1]) >> (4223228053 - 4223228031)))) ? ((var_10 | (arr_15 [8] [i_3] [i_3] [i_3]))) : var_4)), 1465040433);
                    var_20 = (!1171587673);
                }
            }
        }
    }
    var_21 = min(var_6, var_7);
    #pragma endscop
}
