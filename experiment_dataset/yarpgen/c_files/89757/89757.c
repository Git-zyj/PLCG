/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89757
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89757 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89757
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (!var_7);
    var_14 = ((((max(((23 ? var_1 : var_1)), var_1))) * (var_0 * var_6)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_15 |= (~var_12);

                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    var_16 = (min(var_16, ((max(var_6, (((-((-(arr_8 [i_0] [i_1] [i_1] [i_2])))))))))));
                    arr_9 [i_0] [i_1] = (arr_4 [i_0] [i_0]);
                    arr_10 [5] [i_1] [i_2] = (arr_5 [i_0] [i_1] [i_2]);
                    arr_11 [i_1] [i_1] [i_0] [i_0] = 977455608;
                    var_17 = (max((max(var_6, (arr_7 [i_0 + 1] [14] [i_0] [16]))), ((min((max((arr_3 [8] [i_1]), (arr_0 [i_2]))), (((0 ? var_7 : -98))))))));
                }
                for (int i_3 = 1; i_3 < 16;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 17;i_4 += 1)
                    {
                        for (int i_5 = 1; i_5 < 16;i_5 += 1)
                        {
                            {
                                var_18 = var_3;
                                var_19 = (((((21555 ? 2186683760 : 9223372036854775807))) ? (((arr_6 [11] [i_4]) ? (arr_5 [i_0] [16] [i_1]) : ((max((arr_12 [i_3]), var_10))))) : (arr_18 [i_5] [i_4] [i_4] [i_3] [i_1] [i_0] [6])));
                                arr_21 [i_0] [7] [i_3] [i_0] [i_0] [i_0] [i_0] = (arr_8 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_5]);
                            }
                        }
                    }
                    var_20 |= (--2108283535);
                    var_21 = var_3;
                }
                /* vectorizable */
                for (int i_6 = 3; i_6 < 16;i_6 += 1)
                {

                    for (int i_7 = 1; i_7 < 14;i_7 += 1)
                    {
                        var_22 |= var_4;
                        var_23 = (arr_14 [10] [i_1] [i_1] [i_1]);
                        var_24 |= var_5;
                    }
                    for (int i_8 = 0; i_8 < 17;i_8 += 1)
                    {
                        var_25 = ((~(arr_2 [i_0 + 2] [i_6 - 3])));
                        var_26 = (arr_13 [i_0] [1] [i_0] [i_1]);
                    }
                    arr_29 [i_0] [i_0] [i_0 + 2] [i_0] = 1;

                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        var_27 = (max(var_27, ((((arr_5 [i_0] [i_0 + 1] [i_6 - 3]) + (arr_13 [i_0 + 2] [i_6 - 3] [i_6] [15]))))));
                        arr_32 [i_0] [i_1] [i_6] [i_9] [i_9] [i_0] = ((2499338613 ? 2108283505 : (((-9223372036854775807 - 1) ? 12 : 2186683761))));
                    }
                    var_28 |= (arr_8 [i_0 - 1] [i_1] [i_6] [i_6 + 1]);
                    var_29 = (((arr_27 [i_0 + 2] [i_6 + 1] [i_0 + 2]) < (arr_19 [i_0] [i_0] [i_1] [i_1] [i_1] [i_1] [i_6])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 18;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 20;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 20;i_12 += 1)
            {
                {
                    arr_40 [i_12] [i_11] = (min((arr_34 [0] [i_12]), ((min(((((arr_38 [i_10]) != var_12))), (arr_36 [i_10] [i_10] [i_10 - 1]))))));

                    for (int i_13 = 0; i_13 < 1;i_13 += 1)
                    {
                        arr_43 [i_13] = var_3;
                        var_30 = (arr_35 [i_10]);
                    }
                    for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
                    {
                        var_31 = (((((arr_42 [i_10] [i_10 + 1]) ? var_11 : (arr_41 [i_10 + 2] [i_10 + 1] [i_10 - 2] [i_11] [i_10] [i_10 - 1])))) ? 1 : (max(var_6, (max((arr_33 [i_14]), var_9)))));
                        var_32 = 15378104744500277091;
                        var_33 = (((arr_34 [i_10] [i_14]) ? (min(var_6, (arr_36 [i_10 - 2] [i_10 - 1] [i_10]))) : (max(18446744073709551604, (arr_42 [i_12] [i_11])))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
                    {

                        for (int i_16 = 1; i_16 < 18;i_16 += 1)
                        {
                            var_34 = (((((~(arr_50 [i_16])))) / (arr_42 [i_16 + 1] [0])));
                            var_35 = (arr_41 [i_16] [i_16] [16] [i_10] [0] [i_16]);
                        }
                        var_36 = (arr_41 [i_15] [i_15] [i_15] [i_11] [i_15] [i_15]);
                    }
                    /* vectorizable */
                    for (int i_17 = 2; i_17 < 19;i_17 += 1)
                    {

                        for (int i_18 = 0; i_18 < 20;i_18 += 1)
                        {
                            var_37 = ((var_6 >> (var_8 + 8265785394128695568)));
                            var_38 = var_4;
                            var_39 = (((arr_44 [i_10 + 1] [2] [i_10 + 1] [i_10]) && (arr_44 [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10])));
                            var_40 = var_2;
                        }

                        for (int i_19 = 0; i_19 < 20;i_19 += 1)
                        {
                            arr_59 [i_19] [i_17] [i_12] [i_11] = ((!(((4062538338933475358 | (arr_39 [0] [16] [0] [i_17 + 1]))))));
                            var_41 = (arr_38 [12]);
                            var_42 = (!var_12);
                            var_43 = (!-977455600);
                        }
                        for (int i_20 = 0; i_20 < 20;i_20 += 1)
                        {
                            var_44 = (arr_45 [i_20] [i_17] [i_12] [1] [i_10]);
                            var_45 = (arr_54 [i_10]);
                        }
                        for (int i_21 = 0; i_21 < 20;i_21 += 1)
                        {
                            arr_65 [i_21] [3] [16] [i_10] [i_21] = var_4;
                            var_46 = (min(var_46, (((15378104744500277091 > (var_8 != 5681975245855343887))))));
                        }
                        var_47 |= arr_38 [i_17];
                        arr_66 [i_10] = -70;
                        arr_67 [i_17 - 1] [1] = (arr_58 [i_17 - 1] [i_12] [i_11]);
                    }
                    var_48 = var_8;
                    var_49 = (min(var_49, (((((arr_61 [i_10] [i_11] [i_11] [i_11] [i_12] [i_11]) ? ((((arr_57 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10]) != (arr_62 [i_10] [i_10] [i_10] [i_11] [i_11] [i_12])))) : (var_0 != var_10)))))));
                }
            }
        }
    }
    #pragma endscop
}
