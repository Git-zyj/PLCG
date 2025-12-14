/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] = (((1642997077258136501 ? 1 : var_2)));
        var_15 = (min(var_15, ((((arr_0 [3]) ? (max(var_11, (arr_3 [i_0]))) : ((((var_5 * 1) + var_2))))))));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        arr_8 [i_1] [i_1] = ((-((((min(1, (arr_0 [i_1])))) ? var_7 : ((var_14 ? 491520 : (arr_2 [i_1])))))));
        arr_9 [2] [8] |= (arr_6 [4]);
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_3 = 3; i_3 < 8;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_16 = (491526 || 491503);
                        var_17 = ((!((622462657 && (arr_12 [i_3 - 1] [i_3] [i_2])))));
                        var_18 = ((((12463 / (arr_13 [i_2])))));
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 10;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 9;i_7 += 1)
            {
                {
                    var_19 = var_0;
                    arr_25 [i_2] [i_6] [i_6] = 18446744073709551615;
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 10;i_9 += 1)
                        {
                            {
                                arr_30 [3] [i_2] [i_2] [i_8] [i_9] = ((((((491503 & 31981) ? (!var_8) : (arr_29 [1] [i_6] [i_2] [i_8] [1])))) ? ((((-(arr_15 [i_2] [i_2] [i_2]))) - ((491520 ? 76 : 155)))) : ((-97 ? 37 : 33698))));
                                var_20 -= -1;
                            }
                        }
                    }
                    var_21 -= (min(((90 / (arr_26 [i_6] [i_2] [i_7] [i_7 + 1]))), var_0));
                }
            }
        }
        arr_31 [i_2] = (arr_26 [i_2] [3] [i_2] [i_2]);
    }
    var_22 = (max(((1 ? ((max(var_9, var_10))) : 1)), var_2));
    var_23 = (max((((!var_5) & -25843)), (((1 < ((min(var_9, var_9))))))));
    #pragma endscop
}
