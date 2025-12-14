/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(var_20, (((max(78, 7647150441443267298))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_21 = (min(var_21, -881032029));
                var_22 = arr_2 [i_0];
            }
        }
    }
    #pragma endscop
}
