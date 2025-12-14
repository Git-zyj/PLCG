/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73571
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (max((((((min(2485732408629863098, var_1))) && var_9))), ((var_6 ? (((var_6 ? 1 : var_5))) : 7795019983665312194))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_13 = ((!(((25757 ? 15961011665079688518 : 1)))));
                                arr_13 [i_4] [i_1] [i_1] [10] &= ((~(min(var_4, (arr_10 [i_3 - 1] [i_3 - 1] [i_3] [i_3 - 1] [i_1])))));
                                var_14 = ((-(((arr_8 [i_0] [i_1] [i_2] [i_3]) ? (~var_4) : var_0))));
                                var_15 = ((((((2485732408629863098 && (arr_4 [i_3] [i_0] [i_0]))))) ? var_2 : (((!((max(2485732408629863098, var_3))))))));
                            }
                        }
                    }
                    arr_14 [i_0] = (arr_9 [i_0] [i_0] [i_0] [10]);
                }
            }
        }
    }
    #pragma endscop
}
