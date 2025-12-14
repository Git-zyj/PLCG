/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_17 = (max(0, ((((~(arr_4 [i_1] [i_0] [i_0 + 4]))) & 14))));
                arr_6 [i_0] [i_1] [10] = arr_2 [i_0] [i_1] [i_0];
                var_18 *= (min(((min((arr_1 [i_0 - 1] [i_1]), (arr_1 [i_0 + 2] [i_1])))), ((var_15 ? var_4 : (arr_1 [i_0 + 4] [i_1])))));
            }
        }
    }
    var_19 = var_4;
    var_20 = 14;
    var_21 = (min((!var_16), 97));
    #pragma endscop
}
