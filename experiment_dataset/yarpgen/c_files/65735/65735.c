/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (min(((76 ? (var_6 + var_2) : 633511083)), (((max(var_1, var_12))))));
    var_15 = (((~(~-1))));

    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = -79;
        arr_4 [i_0] [i_0] = ((((min(78, 78))) && 12693581461692871639));
    }
    #pragma endscop
}
