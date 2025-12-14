/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] = (max((((arr_7 [i_0 + 1] [i_0] [i_0]) >> var_14)), ((4421184125907483368 ^ (1 + 14)))));
                    arr_10 [i_0] [i_1 + 2] = var_9;
                }
            }
        }
    }
    var_18 = (14025559947802068267 && var_15);
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        for (int i_4 = 4; i_4 < 21;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            var_19 = (max(((max(241, 1))), ((((4421184125907483363 ? 64 : 9151314442816847872)) + 4421184125907483368))));
                            arr_22 [i_3] = var_17;
                        }
                    }
                }
                arr_23 [i_3] [i_4] = max((((var_12 ? var_13 : 0))), ((min(var_7, (arr_13 [15] [i_4])))));
                arr_24 [i_3] = ((3177921572 ? 1117045723 : 1117045737));
                var_20 = (max(156, (((((arr_18 [i_4] [i_3] [i_3]) ? 106 : (arr_21 [1] [i_4] [i_4] [i_3] [i_3])))))));
                arr_25 [i_3] [i_3] [i_4] = var_12;
            }
        }
    }
    #pragma endscop
}
