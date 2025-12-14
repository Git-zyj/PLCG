/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68552
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_14 |= 0;
        arr_2 [i_0] [i_0] = (max((((-(arr_1 [i_0])))), (arr_0 [i_0])));
    }
    var_15 = (max(var_15, var_7));
    var_16 = var_10;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_17 = ((arr_5 [i_1] [i_1] [i_2 + 1]) ? 1216093918 : (arr_5 [i_2 - 1] [i_1] [i_2 + 1]));
            var_18 = (((((3078873378 ? (arr_4 [i_1]) : 0))) ? (arr_6 [i_1]) : (!var_2)));
        }
        var_19 = 3078873375;
    }
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        var_20 = (-((((((arr_9 [i_3] [i_3]) * (arr_10 [i_3] [i_3])))) ? 7734 : (((~(-127 - 1)))))));
        var_21 = (arr_9 [i_3] [i_3]);
        arr_11 [i_3] = (-(arr_9 [i_3] [i_3]));
        arr_12 [i_3] [i_3] = (arr_9 [i_3] [i_3]);
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        var_22 = 27;
        var_23 = (max(var_23, (arr_14 [i_4])));
        var_24 = var_1;
    }
    #pragma endscop
}
