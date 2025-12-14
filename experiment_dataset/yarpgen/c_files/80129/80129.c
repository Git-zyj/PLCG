/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80129
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min(var_13, (!32768)))) && (((-10873 % (var_10 || 32768))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_17 = ((-var_14 ? ((127 ? -576460752303423487 : ((((arr_1 [i_0 + 2] [i_1]) ? var_0 : (arr_2 [i_0 + 2] [13] [i_0 + 2])))))) : var_9));
                arr_6 [i_0] = ((((~var_10) | (arr_2 [13] [i_1 - 1] [i_1 - 1]))));
                var_18 ^= ((+(((562949684985856 - var_9) + (arr_3 [i_0 + 2])))));
            }
        }
    }
    var_19 -= var_12;
    #pragma endscop
}
