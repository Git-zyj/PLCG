/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_10 [i_0] [i_1] [i_0] [i_1] = 0;
                    var_10 -= (min((((var_8 > (arr_2 [i_1])))), ((var_4 ? (arr_0 [i_1] [i_2]) : 1014417004))));
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_11 = (max(var_11, -15584));
        arr_13 [i_3] [i_3] = ((var_3 < ((((max(0, var_9))) ? 136 : -var_6))));
        var_12 = (max((arr_11 [i_3] [i_3]), (((arr_12 [i_3]) + (min(var_1, 12))))));
        /* LoopNest 2 */
        for (int i_4 = 1; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_13 = 0;
                    arr_20 [i_5] = ((min(((max((arr_15 [i_4] [i_3] [i_4]), (arr_14 [i_3] [i_4])))), (arr_18 [i_3] [i_4] [i_4] [i_4 + 2]))));
                }
            }
        }
        var_14 = (max(var_14, 471342502));
    }
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        arr_24 [i_6] [i_6] = (min((arr_18 [i_6] [i_6] [i_6] [i_6]), (((((var_3 ? (arr_15 [i_6] [i_6] [i_6]) : -1020936140))) - (max(10, 2067519560))))));
        arr_25 [i_6] = (arr_18 [i_6] [i_6] [i_6] [i_6]);

        for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
        {
            var_15 = (min(var_15, ((2041123004 ? ((-26293 ? -2 : 0)) : 4294967289))));
            var_16 = (arr_21 [i_6] [i_7]);
            var_17 |= ((-(((arr_14 [i_6] [i_7]) / var_1))));
        }
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15;i_8 += 1) /* same iter space */
        {
            arr_32 [i_6] [i_8] = (arr_21 [i_6] [i_8]);
            arr_33 [i_6] [i_6] [i_6] = (((-14312 + 2147483647) >> ((((0 ? (arr_29 [i_6] [i_6] [i_8]) : (arr_27 [i_6]))) - 3959572266))));
            arr_34 [i_6] = (arr_12 [i_6]);
        }
    }
    var_18 = (max(var_18, 26304));
    var_19 = var_2;
    #pragma endscop
}
