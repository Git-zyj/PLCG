/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_20 += ((((((2555959912 ? (arr_1 [i_0] [i_0]) : 0)))) ? 1 : var_16));
                var_21 = (~var_10);
                var_22 ^= (max(((1 ? -581700321 : 6992223706007316046)), (arr_1 [i_1] [i_1])));
            }
        }
    }
    var_23 = var_16;
    var_24 = var_7;
    #pragma endscop
}
