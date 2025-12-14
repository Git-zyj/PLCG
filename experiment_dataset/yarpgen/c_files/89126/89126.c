/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((~var_11) * (var_3 == var_13)))) ? ((((((-128 + 2147483647) >> (150 - 136)))) / (min(var_1, 3358118823)))) : 169));
    var_20 = (max(var_11, (((var_13 >= ((1 ? var_4 : var_11)))))));
    var_21 = var_7;
    var_22 *= ((((min((max(var_9, var_2)), var_1))) ? (~var_5) : 0));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_23 = (min((arr_1 [i_0] [i_0]), var_2));
        var_24 &= var_16;
    }
    #pragma endscop
}
