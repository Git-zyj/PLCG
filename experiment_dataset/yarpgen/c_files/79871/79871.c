/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {
                var_17 = var_8;
                arr_4 [i_0] [i_0] [i_1] |= var_3;

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_18 = (max(var_18, ((-(((var_10 % var_7) ? var_5 : (arr_0 [i_1])))))));
                    var_19 = (!1);
                    var_20 |= (((((max(var_15, 1)))) * (max((!var_14), ((-(arr_6 [i_0] [i_0] [i_1 + 1] [i_0])))))));
                    var_21 = (max(var_21, (arr_5 [i_0])));
                }
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_22 = (max(var_22, ((((~var_7) ? (1229424741 + var_6) : (((arr_6 [i_0] [i_0] [i_0 - 2] [i_1]) ? (arr_5 [i_0]) : (arr_5 [i_0]))))))));
                    arr_12 [i_0] [i_3] [i_0] = (max((min(519726955022219754, (arr_10 [i_0] [i_0 + 1] [i_3] [i_0]))), (((var_6 ? (arr_10 [i_0 - 1] [i_0 - 1] [i_3] [i_3]) : (arr_10 [8] [i_0 + 1] [i_3] [1]))))));
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_0 + 1] [i_0 + 1] [i_4] [i_0 + 1] [i_0 + 1] [14] |= (((((355607618 ? -1610065227882085842 : -1685041044105580725))) ? (min((arr_0 [i_5]), (arr_0 [i_4]))) : (((265322049 ? 1 : 82)))));
                            arr_18 [i_5] = (arr_7 [i_0] [i_1] [i_0] [i_5]);
                        }
                    }
                }
                var_23 = (((((arr_10 [i_1 + 1] [i_1 + 1] [1] [i_1 + 1]) ? var_1 : (arr_10 [i_1 - 1] [i_1 - 1] [22] [i_1 + 2]))) <= ((((arr_10 [i_1 - 1] [i_1 + 2] [14] [i_1 + 2]) || var_3)))));
            }
        }
    }
    var_24 = var_1;
    #pragma endscop
}
