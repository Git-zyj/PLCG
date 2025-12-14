/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((((!((min(3, var_6))))) ? var_6 : (1 > var_0)));
    var_19 = (max(var_19, var_15));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 += (arr_3 [i_0] [4] [i_0]);
                var_21 = 64;
            }
        }
    }
    var_22 = var_12;
    #pragma endscop
}
