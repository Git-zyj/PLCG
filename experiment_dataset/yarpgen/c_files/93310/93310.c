/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93310
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93310 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93310
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((-((((min(var_11, -6401359568741322370)) != (1650618969 < 1650618962))))));
    var_17 = (((((~((1650618962 ? var_15 : 3))))) ? (~6401359568741322369) : ((max(3, -6401359568741322370)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max((min(1650618966, ((((arr_0 [i_0]) ? (arr_1 [i_0]) : 192))))), (((((-2 ? var_0 : (arr_1 [i_0])))) ? ((((arr_0 [i_0]) ? var_2 : var_14))) : (arr_0 [i_0])))));
        arr_3 [i_0] = (((((1 + (min((arr_1 [i_0]), 1650618962))))) ? (arr_0 [i_0]) : (((((var_12 ? 1611960225359649011 : 0)))))));
        arr_4 [i_0] [i_0] = (arr_0 [i_0]);
        var_18 = (arr_0 [i_0]);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 13;i_1 += 1)
    {
        var_19 ^= (arr_6 [i_1]);
        arr_7 [i_1] = ((((arr_5 [i_1] [i_1]) || -1)) ? ((1650618969 ? (arr_5 [i_1] [i_1]) : (arr_1 [i_1]))) : (arr_5 [i_1] [i_1]));
    }
    var_20 = (max(6401359568741322369, 1650618947));
    var_21 = ((((var_7 ? var_13 : var_3))));
    #pragma endscop
}
