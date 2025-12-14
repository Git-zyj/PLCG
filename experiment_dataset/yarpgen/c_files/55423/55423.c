/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    var_16 = ((((min((4194303 | -4194304), (min(var_14, var_8))))) ? ((((!(((1 ? 4194303 : -1))))))) : ((-1609114273 ? ((var_9 ? var_6 : var_3)) : (((1 ? var_4 : 2783952426)))))));
    var_17 *= ((var_11 ? -4194303 : ((((((min(1, -1914529277))) && var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_18 += (((((1 / (arr_3 [i_1 + 2] [i_1 + 2])))) < (arr_0 [i_1 + 1] [i_1 + 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_19 = ((!((max((arr_9 [i_0] [i_1 + 1]), (arr_7 [19] [i_1 + 1]))))));

                            for (int i_4 = 2; i_4 < 20;i_4 += 1)
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_1 + 2] [i_0] = ((var_8 ? (min((arr_12 [i_0] [i_1] [i_0] [i_3] [i_4 - 2]), var_3)) : ((((8012887727232648898 && (arr_12 [i_0] [i_0] [i_2] [i_3] [i_4 - 2])))))));
                                arr_15 [i_0] [i_2] [i_4] [i_0] [i_4] [i_1 - 1] [i_3] = ((var_5 ? ((var_13 - (arr_11 [i_0] [3]))) : -95));
                                var_20 = arr_3 [i_3] [i_2];
                            }
                            for (int i_5 = 2; i_5 < 20;i_5 += 1) /* same iter space */
                            {
                                var_21 = 1;
                                var_22 *= (min((((-(((arr_4 [20]) - var_13))))), (((arr_8 [i_1 + 1] [i_5] [i_5 - 2]) ? (arr_13 [i_1 + 4] [1] [i_1 + 3]) : (arr_13 [i_1 + 3] [2] [i_1 + 3])))));
                                var_23 ^= (~-var_13);
                            }
                            for (int i_6 = 2; i_6 < 20;i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_0] [i_0] [i_2] [i_2] [i_6] = (min((((!(((arr_4 [i_0]) < var_9))))), ((min((arr_0 [i_1] [i_2]), var_14)))));
                                var_24 |= ((~((((max(var_6, var_0))) ? var_13 : (var_13 & var_9)))));
                            }
                            arr_23 [i_0] [i_1] [i_2] [i_0] [i_3] [i_2] = var_13;
                        }
                    }
                }
                arr_24 [i_0] [5] [i_1] = ((-(((min(var_8, -3950204646985208821))))));
                arr_25 [i_0] [i_1 + 3] = (((~(max(1511014869, var_9)))));
            }
        }
    }
    #pragma endscop
}
