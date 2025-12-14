/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67106
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(max(-1555821905, 9082517674344791753))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_14 = ((-(((((min(20, 40))) > (~30))))));
                arr_5 [i_0] [i_0] [i_0] = (~4254749559621290722);
            }
        }
    }
    var_15 = (20 & -4666421011109079275);
    #pragma endscop
}
