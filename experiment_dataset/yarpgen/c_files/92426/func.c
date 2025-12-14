/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92426
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92426 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92426
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 13; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 2; i_3 < 13; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] [i_1] [i_1] |= max(((-(((/* implicit */int) var_7)))), ((+(arr_10 [i_3 - 2] [i_3] [i_2] [i_1] [i_2]))));
                        arr_13 [i_1] [i_2] [(unsigned char)10] [i_1] = max((min((arr_9 [i_3] [i_1] [i_2] [(_Bool)1]), (arr_9 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) var_14)));
                    }
                    /* LoopSeq 1 */
                    for (long long int i_4 = 1; i_4 < 10; i_4 += 1) 
                    {
                        var_15 = ((/* implicit */int) min((var_15), ((-((-((+(((/* implicit */int) (_Bool)0))))))))));
                        var_16 |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_7 [i_1] [i_2 + 1] [i_4 - 1]))))));
                        var_17 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) arr_14 [1LL] [i_2 + 1] [(short)9]))) ? (((/* implicit */int) arr_14 [(_Bool)1] [i_1] [i_1])) : (((/* implicit */int) var_6))));
                    }
                    var_18 = ((/* implicit */unsigned char) ((short) arr_4 [i_0]));
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 14; i_6 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)0)) : (arr_1 [i_1]))))))) > (((/* implicit */int) ((unsigned char) ((unsigned char) (_Bool)1))))));
                                arr_21 [i_5] |= ((/* implicit */unsigned int) min((((/* implicit */int) arr_20 [(unsigned short)10] [i_5] [i_5] [i_5] [(signed char)12])), ((+(((((/* implicit */_Bool) arr_2 [i_1] [i_2] [i_6])) ? (((/* implicit */int) arr_7 [i_6] [i_1] [4U])) : (((/* implicit */int) (_Bool)1))))))));
                                var_20 ^= ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 25; i_8 += 2) 
        {
            arr_28 [i_8] = ((/* implicit */signed char) (~((+(max((((/* implicit */unsigned int) var_13)), (var_8)))))));
            /* LoopSeq 1 */
            for (long long int i_9 = 2; i_9 < 21; i_9 += 2) 
            {
                var_21 ^= ((/* implicit */_Bool) ((short) (-(((/* implicit */int) arr_27 [(short)21] [i_9] [i_9 - 1])))));
                arr_32 [i_7] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((unsigned int) max((arr_31 [i_8] [i_9 - 2] [i_9 + 1]), (arr_31 [23U] [i_9 - 2] [i_9 + 1]))));
            }
        }
        for (short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            var_22 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7])))))) ^ (min((var_3), (((/* implicit */unsigned long long int) (_Bool)0))))));
            var_23 = ((/* implicit */unsigned int) arr_35 [i_7] [i_7]);
            /* LoopSeq 1 */
            for (unsigned int i_11 = 2; i_11 < 21; i_11 += 3) 
            {
                /* LoopNest 2 */
                for (int i_12 = 1; i_12 < 24; i_12 += 3) 
                {
                    for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 2) 
                    {
                        {
                            arr_44 [5LL] [20] [i_11] [i_12] [(_Bool)1] &= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (_Bool)1))))));
                            var_24 ^= ((/* implicit */unsigned int) min((max((arr_26 [i_11 + 3] [(short)2] [i_13]), (((/* implicit */unsigned long long int) arr_27 [i_11 + 4] [i_13] [i_13])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) var_11)), (var_13)))) || (((/* implicit */_Bool) 0U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_14 = 0; i_14 < 25; i_14 += 2) 
                {
                    for (unsigned char i_15 = 1; i_15 < 23; i_15 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (_Bool)1);
                            var_26 = ((/* implicit */unsigned short) min((var_26), (arr_27 [i_7] [10U] [(signed char)24])));
                        }
                    } 
                } 
                arr_50 [i_7] [(signed char)15] = ((/* implicit */unsigned short) arr_26 [i_7] [i_7] [i_7]);
                /* LoopSeq 2 */
                for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                {
                    var_27 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))), (max((((/* implicit */unsigned int) (+(((/* implicit */int) var_14))))), (min((arr_47 [i_7] [i_10] [i_11] [9ULL] [i_16] [i_16]), (((/* implicit */unsigned int) (short)-15656))))))));
                    arr_54 [i_7] [24ULL] [(signed char)6] [i_16] [18] = ((/* implicit */signed char) (-(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_40 [i_11 - 2])))))));
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((long long int) var_9)), (max((var_9), (((/* implicit */long long int) arr_39 [(signed char)3]))))))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_11 - 2] [i_11 + 1] [i_11 - 2] [(_Bool)1] [i_11] [i_11]))) < (var_5)))) : (((/* implicit */int) var_7))));
                    var_29 ^= ((((/* implicit */_Bool) arr_41 [i_7] [i_7] [(unsigned char)0] [i_7])) ? (((((((/* implicit */unsigned int) ((/* implicit */int) arr_49 [0U] [12U] [i_11] [(unsigned short)12] [i_7] [(short)8]))) - (536870912U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), ((short)-19853))))))));
                }
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
                {
                    var_30 = ((/* implicit */signed char) var_4);
                    var_31 = ((/* implicit */unsigned int) min((((short) var_11)), (((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_7] [i_7] [i_7] [20ULL]))))) < ((-(arr_52 [i_7] [i_11]))))))));
                }
            }
            arr_57 [i_10] [(unsigned char)14] |= ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_55 [i_10] [i_10] [i_10] [i_7]), (arr_55 [i_7] [i_7] [i_10] [i_10]))))));
            var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) (~(((/* implicit */int) ((arr_45 [i_7] [i_7] [(unsigned short)21] [i_7] [i_10]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))))));
        }
        arr_58 [i_7] [i_7] |= min(((~(0U))), (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
        arr_59 [(_Bool)1] = ((((/* implicit */_Bool) 962060515U)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_5) >= (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) << (((arr_45 [i_7] [(_Bool)1] [13] [21U] [24]) - (14957943203587340269ULL)))))))))) : ((-((+(var_9))))));
    }
    /* LoopNest 2 */
    for (unsigned char i_18 = 2; i_18 < 17; i_18 += 4) 
    {
        for (unsigned char i_19 = 0; i_19 < 19; i_19 += 2) 
        {
            {
                arr_65 [3U] [i_19] = ((/* implicit */int) ((unsigned int) ((((arr_34 [i_18] [i_18] [i_19]) >= (((/* implicit */unsigned int) -1843014642)))) && (((/* implicit */_Bool) ((signed char) 1843014642))))));
                var_33 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (!(((/* implicit */_Bool) 962060512U))))), (((short) 2967786559U))))) ? (((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))))) : ((+(((unsigned int) arr_49 [i_18] [i_18] [i_19] [i_19] [i_19] [i_19]))))));
                var_34 |= ((/* implicit */short) max((((/* implicit */unsigned int) (!((_Bool)1)))), ((-(var_8)))));
            }
        } 
    } 
    var_35 |= ((/* implicit */_Bool) var_11);
    /* LoopSeq 2 */
    for (signed char i_20 = 0; i_20 < 12; i_20 += 3) 
    {
        /* LoopNest 2 */
        for (int i_21 = 3; i_21 < 9; i_21 += 3) 
        {
            for (unsigned char i_22 = 2; i_22 < 8; i_22 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (short i_23 = 0; i_23 < 12; i_23 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_24 = 0; i_24 < 12; i_24 += 1) 
                        {
                            var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (536870906U)))) ? (((/* implicit */unsigned long long int) (+(var_8)))) : (var_12)));
                            var_37 &= ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_14 [i_22 - 1] [i_21 + 3] [i_20])), (((((/* implicit */_Bool) 536870916U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3758096384U)))))) ? (((((/* implicit */_Bool) arr_56 [i_21 - 2] [i_21 + 2] [i_21 + 1])) ? (((/* implicit */int) arr_56 [i_21 - 2] [i_21 + 3] [i_21 + 1])) : (((/* implicit */int) arr_56 [i_21 - 2] [i_21 - 3] [i_21 - 3])))) : (((/* implicit */int) arr_66 [i_21])));
                        }
                        /* LoopSeq 2 */
                        for (unsigned short i_25 = 0; i_25 < 12; i_25 += 2) 
                        {
                            var_38 ^= ((/* implicit */int) (!(((/* implicit */_Bool) (+(min((((/* implicit */int) (unsigned char)249)), (arr_5 [i_20]))))))));
                            var_39 = ((/* implicit */unsigned char) min((var_39), ((unsigned char)22)));
                            arr_83 [i_25] [i_23] [11ULL] [i_22] [8ULL] [i_20] &= ((/* implicit */int) (~(((((unsigned int) var_9)) & (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (unsigned short)26987)))))))));
                        }
                        for (unsigned short i_26 = 2; i_26 < 9; i_26 += 4) 
                        {
                            arr_87 [(_Bool)1] = ((/* implicit */unsigned int) var_3);
                            var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) var_1))) || (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (unsigned short)65535)) > (((/* implicit */int) (_Bool)1)))))))))));
                            arr_88 [i_20] [i_21] [(signed char)2] [(_Bool)1] [6ULL] = ((/* implicit */signed char) (+(((/* implicit */int) var_10))));
                        }
                        var_41 = ((/* implicit */signed char) min((min((((/* implicit */unsigned int) var_10)), ((~(var_0))))), ((~(max((var_0), (((/* implicit */unsigned int) (signed char)-44))))))));
                    }
                    /* LoopNest 2 */
                    for (long long int i_27 = 0; i_27 < 12; i_27 += 2) 
                    {
                        for (short i_28 = 3; i_28 < 10; i_28 += 2) 
                        {
                            {
                                var_42 ^= ((/* implicit */unsigned long long int) (-(arr_19 [i_22] [i_21] [i_21] [i_22] [i_27] [i_28])));
                                var_43 |= ((/* implicit */int) 4136472136U);
                            }
                        } 
                    } 
                    var_44 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (4136472140U)));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_29 = 2; i_29 < 11; i_29 += 1) 
        {
            for (int i_30 = 2; i_30 < 11; i_30 += 3) 
            {
                {
                    var_45 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (+((-(var_8)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)253)), (var_7))))) - ((-(var_12)))))));
                    /* LoopSeq 1 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_32 = 0; i_32 < 12; i_32 += 1) /* same iter space */
                        {
                            var_46 ^= ((/* implicit */unsigned short) var_0);
                            arr_102 [i_20] [i_20] [i_20] [i_30] [(short)8] [(signed char)7] [(unsigned char)2] = ((/* implicit */long long int) ((((/* implicit */_Bool) 962060505U)) ? (((/* implicit */int) ((short) (-(((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) 3360559759U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1))))));
                        }
                        for (unsigned int i_33 = 0; i_33 < 12; i_33 += 1) /* same iter space */
                        {
                            arr_105 [i_20] [i_31] [i_29] [i_31] [i_30] = ((/* implicit */unsigned short) var_10);
                            var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_20] [(short)12] [i_30] [i_30] [(signed char)12]))))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (arr_62 [i_20] [(short)17])))))) : (min((((/* implicit */unsigned int) arr_20 [i_30 + 1] [i_29 + 1] [i_30] [i_31] [i_30 - 2])), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_19 [i_30] [i_29] [10U] [(unsigned char)0] [i_29] [(signed char)2])))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_34 = 1; i_34 < 10; i_34 += 1) 
                        {
                            var_48 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))), (((/* implicit */unsigned long long int) var_10))))) ? (max((((/* implicit */unsigned int) ((var_8) < (((/* implicit */unsigned int) var_4))))), (((((/* implicit */_Bool) arr_48 [3] [i_29] [(_Bool)1] [0U] [i_34])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_79 [i_30] [i_30] [10U] [(signed char)1] [i_30] [i_30]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) min(((short)-64), (((/* implicit */short) (unsigned char)251))))) : (((/* implicit */int) min((var_1), (arr_71 [i_34] [i_34] [i_34])))))))));
                            var_49 ^= ((/* implicit */unsigned char) max((min((var_13), (((/* implicit */int) ((((/* implicit */int) (unsigned char)253)) < (((/* implicit */int) var_7))))))), (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)22)) : (((/* implicit */int) (unsigned char)253)))), (((/* implicit */int) max((var_14), (((/* implicit */signed char) (_Bool)1)))))))));
                            var_50 = ((/* implicit */signed char) (+(max((arr_84 [i_34 - 1] [i_34] [i_34 + 2] [i_34] [i_34] [i_34]), (arr_84 [i_34 - 1] [i_34] [i_34 + 2] [i_34] [4U] [i_34])))));
                            var_51 |= ((/* implicit */short) ((signed char) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_9))))) << (((((((/* implicit */_Bool) arr_70 [i_20])) ? (((/* implicit */int) arr_78 [i_34] [i_31] [i_30] [7ULL] [i_20])) : (((/* implicit */int) var_14)))) - (62474))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_35 = 2; i_35 < 11; i_35 += 1) 
                        {
                            var_52 = ((/* implicit */unsigned int) max((var_52), (((/* implicit */unsigned int) (~(arr_104 [i_35] [i_35 - 2] [i_35 - 2] [i_35 - 1] [i_35 - 1] [i_35 - 1]))))));
                            var_53 = ((/* implicit */short) (-(arr_45 [i_30] [i_30 - 2] [i_30 - 1] [i_30 - 2] [i_30])));
                            var_54 |= ((/* implicit */signed char) ((int) arr_16 [i_35 + 1] [(short)8] [i_35] [(short)8] [i_31]));
                            var_55 = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        var_56 = ((/* implicit */int) min((var_56), (max(((~(((/* implicit */int) ((((/* implicit */_Bool) arr_60 [(unsigned char)15] [6ULL])) || (((/* implicit */_Bool) var_13))))))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_31 [14LL] [i_30 - 2] [i_30])), (var_6))))))));
                        var_57 ^= ((/* implicit */short) ((((/* implicit */long long int) max((((((/* implicit */int) arr_14 [i_20] [i_30] [9LL])) / (960))), (((((/* implicit */int) (_Bool)1)) + (var_4)))))) / (min((((var_9) << (((((-289593642) + (289593705))) - (63))))), (((/* implicit */long long int) (-(var_13))))))));
                        var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_85 [(unsigned char)0] [i_30 - 1] [i_30] [i_30] [i_30] [i_30] [i_30])), (410318703U)))) ? (((/* implicit */int) ((arr_85 [i_30] [i_30 - 2] [i_30] [i_30] [10ULL] [i_30] [(_Bool)1]) > (1441769197)))) : (((/* implicit */int) ((((/* implicit */int) var_14)) > (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    }
    for (int i_36 = 3; i_36 < 14; i_36 += 1) 
    {
        var_59 = ((/* implicit */unsigned char) min((var_59), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) (_Bool)1))))))) ? (((((/* implicit */int) arr_42 [(short)8] [(short)8] [i_36 - 2] [i_36] [i_36])) / (((/* implicit */int) ((signed char) var_7))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) var_14))))))))))));
        arr_115 [i_36] = ((/* implicit */long long int) max(((-(((/* implicit */int) arr_51 [i_36 + 1] [i_36] [i_36] [14] [i_36 - 3] [(_Bool)1])))), (max((((((/* implicit */_Bool) -289593642)) ? (((/* implicit */int) (unsigned char)188)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) var_10)))))))));
    }
}
