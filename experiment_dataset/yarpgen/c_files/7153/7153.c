/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7153
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7153 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7153
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= ((952220598 ? 24 : 78));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    var_15 = (max(var_15, (arr_3 [i_1 + 1] [1])));
                    var_16 &= (~((min((arr_7 [i_0] [i_0] [i_0]), -30))));
                }
            }
        }
    }
    var_17 = (((((-var_4 ? var_1 : (var_1 ^ var_1)))) && 14720543259201446693));
    #pragma endscop
}
