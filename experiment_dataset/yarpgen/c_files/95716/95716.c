/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_17 = (((arr_0 [i_0 - 1]) ? (arr_1 [i_0 + 1]) : (arr_1 [i_0 - 1])));
        arr_2 [i_0] = ((-7756727227949740461 ? 15738109013828153766 : -1844163774));
    }
    var_18 = 15738109013828153766;
    var_19 = (((((((1986175292651189380 ? var_15 : var_6))) ? var_2 : var_8))) ^ (((((-1456076247 ? var_3 : var_14))) ? ((1136861454 ? -1844163774 : var_13)) : (var_3 % var_8))));
    #pragma endscop
}
