/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76679
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76679 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76679
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_11 = (~var_0);

        for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_0] [i_0] = (2095 > -7802317056128323754);
            arr_7 [i_1] [i_1] = (((((((var_2 ? var_1 : (arr_5 [i_0] [i_0] [i_0 + 1])))) ? (max(-7802317056128323754, (arr_3 [i_0] [i_0]))) : (arr_2 [i_0]))) / (((((((arr_3 [i_0] [i_0]) ? -7802317056128323754 : 3522848720555519406)) > 7802317056128323755))))));
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
        {
            var_12 = (((arr_9 [i_2]) ? ((var_5 ? 7802317056128323753 : var_6)) : -7802317056128323759));
            var_13 ^= ((-(arr_3 [i_0 + 1] [i_0])));
            var_14 = (arr_4 [i_0 + 1] [i_2]);
        }
        for (int i_3 = 0; i_3 < 19;i_3 += 1) /* same iter space */
        {
            var_15 = (max((((-((((arr_5 [i_0] [i_0] [i_3]) && 7802317056128323755)))))), (((arr_8 [i_0] [i_0] [i_0]) ? (~14923895353154032210) : (((max((arr_1 [i_0] [i_3]), (arr_3 [i_3] [i_0 + 1])))))))));
            var_16 = (arr_2 [i_0 + 2]);
            var_17 = ((((((arr_0 [i_0 + 1]) == var_7)))) ? (max((arr_11 [i_0 + 2]), (arr_11 [i_0]))) : ((((var_9 ? (arr_10 [i_0] [i_3]) : (arr_5 [i_0 + 1] [i_3] [i_3]))))));
            arr_12 [i_0] = (((((var_9 && 7802317056128323764) << (((min((arr_0 [i_0]), 246939207)) - 246939203))))) ? var_7 : (arr_1 [i_0] [i_0]));
        }
    }
    var_18 *= (var_9 < var_0);
    #pragma endscop
}
