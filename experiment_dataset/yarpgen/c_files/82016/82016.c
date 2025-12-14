/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 ^= ((var_9 <= (-9223372036854775807 - 1)));
    var_11 = 9223372036854775807;
    var_12 = (max(var_5, (((-9223372036854775807 - 1) ? var_9 : (((var_7 >> (-12 + 24))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_13 = 306652643380687102;
                arr_5 [i_0] [i_0] = -0;
            }
        }
    }
    #pragma endscop
}
