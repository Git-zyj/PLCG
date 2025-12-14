/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5877
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5877 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5877
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_3] = (4294967295 ^ 1);
                                var_12 *= (~((~((~(arr_9 [i_0 + 1] [i_1] [i_2] [i_3]))))));
                            }
                        }
                    }
                }
                arr_15 [i_1] [13] = (((((arr_10 [i_1] [i_1] [i_1] [13] [i_1] [i_1]) ? (1544259193 * 1101882887916944815) : (arr_8 [i_0] [1] [i_1] [7])))) || 11135502879460269167);
            }
        }
    }
    var_13 = (max(644785453, 73672264));
    #pragma endscop
}
