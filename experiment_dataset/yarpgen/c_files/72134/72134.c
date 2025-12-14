/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_6;

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = arr_0 [i_0];
        arr_3 [i_0] [i_0] |= (((min(var_12, var_2)) ? (((max(235309849, (arr_0 [i_0]))))) : ((235309840 ? (max((arr_0 [i_0]), -3197332971227477559)) : ((((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0 + 1]))))))));
        arr_4 [i_0] [i_0] = (((min(((var_8 / (arr_0 [i_0]))), var_7)) / (((arr_1 [i_0 + 1] [i_0 + 1]) ? 77 : 1))));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_14 = (min(var_14, ((((((arr_5 [i_1]) ? (~1) : (~1)))) ? var_1 : (1 <= -32746)))));
        arr_7 [11] [i_1 - 2] = (arr_5 [i_1 + 2]);
        var_15 = var_6;
    }
    #pragma endscop
}
