/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62971
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min((((((min(235, 0))) && var_13))), ((15258139471209627491 ? (((var_14 ? var_4 : var_8))) : (min(var_8, 0))))));
    var_19 = var_2;
    var_20 = ((min(5383684881584033450, (((var_13 >> (16100946208134168201 - 16100946208134168183)))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (arr_2 [i_0] [i_0]);
        var_22 += 75;
        var_23 -= (min((min((arr_2 [i_0] [i_0]), var_4)), -1497));
        var_24 = (min(var_24, ((((arr_1 [i_0]) ? var_4 : (arr_1 [i_0]))))));
    }
    #pragma endscop
}
