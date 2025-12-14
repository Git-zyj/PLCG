/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 18;i_3 += 1)
                    {
                        var_10 |= ((((((arr_5 [i_1 - 1] [i_3 + 1]) ? (arr_5 [i_1 - 1] [i_3 + 1]) : (arr_5 [i_1 - 1] [i_3 + 1])))) && (arr_9 [i_0] [10] [i_2] [i_3 - 1])));
                        arr_10 [i_1] = (arr_0 [i_0]);
                    }
                    var_11 = 21;
                    var_12 ^= ((49452 ? 5035 : 4));
                    var_13 = -var_5;
                }
            }
        }
    }
    var_14 = (21281 ^ (max((var_6 && var_7), ((var_5 ? -1577776253 : var_4)))));
    var_15 |= var_6;
    var_16 = (max(var_16, var_6));
    #pragma endscop
}
