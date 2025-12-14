/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88742
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= (var_9 != (((((var_4 ? var_5 : var_4))) ? var_7 : var_4)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_8 [i_1] = 1;
                var_12 = (194 > 18203941271712916912);
            }
        }
    }
    var_13 = (min(var_13, (((var_9 ? (((var_1 - (max(var_7, 1969540082123193922))))) : 242802801996634695)))));
    #pragma endscop
}
