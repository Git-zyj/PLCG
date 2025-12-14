/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_6;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_21 = (((((((arr_0 [i_0] [i_0]) ? (arr_0 [i_1] [i_0]) : 65535)))) == ((~(var_9 & var_15)))));
                var_22 = (0 * 255);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {

                            for (int i_4 = 3; i_4 < 15;i_4 += 1) /* same iter space */
                            {
                                var_23 = (((((max(var_16, (arr_5 [i_4] [i_4] [i_0 + 1]))))) + ((var_15 ? (arr_1 [i_0]) : (max(1895512988, 7))))));
                                var_24 = arr_7 [i_1];
                                var_25 |= (((arr_4 [i_0] [i_0 - 2] [i_0]) ? (((((0 ? 1895512988 : -7))) ? 255 : (arr_8 [i_1] [i_2] [i_3] [1]))) : ((~((7 ? var_17 : (arr_5 [i_1] [i_2] [i_3])))))));
                            }
                            for (int i_5 = 3; i_5 < 15;i_5 += 1) /* same iter space */
                            {
                                var_26 = ((~((var_5 ? (arr_10 [i_3] [i_1] [13] [i_1] [i_0]) : var_4))));
                                var_27 = ((arr_7 [i_0]) ? (((var_5 & var_13) - ((2399454308 ? var_8 : (arr_6 [i_1] [i_5]))))) : 0);
                            }
                            for (int i_6 = 3; i_6 < 15;i_6 += 1) /* same iter space */
                            {
                                var_28 -= var_3;
                                var_29 = (~-2147483647);
                                var_30 = 19;
                                var_31 ^= ((((((max(var_11, (arr_15 [i_2] [i_2] [i_2] [i_2] [i_2]))) ^ (arr_13 [i_0] [i_6 - 3] [i_6] [i_6 + 1] [i_6] [i_6])))) ? (((max(243, 0)))) : (((arr_0 [i_0 - 2] [i_6 - 2]) ? var_16 : (arr_0 [i_0 + 3] [i_6 - 3])))));
                            }
                            var_32 = (max(((-(var_12 & var_19))), (((-127 - 1) | (min((arr_16 [i_0] [4] [i_2] [i_3] [i_3]), var_10))))));
                            var_33 = (min(var_33, (((((((arr_3 [i_0] [i_1]) | var_6))) ? ((((arr_10 [i_0] [i_1] [i_2] [i_0] [i_3]) ^ (arr_3 [i_0 + 1] [i_1])))) : ((var_19 & (arr_14 [i_0] [i_0] [i_1] [i_0] [i_2] [i_2] [i_3]))))))));
                        }
                    }
                }
                var_34 = (((-127 - 1) ? var_9 : var_11));

                for (int i_7 = 0; i_7 < 16;i_7 += 1)
                {
                    var_35 = var_13;
                    var_36 = arr_13 [i_1] [i_0] [i_1] [i_7] [i_1] [i_7];
                }
            }
        }
    }
    var_37 += (min((~4), ((((min(var_1, var_17))) ? (~20) : ((var_2 ? 0 : var_0))))));
    /* LoopNest 2 */
    for (int i_8 = 4; i_8 < 23;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 24;i_9 += 1)
        {
            {
                var_38 = var_6;
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 25;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 25;i_12 += 1)
                        {
                            {
                                var_39 = 255;
                                var_40 = (max((arr_27 [i_9] [i_9]), (arr_30 [i_8 - 1] [i_9 + 1] [i_10])));
                                var_41 = 296550072;
                            }
                        }
                    }
                }
                var_42 = ((((var_6 ? (arr_34 [i_8] [4]) : var_6)) - ((min((arr_26 [i_9 - 1] [i_9] [i_8 - 3]), (arr_33 [i_8 - 3] [i_9] [i_9] [i_9] [i_8] [i_8 - 2] [i_8]))))));

                for (int i_13 = 2; i_13 < 23;i_13 += 1)
                {
                    var_43 = (min(var_43, var_13));
                    var_44 = (min(-var_9, (((arr_23 [i_8]) ? ((-6133904807976985544 + (arr_35 [18] [i_9] [10] [i_13] [i_8]))) : (67 > 132120576)))));
                    var_45 = (min(209, ((((max(var_17, var_9))) ? (max(var_4, var_2)) : (arr_27 [i_8] [i_8])))));
                    /* LoopNest 2 */
                    for (int i_14 = 1; i_14 < 22;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 25;i_15 += 1)
                        {
                            {
                                var_46 = (((arr_23 [i_8]) ? (((var_14 ? 255 : (arr_37 [i_14] [i_8 - 4] [i_8 - 4])))) : (min((((arr_39 [i_8] [i_14] [i_15]) / -8704370456294423524)), (min(-6133904807976985566, 1))))));
                                var_47 = (max((arr_37 [i_8] [i_9] [15]), 7));
                                var_48 = var_0;
                                var_49 = (max(var_49, ((((((arr_24 [22] [i_8 + 2]) ? (arr_27 [i_8] [i_8 - 3]) : (arr_42 [i_8] [i_13] [i_9] [i_9 - 1] [i_15]))) ^ (((arr_42 [i_8] [i_13] [i_9] [i_9 - 1] [16]) ? (arr_27 [i_8] [i_8 + 2]) : (arr_24 [i_8] [i_8 - 2]))))))));
                            }
                        }
                    }
                }
                for (int i_16 = 3; i_16 < 23;i_16 += 1)
                {
                    var_50 = ((-(arr_32 [16] [i_9] [i_9 + 1] [i_9])));
                    var_51 = (min(((((245 && 1) / (arr_31 [i_8] [i_9] [i_16] [i_8])))), (max(((var_12 ? var_5 : var_8)), ((((arr_30 [i_8 - 3] [i_9] [i_16]) ? (arr_32 [i_16] [9] [i_8] [i_8]) : (arr_22 [i_8] [i_9]))))))));
                    var_52 = var_10;

                    for (int i_17 = 0; i_17 < 1;i_17 += 1)
                    {
                        var_53 = 254;
                        var_54 = ((!(((var_14 ? var_0 : (arr_38 [i_9 + 1] [i_8]))))));
                        var_55 = (min(var_55, (arr_39 [12] [i_16 + 1] [10])));
                        var_56 = (((((var_0 ? (arr_34 [i_16 + 2] [i_8 - 2]) : var_5))) ? (((arr_34 [i_16 - 3] [i_8 - 1]) | (arr_34 [i_16 + 1] [i_8 + 1]))) : (arr_34 [i_16 - 1] [i_8 - 2])));
                        var_57 = min(((((var_17 ? 245 : var_6)))), (arr_47 [i_8] [i_8] [i_8]));
                    }
                    var_58 &= ((1 & ((var_10 + (arr_33 [i_8] [i_9] [i_9] [i_9] [i_16] [i_16] [i_16])))));
                }
                var_59 = (max((27082 || 15), (7456805804285842888 - 671039788)));
            }
        }
    }
    #pragma endscop
}
