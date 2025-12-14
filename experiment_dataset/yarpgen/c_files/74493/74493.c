/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [i_0] = (min((arr_4 [1] [i_0]), ((-(arr_4 [14] [i_0])))));
                var_10 = (+(((arr_0 [i_1]) ? (arr_3 [i_0]) : (arr_3 [i_0]))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            arr_12 [5] [i_0] [5] [i_2] [i_3] [i_3] = var_3;
                            var_11 ^= (min((((((arr_0 [i_0]) / (arr_10 [20] [20] [20] [20]))) & ((var_9 >> (var_0 - 374366841))))), (((!var_4) % var_2))));
                        }
                    }
                }
            }
        }
    }
    var_12 = var_2;
    #pragma endscop
}
