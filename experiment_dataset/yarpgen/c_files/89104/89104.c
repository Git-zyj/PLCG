/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89104
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_15 = (max(var_15, ((min((max(((max(var_2, (arr_4 [6] [i_1])))), (max(var_9, var_6)))), (((var_13 / ((max(44601, 2437783475)))))))))));
                var_16 = (min(var_16, (~var_9)));
            }
        }
    }
    var_17 = (max(var_3, var_14));
    #pragma endscop
}
