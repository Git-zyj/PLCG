/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -127;
    var_20 &= 64;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_21 = var_0;
        var_22 = ((-((var_12 ? (arr_0 [i_0]) : var_6))));
        arr_3 [i_0] = (max(((var_1 ? 40 : (arr_0 [i_0]))), (((arr_0 [i_0]) + (((-55 ? 1 : var_16)))))));
        var_23 |= (arr_2 [6]);
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_8 [i_1] [i_1] = ((246 ? 2366867847 : 9251150101761020607));
        arr_9 [i_1] |= 9251150101761020587;
        arr_10 [i_1] = (arr_7 [i_1] [i_1]);
        var_24 *= ((-(arr_4 [11])));
        arr_11 [i_1] |= ((-((var_10 ? (arr_7 [i_1] [i_1]) : (arr_7 [i_1] [i_1])))));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_25 *= var_15;
        arr_14 [i_2] [i_2] = 105;
        var_26 = 1;
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        var_27 *= ((((((arr_16 [i_3] [i_3]) ? (~var_9) : (arr_15 [12])))) ? (arr_16 [i_3] [i_3]) : (((var_10 - var_8) ^ ((min((arr_16 [i_3] [i_3]), (arr_16 [i_3] [i_3]))))))));
        var_28 = ((min(var_15, (arr_15 [i_3]))));
        var_29 *= var_13;
        var_30 &= ((max(var_12, (arr_16 [i_3] [i_3]))));
    }
    var_31 += (min(var_1, (var_1 && var_6)));
    var_32 &= (((-127 - var_13) ? (-127 - 1) : (!var_1)));
    #pragma endscop
}
