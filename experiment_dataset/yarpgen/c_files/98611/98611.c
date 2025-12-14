/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98611
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= (var_6 && var_18);
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] &= 1630409768;
                    arr_10 [i_0] [i_1 - 2] [i_2] [i_1] = ((~((~((var_6 ? (arr_4 [i_0 + 1]) : (arr_3 [i_0] [i_1] [i_2])))))));
                }
            }
        }
    }
    #pragma endscop
}
