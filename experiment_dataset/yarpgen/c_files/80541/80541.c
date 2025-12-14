/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(0, ((((~var_4) | var_0)))));
    var_12 = 3994041708974715696;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            {
                var_13 ^= (arr_1 [i_0 - 3]);
                var_14 += (max((1 && 0), ((min((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3]))))));
            }
        }
    }
    var_15 &= var_2;
    #pragma endscop
}
