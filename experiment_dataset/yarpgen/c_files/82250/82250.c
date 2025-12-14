/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (((((((var_8 ? 22904 : var_0))) ? (~var_13) : var_1))) ? ((~((1879048192 ? 4564480376265531190 : var_8)))) : ((((!(((var_16 ? 25024 : 112))))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_19 = ((-((1 ? ((((arr_1 [i_0]) ? (arr_0 [i_0]) : 2905))) : ((-18 ? 687898067 : 1474101803))))));
        var_20 &= ((+(((~var_7) ? ((687898060 ? var_2 : var_16)) : -var_8))));
    }
    #pragma endscop
}
