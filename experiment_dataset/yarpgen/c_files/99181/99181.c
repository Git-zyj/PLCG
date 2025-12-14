/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99181
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
                var_15 = (((+(min((-2147483647 - 1), var_11)))) / ((var_10 ? 2147483647 : ((min(23712, 23712))))));
                var_16 = var_14;
                var_17 = (~41824);
                var_18 = ((!((((-9223372036854775807 - 1) ^ (min(0, (arr_0 [i_1] [i_1]))))))));
            }
        }
    }
    var_19 = (((min(var_3, (1395705886 <= 0)))) ? var_0 : ((((min(-1103349544, 0))) ? ((-1103349543 ? (-32767 - 1) : var_7)) : ((min(var_13, var_10))))));
    var_20 ^= var_5;
    #pragma endscop
}
