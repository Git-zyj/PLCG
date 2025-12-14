/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 26565;
    var_16 = (min(var_16, (((32256 & (-15 <= var_10))))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_17 = (min(var_17, -65521));
        arr_3 [i_0] |= (-1 < 33267);
        arr_4 [i_0] [i_0] |= ((var_0 <= (((var_12 / 33267) ? (arr_2 [i_0]) : ((var_0 & (arr_0 [i_0])))))));
    }
    var_18 = 64821;
    #pragma endscop
}
