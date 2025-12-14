/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8710
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            var_13 = 52;
            arr_5 [i_0] [i_0] = (min((min((arr_3 [i_0] [i_0] [i_1]), (arr_4 [i_0] [i_1]))), (((arr_4 [i_0] [i_1]) / (((36 ? (arr_3 [9] [i_1] [9]) : (arr_3 [i_0] [i_0] [i_0]))))))));
        }
        arr_6 [i_0] [i_0] = 17988;
        var_14 |= 0;
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        arr_11 [i_2] = (((14670 ^ 1) && 52));

        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            var_15 = 55;
            var_16 = arr_8 [i_2];
            arr_15 [i_3] = -5;
            arr_16 [i_3] [4] [i_2] &= (((((210 ? (arr_13 [i_2] [4]) : (arr_14 [13] [i_3] [i_3])))) ? (arr_14 [i_2] [i_2] [i_2]) : (((arr_10 [i_3]) % (arr_10 [i_2])))));
        }
        var_17 = ((~(((arr_8 [i_2]) ? (arr_9 [i_2]) : (arr_9 [i_2])))));
    }
    var_18 = var_1;
    var_19 &= 2;
    #pragma endscop
}
