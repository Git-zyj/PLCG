/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67381
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67381 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67381
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_9;
    var_11 = ((var_0 ? ((var_4 ? (!-126) : (183947713 + var_0))) : var_6));
    var_12 -= (~var_0);
    var_13 = var_1;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_14 = var_5;
        var_15 = (min(var_7, ((var_6 ? -183947695 : (min(183947713, (arr_0 [17] [5])))))));
        var_16 = (max((3699050975081252310 < 1611816534), var_6));
    }
    #pragma endscop
}
