/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62379
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62379 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62379
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 -= (max(((max(var_14, var_7))), ((min((160 ^ 49152), var_1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_16 = (min((!4064), (arr_2 [i_1])));
                var_17 = (arr_1 [i_0]);
            }
        }
    }
    var_18 = var_1;
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 18;i_4 += 1)
            {
                {
                    var_19 = var_12;
                    var_20 = (49152 & 49143);
                    var_21 = 1;
                }
            }
        }
    }
    #pragma endscop
}
