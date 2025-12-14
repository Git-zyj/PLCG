/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56223
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56223 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56223
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= var_9;

    /* vectorizable */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        var_18 += (((var_16 ? 5 : var_3)));
        var_19 = (min(var_19, ((((arr_0 [i_0 - 2] [4]) && (arr_0 [i_0] [0]))))));
        arr_2 [i_0] = (arr_0 [i_0 - 3] [i_0]);

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_20 = ((5 ? 55769 : 55769));
            arr_6 [i_0] = (~(arr_4 [i_0] [i_0] [i_0]));
            var_21 = ((((((arr_1 [i_0] [i_0]) ? (arr_5 [i_0]) : 37928))) ? var_6 : 5962548669806795195));
        }
    }
    #pragma endscop
}
