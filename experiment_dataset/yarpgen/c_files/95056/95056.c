/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95056
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95056 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95056
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [8] &= ((~((125 ? -1756049370 : 12263))));
        arr_3 [i_0] [i_0] = (min((~1756049400), ((max(37544, 6)))));
        arr_4 [i_0] = min((min((-21 / 32756), 17018730289700522277)), ((min((105 ^ 2147483647), 54))));
    }
    var_17 -= 34831;
    var_18 = (min((((!((min((-2147483647 - 1), 32767)))))), (min(((min(10, 16))), (97409746 ^ 1)))));
    var_19 = var_14;
    var_20 = (min((max(var_11, (-1078242274730227790 >= -18260))), (!-1190307299176471547)));
    #pragma endscop
}
