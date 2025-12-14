/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_10;
    var_18 = 9081220691008012558;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [1] = ((((1 < (arr_1 [i_0]))) ? (arr_0 [i_0]) : (arr_1 [i_0])));
        arr_3 [i_0] = (((1 >= 40) % (((arr_0 [i_0]) + (arr_1 [i_0])))));
        arr_4 [15] [i_0] = (((arr_0 [i_0]) == (arr_0 [15])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        var_19 = (min(var_19, (((var_6 != (((1 ? 1 : (arr_5 [6])))))))));
        arr_7 [i_1] = (0 * var_4);
    }

    for (int i_2 = 2; i_2 < 16;i_2 += 1)
    {
        var_20 = 2506083089018706874;
        arr_10 [1] = ((var_16 | (min((max(-7217919946882943264, (arr_0 [10]))), (arr_8 [i_2 - 1] [1])))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {
        var_21 += ((+(((arr_11 [i_3]) ? (arr_13 [i_3] [6]) : (arr_11 [i_3])))));
        var_22 = var_13;
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        arr_17 [i_4] = -14;
        var_23 = (((2506083089018706846 > -1) != var_12));
        arr_18 [i_4] = ((0 | (arr_15 [i_4])));
        var_24 = (arr_11 [i_4]);
    }
    var_25 = var_6;
    #pragma endscop
}
