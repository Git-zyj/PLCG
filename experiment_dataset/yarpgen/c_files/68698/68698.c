/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68698
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68698 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68698
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((!((((min(28408, var_0)))))));
    var_18 = var_2;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_1 [i_0 + 1]);
        var_19 = (((arr_0 [i_0 + 1]) < (arr_0 [i_0 + 1])));
        var_20 = (min(var_20, (((-(((arr_0 [i_0 - 1]) ? -1931285330960937624 : -1931285330960937625)))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        var_21 = (~1931285330960937639);
        arr_5 [i_1] = -1931285330960937640;
        var_22 = (min(var_22, ((((((arr_0 [i_1]) + (arr_1 [i_1]))) + (arr_0 [i_1]))))));
    }
    var_23 = (min(var_0, var_1));

    /* vectorizable */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        var_24 = (arr_7 [i_2]);
        var_25 = (((arr_0 [i_2 - 1]) ? (arr_0 [i_2 + 1]) : (arr_0 [i_2 - 1])));
    }
    #pragma endscop
}
