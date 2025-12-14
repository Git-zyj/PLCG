/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (arr_4 [i_1 + 1])));
                    var_15 = var_1;
                    var_16 = (min(var_16, 26));
                }
            }
        }
    }
    var_17 = ((~(~var_0)));
    #pragma endscop
}
