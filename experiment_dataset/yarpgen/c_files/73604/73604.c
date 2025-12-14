/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_14 &= (((min((arr_0 [i_0 + 1] [i_0 - 1]), (arr_0 [i_0 + 1] [i_0 - 1]))) == ((((!(arr_0 [i_0 + 1] [i_0 - 1])))))));
        var_15 = 7310253408081857005;
    }
    var_16 -= ((((((((var_3 ? 13 : var_11))) ? ((min(0, 7310253408081857003))) : 7310253408081857001))) ? ((~(~var_5))) : (((var_2 ? 35463 : ((var_10 ? var_11 : var_11)))))));
    #pragma endscop
}
