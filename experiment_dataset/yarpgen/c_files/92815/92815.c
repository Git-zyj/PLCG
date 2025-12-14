/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92815
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(var_2, ((8075647091142330753 ? -2127489281 : 2127489281))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_2 [19] = ((((!(arr_1 [i_0]))) && ((-8918 == (arr_1 [i_0])))));
        var_20 += -var_8;
        var_21 = (min(var_21, (((((arr_0 [i_0]) / var_15))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_6 [i_1] = 8918;
        arr_7 [10] [i_1] = (((1091445883 ? 8916 : var_6)));
        arr_8 [i_1] = 2147483647;
    }
    #pragma endscop
}
