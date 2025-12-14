/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (((((9223372036854775807 >= (((max(var_6, 34821)))))))) / var_2);
    var_11 += (max((((max(var_2, 13911)) / 2068539725)), (-1563307821 ^ var_2)));
    var_12 = ((!(var_3 - var_9)));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((((!(arr_1 [i_0] [i_0])))) ^ (((!(arr_1 [i_0] [i_0]))))));
        var_13 = (max(var_13, (((!((max((arr_0 [0] [12]), -30693))))))));
        var_14 = (+(min((arr_0 [i_0] [i_0]), var_2)));
        var_15 = (((((var_2 >= ((var_9 ? var_4 : (arr_0 [i_0] [i_0])))))) & ((((max((arr_1 [i_0] [i_0]), (arr_0 [i_0] [i_0]))) == (((arr_2 [i_0] [i_0]) ? -385 : (arr_0 [i_0] [i_0]))))))));
        var_16 = (((arr_0 [i_0] [i_0]) ? 25980 : ((((var_0 / (arr_0 [i_0] [i_0])))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        var_17 = var_6;
        var_18 = (arr_4 [i_1]);
        var_19 = (((!(arr_4 [i_1]))));
        arr_8 [i_1] = (min((arr_6 [i_1]), (~var_6)));
    }
    #pragma endscop
}
