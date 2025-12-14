/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        var_16 = ((7558797231093719756 || var_14) && ((((7558797231093719755 ? (-127 - 1) : 17666654800294941102)))));
        arr_2 [0] = (!97);
    }
    var_17 = var_11;
    var_18 = var_2;
    var_19 = -7558797231093719763;
    #pragma endscop
}
