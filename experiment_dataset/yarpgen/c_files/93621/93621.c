/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93621
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93621 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93621
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = (min(var_12, var_10));
    var_13 = (((((0 ? 1 : 1))) ? var_5 : (((max(var_9, (!0)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_14 -= (max(((((max((arr_0 [i_0]), 65527))) / (((var_5 >= (arr_2 [8] [8])))))), ((~(arr_0 [i_1 - 1])))));
                arr_4 [i_0] [i_1] = 629326274;
            }
        }
    }
    var_15 = var_9;
    #pragma endscop
}
