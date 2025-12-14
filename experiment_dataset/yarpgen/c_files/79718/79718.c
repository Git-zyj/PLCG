/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79718
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_19 = ((((-27 ? 1 : 2440672983)) >= 26));
                var_20 = (min(1480, 1));
            }
        }
    }
    var_21 = (min(var_21, ((min(-124, var_18)))));
    var_22 = (((max((var_3 | 113), (var_14 != 1490)))) & (min(var_18, ((max(var_16, var_17))))));
    var_23 = (((((min(1, 1383172554)) < (max(var_0, 62)))) ? ((var_17 ? var_16 : var_16)) : 70439673));
    #pragma endscop
}
