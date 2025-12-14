/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((((var_11 ? var_18 : var_7))) ? ((255 ? var_5 : -2449607144224439636)) : var_11))) & 13723023558957764574));

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = ((!(((((!(arr_2 [i_0] [i_0]))) ? (!4723720514751787033) : (min((-9223372036854775807 - 1), 2449607144224439626)))))));
        var_20 = (((arr_0 [11]) / (arr_1 [i_0 + 1])));
    }
    var_21 = ((!((!(57 / var_2)))));
    #pragma endscop
}
