/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87528
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((((((var_1 ? var_2 : var_6))) ? var_3 : (var_10 ^ var_9))) > var_10));
    var_14 = 74413058960074988;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_15 = (max(var_15, var_10));
        arr_3 [i_0] = (((arr_0 [i_0] [i_0]) / (((arr_2 [i_0]) | (arr_1 [i_0])))));
        arr_4 [7] [i_0] = ((var_1 < (arr_0 [i_0] [i_0])));
    }
    for (int i_1 = 2; i_1 < 16;i_1 += 1)
    {
        var_16 = (max(((74413058960074988 ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 - 1]))), (arr_5 [i_1 - 1])));
        arr_7 [i_1 + 2] = (min((arr_6 [i_1 + 1] [i_1 + 1]), (arr_6 [14] [i_1 + 3])));
        arr_8 [i_1] [i_1] = ((((((arr_5 [i_1 + 2]) >> (((arr_5 [i_1 + 3]) - 8964169577445382399))))) ? (var_4 & 1337581606) : ((((-74413058960074996 && (((-(arr_5 [i_1]))))))))));
        arr_9 [i_1] [i_1] = (min(-74413058960074993, 8588033476487013957));

        /* vectorizable */
        for (int i_2 = 3; i_2 < 18;i_2 += 1)
        {
            arr_12 [17] [i_2 - 3] = var_12;
            var_17 = (var_4 / var_10);
            var_18 &= var_11;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [i_3] [i_3] [i_3] [i_3] [i_4] [i_3] = ((9191626984325016563 ? (7255221502682260422 || -41113709) : 1389345846));
                            arr_22 [i_3] [i_3] [6] [i_3] [i_4 + 2] [i_4] [i_5] = 1389345846;
                            arr_23 [i_3] = -521461560;
                            var_19 = (((arr_6 [i_4 + 1] [i_1 + 2]) << (((var_3 + 8686451625020621823) - 38))));
                        }
                    }
                }
            }
            var_20 = (max(var_20, ((((arr_20 [i_1 + 2] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 2] [0]) && 7255221502682260422)))));
        }
        for (int i_6 = 0; i_6 < 19;i_6 += 1) /* same iter space */
        {

            for (int i_7 = 0; i_7 < 19;i_7 += 1)
            {
                arr_30 [i_7] = (2852492168 ? (((~1389345842) ? (max(2905621433, var_2)) : (max(var_11, (arr_25 [i_1] [i_1] [i_7]))))) : ((((2110926611 + 2517414679485633150) ? -29 : (arr_14 [0] [i_6] [i_7])))));
                var_21 = (max(var_21, ((max((arr_13 [i_1] [13] [2]), ((min(6920608570793110024, ((9223372036854775807 ? (arr_28 [1]) : var_3))))))))));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 19;i_8 += 1)
            {
                var_22 = (arr_28 [i_1]);
                arr_34 [i_1] [3] = ((var_2 << (var_6 - 1976486097)));
                var_23 = arr_13 [3] [i_6] [i_6];
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 15;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        {
                            var_24 = (max(var_24, ((((arr_26 [i_1]) ? (var_10 > var_3) : (arr_10 [i_1] [i_1] [i_1]))))));
                            arr_43 [i_1 + 3] [i_6] [i_1 + 3] [i_1 + 3] [i_11] [i_11] = (((arr_13 [i_6] [i_6] [i_6]) % (arr_35 [i_10 + 2] [i_10 + 3] [i_1 + 1] [i_1 - 2])));
                            arr_44 [i_11] = ((!(arr_24 [i_1] [i_1 + 3])));
                            var_25 = (min(var_25, (-9223372036854775807 - 1)));
                        }
                    }
                }

                for (int i_12 = 0; i_12 < 19;i_12 += 1)
                {
                    arr_47 [i_12] = (~var_6);
                    var_26 *= var_9;
                    var_27 = (+(((arr_16 [i_12]) ? var_8 : var_9)));
                    arr_48 [i_12] = (((((arr_42 [i_12] [1] [i_12] [i_12] [i_12] [i_12]) ? var_3 : 62))) ? var_12 : (arr_45 [i_12]));
                    var_28 = ((var_0 ? -89 : 64));
                }
            }
            var_29 = ((!(~1492320136)));
            var_30 = 79941132;
        }
        for (int i_13 = 0; i_13 < 19;i_13 += 1) /* same iter space */
        {
            var_31 = -1856953714677223630;
            arr_51 [i_1] [i_13] [i_13] = ((((min((arr_49 [i_1]), var_11))) ? ((var_2 ? ((((-733551116 + 2147483647) >> (((arr_31 [i_1 - 2] [i_1 - 2] [17]) - 479140065))))) : (min((arr_18 [i_1] [i_1] [i_1] [i_1] [i_13] [3] [i_13]), var_4)))) : (arr_45 [i_13])));
            arr_52 [i_13] [i_13] = -6169689406523192076;
        }
    }
    var_32 = (min(((((max(var_9, var_9))) + (max(-8157963431116857545, var_12)))), var_6));
    #pragma endscop
}
