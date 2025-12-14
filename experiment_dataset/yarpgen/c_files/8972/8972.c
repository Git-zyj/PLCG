/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8972
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((max(var_8, 3802)));
                arr_7 [4] [i_1] = (arr_5 [1] [i_0 + 1] [i_0 + 1]);
                var_10 = 2474;
            }
        }
    }
    var_11 += 25428;
    #pragma endscop
}
