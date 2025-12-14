/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(((var_9 | var_5) ^ var_4))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (~var_9);
                var_12 = (min(var_12, 2247401767174144));
            }
        }
    }
    #pragma endscop
}
