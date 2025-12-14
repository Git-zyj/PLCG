/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68810
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        arr_3 [3ULL] = ((/* implicit */short) var_15);
        arr_4 [i_0] [i_0] = ((/* implicit */short) (!(((((/* implicit */int) var_14)) != (((/* implicit */int) (signed char)-124))))));
        var_18 = (((-2147483647 - 1)) | (((/* implicit */int) (unsigned char)255)));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 3; i_1 < 19; i_1 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 1; i_2 < 20; i_2 += 3) /* same iter space */
            {
                var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) arr_9 [i_2 + 1] [i_2] [i_0] [i_2]))));
                var_20 = var_6;
            }
            for (unsigned char i_3 = 1; i_3 < 20; i_3 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 18; i_4 += 3) 
                {
                    for (unsigned int i_5 = 3; i_5 < 19; i_5 += 4) 
                    {
                        {
                            arr_20 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)0))));
                            arr_21 [i_1] [i_0] [i_1 + 1] [i_1] [i_4] [i_1] [(signed char)9] = (-(((/* implicit */int) var_8)));
                            var_21 = ((/* implicit */_Bool) max((var_21), (((_Bool) var_0))));
                            arr_22 [i_0] [i_4] [i_3] [(unsigned short)8] [i_0] |= ((/* implicit */signed char) var_3);
                            arr_23 [i_1] [i_1] [i_3] [i_4] [i_5] = ((/* implicit */int) ((unsigned int) ((_Bool) var_7)));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_6 = 4; i_6 < 17; i_6 += 3) 
                {
                    for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
                    {
                        {
                            var_22 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_25 [i_0] [3U] [i_0] [i_0] [i_0] [i_0])) ? (1449623342) : (((/* implicit */int) ((((/* implicit */int) (unsigned char)0)) >= (((/* implicit */int) var_11)))))));
                            arr_31 [i_0] [i_1] [i_3] [i_6 - 1] [i_7] [i_7] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)1))));
                            var_23 = ((/* implicit */unsigned short) var_2);
                        }
                    } 
                } 
            }
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (~(((/* implicit */int) var_8)))))));
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 3) 
        {
            /* LoopNest 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned long long int i_10 = 3; i_10 < 18; i_10 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (signed char i_11 = 3; i_11 < 20; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) (~(arr_40 [(unsigned short)8] [i_0] [i_10 - 3]))))));
                            arr_46 [(_Bool)1] [i_0] [(_Bool)1] [i_9] [i_9] [i_9] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) & (((/* implicit */int) var_11))));
                            arr_47 [i_9] [i_9] [i_9] [i_10] [i_11 + 1] = ((/* implicit */unsigned int) var_10);
                        }
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) arr_6 [i_0] [i_0] [i_9]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (signed char i_12 = 3; i_12 < 17; i_12 += 3) 
            {
                for (signed char i_13 = 0; i_13 < 21; i_13 += 3) 
                {
                    for (unsigned long long int i_14 = 2; i_14 < 19; i_14 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (arr_11 [i_12] [i_8]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_7)))))))));
                            var_28 = ((/* implicit */int) arr_2 [i_0]);
                            arr_56 [i_0] [i_8] [i_12] [i_14 - 1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) ? ((-2147483647 - 1)) : (2147483647)));
                            var_29 |= ((/* implicit */signed char) ((((/* implicit */int) arr_35 [i_12 - 1])) ^ (((/* implicit */int) var_1))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_15 = 0; i_15 < 21; i_15 += 3) 
            {
                for (signed char i_16 = 0; i_16 < 21; i_16 += 3) 
                {
                    {
                        var_30 -= ((/* implicit */short) (-(((((/* implicit */_Bool) (signed char)-54)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)5))))));
                        arr_61 [i_16] [i_16] [i_15] [i_16] = arr_24 [i_0] [i_8] [i_8] [i_15] [(unsigned short)19] [i_16];
                        arr_62 [i_15] [i_0] = arr_0 [i_0] [i_8];
                    }
                } 
            } 
            /* LoopNest 3 */
            for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    for (unsigned long long int i_19 = 3; i_19 < 18; i_19 += 3) 
                    {
                        {
                            var_31 = ((/* implicit */_Bool) var_17);
                            var_32 = ((((/* implicit */_Bool) 4022161383783449396ULL)) ? (arr_29 [i_19] [i_19] [i_19] [i_17] [i_19 - 1] [i_19 - 1] [i_19]) : (arr_29 [i_19] [i_19] [i_19] [i_17] [i_19 + 1] [i_19 - 2] [i_19]));
                            arr_69 [(signed char)9] [(signed char)9] [i_17] = (-(((var_9) ? (1) : (((/* implicit */int) (_Bool)0)))));
                            arr_70 [i_0] [i_17] [i_0] [i_0] [i_17] [i_0] = ((/* implicit */unsigned short) ((var_0) >> (((((/* implicit */int) arr_43 [i_19 - 3] [i_19 - 1] [i_19 + 2] [i_19 + 1] [i_19])) - (47141)))));
                            arr_71 [i_0] [i_17] = ((/* implicit */int) ((unsigned short) var_1));
                        }
                    } 
                } 
            } 
            arr_72 [i_0] [(unsigned char)12] [i_8] = ((/* implicit */unsigned int) (+(((/* implicit */int) var_1))));
        }
        arr_73 [i_0] [i_0] = ((/* implicit */unsigned short) (~(arr_14 [i_0] [i_0] [i_0])));
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
        {
            var_33 = arr_14 [i_20] [i_20] [i_20];
            var_34 = ((/* implicit */signed char) (+((-(var_16)))));
        }
        for (int i_22 = 1; i_22 < 14; i_22 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 0; i_23 < 17; i_23 += 4) 
            {
                var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_27 [i_22 - 1] [i_22 + 2] [i_22 + 1] [i_20] [i_22 + 3]))));
                var_36 -= (~(((/* implicit */int) arr_36 [i_22 + 2] [i_23] [i_23])));
            }
            arr_82 [i_20] [i_20] = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned char)1))));
            /* LoopSeq 2 */
            for (unsigned short i_24 = 0; i_24 < 17; i_24 += 4) 
            {
                var_37 -= ((/* implicit */int) arr_51 [i_20] [i_20] [i_24] [i_20]);
                /* LoopSeq 3 */
                for (int i_25 = 0; i_25 < 17; i_25 += 3) 
                {
                    var_38 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-62))));
                    arr_87 [i_20] [i_20] = ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_74 [i_22 - 1])));
                    /* LoopSeq 4 */
                    for (signed char i_26 = 0; i_26 < 17; i_26 += 4) 
                    {
                        var_39 -= ((/* implicit */unsigned long long int) ((signed char) arr_13 [i_22 + 2] [i_22 + 3] [i_22 + 1] [i_20]));
                        var_40 -= ((/* implicit */unsigned int) ((-545122392) | (((/* implicit */int) var_11))));
                        arr_91 [i_20] [i_22] [i_22] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_22 - 1] [i_22 + 3])) ? (((/* implicit */int) arr_34 [i_22 + 3] [i_22 + 1])) : (var_12)));
                        var_41 |= ((/* implicit */unsigned short) arr_10 [i_20]);
                        var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_15))));
                    }
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        var_43 = (-((+(((/* implicit */int) var_1)))));
                        arr_95 [i_20] [i_20] [i_24] [i_25] [i_20] [i_25] [i_27] = ((/* implicit */unsigned long long int) (~(0U)));
                    }
                    for (unsigned char i_28 = 0; i_28 < 17; i_28 += 4) 
                    {
                        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (~(((unsigned int) arr_14 [i_22] [i_28] [i_25])))))));
                        var_45 = ((/* implicit */_Bool) ((((((/* implicit */int) var_9)) | (((/* implicit */int) var_4)))) ^ (((/* implicit */int) (_Bool)1))));
                        var_46 = ((/* implicit */unsigned short) max((var_46), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (-1307369830) : ((~(2147483647))))))));
                    }
                    for (unsigned int i_29 = 2; i_29 < 16; i_29 += 3) 
                    {
                        arr_101 [i_20] [i_20] [i_24] [i_25] [i_29 + 1] [i_29 - 2] = ((/* implicit */unsigned char) (-(((((/* implicit */int) var_13)) / (arr_25 [i_20] [i_20] [i_29 + 1] [i_25] [i_29] [i_20])))));
                        var_47 = ((/* implicit */unsigned int) (+(arr_86 [i_22 + 2] [i_29 - 2] [i_29 + 1] [i_29 + 1])));
                        arr_102 [i_22] [i_20] = ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_5 [i_20] [i_22 - 1])) : (((/* implicit */int) arr_5 [19U] [i_22 + 1]))));
                        arr_103 [i_20] [(_Bool)1] [i_24] [i_25] [i_29] = ((/* implicit */_Bool) arr_92 [i_20] [i_22] [i_25] [i_25] [i_29] [i_20] [i_20]);
                    }
                }
                for (unsigned long long int i_30 = 0; i_30 < 17; i_30 += 3) 
                {
                    arr_106 [i_20] [i_22] [i_20] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_22 + 3] [i_22] [i_22])) / (((/* implicit */int) arr_6 [i_22 - 1] [i_22] [i_22]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_31 = 2; i_31 < 16; i_31 += 4) 
                    {
                        arr_110 [i_20] [i_30] [i_20] [i_22] [i_20] = ((/* implicit */unsigned short) ((arr_84 [i_22 - 1] [i_22] [i_31 - 1] [i_20]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_84 [i_22 + 1] [i_22] [i_31 + 1] [i_20]))) : (var_17)));
                        var_48 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(9489757620482974378ULL))))));
                        arr_111 [i_24] [i_22] [i_24] [i_20] = ((/* implicit */int) arr_98 [i_20] [i_20] [i_24] [i_30] [i_31]);
                    }
                }
                for (unsigned long long int i_32 = 1; i_32 < 14; i_32 += 4) 
                {
                    var_49 -= ((/* implicit */unsigned char) var_12);
                    arr_115 [i_20] [i_24] [i_24] [i_24] = ((/* implicit */int) (unsigned short)50387);
                    /* LoopSeq 1 */
                    for (signed char i_33 = 1; i_33 < 16; i_33 += 3) 
                    {
                        var_50 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) & (((/* implicit */int) var_13))));
                        arr_120 [i_20] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_4))))));
                    }
                    var_51 = ((/* implicit */int) min((var_51), (((/* implicit */int) (+((~(524032U))))))));
                }
                var_52 = ((/* implicit */unsigned short) var_11);
                arr_121 [i_20] [i_22] [15] [15] = ((/* implicit */_Bool) arr_79 [i_20] [i_20]);
            }
            for (unsigned char i_34 = 4; i_34 < 13; i_34 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_35 = 1; i_35 < 16; i_35 += 3) 
                {
                    arr_128 [i_20] [16] [i_34] [i_35] [i_20] = ((unsigned char) (unsigned char)227);
                    arr_129 [i_20] [i_20] [i_34] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_86 [i_20] [(unsigned short)12] [(_Bool)1] [i_22])))))));
                    arr_130 [i_20] [i_20] [i_22] [i_20] [i_35] [i_35] = ((/* implicit */int) arr_104 [i_20]);
                }
                /* LoopSeq 2 */
                for (unsigned int i_36 = 0; i_36 < 17; i_36 += 3) 
                {
                    /* LoopSeq 1 */
                    for (int i_37 = 1; i_37 < 15; i_37 += 4) 
                    {
                        var_53 = ((unsigned int) var_6);
                        var_54 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_76 [i_34] [i_34 - 3] [i_34]))));
                    }
                    arr_136 [i_20] [i_36] [i_36] [i_36] = ((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) arr_45 [i_20] [i_22] [i_34] [i_36]))));
                    var_55 -= ((/* implicit */_Bool) arr_55 [i_34]);
                }
                for (int i_38 = 0; i_38 < 17; i_38 += 4) 
                {
                    arr_140 [(unsigned char)16] [i_20] [(unsigned char)16] [i_38] [(unsigned char)16] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_22] [i_22 + 3] [i_20] [i_34]))));
                    var_56 = ((/* implicit */unsigned char) (+(arr_40 [i_20] [i_20] [i_38])));
                }
                /* LoopSeq 3 */
                for (_Bool i_39 = 0; i_39 < 1; i_39 += 1) 
                {
                    var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) arr_108 [i_20] [i_22] [i_34] [i_39] [i_39]))));
                    var_58 = ((((/* implicit */_Bool) arr_30 [i_22] [i_20] [i_22])) ? (((/* implicit */int) arr_24 [i_22 - 1] [i_34 + 2] [i_34] [i_34] [i_34 + 1] [(unsigned short)0])) : (((/* implicit */int) (unsigned char)2)));
                    var_59 -= ((/* implicit */int) ((arr_76 [i_20] [i_22] [i_39]) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_88 [i_39] [i_22] [i_22] [i_22] [i_20])) ? (((/* implicit */int) arr_27 [i_20] [i_20] [i_20] [i_34] [i_39])) : (var_12))))));
                    var_60 = ((/* implicit */unsigned long long int) var_8);
                }
                for (unsigned short i_40 = 0; i_40 < 17; i_40 += 4) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (_Bool i_41 = 0; i_41 < 0; i_41 += 1) 
                    {
                        arr_149 [i_20] [i_22] [i_20] [i_40] [i_41] = ((/* implicit */_Bool) (-(arr_58 [i_41 + 1] [i_34 - 4] [i_22 + 1])));
                        arr_150 [i_20] [i_22 + 2] [i_34] [i_40] [i_40] |= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_34 - 2] [i_22 + 3] [i_41 + 1] [i_40] [i_41 + 1])) & (((/* implicit */int) var_4))));
                        arr_151 [i_20] [i_40] [i_34] [i_22] [i_20] = ((/* implicit */signed char) (-(((/* implicit */int) var_8))));
                    }
                    for (unsigned char i_42 = 0; i_42 < 17; i_42 += 4) 
                    {
                        arr_156 [i_20] [i_20] = ((/* implicit */unsigned long long int) 4294967295U);
                        var_61 = ((/* implicit */unsigned char) min((var_61), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_58 [i_22 + 2] [i_34 - 1] [i_42])) ? (((/* implicit */int) arr_6 [i_22] [i_22] [i_22 + 3])) : (((/* implicit */int) arr_48 [i_20] [i_34] [i_34] [i_20])))))));
                        var_62 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) <= (((/* implicit */int) ((((/* implicit */int) var_5)) != (((/* implicit */int) arr_134 [i_20] [i_42] [(unsigned short)12])))))));
                    }
                    arr_157 [i_20] [(_Bool)1] [i_20] [i_40] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_45 [i_22 + 3] [i_22] [i_22 + 3] [i_34 - 2])) : (((/* implicit */int) arr_45 [i_22 + 1] [(signed char)5] [i_22 + 1] [i_34 - 1]))));
                    var_63 -= ((/* implicit */signed char) var_7);
                }
                for (unsigned short i_43 = 0; i_43 < 17; i_43 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_44 = 0; i_44 < 17; i_44 += 3) 
                    {
                        var_64 = ((/* implicit */_Bool) max((var_64), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) var_6))) ? (((/* implicit */int) ((_Bool) arr_10 [(_Bool)1]))) : (((/* implicit */int) (unsigned short)28271)))))));
                        var_65 -= ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
                    }
                    arr_163 [i_20] = ((/* implicit */signed char) var_8);
                }
                /* LoopSeq 2 */
                for (int i_45 = 0; i_45 < 17; i_45 += 4) 
                {
                    var_66 = ((/* implicit */unsigned char) ((var_11) && (((/* implicit */_Bool) ((short) var_6)))));
                    var_67 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)59))));
                    var_68 = ((/* implicit */short) min((var_68), (((/* implicit */short) ((((((/* implicit */_Bool) arr_58 [i_20] [i_22] [i_45])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26551))) : (0U))) < (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) var_14)))))))))));
                    var_69 = ((/* implicit */unsigned int) min((var_69), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_42 [i_22 + 2] [i_22 + 3])))))));
                }
                for (unsigned short i_46 = 0; i_46 < 17; i_46 += 3) 
                {
                    arr_170 [i_20] [i_20] [i_22] [i_34] [i_20] = ((/* implicit */unsigned short) var_1);
                    var_70 = ((/* implicit */unsigned short) min((var_70), (((/* implicit */unsigned short) (~(((/* implicit */int) ((var_16) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_105 [i_22] [i_34])))))))))));
                    var_71 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) arr_60 [i_34] [i_46]))) ? ((+(((/* implicit */int) arr_165 [i_20] [i_34] [i_34])))) : (((/* implicit */int) var_2))));
                    arr_171 [i_34] |= ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) != (((/* implicit */int) arr_138 [i_20] [i_20] [i_20] [i_20])))) ? (((((((/* implicit */int) (short)(-32767 - 1))) + (2147483647))) << (((((((/* implicit */int) arr_94 [(_Bool)1] [(unsigned short)6] [i_46])) + (18))) - (11))))) : ((~(var_12)))));
                }
            }
        }
        arr_172 [i_20] = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) arr_50 [i_20] [i_20] [i_20] [i_20] [i_20])))));
    }
    for (unsigned int i_47 = 0; i_47 < 13; i_47 += 4) 
    {
        var_72 = ((/* implicit */unsigned short) arr_49 [i_47] [i_47] [i_47]);
        arr_175 [i_47] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) min((((/* implicit */short) (unsigned char)0)), (var_3))))))) | (max((((((/* implicit */_Bool) (signed char)-41)) ? (((/* implicit */unsigned long long int) 545122392)) : (arr_86 [i_47] [i_47] [i_47] [i_47]))), (((/* implicit */unsigned long long int) min((144674097), (((/* implicit */int) var_11)))))))));
        var_73 *= ((/* implicit */signed char) ((unsigned short) (+(min((144674085), (((/* implicit */int) var_14)))))));
    }
    var_74 = ((/* implicit */_Bool) var_12);
}
