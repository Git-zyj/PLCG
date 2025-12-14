/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87246
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87246 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87246
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_11 |= var_10;
                    arr_7 [15] [1] [3] = ((((min(var_3, var_10))) ? (((!(((var_2 ? var_3 : 86)))))) : (var_2 / 10022)));
                }
            }
        }
    }
    var_12 = ((((min(var_8, ((1 ? -2977 : var_10))))) > (max(var_6, -1052747034))));
    #pragma endscop
}
