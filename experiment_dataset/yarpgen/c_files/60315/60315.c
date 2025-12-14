/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    arr_7 [i_1] = (-((2204677301164534437 + (min(var_11, 2204677301164534433)))));
                    arr_8 [i_0] [i_1 - 4] [i_0] = (max((min((max(var_6, 2204677301164534436)), 15011457456556808538)), ((max(2204677301164534430, 44471)))));
                }
            }
        }
    }
    var_19 &= (min((max(-var_16, var_7)), var_13));
    #pragma endscop
}
