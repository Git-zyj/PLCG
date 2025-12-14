/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/805
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((-8642768207036162157 ? 51 : 79644598));
    var_15 = ((-15816 ? (-112 * 0) : (--1)));

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] [i_0] = max((max(228, (arr_0 [i_0]))), (26 - 9));
        arr_3 [i_0] = (min((max(32767, 18446744073709551615)), ((max((((arr_0 [i_0]) ? 2896173157 : 4215322704)), (arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_4 [i_1]);
        var_17 ^= -28810;
    }
    var_18 = (((~var_11) ? var_7 : -1841059027));
    var_19 = var_13;
    #pragma endscop
}
