/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7722
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7722 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7722
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((var_2 ? (((arr_1 [i_0]) ? 18446744073709551615 : (arr_1 [i_0]))) : ((((arr_1 [i_0]) % (arr_1 [i_0]))))));
        arr_4 [i_0] = (var_2 & (((var_4 ? 18446744073709551615 : -113701001))));
        var_12 += ((var_7 ^ (arr_2 [i_0] [i_0])));
        arr_5 [i_0] [i_0] = (((((var_5 * 0) * (18446744073709551604 / 15963))) / (var_2 * 192)));
        var_13 = (min(var_13, (0 > 19)));
    }
    var_14 = var_6;
    var_15 = var_8;
    #pragma endscop
}
