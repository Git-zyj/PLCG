/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71363
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (long long int i_4 = 4; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) var_13);
                                var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_10 [i_0] [i_1] [i_1] [i_3] [i_4]))));
                                var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) 8387584U))));
                                var_20 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_0]))) & (18446744073709551615ULL))) >= (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-86))) + (3739096827U))))));
                                var_21 -= ((/* implicit */long long int) ((_Bool) var_14));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned int) (-(9862299763129285074ULL)));
                        var_23 = ((/* implicit */signed char) ((_Bool) 9223372036854775807LL));
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((var_5) ? (arr_1 [i_1 + 2] [i_2 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        arr_13 [i_5] [i_0] [i_1] [i_5] = 8767152692217776572ULL;
                    }
                    var_25 = ((/* implicit */unsigned long long int) 8387592U);
                    /* LoopSeq 4 */
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                        {
                            var_26 = ((/* implicit */unsigned int) (unsigned short)0);
                            arr_18 [i_0] [i_0] [i_2] [i_0] [i_7] = ((/* implicit */unsigned short) 1667812074U);
                        }
                        for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                        {
                            arr_22 [i_6] [i_0] = ((/* implicit */unsigned short) (signed char)127);
                            var_27 += ((/* implicit */unsigned short) arr_7 [(signed char)16] [i_6] [i_8]);
                            var_28 = ((/* implicit */signed char) var_5);
                            var_29 = arr_15 [i_0] [i_1] [i_1 + 3] [i_1 + 3];
                        }
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 3) 
                        {
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (+(((var_3) ? (((/* implicit */int) (unsigned short)53624)) : (((/* implicit */int) arr_20 [i_0] [i_0]))))));
                            var_30 += ((/* implicit */signed char) ((unsigned long long int) (_Bool)1));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))));
                            var_32 |= (!(((/* implicit */_Bool) (unsigned short)57194)));
                        }
                        /* LoopSeq 2 */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_33 = ((/* implicit */int) ((arr_11 [i_1]) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1667812074U)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_10 [i_1] [i_1] [i_2 - 1] [i_6] [i_10]))));
                            var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_12))));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_36 = arr_5 [i_0] [i_1] [i_0];
                            arr_32 [i_0] [i_6] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) -853772615);
                        }
                    }
                    for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) /* same iter space */
                    {
                        var_37 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) | (((/* implicit */int) var_16))));
                        var_38 = ((/* implicit */unsigned int) ((int) 1667812048U));
                    }
                    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 1) /* same iter space */
                    {
                        var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((536870911U) + (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))));
                        var_40 = ((/* implicit */_Bool) max((var_40), ((!(((/* implicit */_Bool) arr_15 [i_0] [i_1 + 3] [i_2] [i_13]))))));
                        var_41 += ((/* implicit */long long int) var_14);
                        /* LoopSeq 1 */
                        for (long long int i_14 = 0; i_14 < 22; i_14 += 1) 
                        {
                            var_42 -= ((/* implicit */unsigned short) var_3);
                            arr_42 [i_0] [i_0] [i_2] [i_0] [i_14] [i_14] = ((/* implicit */unsigned short) ((arr_23 [i_0] [i_1 + 3] [i_2 - 3] [i_0]) > (((/* implicit */int) (signed char)-17))));
                            var_43 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 10983019799582093629ULL)) ? (((/* implicit */int) (_Bool)0)) : (arr_23 [i_2 + 3] [i_2 + 2] [i_1] [i_1 - 1])));
                        }
                    }
                    for (unsigned int i_15 = 0; i_15 < 22; i_15 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        for (signed char i_16 = 1; i_16 < 20; i_16 += 3) 
                        {
                            var_44 = ((/* implicit */int) arr_34 [i_0] [i_1 + 4] [i_2] [i_15] [i_16]);
                            arr_49 [i_0] = ((/* implicit */int) ((arr_37 [i_0] [i_2 - 1] [i_16 + 2] [i_15] [i_16]) & (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_45 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 10983019799582093633ULL)) ? (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_1 + 3] [i_2 - 3] [i_16])) : (((/* implicit */int) (_Bool)0))));
                            var_46 &= ((/* implicit */long long int) (-(((/* implicit */int) var_10))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 22; i_17 += 2) 
                        {
                            var_47 &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))));
                            var_48 += ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((1667812074U) / (((/* implicit */unsigned int) ((/* implicit */int) var_14)))))) > (((((/* implicit */_Bool) 9862299763129285065ULL)) ? (((/* implicit */long long int) 2011043305U)) : (var_13)))));
                        }
                        arr_53 [i_15] [i_0] [i_15] [i_15] [i_15] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_1 - 1] [i_1 + 3] [i_1 - 1]))) < (0U));
                        arr_54 [i_0] [i_1] [14ULL] [i_1] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
                        var_49 = ((((/* implicit */long long int) 2627155247U)) > (var_13));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                        {
                            {
                                var_50 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (var_6)));
                                arr_61 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_15)) ? (3983451198U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_51 = ((/* implicit */unsigned int) ((unsigned short) var_16));
                            }
                        } 
                    } 
                }
                for (unsigned int i_20 = 3; i_20 < 19; i_20 += 4) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_22 = 0; i_22 < 22; i_22 += 4) 
                        {
                            var_52 = ((/* implicit */signed char) max((var_52), (((/* implicit */signed char) var_13))));
                            var_53 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_69 [i_1] [i_1 - 1] [i_1] [i_20 + 2] [i_21])) ? (arr_71 [i_0] [i_1 - 1] [i_20 + 3] [i_20] [i_21] [i_21] [i_21 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                        /* vectorizable */
                        for (signed char i_23 = 0; i_23 < 22; i_23 += 4) 
                        {
                            var_54 -= ((/* implicit */long long int) (-(((/* implicit */int) arr_69 [i_21] [i_21] [i_21 - 1] [i_21 - 1] [i_21 - 1]))));
                            arr_74 [i_0] [i_21] [i_1] [i_1] [i_0] [i_0] = ((long long int) (signed char)-110);
                            var_55 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (_Bool)1))));
                            arr_75 [i_0] [i_23] = ((((/* implicit */int) (unsigned short)40905)) | (((/* implicit */int) arr_69 [i_1] [i_1] [i_1 + 4] [i_20 - 1] [i_21 - 1])));
                            var_56 = ((/* implicit */unsigned long long int) max((var_56), (((/* implicit */unsigned long long int) var_5))));
                        }
                        var_57 -= ((/* implicit */signed char) arr_52 [i_0] [i_1] [i_20] [i_21] [i_1] [i_1] [i_1]);
                        /* LoopSeq 3 */
                        for (unsigned long long int i_24 = 1; i_24 < 20; i_24 += 1) 
                        {
                            var_58 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_16))) + (arr_15 [i_0] [i_1 + 2] [i_21] [i_21])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_20] [i_20] [i_20] [i_20] [i_20 - 2]))))) : (arr_28 [i_0] [i_1] [i_20] [i_20] [i_20] [i_20 - 1])));
                            var_59 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_12))) < (((var_3) ? (((/* implicit */long long int) 2627155253U)) : (var_13))))) ? (-215565806) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_29 [i_24] [i_21] [i_20] [i_1] [i_0])))))));
                            var_60 = ((/* implicit */unsigned int) max(((-(7865932269608034046LL))), (((/* implicit */long long int) var_4))));
                            arr_78 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) var_0))));
                        }
                        /* vectorizable */
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                        {
                            arr_82 [i_0] = ((/* implicit */_Bool) 3302738653U);
                            arr_83 [i_25] [i_0] [i_20] [i_0] [i_0] = ((/* implicit */unsigned int) arr_69 [i_1 + 3] [i_1] [i_20] [i_20] [i_21 - 1]);
                        }
                        for (int i_26 = 0; i_26 < 22; i_26 += 1) 
                        {
                            var_61 = ((/* implicit */unsigned long long int) var_3);
                            arr_86 [i_0] [i_1] [i_26] = ((/* implicit */unsigned int) var_15);
                            var_62 ^= 2008854197468106441ULL;
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_27 = 0; i_27 < 22; i_27 += 4) 
                        {
                            var_63 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)11520)) < (((/* implicit */int) (_Bool)1))))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_16)), ((unsigned short)51032)))))))));
                            var_64 = var_7;
                            var_65 = ((/* implicit */signed char) var_16);
                        }
                        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                        {
                            var_66 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                            arr_93 [i_28] [i_28] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) (unsigned short)6939)) & (((/* implicit */int) (_Bool)0)))));
                            var_67 = ((/* implicit */_Bool) max((var_67), (((/* implicit */_Bool) (~(((((/* implicit */int) var_0)) << (((((/* implicit */int) arr_0 [(signed char)6])) + (126))))))))));
                            var_68 |= ((/* implicit */unsigned int) ((((((/* implicit */int) var_1)) == (((/* implicit */int) (signed char)-34)))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (127LL)));
                        }
                        for (_Bool i_29 = 0; i_29 < 1; i_29 += 1) 
                        {
                            var_69 &= min((((((/* implicit */_Bool) min((arr_45 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)25356))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : ((~(3694533050U))))), (((/* implicit */unsigned int) var_10)));
                            arr_97 [i_1] [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) & (arr_70 [i_0] [i_0] [i_0]))) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) & ((+(arr_73 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 4])))));
                        }
                    }
                    for (unsigned long long int i_30 = 1; i_30 < 19; i_30 += 2) 
                    {
                        var_70 = ((/* implicit */unsigned long long int) var_7);
                        var_71 = ((/* implicit */unsigned long long int) ((arr_57 [i_0] [i_20 + 2] [i_20] [i_0] [i_0] [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_15)) == (((/* implicit */int) (signed char)-47)))))) : (min((((/* implicit */unsigned int) ((((/* implicit */unsigned int) (-2147483647 - 1))) < (1052044878U)))), (max((var_8), (((/* implicit */unsigned int) 164754818))))))));
                        var_72 = ((/* implicit */unsigned short) var_2);
                        var_73 = ((/* implicit */unsigned long long int) ((int) 8584444310580266541ULL));
                    }
                    for (unsigned long long int i_31 = 3; i_31 < 20; i_31 += 1) 
                    {
                        var_74 ^= ((/* implicit */unsigned short) min(((signed char)23), ((signed char)1)));
                        var_75 = ((/* implicit */unsigned long long int) ((signed char) min(((_Bool)1), (var_3))));
                    }
                    var_76 = ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_1 - 1] [i_1] [i_0] [i_1] [i_20]))) + (1540469874U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_77 [i_1 + 3] [i_20] [i_0] [i_1 + 3] [i_20]))))) : (((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) arr_77 [i_1 + 4] [i_1] [i_0] [i_0] [i_1]))))));
                }
                for (long long int i_32 = 0; i_32 < 22; i_32 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_33 = 1; i_33 < 20; i_33 += 4) 
                    {
                        arr_108 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (signed char)-114);
                        /* LoopSeq 1 */
                        for (signed char i_34 = 3; i_34 < 19; i_34 += 3) 
                        {
                            arr_111 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_5) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)33))) : (arr_45 [i_0] [i_0] [i_0] [i_34])))) ? ((-(arr_45 [i_34] [i_33] [i_32] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_11)), ((unsigned short)55700)))))));
                            arr_112 [i_0] [i_33] [i_0] [i_0] [i_34] [i_33] [i_0] = ((/* implicit */unsigned int) var_13);
                            arr_113 [i_0] [i_0] [i_0] [i_1] [i_33] [i_0] [i_32] = ((/* implicit */unsigned long long int) ((((var_7) & (((/* implicit */unsigned int) ((/* implicit */int) var_12))))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_1] [i_1] [i_1 + 2])))));
                            var_77 ^= ((/* implicit */long long int) -164754819);
                        }
                    }
                    for (signed char i_35 = 0; i_35 < 22; i_35 += 2) 
                    {
                        arr_116 [i_35] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (unsigned short)57344);
                        var_78 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-83)) >= (((/* implicit */int) ((arr_100 [i_1] [i_1 - 1] [i_0] [i_1] [i_0] [i_1 + 1]) >= (arr_100 [i_1] [i_1 + 1] [i_0] [i_1] [i_1] [i_1 - 1]))))));
                        var_79 = ((/* implicit */long long int) max((var_79), (((/* implicit */long long int) max((((((/* implicit */unsigned long long int) 329866650U)) & (((8102656537266566804ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_41 [i_35] [i_1] [i_1] [i_0] [i_0]))))))), (((((/* implicit */_Bool) 4294443008LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-126))) : (arr_44 [i_0] [i_1] [i_1 + 4] [i_1 + 1]))))))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_36 = 3; i_36 < 21; i_36 += 3) 
                        {
                            var_80 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((194536603U), (((/* implicit */unsigned int) (_Bool)1)))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((arr_70 [i_0] [i_1] [i_0]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_9)) ? (3753479680U) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_7)) >= (-8827571035325034424LL))))))))));
                            arr_119 [i_0] [i_1] [i_32] [i_0] [i_36] = ((/* implicit */long long int) 4349535290578468967ULL);
                            arr_120 [i_36] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_1 + 1])) > (((((/* implicit */int) arr_36 [i_1] [i_1] [i_1] [i_1 + 3])) / (((/* implicit */int) (unsigned short)11828))))));
                            arr_121 [i_32] [i_32] [i_32] [i_1] [i_32] &= ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0)))))));
                        }
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_37 = 0; i_37 < 22; i_37 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (int i_38 = 4; i_38 < 18; i_38 += 2) 
                        {
                            var_81 = ((/* implicit */long long int) arr_59 [i_1] [i_1 + 1] [i_1 + 1] [i_38 + 2]);
                            var_82 ^= ((/* implicit */int) var_6);
                        }
                        var_83 = ((/* implicit */unsigned long long int) var_2);
                        var_84 = ((/* implicit */unsigned long long int) max((var_84), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-119)))))));
                    }
                    var_85 = ((/* implicit */unsigned short) max((var_85), (((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (((701056373519021261ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-45))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_39 = 0; i_39 < 22; i_39 += 3) 
                    {
                        for (unsigned short i_40 = 4; i_40 < 20; i_40 += 3) 
                        {
                            {
                                arr_133 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned short)34085);
                                arr_134 [i_39] [i_1] [i_32] [i_0] [i_39] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_67 [i_1 + 4] [i_40 - 2] [i_40 - 4] [i_40]) < (arr_67 [i_1 + 2] [i_40 + 2] [i_40 + 2] [i_40 + 2])))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)18229))) / (var_7)))));
                            }
                        } 
                    } 
                }
                arr_135 [i_0] = ((/* implicit */unsigned short) 541487615U);
                /* LoopNest 2 */
                for (signed char i_41 = 0; i_41 < 22; i_41 += 3) 
                {
                    for (signed char i_42 = 0; i_42 < 22; i_42 += 1) 
                    {
                        {
                            arr_141 [i_0] [i_0] [i_41] [i_42] [i_41] [i_0] = max((((((/* implicit */int) (unsigned short)55095)) == (((/* implicit */int) var_9)))), (((((/* implicit */int) var_16)) < (1))));
                            var_86 &= ((/* implicit */unsigned int) var_6);
                        }
                    } 
                } 
            }
        } 
    } 
    var_87 = ((/* implicit */unsigned int) (_Bool)1);
    var_88 = ((/* implicit */_Bool) var_0);
}
