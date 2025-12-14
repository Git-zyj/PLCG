/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 786
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=786 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/786
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((var_16 + 2147483647) >> (246 - 229)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                var_19 += (((arr_3 [i_0 - 1] [i_0 + 2] [16]) >= ((16711680 | (arr_4 [i_1 - 1] [20])))));
                var_20 -= ((~((((arr_0 [i_1 - 1]) || (arr_0 [i_1 + 1]))))));
                var_21 = var_0;
            }
        }
    }
    #pragma endscop
}
