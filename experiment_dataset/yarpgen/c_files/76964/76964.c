/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76964
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76964 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76964
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_15 *= 0;
        arr_3 [i_0] = (((((arr_2 [i_0] [i_0]) ? var_6 : var_13)) > var_2));
        var_16 -= ((((var_11 << (var_1 - 22978))) > var_8));
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1)
    {
        var_17 = (min(var_17, (((min(var_0, var_13))))));
        var_18 = max(((var_7 - (arr_5 [i_1]))), var_8);
    }
    var_19 = var_11;
    var_20 = (max(var_11, 0));
    var_21 = var_6;
    var_22 &= ((((max((min(var_9, var_7)), var_5))) && 1687442985));
    #pragma endscop
}
