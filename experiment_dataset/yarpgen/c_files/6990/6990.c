/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6990
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((var_8 ? ((((((var_10 ? var_6 : var_7))) ? var_11 : var_2))) : (max(1312352967, (1312352957 == 1944815933)))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = (((((114 ? (arr_0 [i_0] [i_0]) : 38946))) ? (((((arr_0 [i_0] [i_0]) != 1)) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0]))) : (((-27 ? 4294967287 : 90641521767614894)))));
        var_13 |= ((19 ? 5693049361069284771 : 28913));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_14 = (min(var_14, (((-(((max((arr_0 [i_1] [8]), 1)) / -25)))))));
        var_15 = ((((max(-2620369641, (1312352963 % 26589)))) || (((4294967273 ? ((-605081140611817216 ? 70368744177663 : (arr_0 [i_1] [i_1]))) : (((-(arr_1 [i_1])))))))));
    }
    var_16 = (min(0, 1));
    #pragma endscop
}
