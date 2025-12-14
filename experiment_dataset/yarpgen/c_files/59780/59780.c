/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_5;
    var_15 = 55;
    var_16 = (((77 << (56 ^ 51))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                arr_8 [4] [i_0] [i_1] = (((-((min(32767, 32767))))));
                var_17 = (min(var_17, (min((((~-5715437068789596070) ? var_7 : (((max(-32764, var_13)))))), ((((min((arr_0 [i_1]), var_7)) <= 2941806932)))))));
            }
        }
    }
    #pragma endscop
}
