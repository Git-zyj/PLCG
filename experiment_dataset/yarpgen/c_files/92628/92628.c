/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92628
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_0 ^ var_8);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_12 = ((-1 ? 1 : 32736));
                arr_5 [i_0] = (((var_7 && var_7) - (19 < -1)));
            }
        }
    }
    var_13 = ((((-55023 >= (min(var_10, var_4)))) ? var_2 : (var_6 * var_10)));
    var_14 = (max(var_14, (42233 * var_3)));
    var_15 = 55031;
    #pragma endscop
}
