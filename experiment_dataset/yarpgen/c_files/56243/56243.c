/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56243
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (max((!4617), (max(((min(-4617, var_9))), var_3))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [1] [i_2] = var_9;
                            arr_12 [i_0 + 2] [i_1 + 2] [8] [i_2] [i_0 + 2] [3] = var_7;
                        }
                    }
                }
                arr_13 [i_0] [i_1] = (min((arr_4 [i_0] [i_1]), ((var_7 ? (arr_2 [i_0 - 2]) : (arr_8 [i_0] [i_0] [i_1] [i_0] [i_1 + 1])))));
                var_17 = (((~1) ? (min(0, (-32767 - 1))) : (((-(arr_0 [i_0 + 2] [i_1 - 1]))))));
            }
        }
    }
    #pragma endscop
}
