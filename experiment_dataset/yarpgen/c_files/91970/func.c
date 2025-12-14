/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91970
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
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) var_19))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned char)146))))))) ? ((~(((/* implicit */int) (short)-10722)))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_14)))))));
    }
    for (unsigned short i_1 = 4; i_1 < 6; i_1 += 3) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
        {
            /* LoopSeq 4 */
            for (short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                arr_11 [i_2] [i_2] = ((/* implicit */signed char) arr_1 [i_1]);
                /* LoopSeq 2 */
                for (short i_4 = 1; i_4 < 7; i_4 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        var_21 = ((/* implicit */_Bool) (~(((((/* implicit */int) var_2)) % (((/* implicit */int) arr_16 [i_1] [i_1] [i_2] [i_3] [i_2] [i_4] [3U]))))));
                        arr_17 [i_2] [(signed char)8] = ((/* implicit */signed char) (unsigned char)222);
                    }
                    for (short i_6 = 2; i_6 < 8; i_6 += 4) /* same iter space */
                    {
                        arr_22 [(unsigned char)1] [i_2] [i_2] [i_2] [i_2] = (-(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_10)) : (var_5))));
                        var_22 *= ((unsigned char) (unsigned short)31);
                        var_23 = ((/* implicit */signed char) (unsigned char)222);
                        var_24 = ((/* implicit */_Bool) (~(var_1)));
                        arr_23 [i_1] [(signed char)4] [i_1 - 4] [i_2] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_20 [i_2] [i_1 + 4] [i_2 + 1] [i_4] [i_4 + 3] [i_4 + 2])) ? (((/* implicit */int) arr_9 [i_6 - 2] [i_6 + 1] [i_6 + 2] [i_6 - 1])) : (((/* implicit */int) arr_9 [i_6 + 2] [i_6 - 1] [i_6 + 1] [i_6 + 1]))));
                    }
                    for (short i_7 = 2; i_7 < 8; i_7 += 4) /* same iter space */
                    {
                        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) arr_1 [i_1]))))))));
                        arr_26 [i_1] [i_2] [i_2] [i_2] [(_Bool)1] = ((/* implicit */int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_10 [(short)3] [i_3] [(unsigned char)9] [i_7])) : (((/* implicit */int) var_4)))) > (((/* implicit */int) ((((/* implicit */int) var_11)) >= (((/* implicit */int) var_2)))))));
                    }
                    arr_27 [(_Bool)1] [(short)0] [i_3] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_14))));
                }
                for (signed char i_8 = 4; i_8 < 9; i_8 += 4) 
                {
                    var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 3] [i_2 - 1] [i_8 - 4])) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) ((((/* implicit */int) arr_12 [i_1] [i_2] [i_3])) != (((/* implicit */int) (unsigned short)65495))))))))));
                    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_1] [i_2] [i_3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)18))))) ? ((+(((/* implicit */int) arr_8 [i_2] [i_2] [4] [4])))) : ((+(((/* implicit */int) var_2))))));
                }
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (short i_10 = 2; i_10 < 8; i_10 += 4) 
                {
                    for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
                    {
                        {
                            arr_40 [i_1] [i_2] [i_9] [(unsigned short)2] [i_11] = ((/* implicit */signed char) ((unsigned char) (unsigned short)29340));
                            arr_41 [i_2] [i_2] = ((/* implicit */short) (~(((/* implicit */int) arr_5 [i_10 - 2] [i_2 - 1] [i_1 - 4]))));
                        }
                    } 
                } 
                var_28 = ((/* implicit */signed char) ((_Bool) var_18));
                /* LoopSeq 3 */
                for (short i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    arr_44 [i_1 + 2] [i_2 + 1] [i_9] [i_2] = ((/* implicit */int) var_13);
                    var_29 = ((/* implicit */short) (unsigned short)65513);
                }
                for (unsigned char i_13 = 0; i_13 < 10; i_13 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        var_30 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)2))));
                        arr_51 [i_1] [i_2] [i_9] [i_13] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) arr_32 [i_1] [i_1])) : (((/* implicit */int) arr_32 [i_1] [i_1])))) % (((/* implicit */int) ((unsigned short) (unsigned char)18)))));
                    }
                    var_31 = var_14;
                    arr_52 [i_1] [i_2 + 1] [i_1] [i_1] [i_2] = ((/* implicit */signed char) arr_0 [i_1]);
                    arr_53 [i_1] [i_2] [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_48 [i_2])) ? (((/* implicit */int) arr_48 [i_2])) : (((/* implicit */int) arr_48 [i_2]))));
                }
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 1) /* same iter space */
                {
                    var_32 ^= ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_2 - 1] [(signed char)8] [i_2 - 1] [i_2 - 1]))));
                    arr_57 [i_1] [i_2 - 1] [i_9] [i_15] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)21))))) ? (arr_43 [i_1 - 4] [i_1 + 2] [i_2] [i_2 - 1]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_1 - 2] [i_1] [i_2] [i_9] [i_15])) : (arr_55 [i_15] [i_2])))));
                    var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)235)))))));
                    var_34 = ((/* implicit */unsigned short) (_Bool)1);
                }
            }
            for (signed char i_16 = 1; i_16 < 9; i_16 += 4) 
            {
                var_35 = (+(((/* implicit */int) (short)192)));
                arr_61 [i_2] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_12))));
                /* LoopSeq 1 */
                for (short i_17 = 0; i_17 < 10; i_17 += 3) 
                {
                    var_36 = ((/* implicit */_Bool) var_19);
                    arr_65 [i_1 - 1] [i_2] [i_16 - 1] [i_17] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_46 [i_2] [i_1 - 3] [i_2 - 1] [i_16 - 1]))));
                }
                var_37 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)10466))));
                var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_38 [i_1 + 3] [(_Bool)1] [i_2] [i_2] [i_16]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)123)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) (unsigned char)46)) ? (((/* implicit */int) var_2)) : (arr_33 [i_1 - 2] [i_16 - 1] [i_16 - 1]))))))));
            }
            for (int i_18 = 0; i_18 < 10; i_18 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 1; i_19 < 9; i_19 += 1) 
                {
                    for (unsigned short i_20 = 2; i_20 < 9; i_20 += 1) 
                    {
                        {
                            var_39 = ((/* implicit */short) ((((/* implicit */_Bool) var_13)) ? ((-(((/* implicit */int) arr_25 [i_1] [i_1] [i_18] [(signed char)6] [i_2])))) : (((((/* implicit */_Bool) arr_46 [i_2] [(signed char)5] [i_18] [3])) ? (((/* implicit */int) arr_3 [i_1] [(signed char)3])) : (((/* implicit */int) arr_37 [i_2] [i_2]))))));
                            var_40 ^= ((/* implicit */unsigned char) arr_73 [i_1] [i_2] [i_2] [(_Bool)1] [i_1]);
                            arr_74 [i_1] [i_1] [i_18] [i_2] [i_20] [i_20] [i_20] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_12)))))));
                        }
                    } 
                } 
                arr_75 [i_1 - 3] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-182)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_58 [i_2] [i_2 - 1] [i_1 - 1]))) : ((+(var_17)))));
            }
            /* LoopNest 2 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                for (unsigned short i_22 = 1; i_22 < 9; i_22 += 3) 
                {
                    {
                        arr_81 [i_1] [i_2] [(short)6] [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_66 [i_22 + 1] [i_2 - 1] [i_1 + 1] [i_1 + 4])) + (((/* implicit */int) arr_66 [i_22 - 1] [i_2 + 1] [i_1 + 4] [i_1]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_23 = 0; i_23 < 10; i_23 += 4) 
                        {
                            var_41 = ((/* implicit */_Bool) ((int) arr_62 [i_1 + 3] [i_2 + 1] [i_2 - 1] [i_22 + 1]));
                            var_42 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((10281822693012232145ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_18)) : (arr_84 [i_1] [i_2 - 1] [i_21] [i_22 - 1] [i_22 + 1] [i_23]))) : (((/* implicit */int) (unsigned short)55070))));
                            var_43 -= (!(((/* implicit */_Bool) (unsigned short)31)));
                            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) ((_Bool) arr_64 [i_23])))));
                            arr_85 [i_1] [i_1] [i_23] [(unsigned short)4] |= ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)10466))))) ? (((/* implicit */int) (unsigned short)10465)) : (((/* implicit */int) arr_29 [4] [(signed char)9]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_24 = 1; i_24 < 7; i_24 += 4) 
                        {
                            arr_88 [i_1] [i_2] [i_21] [i_22] [i_2] = ((/* implicit */_Bool) arr_47 [i_24 + 1] [i_24 + 1] [i_24] [i_24 + 1] [i_24] [(unsigned short)8]);
                            var_45 += ((/* implicit */unsigned char) arr_9 [i_1 - 1] [i_2 + 1] [i_24] [i_24 + 1]);
                            var_46 = ((/* implicit */_Bool) max((var_46), (((((/* implicit */int) ((240063525) < (((/* implicit */int) (short)192))))) == (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_21] [i_22 + 1] [(unsigned char)7])) : (((/* implicit */int) var_10))))))));
                            arr_89 [i_24 + 2] [i_2] [i_2] [i_1] [i_2] [i_1] = var_12;
                        }
                        arr_90 [i_2] [i_2 - 1] [i_2] [i_21] [i_22] = ((/* implicit */short) (~(arr_63 [i_22 + 1] [i_2 - 1] [i_1 + 3])));
                    }
                } 
            } 
        }
        for (int i_25 = 0; i_25 < 10; i_25 += 3) 
        {
            arr_95 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_93 [i_1])) ? ((+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned short)55070)))))) : (-2071416575)));
            var_47 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) 738950152U)) ? (((/* implicit */int) (short)3152)) : (((/* implicit */int) (unsigned char)19)))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_92 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_21 [(signed char)4] [i_25]))))));
        }
        for (unsigned char i_26 = 0; i_26 < 10; i_26 += 3) 
        {
            /* LoopSeq 2 */
            for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) 
            {
                arr_103 [i_27] = ((/* implicit */_Bool) ((signed char) arr_18 [i_27]));
                var_48 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_13)), (((unsigned long long int) 738950146U))));
            }
            /* vectorizable */
            for (unsigned short i_28 = 0; i_28 < 10; i_28 += 4) 
            {
                var_49 = arr_20 [i_28] [i_26] [i_26] [i_28] [i_28] [i_26];
                var_50 -= ((/* implicit */signed char) -240063525);
            }
            /* LoopNest 3 */
            for (signed char i_29 = 0; i_29 < 10; i_29 += 3) 
            {
                for (unsigned char i_30 = 2; i_30 < 8; i_30 += 3) 
                {
                    for (signed char i_31 = 4; i_31 < 7; i_31 += 1) 
                    {
                        {
                            arr_117 [i_31] [i_31] [i_29] [i_29] [i_31] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))) ? (((/* implicit */int) arr_45 [i_1 + 4] [i_26] [1ULL] [i_26])) : (((/* implicit */int) ((-240063531) >= (min((240063534), (var_1))))))));
                            arr_118 [i_31] [i_29] [i_30] = ((/* implicit */unsigned short) (short)-15787);
                        }
                    } 
                } 
            } 
            arr_119 [i_1] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((((/* implicit */short) arr_13 [i_1] [(_Bool)1] [i_1 - 3] [i_1] [(_Bool)1] [i_1])), (arr_100 [(unsigned short)3]))), (((/* implicit */short) ((((/* implicit */int) var_12)) == (240063524))))))) ? (max((((/* implicit */int) ((unsigned short) arr_50 [i_1] [i_26] [i_26] [(short)0] [i_1] [i_1] [(signed char)5]))), ((+(((/* implicit */int) (_Bool)1)))))) : (((/* implicit */int) (unsigned char)198))));
        }
        var_51 -= ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 7ULL)) ? (((/* implicit */int) (unsigned short)55070)) : (arr_68 [i_1] [i_1] [i_1] [i_1 + 2] [i_1])))) ? (((/* implicit */unsigned int) -240063538)) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10466))) % (738950133U))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)201)) ? (3556017160U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25200)))))) ? (((/* implicit */unsigned int) min((var_1), (((/* implicit */int) var_15))))) : ((-(2439184071U)))))));
    }
    /* LoopSeq 2 */
    for (int i_32 = 2; i_32 < 20; i_32 += 3) 
    {
        /* LoopNest 3 */
        for (int i_33 = 1; i_33 < 19; i_33 += 4) 
        {
            for (signed char i_34 = 1; i_34 < 19; i_34 += 4) 
            {
                for (int i_35 = 1; i_35 < 17; i_35 += 1) 
                {
                    {
                        var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))))) ? (max((((/* implicit */unsigned int) (_Bool)1)), (738950136U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */int) arr_126 [i_35])) : (((/* implicit */int) var_2))));
                        arr_134 [i_35] [i_35] [i_34] [i_34] [i_35] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_125 [i_35])) % (240063538)))) ? (((/* implicit */int) arr_133 [i_32 - 2] [i_34 + 2] [i_35])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_10)))))))) ? (((((/* implicit */_Bool) ((var_5) - (-240063538)))) ? (((/* implicit */int) var_14)) : ((-(((/* implicit */int) arr_133 [i_32] [i_33] [i_35])))))) : (((/* implicit */int) var_12))));
                        var_53 *= ((/* implicit */signed char) (((+(((/* implicit */int) (_Bool)1)))) + (((((/* implicit */_Bool) arr_121 [i_33 + 1])) ? (((/* implicit */int) arr_121 [i_33 + 1])) : (((/* implicit */int) arr_121 [i_33 - 1]))))));
                    }
                } 
            } 
        } 
        var_54 ^= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)55070))) * (((((/* implicit */_Bool) arr_131 [i_32 - 1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (arr_132 [i_32 - 1] [i_32])))));
        arr_135 [i_32] = ((/* implicit */signed char) var_14);
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_36 = 0; i_36 < 21; i_36 += 3) 
        {
            var_55 = ((((/* implicit */_Bool) arr_132 [i_32 - 2] [i_32 - 2])) ? (((/* implicit */int) (unsigned char)56)) : (((/* implicit */int) (unsigned char)68)));
            var_56 = ((/* implicit */short) (+(((((/* implicit */_Bool) 13587995836582140909ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10476))) : (738950136U)))));
        }
    }
    for (short i_37 = 1; i_37 < 10; i_37 += 1) 
    {
        var_57 |= ((/* implicit */unsigned char) ((unsigned short) arr_121 [i_37 + 1]));
        var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_12)), (arr_125 [i_37])))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_19))) : (max((3556017159U), (3556017160U))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
    }
    var_59 = ((/* implicit */int) ((3556017159U) > (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-82)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_38 = 1; i_38 < 11; i_38 += 3) 
    {
        /* LoopSeq 1 */
        for (short i_39 = 0; i_39 < 14; i_39 += 1) 
        {
            var_60 = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_4)));
            /* LoopSeq 1 */
            for (signed char i_40 = 2; i_40 < 13; i_40 += 3) 
            {
                var_61 = ((/* implicit */unsigned long long int) arr_129 [i_38 + 1] [(signed char)16] [i_40] [i_40 - 2]);
                arr_150 [i_38] = ((/* implicit */short) ((((/* implicit */int) var_9)) < ((((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) arr_138 [i_38]))))));
            }
        }
        var_62 *= ((/* implicit */int) (!(((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) arr_0 [i_38]))))));
        /* LoopNest 2 */
        for (signed char i_41 = 0; i_41 < 14; i_41 += 3) 
        {
            for (_Bool i_42 = 0; i_42 < 1; i_42 += 1) 
            {
                {
                    arr_157 [i_38] [i_41] [i_38] [(short)7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-1)) ? (3556017141U) : (((/* implicit */unsigned int) -1253365751))));
                    arr_158 [i_38] [i_41] [i_38] [i_42] = ((((/* implicit */int) var_11)) % (((/* implicit */int) (unsigned char)133)));
                    /* LoopNest 2 */
                    for (signed char i_43 = 0; i_43 < 14; i_43 += 1) 
                    {
                        for (unsigned short i_44 = 2; i_44 < 13; i_44 += 3) 
                        {
                            {
                                arr_164 [(signed char)6] [i_41] [i_41] [i_41] |= ((_Bool) arr_128 [i_44 - 2] [i_38 + 1] [i_42]);
                                arr_165 [i_38] [i_41] [i_38] = ((/* implicit */signed char) ((((/* implicit */int) (short)12029)) >= (((/* implicit */int) var_13))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_45 = 2; i_45 < 12; i_45 += 3) 
    {
        arr_170 [i_45] = ((/* implicit */short) ((((/* implicit */_Bool) arr_122 [i_45 - 1])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_122 [i_45 + 1]))));
        arr_171 [i_45] [i_45] = ((/* implicit */short) (+(((/* implicit */int) arr_169 [i_45] [i_45 + 1]))));
    }
}
