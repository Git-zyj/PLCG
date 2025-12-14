/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77451
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_16 = (min(var_12, (max(-643282965416227935, (arr_0 [i_1])))));
                            arr_11 [11] [i_1 + 1] [11] [i_2] = 99;
                        }
                    }
                }
                var_17 = (min(((var_4 ? 65535 : (arr_10 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_0]))), (arr_10 [i_1] [i_1] [i_1] [8] [i_1 - 1] [8])));
            }
        }
    }
    var_18 = var_7;
    var_19 = var_11;
    var_20 = ((var_15 ? 3389297034 : (var_3 << var_3)));
    var_21 = (!-var_8);
    #pragma endscop
}
