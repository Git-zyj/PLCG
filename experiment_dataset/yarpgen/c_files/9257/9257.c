/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [8] = (8895648328920988313 != 64546);
        arr_3 [i_0] [i_0] = (((((-1918155709 ? -1918155709 : 13643364215711314546))) || var_0));
        var_11 = (max(var_11, (((var_1 ? var_10 : ((((-9223372036854775807 - 1) ? 28272 : 980))))))));
    }
    var_12 = (((((min((-32767 - 1), 8089892841998554197)))) ? 63984 : var_7));
    var_13 = var_3;
    var_14 = (max(var_14, (((((!(var_9 & 229376)))) / ((((min(12543, 1))) ? 28272 : (46316 >= 0)))))));
    #pragma endscop
}
