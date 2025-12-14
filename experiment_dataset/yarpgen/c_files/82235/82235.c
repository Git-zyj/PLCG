/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 |= var_2;
    var_16 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_17 ^= max((max(65535, 2)), (3 >= -2468430391137302498));
                var_18 = ((+((max((arr_1 [i_0 - 1]), var_8)))));
                arr_6 [i_1] = ((var_13 ? 255 : (arr_1 [i_0 - 2])));
                arr_7 [i_1] = ((!var_3) ? 7702171765167470022 : ((max((((arr_0 [i_0]) ? var_8 : 14)), (arr_1 [i_0])))));
                arr_8 [i_1] [15] [1] = (max(((((18 ? var_9 : var_5)) / (var_6 ^ var_10))), (arr_3 [i_1])));
            }
        }
    }
    #pragma endscop
}
