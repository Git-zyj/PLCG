/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59951
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_18 |= ((~(((!(((~(arr_1 [1] [1])))))))));
        var_19 = var_13;
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 9;i_1 += 1)
    {
        arr_5 [i_1] [1] = var_4;
        arr_6 [i_1 + 1] = var_3;
        arr_7 [i_1] = (~10842);
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        var_20 *= (((((min(var_14, (arr_2 [i_2] [i_2]))))) ? 2148437620137547317 : (((arr_1 [i_2] [i_2]) ? (arr_2 [i_2] [i_2]) : -2148437620137547338))));
        var_21 = (((-(~var_6))));
        arr_10 [i_2] = (((((-2148437620137547317 ? var_17 : 5540471704033340093))) ? (((var_9 || 1) ? (~var_6) : (arr_2 [i_2] [i_2]))) : (-2148437620137547322 >= -2148437620137547317)));
    }
    var_22 = (var_11 | ((2148437620137547338 ? -var_3 : -2148437620137547339)));
    #pragma endscop
}
