/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_3;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_19 -= min(((max(65528, 64))), (((var_10 == 3132242671286470291) ? ((-16384 ? 107102239611752001 : 64714)) : ((max(64, 4245796810))))));
        var_20 = 0;
        arr_2 [i_0] = (((arr_1 [i_0] [i_0]) && ((!(arr_1 [i_0] [i_0])))));
    }
    var_21 ^= (((((max(var_12, 59506)))) ? ((((min(3521038203, 64)) >= (!595864428)))) : 65535));
    #pragma endscop
}
