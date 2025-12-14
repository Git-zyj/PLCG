/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 51;
    var_21 = (min((76 < 88), ((var_15 ? var_10 : ((88 ? 2333176364 : var_1))))));
    var_22 = (!1);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_23 = -2015585110;
        arr_2 [i_0] = ((var_1 ? (arr_1 [i_0]) : ((2015585109 ? 3275040942 : -1069389088))));
        arr_3 [i_0] = ((var_6 > ((68 << (((arr_0 [i_0] [13]) - 17705949855128128866))))));
        arr_4 [i_0] [i_0] = ((-(arr_0 [i_0] [i_0])));
    }
    #pragma endscop
}
