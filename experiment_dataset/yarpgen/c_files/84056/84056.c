/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_15 = ((!((min(var_0, (arr_0 [i_0] [i_0]))))));
        var_16 = ((65519 ? -2070322620 : -611527330192370924));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_5 [i_1] = (arr_3 [i_1]);
        var_17 = (((~(~var_1))) / var_5);
    }
    var_18 = -var_6;
    #pragma endscop
}
