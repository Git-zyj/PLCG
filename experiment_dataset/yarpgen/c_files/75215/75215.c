/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75215
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_13 ? 6318442751998952776 : ((((var_16 || (39384 % var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_0] [8] [i_3] [i_0] = var_11;
                                arr_14 [i_0] [i_1] [i_2] [i_2] [i_0] [i_3] [i_2] = (arr_9 [i_0] [i_1] [7] [i_1] [i_4 - 2]);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 12;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_18 = (-((((max(215, -77))) * var_1)));
                                var_19 = (((arr_3 [i_1] [i_6] [i_1]) ^ ((((((arr_0 [i_1]) ? var_6 : 4)) + (arr_4 [6] [6]))))));
                                arr_23 [i_5] [i_5] |= ((((106 ? (arr_7 [i_6 - 1] [i_7 + 1]) : (arr_19 [9]))) >= var_4));
                            }
                        }
                    }
                }
                var_20 ^= var_3;
            }
        }
    }
    #pragma endscop
}
