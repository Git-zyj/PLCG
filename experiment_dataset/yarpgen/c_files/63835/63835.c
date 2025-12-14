/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63835
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63835 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63835
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (var_0 >= 18446744073709551615)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 |= -98;
        var_16 = ((+((((((arr_1 [i_0]) / (arr_2 [1] [1])))) ? var_6 : -12197))));
    }
    var_17 *= (((((var_1 ? (0 > var_0) : (131064 | var_12)))) ? 128 : (18446744073709551613 > var_9)));
    #pragma endscop
}
