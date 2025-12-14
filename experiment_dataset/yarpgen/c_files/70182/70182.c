/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70182
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70182 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70182
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_7, (~var_10)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, ((min((((max(8302862003789910011, 8302862003789909990)) / (min(15, -8302862003789909985)))), ((((min((arr_0 [i_1]), (arr_3 [0]))) * (-1030419023 == var_6)))))))));
                    var_21 -= (min((arr_7 [i_2] [i_2] [i_2]), (((arr_1 [i_0]) ? var_6 : 1))));
                }
            }
        }
    }
    var_22 = var_6;
    var_23 ^= var_0;
    var_24 = (var_3 == var_15);
    #pragma endscop
}
