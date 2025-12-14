/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = var_10;
                var_12 = (max(var_12, ((min(((-(min(-4443617178584399993, var_5)))), 61253)))));
            }
        }
    }
    var_13 = var_0;
    var_14 += min(((-1806474633 ? var_10 : ((min(var_9, var_9))))), 7891807901170232005);
    #pragma endscop
}
