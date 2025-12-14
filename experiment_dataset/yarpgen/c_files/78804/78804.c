/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = 13372391114371507217;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_16 = (min((min((arr_0 [i_1]), (min(var_8, 12464505532006675583)))), 1514915310));
                                arr_17 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_0] = (max((max(((min(1, 2780051985))), ((var_5 ? 21 : 4840)))), ((min((arr_9 [i_0] [i_0]), ((1 ? var_2 : 0)))))));
                            }
                        }
                    }
                    var_17 = (min((((((3 ? 8 : 233))) ? (arr_15 [i_1] [i_1] [i_1] [i_1] [i_0]) : (((min(var_10, 0)))))), 179));
                }
            }
        }
    }
    var_18 |= 1;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 13;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 10;i_6 += 1)
        {
            {
                var_19 = (min(((((min((arr_13 [i_5] [i_5]), 12464505532006675585))) ? ((948144741485354748 ? 1477042435 : (arr_20 [i_5] [i_5] [i_5]))) : (arr_6 [i_5] [i_6] [i_6]))), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])));
                arr_22 [i_5] [i_5] [i_5] = (max((max((arr_14 [i_6] [i_5] [i_6] [i_6] [i_5]), 2763793849)), (((5982238541702876023 ? (arr_14 [i_5] [i_6 + 3] [i_5] [i_6] [i_5]) : (arr_14 [i_5] [i_5] [i_5] [i_6 - 1] [i_6 - 2]))))));
                /* LoopNest 3 */
                for (int i_7 = 3; i_7 < 12;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 13;i_9 += 1)
                        {
                            {
                                arr_32 [i_5] [i_5] [i_5] = (min(var_0, ((((var_14 ? 18 : 5982238541702876033))))));
                                arr_33 [i_5] [i_5] [i_7] [i_5] [i_9] = ((((min(1, 5982238541702876033))) ? ((((min(var_6, (arr_16 [i_9] [i_5] [i_5] [i_8] [i_5])))) ? (min(2418, var_2)) : (arr_29 [i_6] [i_5] [i_5] [i_7 - 1]))) : (arr_27 [i_9] [i_6 + 2] [i_7 - 1] [i_5] [i_5])));
                                arr_34 [i_9] [i_8] [i_5] [i_5] [i_5] = ((((min(((max(var_12, var_1))), (min(1, (arr_4 [i_6] [i_6])))))) | ((((min(192, 25510))) ? 1 : var_13))));
                            }
                        }
                    }
                }
                arr_35 [i_6] [i_5] = var_1;
            }
        }
    }
    var_20 = (min(((~(max(-1697556844, var_11)))), (!var_7)));
    #pragma endscop
}
