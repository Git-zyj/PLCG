/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81912
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81912 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81912
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 17;i_1 += 1)
        {
            {
                var_19 *= (max((arr_3 [i_0] [i_1] [i_1]), var_15));
                arr_4 [i_0] [i_1] = (((((((var_2 ? 1807294526 : var_6)) > ((max(var_8, var_5)))))) >> (((min((arr_2 [i_0]), (((18446744073709551607 ? var_12 : var_3))))) - 4294967227))));
            }
        }
    }
    #pragma endscop
}
