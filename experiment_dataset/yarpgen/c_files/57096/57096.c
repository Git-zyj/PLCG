/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((!18446744073709551611) ? (var_8 || var_3) : -var_5)) <= var_7));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_11 = ((var_6 ? (((((arr_0 [i_0]) != ((~(arr_0 [i_0]))))))) : ((~((0 ? 12 : 5))))));
        var_12 = var_4;
    }
    #pragma endscop
}
