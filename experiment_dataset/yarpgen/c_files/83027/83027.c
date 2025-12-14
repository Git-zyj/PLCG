/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_1;
    var_12 = (max(-32742, (!var_1)));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                var_13 = -6141639698229343407;
                arr_6 [i_0] [16] = (((((1402094439697744846 ? 1 : 0))) <= ((((((min(var_3, var_0))) || 4279232675876125728))))));
            }
        }
    }
    #pragma endscop
}
