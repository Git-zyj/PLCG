/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59977
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((var_12 || var_5) << (var_5 + 163904774)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            var_17 = var_10;
                            arr_10 [i_0] [i_3] = (max(14468700974731036523, ((((arr_3 [i_0] [i_3]) - (arr_0 [i_0]))))));
                        }
                    }
                }
                var_18 = (11 + 2077278626);
                var_19 += (-(arr_3 [i_1] [i_1]));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_20 = (min(var_20, var_4));
                            var_21 = (arr_13 [i_0] [i_1] [i_4] [15]);
                        }
                    }
                }
                var_22 = (arr_9 [i_0] [i_1] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
