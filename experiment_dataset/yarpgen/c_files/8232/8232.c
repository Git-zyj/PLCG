/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            arr_16 [i_0 + 1] [i_0] [i_0 - 2] = (max(((-(arr_14 [i_0] [i_1] [i_0]))), (arr_14 [i_0] [i_2 + 1] [i_0])));
                            var_17 = (min(((~(-1575 == 1))), (min((~11938), ((~(arr_1 [i_0 - 1] [i_4 - 1])))))));
                            arr_17 [i_0] = 61;
                        }
                        arr_18 [i_0 + 1] [i_1] [i_0] [i_3] [i_3] = ((min((arr_14 [i_2 - 2] [i_2 - 3] [i_0]), (arr_4 [i_2 - 4] [i_2 - 1] [i_2 - 2]))));
                    }
                }
            }
        }
        var_18 = (min(var_18, (((((arr_0 [i_0 + 1]) * (arr_0 [i_0 - 2])))))));
    }
    var_19 = 9223372036854775807;

    /* vectorizable */
    for (int i_5 = 2; i_5 < 9;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 11;i_6 += 1) /* same iter space */
        {
            var_20 *= (!7976);
            arr_26 [i_5 - 1] = ((var_3 ? (arr_7 [i_5 + 1] [i_5 + 1]) : (arr_25 [i_5 - 2])));
            arr_27 [i_5 - 1] [i_5 + 2] [i_5 - 2] = ((((((((arr_23 [i_5 + 1] [i_5 + 1] [i_5 - 2]) + 2147483647)) >> (-1 + 18)))) ? (arr_9 [16]) : 90));
            arr_28 [i_5 + 1] = (arr_10 [i_5 + 2] [i_6] [6] [i_5 + 1]);
        }
        for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
        {
            arr_31 [i_5 + 1] [i_5 + 1] [i_7] = ((!(((var_14 ? -116 : 57559)))));
            arr_32 [i_5 + 1] [i_5 - 2] [i_7] = -15;
            var_21 = (max(var_21, (((-(arr_11 [i_5 + 1] [14] [i_7] [i_5 + 2]))))));
        }
        var_22 = ((1 != (arr_1 [i_5 + 2] [i_5 + 2])));
        arr_33 [i_5 + 1] [i_5 - 1] = ((~(arr_23 [i_5 + 2] [i_5 + 2] [i_5 - 1])));
    }
    for (int i_8 = 0; i_8 < 0;i_8 += 1)
    {
        var_23 = ((((arr_35 [i_8 + 1] [i_8 + 1]) <= 57538)));
        arr_36 [i_8 + 1] = ((-(arr_35 [i_8 + 1] [i_8 + 1])));
        var_24 = (((~-1) == (~118)));
        var_25 = (min(var_25, (((((arr_35 [i_8 + 1] [i_8 + 1]) > (arr_35 [i_8 + 1] [i_8 + 1])))))));
        var_26 = (min(var_26, (arr_35 [i_8 + 1] [i_8 + 1])));
    }
    var_27 = (max(var_27, ((5327510328374288517 ? var_9 : 14476963319538322836))));
    #pragma endscop
}
