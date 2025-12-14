/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78619
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78619 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78619
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(((var_1 ? (28819 ^ var_5) : ((var_3 ? var_8 : var_9)))), (max((max(var_9, var_8)), (~var_7)))));
    var_11 = ((((((min(var_2, 0))) ? 147 : ((var_0 ? 0 : 65525))))) && 3219591490);

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_12 = ((((min((min(var_4, var_5)), ((max(var_8, 1)))))) <= 0));
        var_13 = (min((((((min(var_6, var_3))) && var_6))), ((~((var_4 ? var_3 : var_4))))));
        var_14 *= (((~var_6) << 0));
    }
    var_15 *= ((var_9 | (((max(var_8, (min(var_5, var_1))))))));
    #pragma endscop
}
