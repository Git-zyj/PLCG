/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79942
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2] [i_1] = ((-(arr_1 [i_1 + 1])));
                    arr_10 [i_1] [i_1] = var_7;
                    var_20 = (max(var_20, ((max(((max(4, 1))), (max(18446744073709551607, 14)))))));
                }
            }
        }
    }
    var_21 = var_19;
    var_22 = (((max((min(var_10, var_5)), (var_7 + var_16))) % (max(var_6, ((var_10 << (var_8 - 14048063040525145452)))))));
    var_23 = (max(var_23, 15882677370480941500));
    #pragma endscop
}
