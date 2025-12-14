/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70070
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 += 32767;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_16 = ((((((((arr_1 [2] [2]) + (arr_0 [i_0])))) ? var_2 : (((arr_1 [i_0] [i_0]) / (arr_0 [i_0]))))) * (((((max(0, var_11))) ? (2145529629 - 2145529629) : (!6763))))));
        var_17 = (arr_1 [i_0] [i_0]);
        var_18 = (min(((9223372036854775807 - (var_11 - -3479032379143957651))), ((((arr_1 [i_0] [i_0]) ? 0 : 26183)))));
        var_19 = ((-1066876138 ? (((2240429874 ? var_5 : 0))) : ((-3781520746567296357 ? 4294967295 : -1391412036))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 4; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, (((1174724397 >> (198 - 174))))));

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            var_21 = 6763;
                            var_22 = (arr_8 [i_3] [i_3] [i_3 - 1] [3] [i_3] [i_3]);
                        }
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_23 = ((((159 ? -23795 : 9223372036854775807)) - (arr_8 [i_5] [24] [i_2 - 4] [i_5] [i_5] [i_2 - 1])));
                            var_24 = ((-(arr_7 [i_5] [i_2])));
                        }
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            var_25 = (max(((((arr_13 [i_6] [i_3 + 2] [i_2 - 1] [i_2 - 3] [i_2]) ? 23794 : 1871206842))), ((2002819906 ? (var_13 & 0) : (~219)))));
                            var_26 = (max((arr_3 [i_3 + 1] [i_2 - 1]), (arr_2 [i_2 - 2] [0] [i_3 + 2])));
                            var_27 = (max(var_27, (((23794 > (arr_6 [i_0] [9] [10] [i_0]))))));
                            var_28 -= (max((((arr_4 [i_3 + 3]) ? (arr_4 [i_3 + 1]) : (arr_4 [i_3 + 1]))), ((min(var_9, (arr_4 [i_3 - 1]))))));
                            var_29 = (var_12 <= var_6);
                        }
                        var_30 = (((((58 - (((arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [i_1]) : 247))))) ? ((32 - (arr_0 [i_0]))) : (arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    }
                }
            }
            var_31 = (arr_9 [i_1] [i_0] [i_0] [i_0] [i_0]);
        }
        for (int i_7 = 0; i_7 < 25;i_7 += 1)
        {
            var_32 = (arr_2 [i_0] [0] [i_0]);
            var_33 |= arr_2 [21] [i_7] [1];
        }
    }

    /* vectorizable */
    for (int i_8 = 1; i_8 < 8;i_8 += 1)
    {
        var_34 = ((-((var_13 ? 1066876138 : (arr_20 [i_8 - 1])))));
        var_35 |= (((((~(arr_14 [i_8 + 1] [i_8 + 1] [2] [i_8] [i_8 - 1] [i_8])))) ? (arr_6 [21] [i_8] [i_8 + 2] [i_8]) : (((30815 - (arr_17 [i_8] [i_8] [i_8] [11] [i_8] [i_8]))))));
        var_36 *= ((var_3 ? (arr_19 [i_8 - 1]) : ((-28652 ? 678090397 : 255))));
    }
    #pragma endscop
}
