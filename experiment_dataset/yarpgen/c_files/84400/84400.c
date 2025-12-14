/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_15 = var_10;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 8;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_16 = (~0);
                                var_17 = (max(3263932685, (((((var_9 ? 255 : -5)) / 15848490490958428366)))));
                            }
                        }
                    }
                }
                var_18 = ((((var_10 || var_13) ? ((var_9 ? 255 : var_10)) : 2)));
                arr_11 [3] [i_1] = (((((((arr_0 [i_1]) < 6))))) + ((~((var_2 ? var_11 : (arr_8 [i_0] [i_1] [i_0] [i_0]))))));
            }
        }
    }
    var_19 = (min((max((var_9 / 102), (max(var_7, 246)))), (~var_14)));
    #pragma endscop
}
