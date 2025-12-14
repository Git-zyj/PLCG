/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68879
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68879 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68879
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    var_18 = (min(var_18, (((((17729131297918721081 ? 568089748 : 33328)) * (((min(32195, 1)))))))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_19 -= var_15;
        var_20 = -1173576373;
        arr_3 [i_0] &= ((((((arr_0 [i_0]) | (arr_1 [i_0])))) ? var_11 : (arr_1 [i_0])));
        var_21 = (arr_0 [i_0]);
        arr_4 [i_0] = (((var_0 ? (!32216) : var_11)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_22 = (~1);
        var_23 = (32195 & 437606398);
        arr_8 [i_1] = (((arr_0 [i_1]) | (arr_0 [i_1])));
        arr_9 [i_1] = (!-1);
    }
    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        arr_12 [i_2] = ((-(arr_1 [i_2 + 1])));
        var_24 = -1;
    }
    var_25 |= 32195;
    #pragma endscop
}
