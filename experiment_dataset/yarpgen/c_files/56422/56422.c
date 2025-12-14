/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (~3553848824);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_14 = ((-(arr_1 [i_0])));
                    var_15 ^= (arr_4 [i_0]);
                    var_16 = (max(var_16, ((max(741118472, (~13604885094057186952))))));
                    arr_10 [i_0] [i_0] [i_1] [i_2] = (((var_9 + 2147483647) >> (((var_6 + 16) - 105620390))));
                }
            }
        }
    }
    #pragma endscop
}
