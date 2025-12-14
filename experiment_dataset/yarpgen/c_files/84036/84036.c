/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84036
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_9;
    var_14 = (min(var_14, var_1));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = (((((1 ? 210 : var_10))) ^ (arr_4 [i_1 - 1])));
                var_15 = ((((((max(1, 1)) ? (((arr_2 [0]) / var_0)) : (((max(var_12, var_9))))))) ? ((~((var_3 ? var_7 : var_7)))) : var_1));
            }
        }
    }

    for (int i_2 = 0; i_2 < 21;i_2 += 1)
    {
        var_16 ^= (max(524287, 205));
        var_17 = (min(var_17, (((var_7 ? (arr_8 [i_2]) : (~var_1))))));
        var_18 = (min(var_18, var_4));
    }
    #pragma endscop
}
