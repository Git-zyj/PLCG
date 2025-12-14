/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56142
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56142 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56142
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        var_20 = ((8 * (!35)));
        var_21 = (max(((~(arr_2 [i_0]))), -var_8));
        var_22 = ((min(7, -2)));
        arr_3 [i_0] = ((((var_14 <= (arr_2 [i_0]))) || ((max(((min(var_13, var_19))), (min((arr_0 [i_0]), var_15)))))));
    }
    var_23 = var_10;
    var_24 = 5233;
    var_25 = ((-((((max(var_15, var_7))) ? var_11 : var_14))));
    #pragma endscop
}
