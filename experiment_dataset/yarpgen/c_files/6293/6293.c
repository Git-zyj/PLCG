/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_17 = ((~(arr_0 [i_0])));

        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            var_18 = (((arr_0 [i_0]) != ((((arr_3 [i_0]) == (arr_0 [i_0]))))));
            var_19 = (arr_2 [i_1] [i_0]);
        }
        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_20 = ((~(arr_0 [i_2 - 1])));
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    {
                        var_21 = (((arr_3 [i_2 + 2]) != (arr_9 [i_2 + 2] [i_2 + 1] [i_2 - 1])));
                        var_22 = (~1942514684);
                        var_23 = (((241 >> (695693800 - 695693792))));

                        for (int i_5 = 0; i_5 < 17;i_5 += 1)
                        {
                            var_24 = ((~(arr_4 [i_2] [i_2 + 2] [i_2])));
                            var_25 = (arr_12 [i_3] [i_5] [i_3] [9] [i_5]);
                            var_26 = ((((((var_3 + 2147483647) >> (((arr_2 [i_0] [i_2 - 1]) - 45052))))) ? (((~(arr_10 [i_4])))) : 1942514699));
                        }
                    }
                }
            }
            var_27 ^= 2004396151;
        }
        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 16;i_7 += 1)
            {
                var_28 = (((-1089984130 <= 35184372088830) == (arr_14 [16] [i_7] [i_7] [i_7] [i_7 + 1] [i_7])));
                var_29 = ((~(((!(arr_12 [i_0] [2] [i_6] [i_7] [i_7]))))));
            }
            for (int i_8 = 2; i_8 < 14;i_8 += 1)
            {
                var_30 = (((arr_11 [i_0] [i_6] [i_8] [i_6]) ? 1 : ((-1089984130 & (arr_4 [i_0] [i_6] [i_8 - 2])))));
                var_31 = (((((arr_7 [i_0] [i_0] [5] [i_8]) && (arr_18 [i_0] [i_6] [i_8 - 1] [i_8]))) ? (arr_9 [i_8 + 1] [i_8 + 1] [i_8 + 1]) : (arr_0 [i_6])));

                for (int i_9 = 0; i_9 < 17;i_9 += 1)
                {
                    var_32 = ((((~(arr_20 [i_8]))) % (arr_3 [i_8])));
                    var_33 = ((-526 / (arr_14 [i_8] [i_8 - 1] [i_8 - 1] [i_8 - 1] [i_8 + 2] [i_8 + 2])));
                    var_34 = (!1);
                    var_35 ^= ((~(((arr_0 [i_6]) ? 8388096 : (arr_16 [i_0] [i_6])))));
                    var_36 ^= (arr_12 [i_0] [8] [i_8 + 1] [i_8] [1]);
                }
                var_37 = ((32767 ? ((((arr_18 [1] [i_6] [i_6] [i_6]) >= 36060))) : ((((arr_20 [i_8]) < (arr_0 [i_8]))))));
            }
            for (int i_10 = 0; i_10 < 17;i_10 += 1)
            {
                var_38 = (max(var_38, ((((arr_21 [i_0] [i_0] [1] [i_0]) ? (arr_2 [i_0] [i_6]) : (arr_1 [i_0]))))));
                var_39 = ((((9 ? var_5 : (arr_4 [i_0] [i_6] [i_10]))) | (arr_14 [0] [i_6] [i_10] [i_10] [i_10] [i_6])));
                var_40 ^= -6577;
            }
            var_41 = ((((4294967295 ? 0 : 116)) != (arr_2 [i_6] [i_0])));
            var_42 &= ((!((((arr_23 [i_0] [i_0] [i_0] [i_6]) ? 1097538207 : (arr_9 [i_0] [i_0] [i_0]))))));
        }
        for (int i_11 = 0; i_11 < 17;i_11 += 1)
        {
            var_43 = (((arr_4 [i_0] [i_0] [i_11]) ? (arr_4 [i_11] [i_11] [i_11]) : (arr_0 [i_0])));
            var_44 = (~1812095049);
            var_45 = (arr_16 [i_0] [i_11]);
        }
        var_46 = (min(var_46, ((((((-(arr_10 [i_0])))) && (arr_15 [i_0] [i_0] [i_0]))))));
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 17;i_12 += 1) /* same iter space */
    {
        var_47 = (arr_6 [i_12] [i_12] [i_12]);
        var_48 = (!1);
    }
    var_49 = (9008540513030148379 ? 29525 : 62152);
    var_50 = var_0;
    #pragma endscop
}
