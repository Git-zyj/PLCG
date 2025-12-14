/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74544
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_1 [i_0] [i_0]))))) && (((/* implicit */_Bool) var_7))));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            arr_7 [i_1] [i_1] = ((/* implicit */short) arr_1 [i_0] [i_1]);
            /* LoopSeq 2 */
            for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                arr_11 [i_1] [i_1] [i_2] = ((/* implicit */unsigned short) arr_0 [(unsigned short)3]);
                /* LoopSeq 4 */
                /* vectorizable */
                for (short i_3 = 4; i_3 < 19; i_3 += 1) 
                {
                    arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_3 - 3] [i_0])) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_3])) : (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_2]))))));
                    /* LoopSeq 2 */
                    for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
                    {
                        arr_18 [i_0] [i_4] [i_2] [i_3] [(short)12] &= ((/* implicit */unsigned char) (unsigned short)16657);
                        arr_19 [i_0] [i_0] [i_0] [i_2] [i_3] [i_4 + 1] [i_4] &= (-((~(((/* implicit */int) arr_13 [i_1] [i_1] [i_0])))));
                        var_20 = ((unsigned char) (unsigned short)48879);
                        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_12 [i_0] [i_1] [i_2])) ^ (((unsigned long long int) var_2)))))));
                        var_22 = ((/* implicit */long long int) (((~(arr_14 [i_0] [i_0] [i_2] [i_3 + 1] [i_4 - 2]))) & (((((/* implicit */_Bool) (unsigned short)25381)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_0] [i_2] [(unsigned char)2] [i_1] [(unsigned short)11]))) : (arr_6 [i_0])))));
                    }
                    for (unsigned char i_5 = 0; i_5 < 20; i_5 += 1) 
                    {
                        arr_22 [i_1] [i_3] [i_2] [i_1] [i_0] [i_1] = ((/* implicit */long long int) ((arr_5 [i_3] [(_Bool)1] [(_Bool)1]) ? (((/* implicit */int) var_15)) : (var_0)));
                        arr_23 [i_1] [i_1] = ((/* implicit */unsigned int) var_15);
                        var_23 |= ((/* implicit */unsigned char) ((9345160689454087343ULL) << (((/* implicit */int) (unsigned char)17))));
                    }
                    var_24 = ((arr_17 [i_1] [i_1] [i_3 - 1] [i_3 - 3] [i_1] [i_3 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_3 - 1] [i_1] [i_3] [i_3] [i_1] [i_3]))) : (arr_14 [i_0] [i_1] [i_3 - 2] [i_3] [i_2]));
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 3) 
                    {
                        var_25 = ((/* implicit */unsigned char) -1450788476);
                        var_26 = ((/* implicit */short) ((signed char) (-(((/* implicit */int) (unsigned short)23106)))));
                        arr_28 [i_1] [i_1] [i_6] [i_3] [i_6] = ((/* implicit */unsigned long long int) ((var_7) / (((/* implicit */int) var_13))));
                    }
                    for (signed char i_7 = 1; i_7 < 19; i_7 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_24 [i_3 - 4] [i_1] [i_2] [i_3]))));
                        arr_33 [i_0] [i_1] [i_0] [i_2] [i_0] [i_1] [i_7] = ((((/* implicit */unsigned int) (+(((/* implicit */int) var_8))))) + (arr_8 [i_7] [i_3] [i_2] [i_1]));
                    }
                }
                for (int i_8 = 0; i_8 < 20; i_8 += 4) /* same iter space */
                {
                    var_28 ^= ((/* implicit */unsigned char) 3648507010539414126LL);
                    arr_36 [i_1] [i_2] [i_2] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_8] [i_1])) ? (((((/* implicit */_Bool) var_9)) ? (1450788487) : (((/* implicit */int) arr_13 [i_8] [i_2] [(short)1])))) : (((((/* implicit */int) var_15)) % (var_11)))))) ? (max((((/* implicit */long long int) (unsigned char)238)), (-6557288287762460843LL))) : (arr_2 [i_1])));
                    arr_37 [i_0] [i_1] [i_1] [10ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (short)-11801)), (-4978830319050473663LL)))) ? (14217514310665434805ULL) : (((/* implicit */unsigned long long int) arr_12 [1LL] [i_0] [i_2]))))) ? (((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2])) ? (((/* implicit */int) arr_1 [i_2] [i_8])) : (((/* implicit */int) var_4)))) : (-1450788476)));
                    arr_38 [i_0] [i_1] [i_2] [1LL] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) var_10)))))));
                }
                for (int i_9 = 0; i_9 < 20; i_9 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) arr_34 [i_1] [i_1] [i_9] [i_1]);
                    arr_42 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_27 [i_2] [i_1] [i_2] [i_1] [i_0] [i_1])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_1] [i_0] [i_2] [i_9] [i_2] [i_2]))))) : (arr_6 [i_2])));
                }
                for (int i_10 = 0; i_10 < 20; i_10 += 4) /* same iter space */
                {
                    arr_46 [i_0] [i_0] [i_1] [i_2] [i_10] = ((/* implicit */long long int) ((((/* implicit */int) (((~(var_9))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_7) : (var_12))))))) / ((~(((/* implicit */int) ((((/* implicit */_Bool) arr_31 [i_0] [i_1] [i_2] [i_10] [i_1])) && (((/* implicit */_Bool) arr_24 [i_0] [i_0] [i_0] [i_0])))))))));
                    var_30 = ((/* implicit */_Bool) arr_39 [i_0] [i_10] [i_2] [i_10] [i_2] [i_1]);
                    var_31 = ((/* implicit */_Bool) ((((arr_14 [i_0] [i_0] [i_0] [i_0] [i_0]) & (((/* implicit */unsigned long long int) arr_0 [i_2])))) ^ (((arr_17 [i_0] [i_0] [i_0] [i_2] [i_1] [i_10]) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))) : ((~(9101583384255464245ULL)))))));
                }
            }
            for (unsigned char i_11 = 0; i_11 < 20; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_12 = 1; i_12 < 17; i_12 += 4) 
                {
                    for (long long int i_13 = 3; i_13 < 17; i_13 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */int) max((var_32), (((/* implicit */int) arr_32 [i_1] [i_1]))));
                            var_33 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_26 [i_12 + 3] [i_12 - 1] [i_13 - 1] [i_13 + 1])) ? (((arr_49 [17] [i_11] [i_11]) ? (var_7) : (((/* implicit */int) var_19)))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_11] [(unsigned char)10] [i_1] [i_1] [i_13])) ? (((/* implicit */int) arr_24 [i_0] [i_0] [i_11] [i_12])) : (((/* implicit */int) (unsigned short)48868))))))));
                            arr_55 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_32 [i_1] [i_1]))))) ? (var_7) : (((/* implicit */int) var_19))))) ? (((/* implicit */long long int) ((unsigned int) max((((/* implicit */int) arr_39 [i_0] [i_1] [i_1] [i_11] [i_12 + 3] [i_13 - 1])), (102764480))))) : (min((arr_40 [8U] [i_1] [i_13] [i_12 + 3] [i_1] [i_12 + 3]), (((/* implicit */long long int) arr_43 [i_13] [i_1] [i_1] [i_12 + 2]))))));
                            arr_56 [i_1] [i_13 + 2] [i_11] = ((/* implicit */signed char) arr_41 [i_13] [i_12 + 2] [i_1] [i_1] [i_0] [i_0]);
                            var_34 = ((((/* implicit */_Bool) max((arr_6 [i_0]), (((/* implicit */unsigned long long int) ((var_18) == (((/* implicit */long long int) 579209474U)))))))) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_45 [i_13 - 2] [i_12 + 2])) && (((/* implicit */_Bool) arr_45 [i_13 - 2] [i_12 - 1])))))));
                        }
                    } 
                } 
                var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_19))))))));
                var_36 += ((/* implicit */unsigned short) var_3);
            }
            /* LoopNest 2 */
            for (short i_14 = 0; i_14 < 20; i_14 += 1) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        var_37 = ((/* implicit */short) ((unsigned char) (~(((/* implicit */int) var_15)))));
                        arr_63 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_0] [i_1] [i_1] [i_0]))))) : (((/* implicit */int) (short)22139))))) ? (max((arr_45 [i_0] [i_0]), (arr_45 [i_0] [i_15]))) : (arr_31 [i_0] [i_1] [i_15] [i_15] [i_1])));
                    }
                } 
            } 
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 1) 
        {
            var_38 = ((/* implicit */int) ((min((((/* implicit */long long int) arr_16 [i_0] [i_0] [i_16] [i_16] [i_0])), (arr_57 [i_16] [i_16] [i_0]))) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [15LL] [i_16] [i_0] [i_0] [i_16] [i_16])) ? (((/* implicit */int) arr_39 [i_0] [i_0] [i_0] [i_16] [6] [i_16])) : (((/* implicit */int) (_Bool)1)))))));
            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(9345160689454087343ULL)))) ? (((/* implicit */unsigned long long int) max((((var_3) ^ (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [(short)4] [i_0] [(unsigned short)8]))))), (((((/* implicit */long long int) ((/* implicit */int) var_17))) | (var_3)))))) : (var_14)));
            /* LoopSeq 1 */
            for (signed char i_17 = 2; i_17 < 18; i_17 += 3) 
            {
                var_40 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 9101583384255464288ULL)) ? (var_3) : (((/* implicit */long long int) arr_27 [i_0] [i_0] [i_0] [i_0] [i_16] [i_16]))))) ? (var_7) : (arr_25 [i_0] [i_0] [i_0] [i_16] [i_17] [i_17 + 2])))) ^ (((((/* implicit */_Bool) arr_68 [i_0])) ? (arr_6 [i_16]) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)18))))))));
                var_41 = ((/* implicit */_Bool) min((var_41), (((/* implicit */_Bool) max((((/* implicit */long long int) arr_8 [i_0] [i_16] [i_16] [i_17])), (((arr_2 [i_0]) / (((arr_67 [i_0] [i_0] [i_16] [(signed char)10]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)16657))))))))))));
                var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((arr_27 [i_0] [i_0] [i_0] [i_16] [i_16] [i_0]) + (2147483647))) << (((arr_12 [i_0] [i_16] [i_17 - 1]) - (7846948922133190359LL)))))) ? (max((var_3), (((/* implicit */long long int) arr_65 [i_0])))) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_0] [i_17] [i_17 + 1] [i_17 + 1])))))) ? (((/* implicit */unsigned long long int) var_0)) : (min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)219))) : (4294967295U)))), (arr_31 [i_17] [i_17 + 2] [i_17] [i_17 + 1] [i_17]))))))));
                arr_69 [i_0] [i_0] [i_16] [i_17] = ((/* implicit */int) (+(var_6)));
            }
            var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_0])))))) * (((((/* implicit */_Bool) arr_39 [i_0] [i_16] [i_16] [(short)12] [i_16] [i_16])) ? (0LL) : (((/* implicit */long long int) var_11)))))) : (((min((4801975406444925229LL), (((/* implicit */long long int) 230743233U)))) / (((/* implicit */long long int) ((/* implicit */int) var_8)))))));
        }
        arr_70 [i_0] = ((/* implicit */unsigned char) var_15);
    }
    for (long long int i_18 = 0; i_18 < 17; i_18 += 2) 
    {
        arr_74 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (unsigned short)22607)) : (((/* implicit */int) (unsigned char)239))))) ? (((((arr_2 [i_18]) + (9223372036854775807LL))) >> (((/* implicit */int) (!(arr_9 [i_18] [i_18] [i_18])))))) : (((/* implicit */long long int) arr_8 [i_18] [i_18] [i_18] [i_18]))));
        /* LoopNest 3 */
        for (unsigned long long int i_19 = 0; i_19 < 17; i_19 += 2) 
        {
            for (short i_20 = 0; i_20 < 17; i_20 += 2) 
            {
                for (unsigned int i_21 = 0; i_21 < 17; i_21 += 2) 
                {
                    {
                        arr_82 [i_21] [i_20] [i_19] [i_18] = ((/* implicit */long long int) var_12);
                        arr_83 [i_18] [i_19] [i_20] [i_18] = ((((/* implicit */_Bool) arr_4 [i_20] [i_19])) ? (((var_11) | (((/* implicit */int) var_8)))) : (((/* implicit */int) ((unsigned char) 4389456576512LL))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 3 */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        for (signed char i_23 = 0; i_23 < 14; i_23 += 4) 
        {
            for (unsigned int i_24 = 1; i_24 < 12; i_24 += 2) 
            {
                {
                    arr_93 [i_22] [(_Bool)1] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */int) max(((unsigned char)23), (((/* implicit */unsigned char) arr_17 [i_24 + 2] [i_22] [(_Bool)1] [i_22] [i_22] [i_22]))))) : (((/* implicit */int) arr_10 [i_22] [i_23] [i_24 + 1]))))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_71 [i_24])), (var_0))))));
                    arr_94 [i_22] [i_23] = ((/* implicit */_Bool) 18446603336221196288ULL);
                    /* LoopNest 2 */
                    for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 3) 
                    {
                        for (unsigned short i_26 = 2; i_26 < 11; i_26 += 2) 
                        {
                            {
                                arr_100 [i_26 - 2] [i_25] [i_22] [(unsigned char)3] [i_22] [i_23] [i_22] = ((/* implicit */unsigned short) (~(((min((-4175011483856515003LL), (((/* implicit */long long int) arr_34 [i_22] [i_24] [i_25] [i_26])))) | (((/* implicit */long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_17)))))))));
                                arr_101 [i_22] [i_25] [i_24] [i_23] [i_22] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_22] [i_22] [i_22] [i_24 + 1] [i_25] [i_25] [i_26]))))) != (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) arr_29 [i_22] [i_22] [i_22] [i_25] [i_26] [i_26] [i_22]))))));
                            }
                        } 
                    } 
                    arr_102 [i_24] [i_24] [i_22] = (unsigned short)16652;
                }
            } 
        } 
    } 
}
