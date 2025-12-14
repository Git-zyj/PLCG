/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59714
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59714 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59714
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] = (~((-25338 ? 1 : (arr_1 [i_0]))));
        var_16 = 7;
        arr_4 [i_0] = 1004018782;
    }
    var_17 = ((((((var_6 ? 4092 : var_11)))) ? (((44600 | var_5) ? var_7 : (((165 ? 1568097428 : 902160275))))) : var_13));
    var_18 = ((var_2 == (min(((4092 ? 4294963195 : -16777216)), -1992201478))));
    var_19 = ((~(((~4294963202) ? (~var_15) : (8340712794505633178 & var_4)))));
    #pragma endscop
}
