/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6438
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6438 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6438
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] = ((1 ? 2512498898 : 1));
                arr_7 [i_0] = (((((arr_1 [i_0] [i_0]) ? var_2 : var_4)) | (((var_14 || (arr_5 [i_0] [i_1]))))));
                var_16 ^= var_11;
            }
        }
    }
    var_17 |= (((((((((var_5 ? var_8 : var_8))) ? var_15 : var_15)) + 2147483647)) << (var_6 - 2762415466)));
    #pragma endscop
}
