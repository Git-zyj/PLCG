/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = 127;
                var_12 = min((((~var_2) ? -843255630 : (arr_0 [i_0] [i_1]))), var_11);
            }
        }
    }
    var_13 = (((((((min(-127, var_11))) ? var_5 : 6014943945680603082))) && (((((var_8 ? var_1 : 63)) & var_9)))));
    #pragma endscop
}
