/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70254
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] = (min((((-26108 ? var_6 : 174))), (((!var_1) ? (~var_2) : var_11))));
        var_14 += (((((arr_0 [i_0]) || var_1)) ? (~100) : (((!(arr_0 [i_0]))))));
        var_15 = (max(var_15, (((~(arr_0 [i_0]))))));
    }
    var_16 ^= ((+-15264306962827941685) == var_8);
    var_17 -= var_4;
    var_18 = var_7;
    var_19 = ((~((((((var_0 ? var_7 : var_12)) + 2147483647)) >> (78 - 74)))));
    #pragma endscop
}
