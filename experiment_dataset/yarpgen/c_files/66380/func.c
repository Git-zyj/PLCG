/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66380
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 21; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 2; i_4 < 18; i_4 += 2) /* same iter space */
                            {
                                arr_12 [(short)16] [i_1] [i_4] [i_3] [i_1] |= ((/* implicit */short) var_6);
                                arr_13 [i_0] [i_0] [i_1] [i_2] [i_0] [i_2] = ((((((/* implicit */_Bool) (-(((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1]))))) ? (((/* implicit */long long int) ((var_4) * (((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) (unsigned short)55076)) ? (-8883229488284916663LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65518))))))) != (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [18] [i_0] [i_0] [i_0] [18])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_0] [i_4])) : (((/* implicit */int) var_1))))))))));
                                arr_14 [i_0] [i_2 - 1] [i_2 - 1] [(signed char)3] [i_4 - 1] [i_3] [i_0] = ((/* implicit */unsigned short) min((((arr_4 [i_0] [i_2] [i_2 - 1]) != (((/* implicit */unsigned int) (-(-763212226)))))), (((-8883229488284916668LL) < (8883229488284916647LL)))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
                            {
                                arr_17 [i_0] [(unsigned short)1] [(unsigned short)1] [(unsigned short)1] [i_1] [(unsigned short)1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)47072)) < (((/* implicit */int) (unsigned short)27416))));
                                arr_18 [i_5] [i_3] [(signed char)6] [i_0] [i_0] [i_5] &= ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) (~(arr_4 [i_1] [i_1] [i_2 - 1]))))))), ((~(((/* implicit */int) var_2))))));
                                arr_19 [(unsigned char)12] [i_1] [i_1] [i_0] [(_Bool)0] = ((/* implicit */long long int) ((min((((0ULL) / (18446744073709551615ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)27416))) | (arr_2 [i_0] [i_1] [i_5])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_5 + 4] [i_5 + 1] [i_3 + 1] [i_2 - 1]) && (((/* implicit */_Bool) var_6))))))));
                            }
                            var_10 *= ((/* implicit */signed char) ((((/* implicit */int) max((((var_1) || (((/* implicit */_Bool) (unsigned short)45999)))), ((!(((/* implicit */_Bool) (unsigned short)38109))))))) != ((-((-(((/* implicit */int) arr_9 [9ULL] [i_1] [i_2] [i_3]))))))));
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_7)))) < (((((((/* implicit */int) arr_15 [i_0] [3ULL] [i_0] [i_0] [i_1])) + (2147483647))) >> (((var_6) - (775571748249598623ULL)))))))) >> (max((((/* implicit */int) ((var_6) == (10740013376697568578ULL)))), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-123)) : (((/* implicit */int) (signed char)-112))))))));
                arr_21 [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((unsigned char) (unsigned short)38120))) ? ((-(var_4))) : (((/* implicit */int) arr_1 [i_0]))))));
                /* LoopNest 3 */
                for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    for (signed char i_7 = 0; i_7 < 22; i_7 += 4) 
                    {
                        for (long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                        {
                            {
                                arr_28 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) / (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)27442))))) + (((((/* implicit */_Bool) 8883229488284916664LL)) ? (3719509476627603644ULL) : (((/* implicit */unsigned long long int) 8883229488284916646LL))))))));
                                var_11 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (13362161425135646741ULL))))));
                                arr_29 [i_0] [i_1] [8U] [8U] [8U] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 9540668285746790817ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [11LL] [11LL] [(signed char)20] [i_6] [(short)4] [0U] [(_Bool)1]))) : (((((((/* implicit */long long int) ((/* implicit */int) (short)4557))) / (var_9))) ^ (((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)18475)))))))));
                                var_12 += ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_6)) ? ((+(((/* implicit */int) (short)19193)))) : ((~(((/* implicit */int) (short)4095)))))), (-1831499059)));
                            }
                        } 
                    } 
                } 
                arr_30 [i_0] = ((max((var_3), (((/* implicit */unsigned int) arr_9 [i_0] [i_0] [i_1] [(short)3])))) * (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_0] [i_1])))));
            }
        } 
    } 
    var_13 = ((/* implicit */short) ((var_6) - (var_6)));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 11; i_9 += 3) 
    {
        for (short i_10 = 0; i_10 < 11; i_10 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) 
                {
                    arr_39 [i_9] [i_10] [i_10] [i_10] |= ((/* implicit */signed char) arr_4 [i_10] [i_10] [i_10]);
                    var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_10] [i_10] [i_10])) && (((/* implicit */_Bool) (unsigned short)38131)))) ? (((/* implicit */int) arr_31 [i_10])) : (((/* implicit */int) ((var_1) && (((/* implicit */_Bool) arr_3 [i_10] [i_10])))))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) -5308745325289710553LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65522))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))))))));
                    arr_40 [i_9] [i_9] [i_9] = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) (short)-32161))))))) ? (((/* implicit */int) (short)-1)) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) 8883229488284916662LL)))))))));
                }
                for (unsigned short i_12 = 1; i_12 < 8; i_12 += 1) 
                {
                    arr_44 [i_9] [i_9] [i_12 + 1] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */_Bool) (short)1)) || (((/* implicit */_Bool) (signed char)-13))))), ((~(1099286366049506258LL)))))) ? (((arr_6 [17U] [17U] [i_9] [i_10]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9]))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_27 [i_9] [i_9] [i_9])), (var_9))))));
                    /* LoopSeq 3 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        arr_47 [i_9] [i_9] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2902))) : (var_9)))) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)15))))) : (7684742867285603289LL)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_36 [i_9])), (-8271262408870231592LL)))) : (var_6)));
                        arr_48 [i_9] [i_13] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5))) | (var_6)));
                    }
                    for (unsigned short i_14 = 1; i_14 < 9; i_14 += 1) 
                    {
                        arr_51 [i_9] [(unsigned short)1] [i_10] [i_12] [i_14 + 1] [i_14] = ((/* implicit */unsigned char) ((arr_6 [(short)10] [14ULL] [i_9] [(short)0]) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_36 [i_9]))))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_22 [i_10] [i_9] [i_14])))) : (((/* implicit */int) var_0)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned int i_15 = 0; i_15 < 11; i_15 += 3) 
                        {
                            var_15 = ((/* implicit */unsigned int) max((var_15), (((((/* implicit */_Bool) 8883229488284916646LL)) ? (((/* implicit */unsigned int) arr_41 [i_10] [i_14 + 1] [i_14])) : (arr_4 [i_10] [i_10] [i_12 + 3])))));
                            arr_54 [i_12] [i_10] [i_9] [i_10] [i_15] = ((unsigned int) var_5);
                        }
                        arr_55 [i_9] [i_9] [i_9] [(unsigned char)7] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) (short)-31469))));
                    }
                    for (int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        arr_59 [(signed char)8] [i_9] [i_12] [i_12 - 1] [i_12 + 3] = ((/* implicit */signed char) min((((((/* implicit */int) arr_22 [i_16] [i_9] [i_9])) | (((/* implicit */int) arr_34 [i_10] [i_12] [i_12 + 3])))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (short)-16898)))))));
                        var_16 = ((/* implicit */long long int) (~(((arr_4 [i_16] [i_12] [i_12 - 1]) >> (((arr_4 [i_16] [i_16] [i_12 + 1]) - (1493312703U)))))));
                    }
                }
                for (unsigned long long int i_17 = 3; i_17 < 10; i_17 += 3) 
                {
                    /* LoopSeq 4 */
                    for (long long int i_18 = 0; i_18 < 11; i_18 += 1) 
                    {
                        arr_64 [i_10] |= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) -29)), (arr_6 [i_17 - 3] [i_10] [i_10] [i_18]))) - ((+(arr_6 [i_17 - 2] [i_10] [i_10] [i_18])))));
                        arr_65 [i_9] [i_18] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) min((arr_36 [i_9]), (arr_35 [7LL] [7LL]))))))) / (8883229488284916664LL)));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_69 [i_10] [i_19] [i_10] [i_19] [i_19] [i_19] |= ((/* implicit */unsigned short) (~(((/* implicit */int) min((min((arr_68 [i_9] [i_10] [i_10] [i_9] [i_19] [i_9]), (var_1))), (var_0))))));
                        arr_70 [i_9] [i_9] = ((/* implicit */short) var_4);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_20 = 0; i_20 < 11; i_20 += 2) 
                        {
                            arr_74 [i_9] = (i_9 % 2 == 0) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_9] [i_17 - 1] [i_9] [i_9])) + (2147483647))) >> (((((/* implicit */int) arr_5 [i_9] [i_17 - 2] [i_17] [i_9])) + (59)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_5 [i_9] [i_17 - 1] [i_9] [i_9])) + (2147483647))) >> (((((((/* implicit */int) arr_5 [i_9] [i_17 - 2] [i_17] [i_9])) + (59))) + (15))))));
                            arr_75 [i_17] [i_17] [(_Bool)0] [i_17] [i_17] [i_9] = ((/* implicit */short) 9923061614923865115ULL);
                        }
                        /* LoopSeq 3 */
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) /* same iter space */
                        {
                            arr_78 [i_21] [i_9] [i_17 - 3] [i_10] [7U] [i_9] [i_9] = (unsigned short)23857;
                            arr_79 [i_9] [i_9] [i_17] [i_9] [(_Bool)1] [i_9] [i_9] = 1007029775298868729ULL;
                        }
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) /* same iter space */
                        {
                            arr_83 [i_10] [i_9] [i_22] = ((/* implicit */_Bool) 291054290U);
                            var_17 = ((/* implicit */signed char) (+(((arr_66 [i_9]) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))));
                        }
                        for (unsigned short i_23 = 2; i_23 < 9; i_23 += 3) 
                        {
                            arr_86 [i_9] [i_17] [i_9] = ((/* implicit */unsigned long long int) max((((4503599627370480LL) > (8883229488284916661LL))), (((arr_82 [(short)4] [(short)4] [i_17 + 1] [(short)4] [(short)4] [i_9] [i_23]) || (((/* implicit */_Bool) 28))))));
                            var_18 *= ((/* implicit */short) ((min(((!(((/* implicit */_Bool) 6684930090433940113ULL)))), ((!(((/* implicit */_Bool) arr_49 [i_9] [(_Bool)0] [i_17 - 3])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) var_2))))) && (((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_9] [i_10] [i_9]))) : (var_5)))))))));
                        }
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 11; i_24 += 2) 
                    {
                        arr_90 [(unsigned short)2] [(unsigned short)2] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)16536)) - (((/* implicit */int) arr_80 [i_9] [i_17 + 1] [i_10]))))), (((((var_0) ? (((/* implicit */unsigned long long int) 8271262408870231591LL)) : (var_6))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))))))))));
                        arr_91 [i_9] [i_9] [i_17 - 1] [i_9] = ((/* implicit */unsigned int) min(((~(9087092165461022428ULL))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) (short)32767)))) * ((-(((/* implicit */int) (short)-13914)))))))));
                    }
                    /* vectorizable */
                    for (short i_25 = 3; i_25 < 10; i_25 += 2) 
                    {
                        arr_94 [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) - (((/* implicit */int) arr_89 [i_9]))));
                        arr_95 [i_10] [i_17] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_5))) + (((/* implicit */int) (short)13))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -8)) | (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_9] [i_9] [i_9] [i_9]))) | (arr_6 [i_9] [i_10] [i_9] [(unsigned short)9])))));
                        var_20 *= ((/* implicit */signed char) (short)-13931);
                    }
                    /* LoopNest 2 */
                    for (long long int i_26 = 0; i_26 < 11; i_26 += 3) 
                    {
                        for (short i_27 = 2; i_27 < 7; i_27 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_9), (((((/* implicit */_Bool) var_9)) ? (-8271262408870231601LL) : (((/* implicit */long long int) ((/* implicit */int) arr_99 [i_9] [i_9] [i_17] [i_10] [i_26] [i_26] [i_10])))))))) ? (((/* implicit */unsigned long long int) -8883229488284916679LL)) : (min((((6647325173612887938ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27442))))), (((/* implicit */unsigned long long int) arr_9 [i_9] [i_17 + 1] [i_27 - 1] [i_26])))))))));
                                arr_101 [i_9] [i_10] [i_17] [i_17] [i_9] [(short)3] = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) (short)13920))) | ((-(0U))))) < (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                            }
                        } 
                    } 
                    arr_102 [i_9] [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_99 [i_9] [i_9] [i_9] [i_9] [0ULL] [i_9] [i_17])) + ((((_Bool)1) ? (((/* implicit */int) (short)7233)) : (((/* implicit */int) (short)32767))))));
                }
                var_22 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6820)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) ((_Bool) var_3)))))) && ((!((!(((/* implicit */_Bool) arr_71 [i_9] [i_10] [i_10] [i_9] [i_10]))))))));
                /* LoopNest 2 */
                for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                {
                    for (unsigned long long int i_29 = 1; i_29 < 10; i_29 += 3) 
                    {
                        {
                            arr_109 [i_9] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) max(((unsigned short)10826), (((/* implicit */unsigned short) (short)32767))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && (((/* implicit */_Bool) arr_63 [i_9]))))))), (((/* implicit */int) (!(var_1))))));
                            arr_110 [5ULL] [i_9] [i_9] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) (short)7233)) : (((/* implicit */int) (signed char)-125)))), ((-(((/* implicit */int) (signed char)-19))))));
                            var_23 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_85 [i_9] [i_10] [i_28] [i_29 - 1] [(unsigned short)1]))));
                            var_24 = ((/* implicit */signed char) (!(((8271262408870231591LL) < (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_85 [i_9] [(_Bool)1] [10LL] [10LL] [i_29]))) != (var_3)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
