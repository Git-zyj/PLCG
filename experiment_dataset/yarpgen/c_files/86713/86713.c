/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86713
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86713 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86713
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        var_19 = max((arr_9 [i_0] [i_0] [i_1] [i_2] [i_2 + 1] [9]), (arr_2 [i_0]));
                        var_20 = (min(var_20, (((((((arr_7 [i_0] [i_0] [i_0]) / ((var_10 / (arr_6 [i_1] [i_2] [1])))))) ? (arr_0 [i_0]) : 6501230969911469959)))));

                        /* vectorizable */
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            var_21 = (max(var_21, (~2047)));
                            arr_13 [1] [i_1] [i_1] [i_3 + 1] [i_4] [i_3] [i_1] = (arr_12 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_3 + 1] [i_2 + 1] [i_3]);
                            var_22 = ((~(15147912831788025375 | 1)));
                        }
                        var_23 = (((((~var_17) ? 131071 : ((var_18 ? var_18 : 3298831241921526236))))) || -2047);
                    }
                    var_24 = min((((min((-127 - 1), (arr_5 [i_1] [i_1]))))), (max((1 ^ 0), (arr_9 [i_0] [3] [i_0] [1] [3] [3]))));
                }
            }
        }
    }
    var_25 = (((1 | 1) >> (var_2 - 55409)));
    #pragma endscop
}
