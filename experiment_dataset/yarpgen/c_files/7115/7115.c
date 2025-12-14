/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_20 *= (arr_1 [i_0]);
        var_21 -= (-(arr_2 [i_0]));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
    {
        var_22 = (arr_4 [i_1]);
        arr_5 [i_1] [i_1] = ((arr_4 [i_1]) ? (arr_2 [18]) : ((-8258546198211259968 ? -8258546198211259968 : -8258546198211259968)));
        var_23 = (max(var_23, 8330));
    }
    var_24 *= ((25004 ? 57205 : -8258546198211259968));
    #pragma endscop
}
