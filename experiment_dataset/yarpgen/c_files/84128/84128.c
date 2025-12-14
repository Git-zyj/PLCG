/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (((((!var_7) && var_7)) || ((max((!var_11), var_4)))));
    var_13 = (((-(max(var_5, var_11)))) - (var_6 || 850799132));
    var_14 = var_4;
    var_15 = (min((var_9 >= -var_11), -116));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = var_9;
        var_17 = ((max(1251791021, ((max(var_10, var_6))))));
        var_18 = ((((max(var_8, var_3)) | (3043176275 | var_5))));
    }
    #pragma endscop
}
