/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84567
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min(var_12, (var_1 == var_10)));
    var_13 = var_8;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (9223372036854775783 > 251752838);
                    var_15 = ((arr_1 [i_1 - 4] [i_1]) * 0);
                }
            }
        }
    }
    var_16 = (min(var_16, var_9));
    #pragma endscop
}
