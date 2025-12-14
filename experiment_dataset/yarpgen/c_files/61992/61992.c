/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -6064730157612804810;

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_20 = ((+((((((arr_0 [i_0] [i_0]) + (arr_1 [i_0])))) ? var_6 : ((((arr_1 [15]) - (arr_1 [0]))))))));
        var_21 = arr_1 [i_0];
        var_22 *= ((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [i_0]));
    }
    #pragma endscop
}
