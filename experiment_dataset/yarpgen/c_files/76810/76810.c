/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76810
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = max(var_15, (min(var_4, -2147483627)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 15;i_1 += 1)
        {
            {
                var_21 = (((((arr_7 [i_0] [i_1]) ? (max(var_19, 23)) : (-23 && var_6))) << ((max(3, (arr_7 [i_1 + 1] [i_1 + 1]))))));
                arr_8 [i_1] [i_1] = (-1657230756390651972 - 3894057714);
            }
        }
    }
    #pragma endscop
}
