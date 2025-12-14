/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57850
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (~1);

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (min(var_15, (((arr_2 [i_0]) << (var_3 - 773347771)))));
        var_18 *= ((-54 ? (((arr_2 [i_0]) + (arr_2 [i_0]))) : ((2583620684 ? 69 : -599795286))));
        var_19 -= 48;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        var_20 = ((-(min((arr_5 [i_1]), (arr_5 [i_1])))));
        var_21 = (((((-787932649 ? var_9 : var_6)) & ((((arr_6 [i_1]) & (arr_6 [i_1])))))) >> (((min((arr_6 [i_1]), (min((arr_6 [i_1]), -1219210501)))) + 1219210539)));
        var_22 = 127;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14;i_2 += 1)
    {
        var_23 = (max(var_23, ((((((1219210498 << (24011 - 24011)))) ? (arr_8 [i_2]) : (arr_6 [i_2]))))));
        var_24 = (min(var_24, ((((arr_6 [i_2]) ? (var_3 & 55) : -189)))));
    }
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        arr_14 [i_3] [i_3] = var_15;
        var_25 |= (min(198, 65535));
        var_26 = (min(var_26, (((~((min(-119, 1))))))));
        var_27 = (max(var_27, (((-(arr_11 [i_3]))))));
        arr_15 [i_3] [i_3] = min(17102153787183052677, -14896);
    }
    #pragma endscop
}
