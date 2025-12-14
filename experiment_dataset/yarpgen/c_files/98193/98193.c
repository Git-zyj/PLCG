/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98193
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98193 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98193
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= var_6;
    var_12 = 118199475;
    var_13 = (1 ? 118199475 : 1);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 += (((((var_6 ? (var_0 >= -1823754247) : ((1 ? 1 : var_5))))) ? (((var_4 < 0) ? 0 : ((0 ? 1806374825 : var_9)))) : ((0 ? -1346545336 : 0))));
        arr_3 [i_0] = (((((var_8 ? var_7 : var_9))) ? (!-118199480) : ((var_6 / (0 - -2065782446)))));
    }
    var_15 = (min(var_15, (((+(((!var_4) ? (!1) : var_10)))))));
    #pragma endscop
}
