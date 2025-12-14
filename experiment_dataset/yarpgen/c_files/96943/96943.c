/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96943
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96943 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96943
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                arr_9 [i_0] [i_1] [i_2] [i_1] |= (((!142) ? 1422105011122586452 : 121));
                arr_10 [i_0] [i_0] [i_0] = (max((((23179 / -8573134472842543782) ? (arr_2 [i_0]) : ((var_3 ? (arr_0 [i_0]) : var_0)))), (((((max(37, 12))) ? ((max(7680, 62587))) : ((max(224, (arr_0 [i_0])))))))));
                var_19 ^= ((((min((arr_1 [i_0]), ((var_14 - (arr_6 [i_0] [i_1] [i_2] [i_2])))))) ? ((min(((58966 ? (arr_8 [3] [0] [3] [i_2]) : (arr_6 [i_0] [i_1] [i_2] [9]))), ((((arr_3 [i_0] [i_1]) ? var_16 : var_4)))))) : (((min(-3186235690708186851, (arr_3 [i_0] [i_0]))) & (arr_5 [i_0] [i_1] [i_2])))));
                var_20 -= ((((((arr_3 [i_1] [i_2]) ? var_5 : var_12)) & ((var_6 ? (arr_3 [i_0] [i_2]) : var_5)))));
            }
            for (int i_3 = 0; i_3 < 12;i_3 += 1)
            {
                arr_14 [i_0] = -15;
                arr_15 [i_0] [i_1] [i_3] = ((1 ? ((var_3 ? var_13 : (((arr_8 [i_0] [i_0] [i_0] [i_0]) ? var_0 : var_17)))) : -var_12));
            }
            arr_16 [i_0] [i_0] [i_0] = ((((0 ? 4294967295 : 0)) > ((((!(arr_1 [i_0]))) ? (var_12 - 3367111027) : ((((arr_13 [i_1] [i_0] [i_0]) & var_13)))))));
        }
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            var_21 *= var_4;
            arr_19 [i_0] = (((!var_12) ? (arr_11 [i_0] [i_0] [6]) : (min((arr_13 [i_0] [i_0] [10]), 62591))));
        }
        var_22 = (max(var_22, (arr_7 [i_0] [i_0] [i_0] [i_0])));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
    {
        var_23 += (~0);
        arr_23 [4] [i_5] = (max(9699676665260055214, 3666937666));
    }

    for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
    {
        arr_28 [i_6] [i_6] = var_14;
        arr_29 [i_6] = (arr_25 [8]);
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
    {
        arr_32 [i_7] = ((((min((var_9 | 1), (max((arr_27 [7] [i_7]), (arr_25 [i_7])))))) ? (((max(1, var_11)))) : (min(((var_18 ? 8573134472842543762 : 3838977238)), (arr_25 [i_7])))));
        arr_33 [i_7] = 1;
    }
    for (int i_8 = 0; i_8 < 12;i_8 += 1)
    {
        arr_36 [i_8] = (max(((max(var_1, var_16))), ((var_9 ? 9126810137494078871 : var_13))));
        var_24 = ((((min(59950, 0))) ? 62588 : 9699676665260055236));
        var_25 = arr_31 [i_8];
    }
    #pragma endscop
}
