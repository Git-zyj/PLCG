/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93598
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93598 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93598
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (!0);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_16 = (((~1) & ((var_1 & (arr_11 [i_1] [15])))));
                                arr_15 [i_1] [i_2] [i_3] [i_4] = (((!(!1930405144))));
                                arr_16 [i_1] = ((((!((max(1, (arr_2 [i_3])))))) ? (((((var_11 ? var_11 : 7125600967302396031))))) : ((((max((arr_11 [i_1] [i_1]), -1))) ? 160 : ((4655988351695234588 ? var_8 : 9348))))));
                                var_17 = (arr_11 [i_1] [i_1]);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_22 [i_5] = (min((((((max(var_10, var_10))) ? (((max((arr_19 [i_5]), 9348)))) : ((1 ? (arr_17 [i_5]) : 0))))), 1166506996485155530));
                var_18 = (max(var_18, var_11));
            }
        }
    }
    #pragma endscop
}
