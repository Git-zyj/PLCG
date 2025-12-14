/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        var_20 = (min((((((arr_1 [i_0]) ? var_13 : -4768757606959971054)))), 2396365713));
        arr_3 [i_0] = var_2;
        arr_4 [i_0 + 1] = (((max((arr_2 [i_0 - 1]), 40093811))));
        var_21 = (min((arr_0 [i_0] [i_0]), ((((!2049600793) ? ((var_7 ? -4008 : -1016)) : (arr_2 [i_0]))))));
    }
    var_22 = var_5;
    #pragma endscop
}
