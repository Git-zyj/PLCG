/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81493
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        var_13 = (max(var_13, ((((-(arr_1 [i_0 - 1] [i_0])))))));
        arr_4 [i_0] = (((668812011 ? 522194137 : (min((arr_2 [i_0]), var_9)))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (((~522194137) ^ ((((min(var_4, (arr_5 [i_1])))) ? (((arr_7 [i_1] [i_1]) ? var_6 : (arr_7 [i_1] [i_1]))) : var_0))));
        var_15 = var_4;
        var_16 = (min(((((arr_6 [i_1]) ? (((!(arr_5 [i_1])))) : ((-29627 ? (arr_6 [i_1]) : 0))))), ((-(arr_5 [i_1])))));
        arr_8 [i_1] [i_1] = ((!((min((arr_5 [i_1]), (arr_5 [i_1]))))));
        var_17 -= (-26392 - 1295376572);
    }
    var_18 = (min(var_18, var_2));
    var_19 = (min((min(29618, -522194126)), (~var_1)));
    var_20 *= ((!(!-22219)));
    #pragma endscop
}
