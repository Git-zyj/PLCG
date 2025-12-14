/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64953
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((max(-314141667, ((var_10 ? var_16 : var_0)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 *= 0;
        arr_3 [i_0] [i_0] = ((-((54576 ? (arr_2 [i_0] [i_0]) : (arr_0 [i_0] [i_0])))));
        arr_4 [i_0] [i_0] = 314141666;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_19 = var_8;
        var_20 *= ((((min((arr_6 [i_1]), 0))) ? (((-314141667 ? -4 : -2926084507317020136))) : 9382117123073396373));
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1) /* same iter space */
    {
        var_21 = ((-((min((arr_9 [i_2]), 2926084507317020135)))));
        var_22 = ((0 ? (min((((-2926084507317020136 ? (arr_8 [i_2] [i_2]) : 1553))), (arr_6 [i_2]))) : (arr_6 [i_2])));
    }
    for (int i_3 = 0; i_3 < 16;i_3 += 1) /* same iter space */
    {
        var_23 = (arr_12 [i_3]);
        arr_14 [i_3] = ((var_1 ? 0 : -2926084507317020136));
        arr_15 [i_3] [i_3] = ((((min((arr_13 [i_3]), (arr_7 [i_3] [i_3])))) ? (max((arr_7 [i_3] [i_3]), (arr_13 [i_3]))) : (((arr_13 [i_3]) + (arr_7 [i_3] [i_3])))));
    }
    var_24 = (min((((var_0 ? var_13 : (~3)))), ((((60412 ? var_11 : var_1)) ^ -74))));
    #pragma endscop
}
