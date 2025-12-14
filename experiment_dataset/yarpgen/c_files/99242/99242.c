/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        arr_4 [i_0] [i_0] |= var_7;
        var_14 = (max(var_7, (((18446744073709551598 + 883228422) + ((min(var_6, 65516)))))));
    }
    var_15 ^= ((((((max(var_10, var_0))) / ((var_6 >> (var_6 - 399921735))))) / (max(-var_4, (max(var_6, var_1))))));
    var_16 = (min(var_16, ((max((((((min(13448913675505320000, var_4))) ? (~var_13) : ((var_10 ? var_8 : var_1))))), (((~var_5) & var_5)))))));
    #pragma endscop
}
