/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87506
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= var_3;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_18 -= (arr_1 [i_0]);
                var_19 = -240;
                var_20 += ((((max((arr_2 [i_0 - 1] [i_0 - 2] [i_0 + 1]), var_12))) ? (((max(0, 70)))) : (arr_1 [i_0 + 1])));
            }
        }
    }
    #pragma endscop
}
