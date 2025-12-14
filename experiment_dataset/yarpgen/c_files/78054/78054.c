/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78054
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78054 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78054
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_10;
    var_18 -= var_12;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 *= ((((((arr_2 [i_0] [1]) || (var_2 && 1)))) & (((arr_4 [i_0]) & 1))));
                    var_20 = (max(var_20, (((0 ? 1 : 1)))));
                    var_21 -= (!var_10);
                }
            }
        }
    }
    var_22 = (max(var_22, (~var_8)));
    #pragma endscop
}
