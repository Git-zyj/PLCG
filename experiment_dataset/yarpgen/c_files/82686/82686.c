/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!(min((!var_17), (116 < var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = -1642687664;
        arr_3 [i_0] [i_0] = var_5;
    }
    for (int i_1 = 2; i_1 < 18;i_1 += 1)
    {
        arr_6 [i_1] &= ((-(((arr_4 [i_1 - 2]) / (arr_4 [i_1 - 2])))));
        var_22 = (min(var_22, (1479986423 % 99)));
    }
    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        var_23 = (arr_7 [i_2] [i_2]);
        var_24 = (max((min(48, (arr_4 [i_2]))), (max((arr_4 [i_2]), var_14))));
    }
    var_25 = var_15;
    var_26 = var_16;
    var_27 = (min(1002580886, 110));
    #pragma endscop
}
