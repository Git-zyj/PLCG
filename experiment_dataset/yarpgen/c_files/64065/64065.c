/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64065
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64065 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64065
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_13 = (min(var_13, ((~((288230375883276288 ? (arr_2 [i_2 + 1] [i_2 + 1] [i_2 - 1]) : (arr_2 [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                    var_14 ^= ((~(7834806224846024069 != 5016772855534767541)));
                }
            }
        }
    }
    var_15 = var_1;
    #pragma endscop
}
