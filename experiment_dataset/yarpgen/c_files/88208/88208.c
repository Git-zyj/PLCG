/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88208
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_7;
        var_20 = 3351931779;
        arr_3 [i_0] = ((~((((min((arr_0 [i_0] [i_0]), var_8))) ? var_0 : var_5))));
        arr_4 [i_0] = (min(((min(3351931777, 32766))), ((((max(var_4, 32766))) ? (min(-2116081214, 2902032439552093565)) : (((min(var_10, -22))))))));
        arr_5 [i_0] = (min(((max((!var_17), 2009109184))), (max((arr_2 [i_0]), (arr_0 [i_0] [6])))));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        var_21 ^= (arr_7 [i_1 - 1]);
        var_22 ^= var_4;
        arr_8 [i_1] [i_1] = (((((var_2 ? (arr_7 [i_1 - 2]) : (arr_6 [i_1] [i_1])))) ? 943035529 : 16));
    }
    var_23 = ((min(var_11, -var_0)));
    #pragma endscop
}
