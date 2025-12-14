/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_14 = (16368 << (-21 + 33));
        var_15 = 13436;
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_16 = (min(var_16, 1099511627760));
        var_17 = (-((max(48, 13687697124569801199))));
    }
    var_18 = var_11;

    /* vectorizable */
    for (int i_2 = 1; i_2 < 19;i_2 += 1)
    {
        var_19 = (arr_8 [i_2] [i_2]);
        var_20 ^= 63;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] [i_3] = (16598 < 193);
        var_21 = (-13452 * 2077475543);
    }
    var_22 = var_3;
    var_23 -= var_8;
    #pragma endscop
}
