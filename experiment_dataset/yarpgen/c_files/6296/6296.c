/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6296
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_0, ((~(max(var_3, var_5))))));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = (~(((arr_1 [i_0] [i_0]) % (arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = (((((arr_0 [i_0]) % (arr_0 [i_0]))) ^ ((-2056472674 ? 2056472674 : var_16))));
        arr_4 [i_0] = var_5;
    }
    var_18 = (((((-2056472670 ? 2056472670 : var_10)) <= var_13)));
    var_19 = (~-2056472664);
    var_20 = ((~(((var_15 ? -2056472664 : var_16)))));
    #pragma endscop
}
