/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96189
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_0] = (max(1, 255));
                var_10 += (max(((var_9 / ((min(var_7, (arr_0 [i_0 + 2])))))), var_0));
            }
        }
    }
    var_11 = max(255, -2);
    var_12 = (((max(var_0, (max(var_9, var_3))))) && var_0);
    var_13 = var_7;
    #pragma endscop
}
