/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_17 = (min(var_17, (arr_2 [i_0] [i_0])));
        var_18 = arr_1 [i_0] [i_0];
        var_19 = (min(var_2, ((((-(arr_2 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [15] = (((((!((min(202463697, -1)))))) * (!65535)));
        var_20 ^= -0;
        arr_7 [i_1] [i_1] = ((((((((-(arr_4 [i_1] [i_1])))) ? ((-(arr_4 [i_1] [i_1]))) : ((min(var_2, var_10)))))) + (min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))));
        var_21 = (arr_5 [i_1] [9]);
    }
    var_22 &= ((~0) - (((var_9 > var_2) ? var_13 : (var_13 > var_5))));
    var_23 = (((-9223372036854775807 - 1) / 680875996));
    #pragma endscop
}
