/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/887
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_16 = -1359921372;
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        {
                            arr_9 [i_2 + 1] [i_2] [i_1] [i_2 + 1] [i_2] [i_0] = 0;
                            var_17 = (((min((-16 > var_3), -1359921372)) == (!var_1)));
                            var_18 = (max(var_18, (arr_8 [0] [i_1] [i_2 - 1] [5] [i_1])));
                        }
                    }
                }
            }
        }
    }
    var_19 += (max((min(var_4, (max(0, 8191)))), 46152));
    var_20 += ((10335249745660795240 ? ((min(((min(39456, 0))), 8191))) : (min(var_6, var_8))));
    #pragma endscop
}
