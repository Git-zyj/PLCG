/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_7;

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        var_21 = (((((3057 ? 1746896205 : 928990408))) ? var_11 : (((((var_16 / (arr_1 [12])))) ? ((var_16 ? var_7 : var_14)) : var_10))));
        arr_2 [i_0] |= ((((((arr_1 [i_0]) % 1385170145))) ? ((-(arr_1 [i_0]))) : ((~(arr_1 [i_0])))));
    }
    #pragma endscop
}
