/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_13;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_17 = (+((+(min((arr_0 [i_0]), (arr_1 [i_0] [i_0]))))));
        var_18 = (((((arr_0 [i_0]) > (min((arr_1 [3] [4]), var_13)))) && ((((((var_14 ? 9223372036854775807 : 5711004884614350697))) ? (((arr_1 [i_0] [i_0 + 1]) ? var_9 : var_1)) : (((var_1 << (var_7 - 19)))))))));
        arr_2 [i_0] [i_0] = ((!((((((217 << (9223372036854775807 - 9223372036854775804)))) & ((9223372036854775807 | (arr_0 [i_0]))))))));
        var_19 = (max(((9223372036854775807 >> (((((-9223372036854775807 - 1) - -9223372036854775796)) + 54)))), ((~(arr_0 [i_0])))));
    }
    var_20 &= var_12;
    var_21 -= (!var_15);
    #pragma endscop
}
