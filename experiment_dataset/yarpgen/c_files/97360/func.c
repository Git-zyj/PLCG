/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97360
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 4) 
            {
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) (signed char)6)) : (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 1) 
                    {
                        var_13 = ((/* implicit */unsigned char) arr_10 [i_0] [i_0] [i_1] [i_2] [(signed char)5]);
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_6 [(signed char)19] [i_2] [(signed char)4] [i_0]))) ? (((((/* implicit */int) var_11)) - (((/* implicit */int) (unsigned char)255)))) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)28))))))))))));
                    }
                    /* vectorizable */
                    for (signed char i_4 = 0; i_4 < 23; i_4 += 3) 
                    {
                        arr_14 [(signed char)5] [i_4] [i_1] [(signed char)8] [(signed char)5] = var_3;
                        /* LoopSeq 3 */
                        for (unsigned char i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            arr_18 [i_5 - 2] [i_4] [i_4] [(signed char)12] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))));
                            arr_19 [i_0] [i_0] [i_0] [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)60)) + ((-(((/* implicit */int) var_1))))));
                        }
                        for (signed char i_6 = 0; i_6 < 23; i_6 += 1) 
                        {
                            var_15 = ((/* implicit */signed char) var_2);
                            arr_23 [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
                            var_16 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0] [i_4]))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
                        {
                            arr_27 [i_4] [i_0] [i_1] [i_1] [(signed char)17] [i_4] [(unsigned char)3] = ((/* implicit */signed char) ((((/* implicit */int) var_11)) != (((/* implicit */int) ((unsigned char) (signed char)107)))));
                            arr_28 [i_0] [(signed char)16] [i_4] [(signed char)6] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-82))));
                            arr_29 [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) (signed char)-41);
                            var_17 = var_1;
                        }
                        arr_30 [i_4] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) arr_9 [i_0] [i_1] [(signed char)12] [i_1]))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */int) arr_5 [i_1])) + (((/* implicit */int) arr_5 [i_2]))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) arr_33 [i_0] [(signed char)22] [i_0] [(unsigned char)3] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_0] [i_2] [i_2] [i_4] [i_2] [i_8]))));
                        }
                    }
                    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_22 [i_1] [(unsigned char)16])) ? (((/* implicit */int) arr_31 [i_0] [i_0] [i_1] [i_2] [(signed char)12])) : (((/* implicit */int) (signed char)-59)))))) ? (((/* implicit */int) (signed char)-87)) : (((/* implicit */int) arr_24 [(signed char)1]))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_9 = 1; i_9 < 20; i_9 += 1) 
                    {
                        /* LoopSeq 4 */
                        for (signed char i_10 = 3; i_10 < 20; i_10 += 1) 
                        {
                            arr_39 [i_1] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) arr_7 [i_0] [(signed char)1] [i_9] [i_10])))) >= (((/* implicit */int) ((signed char) (unsigned char)204)))));
                            arr_40 [i_2] [i_2] [i_2] [i_2] [(unsigned char)21] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_2 [i_10 + 2])) <= (((/* implicit */int) (signed char)27))));
                        }
                        for (signed char i_11 = 0; i_11 < 23; i_11 += 3) 
                        {
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((signed char) ((unsigned char) arr_17 [i_0] [i_0] [i_1] [i_0] [(signed char)17] [i_11]))))));
                            arr_44 [i_0] [i_0] [i_0] [i_9 + 2] [i_11] = ((/* implicit */signed char) var_11);
                            arr_45 [(signed char)8] [(signed char)22] [(signed char)20] [i_2] [(signed char)8] [(signed char)22] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_5 [(unsigned char)19]))))) ? ((~(((/* implicit */int) (signed char)27)))) : ((~(((/* implicit */int) (signed char)-1))))));
                            var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) (~(((/* implicit */int) (signed char)0)))))));
                        }
                        for (unsigned char i_12 = 4; i_12 < 22; i_12 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) arr_12 [i_2] [i_1] [i_1] [(unsigned char)0])))));
                            var_24 &= ((/* implicit */unsigned char) (-(((/* implicit */int) arr_37 [i_0] [i_1] [i_2] [i_0] [(signed char)3]))));
                        }
                        for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
                        {
                            var_25 *= ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)212))));
                            arr_51 [i_0] [i_1] [i_1] [i_9 + 2] [i_9 + 2] [i_9 + 2] = ((unsigned char) arr_20 [i_1] [i_1] [i_2] [i_9] [i_9 + 1] [(unsigned char)2] [i_1]);
                        }
                        arr_52 [i_0] [i_0] = ((/* implicit */signed char) ((unsigned char) (!(((/* implicit */_Bool) var_5)))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_14 = 1; i_14 < 21; i_14 += 3) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_15 = 0; i_15 < 23; i_15 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)-121)))) - (((/* implicit */int) ((unsigned char) (signed char)36)))));
                            var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)52)) >> (((((/* implicit */int) var_9)) - (93)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_57 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) (signed char)0)))))));
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) arr_22 [i_15] [i_1])) : (((/* implicit */int) (unsigned char)204))))) ? (((/* implicit */int) arr_50 [i_0] [i_14 + 1] [i_2] [i_2] [i_0])) : ((+(((/* implicit */int) var_3))))));
                            arr_58 [i_0] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_11)))) || (((/* implicit */_Bool) var_0))));
                        }
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_16 = 0; i_16 < 23; i_16 += 4) 
                        {
                            arr_62 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned char)3] [i_0] = ((/* implicit */unsigned char) var_5);
                            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-108)) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (signed char)10)))))));
                            var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_50 [(signed char)12] [i_14 + 2] [(signed char)14] [i_14 + 2] [i_14 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)(-127 - 1)))));
                        }
                        for (unsigned char i_17 = 4; i_17 < 20; i_17 += 3) 
                        {
                            arr_65 [i_0] [i_0] [i_2] [i_0] [(signed char)18] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_6 [i_0] [i_0] [i_0] [i_0]), (arr_6 [i_0] [i_1] [(unsigned char)7] [i_14])))) ? (((/* implicit */int) min((((/* implicit */unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0])), (var_11)))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) arr_6 [i_0] [i_2] [i_2] [(unsigned char)11]))))));
                            arr_66 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */int) (signed char)-10)) | (((/* implicit */int) arr_25 [(unsigned char)0] [i_14 + 1] [i_2] [i_0] [i_17 - 1])))) : (((/* implicit */int) arr_1 [i_14 + 1] [i_17 + 3]))));
                        }
                        var_31 = arr_42 [(signed char)9] [i_14 + 1] [i_14 + 1] [i_14 + 2] [i_0];
                        var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((((/* implicit */int) (signed char)-28)) + (((/* implicit */int) (signed char)-11)))) : ((+(((/* implicit */int) (unsigned char)224))))))) ? (((/* implicit */int) var_3)) : ((-(((((/* implicit */int) arr_59 [(signed char)6] [i_1] [i_2] [i_2] [(unsigned char)13] [i_2])) + (((/* implicit */int) (signed char)-11))))))));
                    }
                }
            } 
        } 
        arr_67 [i_0] = (signed char)42;
    }
    /* vectorizable */
    for (unsigned char i_18 = 0; i_18 < 13; i_18 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
        {
            for (signed char i_20 = 0; i_20 < 13; i_20 += 4) 
            {
                for (signed char i_21 = 0; i_21 < 13; i_21 += 1) 
                {
                    {
                        var_33 &= ((signed char) ((((/* implicit */_Bool) arr_50 [i_18] [(signed char)7] [i_20] [i_20] [i_21])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)-99))));
                        /* LoopSeq 1 */
                        for (signed char i_22 = 0; i_22 < 13; i_22 += 4) 
                        {
                            arr_81 [i_19] [i_18] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_22] [i_21] [i_20] [i_20] [i_19] [i_18] [i_18])) | (((/* implicit */int) (unsigned char)212))));
                            arr_82 [(signed char)0] [i_22] [i_19] [i_20] [i_19] [i_19] [i_18] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_0))));
                        }
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_56 [i_18])) ? (((/* implicit */int) arr_15 [i_19] [i_18])) : (((/* implicit */int) ((signed char) (signed char)-28))))))));
                    }
                } 
            } 
        } 
        var_35 = arr_54 [i_18] [i_18];
    }
    for (unsigned char i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned char i_24 = 0; i_24 < 13; i_24 += 4) 
        {
            for (unsigned char i_25 = 1; i_25 < 10; i_25 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_26 = 0; i_26 < 13; i_26 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_27 = 0; i_27 < 13; i_27 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned char) max((var_36), (((unsigned char) ((signed char) ((((/* implicit */int) var_5)) * (((/* implicit */int) arr_68 [i_25]))))))));
                            arr_97 [i_23] [i_23] [(signed char)10] [i_23] [i_23] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)10))))) ? ((-(((/* implicit */int) arr_0 [i_23])))) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)138)) < (((/* implicit */int) (signed char)118)))))));
                            arr_98 [i_25] [i_24] [i_24] [i_25] [i_24] [i_24] = ((/* implicit */signed char) arr_24 [i_23]);
                        }
                        var_37 = (unsigned char)51;
                        arr_99 [i_23] [i_24] [i_25] [(signed char)12] [i_25] = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_16 [i_25 - 1] [i_24] [i_25])) + (((/* implicit */int) (signed char)-11))))));
                    }
                    arr_100 [i_25] [i_25] [i_25] [i_23] = ((/* implicit */signed char) max((min((((((/* implicit */int) arr_1 [i_23] [i_23])) - (((/* implicit */int) arr_21 [i_25 + 3] [(unsigned char)0] [i_25] [(signed char)20] [(signed char)21] [i_24] [i_25])))), (((/* implicit */int) ((signed char) var_4))))), (((/* implicit */int) arr_88 [(unsigned char)9] [i_23] [i_25]))));
                    /* LoopNest 2 */
                    for (unsigned char i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        for (signed char i_29 = 0; i_29 < 13; i_29 += 3) 
                        {
                            {
                                var_38 = ((/* implicit */signed char) ((((/* implicit */int) ((signed char) (unsigned char)239))) + (((/* implicit */int) max((((/* implicit */unsigned char) arr_85 [(signed char)8] [(signed char)8] [i_25 + 3])), (var_7))))));
                                var_39 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) (signed char)117)) << (((((/* implicit */int) arr_76 [i_23] [i_23])) - (92)))))) ? ((~(((/* implicit */int) arr_84 [i_23])))) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)222)) : (((/* implicit */int) arr_64 [i_25] [i_23])))))) / (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) arr_47 [(signed char)20] [(signed char)11] [i_25] [i_28] [i_28] [i_29])) ? (((/* implicit */int) (signed char)117)) : (((/* implicit */int) arr_101 [i_29] [i_25] [i_23])))) : (((/* implicit */int) arr_24 [i_25 + 1]))))));
                                var_40 = ((signed char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-28)) : (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)10)), (var_11))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_41 = arr_74 [i_23] [(signed char)0] [i_23];
        arr_109 [i_23] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) max(((signed char)40), ((signed char)10)))))) % (max((((((/* implicit */_Bool) (unsigned char)220)) ? (((/* implicit */int) (signed char)-118)) : (((/* implicit */int) arr_31 [i_23] [i_23] [i_23] [i_23] [i_23])))), (((((/* implicit */int) arr_41 [(signed char)10] [i_23])) - (((/* implicit */int) (signed char)7))))))));
    }
    /* vectorizable */
    for (unsigned char i_30 = 0; i_30 < 13; i_30 += 4) /* same iter space */
    {
        arr_113 [i_30] &= ((/* implicit */signed char) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) arr_50 [i_30] [i_30] [i_30] [i_30] [i_30]))));
        /* LoopNest 2 */
        for (signed char i_31 = 0; i_31 < 13; i_31 += 3) 
        {
            for (unsigned char i_32 = 1; i_32 < 12; i_32 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_33 = 0; i_33 < 13; i_33 += 3) 
                    {
                        for (signed char i_34 = 0; i_34 < 13; i_34 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_101 [i_32 - 1] [i_32] [(unsigned char)0]))));
                                var_43 = ((/* implicit */unsigned char) arr_96 [i_30] [i_30] [i_31] [i_30] [i_30] [i_34]);
                                var_44 = ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)(-127 - 1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_35 = 1; i_35 < 11; i_35 += 1) 
                    {
                        for (signed char i_36 = 0; i_36 < 13; i_36 += 2) 
                        {
                            {
                                var_45 = ((/* implicit */signed char) (~(((/* implicit */int) arr_5 [i_32 + 1]))));
                                arr_132 [i_32] [(signed char)4] [(unsigned char)5] [(unsigned char)4] [i_36] = (signed char)-22;
                                var_46 = ((/* implicit */unsigned char) (signed char)-119);
                                arr_133 [i_30] [(signed char)3] [i_32 + 1] [i_30] [i_35] [i_32] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_30] [i_30] [i_32 - 1] [i_30] [i_36]))))) == (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (signed char i_37 = 0; i_37 < 13; i_37 += 4) 
                    {
                        var_47 = ((/* implicit */signed char) (-(((/* implicit */int) ((unsigned char) arr_112 [(signed char)5] [(signed char)5])))));
                        var_48 = ((/* implicit */signed char) max((var_48), (((/* implicit */signed char) ((unsigned char) var_8)))));
                        var_49 = ((/* implicit */signed char) ((((/* implicit */int) arr_116 [i_30] [i_32 + 1] [i_32 + 1])) > (((/* implicit */int) arr_136 [i_30] [i_32] [i_30]))));
                    }
                    for (unsigned char i_38 = 0; i_38 < 13; i_38 += 1) /* same iter space */
                    {
                        arr_139 [i_32] [i_32] [i_32] [i_32] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_26 [i_32 + 1] [i_31] [(signed char)0] [i_32 + 1] [(unsigned char)18])) ? (((/* implicit */int) arr_26 [i_32 - 1] [i_31] [i_31] [i_38] [i_38])) : (((/* implicit */int) arr_26 [i_32 - 1] [i_32 - 1] [i_32 - 1] [(signed char)14] [i_38]))));
                        var_50 = arr_17 [i_30] [i_31] [i_32 - 1] [i_32] [i_32 + 1] [i_32];
                        var_51 = ((/* implicit */unsigned char) (signed char)-106);
                    }
                    for (unsigned char i_39 = 0; i_39 < 13; i_39 += 1) /* same iter space */
                    {
                        arr_142 [(signed char)10] [i_32] [(signed char)10] [(unsigned char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_22 [i_32] [i_31]))))) ? (((/* implicit */int) arr_87 [i_32 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_12)))))));
                        arr_143 [i_32] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_121 [i_32] [(signed char)3] [i_32 - 1] [(signed char)3] [(signed char)3]))));
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_121 [i_32 + 1] [i_32 - 1] [i_32 - 1] [i_31] [(signed char)1])) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_4))));
                    }
                    var_53 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-126))));
                    var_54 = ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)119)))))));
                }
            } 
        } 
        var_55 = (signed char)114;
    }
    /* LoopNest 2 */
    for (signed char i_40 = 0; i_40 < 10; i_40 += 1) 
    {
        for (signed char i_41 = 0; i_41 < 10; i_41 += 1) 
        {
            {
                var_56 &= ((/* implicit */unsigned char) (signed char)-119);
                arr_149 [i_40] [i_41] = ((/* implicit */signed char) (unsigned char)78);
            }
        } 
    } 
    var_57 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-119))));
    var_58 = ((/* implicit */unsigned char) min((var_58), (((/* implicit */unsigned char) (-(((((/* implicit */int) (unsigned char)177)) - (((((/* implicit */int) (signed char)10)) + (((/* implicit */int) var_1)))))))))));
}
