/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91008
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91008 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91008
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((max(var_10, -41))) ? -0 : (((~4294967280) ? ((var_2 ? 16 : 1)) : var_10)))))));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, ((((arr_1 [15] [15]) ? ((((arr_1 [i_0] [i_0]) >= 9214642263356193788))) : (arr_1 [i_0 - 1] [i_0 - 1]))))));
        var_16 = var_7;
        arr_2 [i_0 - 1] = 5;
    }
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_17 = (arr_0 [i_1]);
        var_18 = (max(var_18, var_6));
        var_19 = 4294967288;
    }
    /* vectorizable */
    for (int i_2 = 2; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_20 += (((arr_8 [i_2 - 2]) || (arr_8 [i_2 + 1])));
        var_21 = (max(var_21, ((((((9223372036854775807 >> (438993934 - 438993881)))) ? (arr_3 [1] [i_2 - 2]) : (var_9 ^ 16))))));
    }
    var_22 += (~var_1);
    var_23 = (max(var_23, 5));
    #pragma endscop
}
