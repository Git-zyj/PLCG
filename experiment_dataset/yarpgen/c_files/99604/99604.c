/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 14;i_4 += 1)
                        {
                            {
                                var_18 = (max(var_18, ((min((((!(arr_10 [i_2] [i_3 - 1] [i_3] [8] [i_4 + 2])))), (max((arr_1 [i_4 + 3]), (arr_10 [i_2] [i_3 - 2] [i_2] [i_4 + 1] [i_4 + 1]))))))));
                                var_19 ^= ((((min((arr_8 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4 - 1]), var_8))) || ((min(((24320 ? var_9 : var_15)), -28903)))));
                            }
                        }
                    }
                }
                arr_13 [i_1] [i_1] [i_0] = -33;
                var_20 = (min(var_20, (((-(((arr_1 [15]) ? var_0 : 28903)))))));
                var_21 = (min(var_21, (max((((var_4 + (arr_10 [i_1] [i_1] [i_0] [i_1] [i_0])))), (((min(var_1, var_5)) + 28903))))));
            }
        }
    }
    var_22 = (var_11 == var_9);
    var_23 = (var_11 & var_13);
    #pragma endscop
}
