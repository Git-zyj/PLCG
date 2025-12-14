/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74820
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (((26943 * (arr_5 [i_0] [i_1 - 2]))))));
                var_16 = var_2;
                var_17 = (max(-var_10, (var_11 * var_10)));
            }
        }
    }
    var_18 = (((2626884785 * 1668082510) ? (max(var_8, var_1)) : var_5));
    #pragma endscop
}
