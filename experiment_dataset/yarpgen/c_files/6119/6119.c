/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6119
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6119 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6119
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_7 [i_0] = (~var_16);
                var_19 -= ((!(((0 ? (((-(arr_6 [i_0] [i_0])))) : (arr_4 [15] [15]))))));
                var_20 = (((~-503316480) || ((((~-13078) - (arr_3 [i_0] [i_0] [i_0]))))));
            }
        }
    }
    var_21 ^= -var_7;
    #pragma endscop
}
