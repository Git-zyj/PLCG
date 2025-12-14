/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5945
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_15 = 1534546556;
                arr_4 [i_0] [i_0] [14] = 1108135683;
                var_16 = 1902542702;
            }
        }
    }
    var_17 = var_5;
    #pragma endscop
}
