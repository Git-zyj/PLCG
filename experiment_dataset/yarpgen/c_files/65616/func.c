/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65616
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
    var_15 = ((((/* implicit */int) (signed char)-44)) > (((/* implicit */int) ((var_7) != (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (3249669274U)))))));
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_3))))) || (((/* implicit */_Bool) (+(3249669281U)))))));
        var_16 = max((((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */unsigned long long int) max((4294967291U), (((/* implicit */unsigned int) var_5))))) : (12455502189720413684ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0] [i_0])) / (((/* implicit */int) var_13))))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 1; i_2 < 19; i_2 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 0; i_3 < 20; i_3 += 1) 
            {
                for (unsigned int i_4 = 4; i_4 < 19; i_4 += 1) 
                {
                    {
                        arr_12 [i_1] = ((/* implicit */signed char) ((short) min((26U), (((/* implicit */unsigned int) (signed char)-76)))));
                        arr_13 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) -583105311192033344LL)) ? (((/* implicit */int) (signed char)-63)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1]))) : (((unsigned int) var_5)))), (((/* implicit */unsigned int) (!((_Bool)1))))));
                    }
                } 
            } 
            arr_14 [i_1] [i_2] = ((/* implicit */short) (_Bool)1);
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            arr_17 [i_1] [(unsigned char)1] = ((/* implicit */int) max((max((((unsigned long long int) var_2)), (((/* implicit */unsigned long long int) arr_8 [i_1] [i_1] [(unsigned short)16])))), (((/* implicit */unsigned long long int) (unsigned short)10827))));
            var_17 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3249669281U)), (var_4)))))) ? (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((long long int) var_12))))) : (((((/* implicit */_Bool) (unsigned short)64723)) ? (var_12) : (var_12)))));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 20; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_7] [i_8] [(_Bool)1] = ((/* implicit */unsigned short) arr_23 [i_5] [i_6] [i_6] [i_7] [i_8] [i_1]);
                            var_18 = ((/* implicit */short) (_Bool)1);
                        }
                    } 
                } 
                arr_27 [(_Bool)1] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((5991241883989137943ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_1] [i_5] [i_5] [i_1] [i_1] [i_6]))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1899122335)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1]))) : (4096103439U))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)1)) == (arr_25 [i_1] [i_5] [i_6]))) ? (((/* implicit */int) max(((short)63), (((/* implicit */short) (_Bool)1))))) : ((+(((/* implicit */int) arr_5 [i_6] [i_5]))))))) : (5991241883989137931ULL)));
            }
            for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */unsigned short) var_11);
                arr_31 [i_1] [i_5] [i_9] = ((/* implicit */signed char) min(((-2147483647 - 1)), (((((arr_7 [i_1] [i_5] [i_9 - 1] [i_9 - 1]) ? (((/* implicit */int) arr_22 [i_1] [i_9] [i_9 - 1] [i_1] [i_9 - 1])) : (((/* implicit */int) arr_21 [i_1] [i_5] [i_1] [i_1] [i_1])))) >> (((((long long int) var_5)) - (668242935LL)))))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 3; i_10 < 19; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) ((max((((((/* implicit */long long int) arr_6 [i_1])) / (arr_9 [i_1] [i_1] [i_1] [i_1]))), (((/* implicit */long long int) (-(((/* implicit */int) arr_23 [i_1] [i_5] [i_1] [i_11] [0U] [i_10]))))))) / (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            arr_37 [i_1] [i_5] [i_5] [i_9] [i_10] [(unsigned short)17] [i_11] = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) max((var_3), (((/* implicit */unsigned char) var_1))))) << (((((var_9) ? (((/* implicit */int) (short)-32746)) : (((/* implicit */int) (short)-32746)))) + (32759))))));
                        }
                    } 
                } 
            }
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
            {
                arr_41 [i_12 - 1] [14] [i_1] = ((/* implicit */short) max(((-(var_12))), (((/* implicit */unsigned long long int) ((signed char) (-2147483647 - 1))))));
                arr_42 [i_1] [i_5] [i_5] = ((/* implicit */long long int) (~(((/* implicit */int) max(((unsigned char)245), (((unsigned char) arr_33 [i_1] [i_5] [i_12 - 1])))))));
                arr_43 [i_12] [i_5] [i_1] = ((/* implicit */int) ((4611686018427387872LL) > (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0)))))))))));
                arr_44 [i_12] [i_1] = ((/* implicit */short) max((((/* implicit */int) var_0)), (((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-113)), (arr_28 [i_1] [i_5])))) ? (((/* implicit */int) (unsigned short)57136)) : ((+(((/* implicit */int) (unsigned char)72))))))));
            }
        }
        for (signed char i_13 = 2; i_13 < 18; i_13 += 2) 
        {
            arr_49 [i_1] [i_13 - 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)10)) ? (7381880355690594219ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_13 - 1] [i_1] [i_1]))) : (((unsigned long long int) min((((/* implicit */int) arr_47 [i_1] [i_13] [i_1])), (-1560659563))))));
            /* LoopNest 2 */
            for (unsigned int i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    {
                        arr_54 [i_15] [(_Bool)1] [3] [i_15] = ((/* implicit */unsigned short) arr_52 [i_1]);
                        arr_55 [i_1] [i_1] [i_14] [i_15] [i_14] [i_14] = ((/* implicit */unsigned short) 18446744073709551590ULL);
                        arr_56 [i_15] [(unsigned short)7] [i_13 - 1] [i_1] = ((/* implicit */_Bool) min((((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (_Bool)1)))))), (max((var_7), (var_7)))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_33 [i_13] [i_13 + 1] [i_13 - 2])) : (((/* implicit */int) arr_33 [i_13] [i_13 + 2] [i_13])))) | (((/* implicit */int) min((arr_33 [i_1] [i_1] [i_13]), (arr_33 [i_1] [i_13 + 2] [i_13 + 2]))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (short i_16 = 0; i_16 < 20; i_16 += 1) 
            {
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (signed char i_18 = 1; i_18 < 18; i_18 += 3) 
                    {
                        {
                            arr_64 [i_1] [i_13] [i_16] = max((min(((_Bool)1), ((_Bool)0))), (((((/* implicit */int) arr_45 [i_18 - 1] [i_1] [i_16])) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_1] [i_1] [i_17] [i_18]))))))));
                            var_22 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((2147483647) > (((/* implicit */int) arr_33 [19LL] [i_13] [i_13]))))), (((((_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4614)) + (((/* implicit */int) (unsigned char)46))))) : (max((((/* implicit */unsigned long long int) (unsigned char)231)), (arr_30 [i_1])))))));
                        }
                    } 
                } 
            } 
            arr_65 [i_1] [i_1] [i_13] = ((/* implicit */signed char) var_9);
            /* LoopSeq 2 */
            for (unsigned short i_19 = 0; i_19 < 20; i_19 += 2) 
            {
                var_23 = ((/* implicit */unsigned char) max((((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_40 [i_1] [i_1] [i_1] [(unsigned short)1]))), (max(((unsigned char)255), (((/* implicit */unsigned char) (_Bool)1))))))), ((~(((var_0) ? (arr_53 [i_1]) : (((/* implicit */int) arr_22 [i_19] [i_19] [(_Bool)1] [i_19] [i_19]))))))));
                arr_68 [i_1] = (+(max((((/* implicit */unsigned long long int) arr_50 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 + 1])), (22ULL))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_1] [i_1] [i_19] [(unsigned char)18])))) : (((((/* implicit */_Bool) (short)-32761)) ? (arr_40 [i_1] [i_1] [i_19] [i_1]) : (((/* implicit */long long int) arr_53 [i_1]))))))) ? (((/* implicit */int) arr_15 [i_13] [i_1])) : ((~(((/* implicit */int) min(((_Bool)1), (var_9))))))));
                var_25 ^= ((/* implicit */signed char) ((min((((((/* implicit */int) (unsigned char)11)) | (var_5))), (((/* implicit */int) ((unsigned short) 3614215109U))))) >> (((max((5991241883989137931ULL), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_19] [i_13 + 1] [i_13] [i_1]))))))) - (5991241883989137924ULL)))));
            }
            for (unsigned long long int i_20 = 2; i_20 < 19; i_20 += 4) 
            {
                /* LoopNest 2 */
                for (short i_21 = 0; i_21 < 20; i_21 += 3) 
                {
                    for (unsigned short i_22 = 2; i_22 < 18; i_22 += 4) 
                    {
                        {
                            arr_77 [i_22] [i_21] [i_13] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */short) (unsigned char)91)), ((short)-32759)));
                            arr_78 [i_1] [i_1] [i_20] [i_21] [i_22] = ((/* implicit */int) ((((/* implicit */_Bool) arr_72 [i_1] [i_13] [i_13] [i_1] [i_22 + 1])) ? (min((4902243981144693212ULL), (((/* implicit */unsigned long long int) min((882993000U), (((/* implicit */unsigned int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), ((signed char)0)))))));
                            var_26 = ((/* implicit */unsigned char) ((int) (unsigned char)194));
                            var_27 = ((/* implicit */int) 17663086457613280279ULL);
                        }
                    } 
                } 
                var_28 = ((/* implicit */unsigned int) ((((arr_59 [i_13 - 2] [i_20 - 2] [i_20 + 1] [i_20 + 1]) / (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_60 [i_1] [i_13] [i_20])))))) / (((/* implicit */int) var_2))));
                var_29 -= ((/* implicit */int) ((((/* implicit */int) (!(((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) != (var_6)))))) >= (((/* implicit */int) var_2))));
                var_30 = ((/* implicit */int) var_2);
            }
        }
        /* LoopSeq 1 */
        for (signed char i_23 = 0; i_23 < 20; i_23 += 3) 
        {
            var_31 = ((((((/* implicit */_Bool) (unsigned char)1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) / (max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_1] [i_1] [i_23]))))), (arr_80 [i_1] [i_1] [(short)8]))));
            arr_82 [i_23] = ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) arr_32 [i_23] [i_1])));
            var_32 = ((/* implicit */unsigned short) var_8);
            /* LoopSeq 2 */
            for (unsigned int i_24 = 0; i_24 < 20; i_24 += 2) /* same iter space */
            {
                var_33 = ((/* implicit */_Bool) 0U);
                arr_85 [i_1] [i_23] [i_1] = ((/* implicit */_Bool) var_12);
                arr_86 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((short) (~(arr_73 [i_1]))));
                /* LoopSeq 1 */
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) 
                {
                    arr_90 [i_1] = (signed char)115;
                    arr_91 [i_1] [i_23] [i_23] [i_24] [i_1] [i_25 + 1] = ((/* implicit */unsigned int) max((0), (((/* implicit */int) (!(((/* implicit */_Bool) ((long long int) -909993001))))))));
                }
                var_34 += (~(min((25ULL), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_15 [i_1] [i_23])), (2080374784U)))))));
            }
            /* vectorizable */
            for (unsigned int i_26 = 0; i_26 < 20; i_26 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (signed char i_27 = 0; i_27 < 20; i_27 += 1) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_15 [i_1] [i_28]))));
                            arr_101 [i_1] [i_23] [i_26] [i_23] [i_27] [i_28] = ((4294967291U) == (((((/* implicit */_Bool) arr_10 [i_1] [i_28])) ? (arr_34 [i_27] [i_26] [i_26] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_76 [i_27] [i_28] [i_28] [i_27] [i_28]))))));
                        }
                    } 
                } 
                arr_102 [i_1] [i_23] [i_26] [i_23] = var_14;
            }
        }
    }
    for (signed char i_29 = 0; i_29 < 11; i_29 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_30 = 0; i_30 < 11; i_30 += 1) 
        {
            for (int i_31 = 0; i_31 < 11; i_31 += 3) 
            {
                {
                    arr_114 [i_29] = ((/* implicit */unsigned int) max((((/* implicit */long long int) -1212609640)), (arr_36 [i_29])));
                    arr_115 [i_31] [i_30] [i_29] = ((/* implicit */signed char) arr_109 [i_29] [i_30]);
                }
            } 
        } 
        arr_116 [i_29] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)57))));
        var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (+(min((((/* implicit */int) (_Bool)1)), (((((/* implicit */_Bool) arr_45 [i_29] [i_29] [i_29])) ? (((/* implicit */int) arr_100 [i_29] [i_29] [i_29] [i_29] [i_29] [i_29])) : (((/* implicit */int) var_0)))))))))));
        /* LoopNest 2 */
        for (unsigned char i_32 = 0; i_32 < 11; i_32 += 1) 
        {
            for (int i_33 = 3; i_33 < 10; i_33 += 2) 
            {
                {
                    var_37 = ((/* implicit */unsigned long long int) (unsigned short)50043);
                    var_38 = ((/* implicit */_Bool) (~(min((5571635642108953840ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3315968641U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))))));
                    arr_121 [i_29] [i_32] [i_32] = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) ((unsigned int) (unsigned char)75))))));
                    var_39 = ((var_5) != (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_75 [i_29] [(unsigned short)4] [i_32])), (18446744073709551615ULL)))) || (((/* implicit */_Bool) ((unsigned short) (_Bool)1)))))));
                    var_40 = ((/* implicit */int) (!(((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned int) (short)-1)))))));
                }
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_34 = 0; i_34 < 20; i_34 += 1) 
    {
        arr_125 [i_34] = ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_9 [i_34] [i_34] [i_34] [i_34])))) == (((((arr_9 [i_34] [i_34] [i_34] [i_34]) + (9223372036854775807LL))) << (((/* implicit */int) arr_100 [i_34] [i_34] [i_34] [i_34] [i_34] [i_34])))));
        var_41 = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_76 [i_34] [i_34] [i_34] [i_34] [i_34])), ((-(11589713406033982519ULL)))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_35 = 2; i_35 < 18; i_35 += 3) 
        {
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) arr_81 [i_34] [i_35] [i_35 + 2]))));
            /* LoopNest 2 */
            for (int i_36 = 0; i_36 < 20; i_36 += 1) 
            {
                for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                {
                    {
                        var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (signed char)-124)), (var_12))), (((/* implicit */unsigned long long int) ((unsigned int) var_3))))))));
                        arr_134 [i_34] [i_34] [i_36] [i_34] = ((/* implicit */int) 1ULL);
                        arr_135 [i_34] [i_35] [i_34] [(unsigned short)19] = ((/* implicit */unsigned short) ((signed char) max((arr_97 [i_34] [i_35] [10ULL] [(unsigned char)17] [i_35 - 2]), (((/* implicit */unsigned int) ((unsigned char) 4294967280U))))));
                    }
                } 
            } 
            arr_136 [i_34] [i_34] [i_34] = ((/* implicit */int) ((unsigned int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))), (min((((/* implicit */unsigned long long int) 6144LL)), (arr_84 [i_34] [i_35]))))));
        }
        arr_137 [11U] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_62 [i_34] [i_34] [i_34] [i_34] [i_34] [2] [i_34]), (((_Bool) arr_32 [i_34] [i_34]))))) + (((/* implicit */int) arr_127 [i_34] [i_34] [i_34]))));
    }
    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
    {
        var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_67 [i_38] [i_38])) : (((/* implicit */int) (unsigned char)42))))), (max((var_7), (3315968646U)))))) ? (arr_72 [i_38] [i_38] [i_38] [i_38] [i_38]) : (arr_73 [i_38])));
        var_45 -= ((/* implicit */short) (signed char)127);
    }
    var_46 = ((/* implicit */unsigned long long int) var_3);
    /* LoopSeq 3 */
    for (int i_39 = 2; i_39 < 16; i_39 += 1) /* same iter space */
    {
        var_47 = ((/* implicit */unsigned int) ((signed char) max(((unsigned char)0), (((/* implicit */unsigned char) arr_7 [i_39 + 1] [i_39] [14] [i_39])))));
        var_48 = ((/* implicit */unsigned long long int) min((var_48), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_124 [(unsigned char)4] [i_39 - 2])))))));
        arr_142 [i_39 - 2] [i_39] = ((/* implicit */unsigned char) min((((/* implicit */int) max((arr_48 [i_39 + 1] [i_39 + 1] [i_39 - 2]), (((/* implicit */unsigned short) arr_126 [i_39 + 1] [i_39 + 1] [i_39 + 1]))))), (((((/* implicit */_Bool) arr_48 [i_39 + 1] [i_39 - 1] [i_39])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_126 [i_39 + 1] [i_39 - 2] [i_39 - 1]))))));
    }
    /* vectorizable */
    for (int i_40 = 2; i_40 < 16; i_40 += 1) /* same iter space */
    {
        var_49 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)255)) << ((((-(((/* implicit */int) (_Bool)1)))) + (20)))));
        var_50 = (-(((/* implicit */int) (_Bool)1)));
        var_51 = ((/* implicit */short) var_2);
    }
    for (int i_41 = 2; i_41 < 16; i_41 += 1) /* same iter space */
    {
        arr_148 [i_41] = ((/* implicit */signed char) ((((/* implicit */_Bool) 23U)) || (((/* implicit */_Bool) ((unsigned char) max((3315968629U), (((/* implicit */unsigned int) (_Bool)1))))))));
        arr_149 [i_41] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_67 [i_41] [i_41])), (2494449525U)))) > (((((/* implicit */long long int) 978998663U)) / (9223372036854775807LL)))))), (((unsigned long long int) (signed char)81))));
    }
}
