/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91449
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 4 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned int i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) arr_6 [i_2] [i_2] [i_2] [i_2]);
                    arr_7 [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1])) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_2] [i_1]))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 19; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned long long int) var_6);
                                arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_5 [i_0]) : (arr_5 [i_0])));
                                var_18 = ((/* implicit */_Bool) arr_2 [i_0] [i_1]);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
                        {
                            {
                                var_19 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [2U])) ? (((/* implicit */int) arr_1 [0U])) : (((/* implicit */int) arr_1 [4LL]))));
                                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_14 [i_6] [i_5] [i_5] [i_2] [i_1] [i_0]) : (arr_4 [i_0] [i_1] [i_0])));
                                arr_18 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_5] [i_6])) ? (arr_11 [i_0] [i_1] [i_5] [i_2] [i_6] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_5] [i_1])))));
                                var_21 = ((/* implicit */short) var_1);
                                var_22 = ((/* implicit */long long int) arr_6 [i_1] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_19 [i_0] = ((/* implicit */unsigned long long int) var_6);
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_8 = 2; i_8 < 12; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_9 = 3; i_9 < 12; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    {
                        arr_32 [i_8] [i_8] [i_8] = ((/* implicit */unsigned short) arr_2 [i_8 - 1] [i_8 - 2]);
                        /* LoopSeq 2 */
                        for (unsigned int i_11 = 0; i_11 < 14; i_11 += 4) 
                        {
                            arr_37 [i_8] [i_8] [i_9] [i_8] [i_11] [i_7] [i_10] = ((((/* implicit */_Bool) arr_8 [i_8 - 2] [i_7] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_24 [i_10] [i_8 + 2] [i_9]));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) var_13))));
                            var_24 = ((/* implicit */short) var_0);
                            var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-12336)) : (((/* implicit */int) (unsigned short)65535))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned int) arr_21 [i_8 + 2]);
                            var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_9 - 2] [i_8 - 1] [i_9])) ? (((/* implicit */int) arr_27 [i_9 + 2] [i_8 + 1] [i_12])) : (((/* implicit */int) arr_27 [i_9 - 3] [i_8 + 2] [i_9]))));
                            var_28 = ((/* implicit */short) var_10);
                        }
                        var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (arr_28 [i_8 + 2] [i_8] [i_8 - 1] [i_9 - 1]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)6848))) : (9223372036854775807LL))))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_13 = 2; i_13 < 13; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 1) 
                    {
                        {
                            arr_51 [i_8] [i_15] [i_13] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_8] [i_14] [i_15])) ? (arr_31 [i_8] [i_8] [i_8 - 1]) : (((/* implicit */unsigned long long int) arr_47 [i_13 + 1] [i_8] [i_13]))));
                            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_4))));
                            arr_52 [i_7] [i_8] [i_13] [i_8] [i_15] = arr_35 [i_8] [i_13] [i_13] [i_13 + 1] [i_8];
                        }
                    } 
                } 
                var_31 += ((/* implicit */long long int) arr_10 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_8 + 2] [i_8 - 1]);
            }
        }
        /* LoopNest 2 */
        for (unsigned short i_16 = 1; i_16 < 13; i_16 += 2) 
        {
            for (unsigned int i_17 = 0; i_17 < 14; i_17 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
                    {
                        var_32 = ((/* implicit */int) max((var_32), (((((/* implicit */_Bool) arr_43 [i_16 - 1] [i_16] [i_7])) ? (((/* implicit */int) arr_62 [i_7] [i_7] [i_17])) : (arr_21 [i_7])))));
                        arr_64 [i_18] [i_17] [i_17] [i_16] [i_7] = ((/* implicit */short) arr_5 [i_17]);
                    }
                    for (long long int i_19 = 0; i_19 < 14; i_19 += 3) 
                    {
                        arr_67 [i_16] [i_16] [i_7] [i_17] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_16] [i_16] [i_16 - 1])) ? (arr_12 [i_16] [i_16] [i_16 - 1]) : (arr_12 [i_16] [i_16] [i_16 + 1])));
                        var_33 = ((/* implicit */unsigned int) max((var_33), (var_10)));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 14; i_20 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_21 = 2; i_21 < 13; i_21 += 1) 
                        {
                            arr_73 [i_7] [i_7] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_31 [i_7] [i_16] [i_20])) ? (((/* implicit */long long int) arr_30 [i_7] [i_16] [i_17] [i_20] [i_21])) : (var_11)));
                            arr_74 [i_7] [i_7] [i_7] [i_17] [i_7] = ((/* implicit */long long int) arr_1 [i_17]);
                            arr_75 [i_21] [i_16] [i_17] [i_20] [i_7] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_17])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_17]))));
                            var_34 = ((/* implicit */unsigned short) var_11);
                            var_35 = arr_8 [i_7] [i_16] [i_17];
                        }
                        var_36 = arr_3 [i_17];
                        /* LoopSeq 2 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            var_37 = ((/* implicit */long long int) arr_58 [i_7] [i_16] [i_17] [i_20]);
                            var_38 = arr_5 [i_17];
                            arr_78 [i_7] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_49 [i_16] [i_16] [i_16] [i_16 - 1] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_72 [i_17] [i_20] [i_17] [i_16] [i_17]))) : (var_10)));
                        }
                        for (unsigned long long int i_23 = 1; i_23 < 11; i_23 += 2) 
                        {
                            var_39 |= ((var_6) ? (arr_8 [i_7] [i_23 + 1] [i_7]) : (arr_8 [i_23] [i_23 + 2] [i_20]));
                            arr_82 [i_7] [i_17] [i_17] [i_17] [i_23] [i_20] [i_7] = ((/* implicit */long long int) var_13);
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_17] [i_16 - 1] [i_17])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_72 [i_17] [i_23 - 1] [i_16 + 1] [i_16 + 1] [i_17]))));
                        }
                        arr_83 [i_17] [i_16] [i_17] [i_20] = ((/* implicit */long long int) arr_42 [i_7] [i_7] [i_7] [i_7]);
                    }
                    var_41 *= ((/* implicit */unsigned int) arr_58 [i_16 + 1] [i_16 - 1] [i_16 + 1] [i_16]);
                    arr_84 [i_17] [i_17] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_57 [i_17] [i_16] [i_17])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_7] [i_7] [i_16 + 1] [i_17] [i_7]))) : (arr_57 [i_7] [i_16] [i_17])));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_24 = 0; i_24 < 17; i_24 += 2) 
    {
        var_42 = ((/* implicit */long long int) var_10);
        var_43 = ((/* implicit */unsigned int) arr_5 [i_24]);
    }
    for (long long int i_25 = 0; i_25 < 19; i_25 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
        {
            for (unsigned int i_27 = 0; i_27 < 19; i_27 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_28 = 3; i_28 < 18; i_28 += 2) 
                    {
                        for (signed char i_29 = 0; i_29 < 19; i_29 += 1) 
                        {
                            {
                                arr_101 [i_25] [i_26] [i_25] [i_25] [i_25] = ((/* implicit */unsigned short) min((max((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_97 [i_26])) ? (((/* implicit */long long int) arr_4 [i_25] [i_25] [i_26])) : (var_2)))))), (var_13)));
                                arr_102 [i_29] [i_28] [i_27] [i_27] [i_26] [i_25] [i_25] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_95 [i_25] [i_27] [i_27] [i_28 - 3])) ? (min((arr_95 [i_25] [i_27] [i_27] [i_28 - 2]), (arr_95 [i_26] [i_27] [i_28] [i_28 - 2]))) : (((/* implicit */unsigned long long int) var_9))));
                                arr_103 [i_25] [i_27] [i_25] [i_26] [i_25] = ((/* implicit */short) var_4);
                            }
                        } 
                    } 
                    arr_104 [i_25] [i_26] = ((/* implicit */unsigned long long int) min((min((var_3), (((/* implicit */unsigned char) arr_16 [i_26] [i_25] [i_25] [i_25] [i_26] [i_27])))), (((/* implicit */unsigned char) arr_90 [i_25]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_30 = 2; i_30 < 18; i_30 += 2) 
        {
            for (long long int i_31 = 0; i_31 < 19; i_31 += 1) 
            {
                for (unsigned int i_32 = 0; i_32 < 19; i_32 += 4) 
                {
                    {
                        var_44 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) arr_108 [i_30 - 2])) ? (arr_108 [i_30 - 1]) : (((/* implicit */long long int) arr_96 [i_31] [i_31] [i_31] [i_30 - 2] [i_31])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_96 [i_31] [i_32] [i_30] [i_30 + 1] [i_31])) ? (arr_96 [i_31] [i_32] [i_31] [i_30 + 1] [i_31]) : (arr_96 [i_31] [i_32] [i_30] [i_30 - 2] [i_31]))))));
                        arr_112 [i_31] [i_30] [i_31] [i_32] [i_25] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_111 [i_30] [i_31] [i_30 + 1] [i_30] [i_31] [i_30 - 2])))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_111 [i_31] [i_31] [i_30 - 2] [i_30] [i_31] [i_30 - 1]))) : (max((var_2), (((/* implicit */long long int) var_4)))));
                        arr_113 [i_25] [i_32] [i_31] [i_31] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_93 [i_25]), (((/* implicit */long long int) var_3))))) ? (max((((/* implicit */unsigned long long int) var_6)), (arr_15 [i_25] [i_25]))) : (((/* implicit */unsigned long long int) var_15))))) ? (((/* implicit */unsigned long long int) var_1)) : (arr_88 [i_25])));
                        var_45 = arr_105 [i_31] [i_30 - 2];
                    }
                } 
            } 
        } 
    }
    var_46 *= ((/* implicit */long long int) var_4);
    var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) ((var_5) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), (min((var_13), (((/* implicit */unsigned long long int) (unsigned short)65535)))))))))));
}
