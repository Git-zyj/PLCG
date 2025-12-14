/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((var_8 - 145) * (var_11 / var_8))) < (((((1 & 33213) == (var_9 || var_11)))))));
    var_14 = (((((32334 & 3354344251428170998) / (33208 > 779))) == ((((50 < 0) | (var_3 - -779))))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = (min(var_15, ((((20 & 0) == (-23151 != 1073741823))))));
        arr_4 [i_0] [i_0] = (((((arr_1 [i_0] [i_0]) + var_6)) > (((210 % (arr_3 [i_0] [i_0]))))));
    }
    for (int i_1 = 3; i_1 < 20;i_1 += 1)
    {
        var_16 &= (((((12608475960259224171 + 3509419740) + (0 && 17374))) > (((((var_6 == 163) <= (((arr_0 [i_1] [i_1]) / 793))))))));
        arr_7 [8] [i_1] = (116 + -23166);
    }
    #pragma endscop
}
