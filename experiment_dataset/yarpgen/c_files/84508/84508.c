/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 8;i_2 += 1)
            {
                {
                    var_19 ^= 1;
                    var_20 |= (~-967671042);
                }
            }
        }
    }

    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        var_21 &= ((1023 ? (((var_9 ^ var_8) ^ (arr_8 [4]))) : (((((arr_7 [i_3]) || ((max((arr_7 [i_3 - 2]), var_18)))))))));
        var_22 = 104;
        var_23 = 2047;
    }
    #pragma endscop
}
