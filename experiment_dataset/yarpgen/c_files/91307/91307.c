/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_7 ? ((var_3 ? var_7 : var_1)) : var_0)) | var_8));

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_11 -= ((-((~(arr_0 [i_0])))));
        arr_2 [i_0] = ((!(((((((arr_0 [i_0]) ? (arr_0 [i_0]) : (arr_1 [i_0])))) ? (arr_1 [i_0]) : (((arr_0 [i_0]) ? 19459 : 3624259793)))))));
        arr_3 [0] = ((-(arr_0 [10])));
    }
    #pragma endscop
}
