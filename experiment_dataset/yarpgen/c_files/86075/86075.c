/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -var_5;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (min(var_11, ((((((163 + (((arr_1 [i_0]) ? (arr_1 [14]) : (arr_1 [i_0])))))) == (((min(1242277551283964231, var_5)) / (arr_1 [i_0]))))))));
        var_12 *= (min((max(((var_6 ? var_5 : var_6)), ((max(var_7, 163))))), ((max((((346988472351227712 ? var_1 : (arr_0 [i_0])))), ((-(arr_1 [i_0]))))))));
        var_13 = var_1;
    }
    #pragma endscop
}
