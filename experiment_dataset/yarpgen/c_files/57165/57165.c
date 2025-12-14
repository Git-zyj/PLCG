/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57165
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57165 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57165
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-((~(max(var_5, var_3))))));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 = (min(var_11, var_3));
        var_12 = (min(((0 ? ((max(var_1, (arr_0 [i_0] [i_0])))) : (!var_6))), (((!2147483647) << (((arr_1 [i_0]) + 5713493439993909278))))));
        var_13 = var_7;
        var_14 = 1746046697;
        var_15 = ((((((-9223372036854775807 - 1) ? 0 : 0))) ? (((~(((1044076129 || (arr_0 [i_0] [9]))))))) : (((min((arr_1 [14]), 3613845860)) * var_3))));
    }
    var_16 = (min(0, -1044076129));
    #pragma endscop
}
