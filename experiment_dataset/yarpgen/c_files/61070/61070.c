/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 18;i_0 += 1)
    {
        var_14 = (((!-6215) ? 44085 : (min((((!(arr_0 [8] [8])))), ((var_13 * (arr_1 [i_0] [i_0 + 1])))))));
        var_15 = (65531 || 21450);
        var_16 = (251 + 3);
        var_17 ^= ((-((24556 ? 1152921502459363328 : -21))));
    }
    var_18 = var_3;
    #pragma endscop
}
