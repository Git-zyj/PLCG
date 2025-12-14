/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85140
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85140 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85140
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((var_4 | ((122 >> ((24 ? 1 : var_7))))));

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_19 = (max((max((((!(arr_0 [i_0])))), (max(0, -2121484947)))), (max(2121484947, var_8))));
        var_20 &= (min(1, (max((!25), ((-2121484930 ? -105 : (arr_1 [i_0 + 1])))))));
    }
    var_21 ^= (min(var_9, ((0 | ((var_1 ? 365735073 : 6))))));
    #pragma endscop
}
