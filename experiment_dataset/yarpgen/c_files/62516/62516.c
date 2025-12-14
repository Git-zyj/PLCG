/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 >= (73 / var_1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        var_21 = (~-6);
        arr_2 [i_0] = (!12252941605820362630);
    }
    var_22 = var_12;
    var_23 = ((((((var_3 ^ var_10) ^ ((var_5 ? var_16 : var_19))))) ? (-73 & 0) : 183));
    #pragma endscop
}
