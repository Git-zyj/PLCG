/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        var_18 -= (max((max((arr_0 [i_0 - 4]), (arr_0 [i_0 - 3]))), ((!(arr_1 [i_0 + 1])))));
        var_19 -= (((arr_0 [i_0 - 1]) || ((min(-1508698122421912794, (((var_11 && (arr_1 [i_0])))))))));
    }
    var_20 -= (2812046307 ? 30720 : 48);
    var_21 = (((((!-1471932086) && 18446744073709551595))) ^ var_11);
    var_22 = var_4;
    #pragma endscop
}
