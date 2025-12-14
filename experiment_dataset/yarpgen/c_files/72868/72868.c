/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((max(var_4, ((min(2673586038, (-127 - 1)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_11 = (max(var_11, ((max(var_0, var_6)))));
                var_12 = (min(((((((-127 - 1) ? -124 : var_3))) ? var_2 : (((min(127, (-127 - 1))))))), (min(var_2, (123 >= var_9)))));
                var_13 = (max(var_13, (((var_6 ? ((((((max(32587, var_9))) || 8673359821070881931)))) : (max((860193095 * 0), var_2)))))));
            }
        }
    }
    var_14 = (min(var_14, 25577));
    var_15 = ((122 ? ((((-860193095 ? 58384 : var_2)))) : (var_7 ^ var_2)));
    var_16 = (-25577 >= 6);
    #pragma endscop
}
