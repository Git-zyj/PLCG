/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((~((1528709395 ? var_4 : 1)))) ^ 0));

    for (int i_0 = 0; i_0 < 16;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((var_5 % (arr_1 [i_0])))) + var_2));
        var_15 |= ((!((((arr_2 [i_0] [10]) ? (arr_1 [1]) : (arr_1 [4]))))));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1) /* same iter space */
    {
        var_16 = (arr_6 [i_1] [i_1]);
        var_17 = ((~(arr_2 [i_1] [i_1])));
        var_18 = (min(var_18, ((((-(arr_7 [2] [2])))))));
        var_19 = ((21 ? (max(var_6, var_6)) : var_5));
    }
    var_20 = (((((var_12 ? (((var_1 + (-127 - 1)))) : var_11))) ? var_4 : var_1));
    var_21 = (min(var_21, (((!(~1272931536))))));
    var_22 = (-98 || var_12);
    #pragma endscop
}
