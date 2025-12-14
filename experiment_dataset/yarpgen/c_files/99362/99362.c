/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_11 = ((var_2 ? ((max(1, (arr_0 [2])))) : (arr_3 [i_0 - 2] [i_0 - 2])));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_12 = 38429;
                            var_13 = (((((49191 ? 22 : 49189))) ? (min((arr_0 [i_3]), 1)) : ((164 ? var_7 : (arr_11 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3 + 1])))));
                            var_14 = (min(var_14, (((-(arr_11 [21] [21] [i_3 + 1] [2] [2] [i_3]))))));
                        }
                    }
                }
                var_15 -= (arr_2 [i_0]);
            }
        }
    }
    var_16 = (min(1, (--1)));
    var_17 = (min(var_17, 164));
    #pragma endscop
}
