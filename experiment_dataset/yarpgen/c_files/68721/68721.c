/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_8 >= (((~-2147483639) ? (min(var_3, var_13)) : (var_13 ^ var_16)))));
    var_21 = (+-16777215);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_22 = (arr_0 [i_0] [i_0]);
        arr_2 [i_0] [i_0] = (63 + 41);
        arr_3 [i_0] [i_0] = (((arr_1 [i_0]) ? var_9 : 1873559444));
    }
    #pragma endscop
}
