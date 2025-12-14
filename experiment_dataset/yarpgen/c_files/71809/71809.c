/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71809
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71809 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71809
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_18 *= 1;
                var_19 = (max(var_19, ((max(-0, (min(1193317447, 11951161942403904151)))))));
            }
        }
    }
    var_20 = ((((((var_15 ? -1 : 11)))) >= var_13));
    #pragma endscop
}
