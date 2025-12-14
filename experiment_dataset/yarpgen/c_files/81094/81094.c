/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81094
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [10] [2] = (((-var_10 ? var_13 : var_2)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_12 [i_3] = var_7;
                            var_18 &= ((!(arr_3 [i_0])));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
