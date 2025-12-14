/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7389
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7389 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7389
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 ^= (((2140978550651639464 / 7) ? ((((arr_1 [i_0]) < var_8))) : -12));
        arr_2 [i_0] = 49627;
        arr_3 [i_0] [i_0] = ((~((min(var_17, (min(0, var_7)))))));
        var_20 = (((~var_16) ? (((((arr_0 [i_0]) < ((~(arr_1 [i_0]))))))) : (min(((58374 ? var_9 : (arr_0 [i_0]))), -var_6))));
    }
    var_21 = ((~(min(var_16, (max(var_6, var_9))))));
    #pragma endscop
}
