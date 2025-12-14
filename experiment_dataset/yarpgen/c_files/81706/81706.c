/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 13;i_1 += 1)
        {
            {
                arr_8 [2] [16] = arr_2 [i_0 + 1];
                arr_9 [7] [13] = (max((((arr_1 [i_0 - 1] [i_0 + 1]) - (~var_1))), ((-(((arr_0 [15]) ? 86 : (arr_6 [8] [12])))))));
                arr_10 [13] [15] [1] = (((((max(var_6, (max(var_0, -6878)))))) | ((+(min((arr_5 [14] [15] [8]), var_0))))));
                arr_11 [4] = ((var_0 & ((((-127 - 1) == var_3)))));
            }
        }
    }
    var_13 |= var_8;
    #pragma endscop
}
