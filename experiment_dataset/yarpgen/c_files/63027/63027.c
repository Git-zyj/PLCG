/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63027
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(((((0 ? 0 : 1))) ? var_12 : var_14))));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_19 = (min(var_19, ((max(((max(((2147450880 ? 2147516424 : 0)), 0))), var_11)))));
        arr_2 [i_0] = (--4294967295);
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        var_20 = (max(18446744073709551615, -1));
        var_21 += -1;
        var_22 ^= 1;
        var_23 = var_0;
    }
    var_24 = (((125 ? 0 : ((((!(-9223372036854775807 - 1))))))));
    var_25 = (-127 - 1);
    #pragma endscop
}
