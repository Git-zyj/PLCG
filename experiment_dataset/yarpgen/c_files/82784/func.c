/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82784
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_14)) % (max((((/* implicit */unsigned long long int) var_13)), (3875239420630759427ULL))))) * (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)65533))))), (((3875239420630759419ULL) | (((/* implicit */unsigned long long int) 6185760716510354094LL))))))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                arr_8 [i_1] = (~(3875239420630759427ULL));
                var_18 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_1 + 1] [i_2])) ? (((/* implicit */int) arr_5 [i_1 + 1] [i_1 + 1] [7])) : (-440681274)));
                var_19 = ((/* implicit */long long int) -440681274);
                var_20 = ((/* implicit */unsigned long long int) var_8);
            }
            for (unsigned char i_3 = 3; i_3 < 12; i_3 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) -2569819177540281506LL))));
                    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3875239420630759427ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)15845))) : (772049519U)));
                }
                arr_15 [i_3] [i_3] = ((/* implicit */unsigned long long int) arr_12 [i_3] [i_3] [i_1] [i_1 + 1] [i_1] [i_0]);
                var_23 = (+(arr_4 [i_1 + 1] [i_1 + 1] [i_1 + 1]));
                arr_16 [i_3] = ((/* implicit */unsigned short) arr_13 [i_0] [i_0] [i_0] [i_0]);
                arr_17 [i_0] [i_1] [i_3] [i_3] = ((/* implicit */signed char) var_4);
            }
            var_24 = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [9ULL] [i_1 + 1]);
        }
        for (unsigned char i_5 = 2; i_5 < 12; i_5 += 4) 
        {
            arr_20 [i_5] [i_5] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_0] [i_5 - 1])) % (((/* implicit */int) arr_18 [i_0] [i_5 - 2]))))) ? (max((((((/* implicit */_Bool) arr_13 [6LL] [i_0] [i_0] [i_0])) ? (14571504653078792197ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0]))))), (((/* implicit */unsigned long long int) (-(var_1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) ((var_14) < (-4341398045350685204LL))))))))));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 14; i_6 += 2) 
            {
                var_25 = min(((-(var_16))), (((/* implicit */unsigned long long int) ((signed char) arr_19 [i_0] [i_5 + 2] [i_6]))));
                /* LoopSeq 2 */
                for (unsigned short i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 4; i_8 < 12; i_8 += 1) 
                    {
                        var_26 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) 14571504653078792197ULL)) ? (arr_14 [(_Bool)1]) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)79)) / (49445835)))))));
                        var_27 = ((/* implicit */short) min((((/* implicit */unsigned char) arr_19 [i_0] [i_0] [i_0])), (arr_24 [i_0] [i_0] [i_0] [13LL])));
                        var_28 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((max((((/* implicit */long long int) var_3)), (arr_2 [i_8]))) != (((/* implicit */long long int) ((((/* implicit */_Bool) 4294967285U)) ? (491725055) : (((/* implicit */int) (unsigned short)65525))))))))));
                        arr_28 [i_0] [i_8] [i_0] [i_8] [i_0] = ((((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) (unsigned short)7622)), (11891955622979752522ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (440681273) : (((/* implicit */int) arr_22 [i_0])))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((arr_4 [i_5] [i_5] [i_5]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))));
                        arr_29 [i_0] [i_0] [i_0] [i_0] [i_8] = ((/* implicit */signed char) min((min((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))), (345032275422188395ULL))), (((/* implicit */unsigned long long int) var_9))));
                    }
                    var_29 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_24 [i_5] [i_5 + 1] [i_5 - 1] [i_5 + 2])) : (((/* implicit */int) arr_24 [i_0] [i_5 + 2] [i_5 - 2] [i_5 + 1]))))));
                }
                for (unsigned short i_9 = 0; i_9 < 14; i_9 += 4) /* same iter space */
                {
                    arr_32 [i_0] [i_5 - 1] [i_0] [i_0] &= ((/* implicit */_Bool) (unsigned short)6287);
                    var_30 = min((((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)58871))) - (var_16))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -491725053)))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)14556)))) == (arr_4 [i_0] [i_0] [i_0])))));
                }
                var_31 = ((/* implicit */_Bool) 8088778407119552661LL);
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_35 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -6172299647115317800LL)) ? (var_7) : (((/* implicit */int) (_Bool)1)))) & ((~(((/* implicit */int) var_13))))))) + (min((((/* implicit */unsigned long long int) ((var_14) / (((/* implicit */long long int) 3796446928U))))), (var_10)))));
                arr_36 [i_0] [i_10] [i_5 - 1] [i_10] = ((/* implicit */unsigned long long int) (-(((long long int) 6703955331061926440LL))));
            }
            for (signed char i_11 = 1; i_11 < 13; i_11 += 4) 
            {
                arr_39 [i_5] [i_11] = ((/* implicit */unsigned short) (signed char)-114);
                arr_40 [i_11] [(short)6] [i_11 - 1] = ((/* implicit */unsigned char) min((((/* implicit */long long int) ((arr_9 [i_11 - 1] [i_5 + 2] [i_11 - 1] [i_5 - 1]) ? (((/* implicit */int) var_5)) : (arr_26 [i_11 - 1] [i_5] [i_5] [i_5 + 2] [i_11])))), (min((((/* implicit */long long int) (_Bool)1)), (-6350707657629440305LL)))));
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_11] [i_5] [i_0] [i_0])) ? (max((((2569819177540281506LL) + (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((var_14) == (arr_2 [i_0])))))) : (min((6350707657629440305LL), (((/* implicit */long long int) var_12))))));
            }
        }
        for (unsigned short i_12 = 3; i_12 < 12; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 14; i_13 += 2) 
            {
                var_33 = ((/* implicit */short) ((long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) var_0)) != (arr_13 [i_0] [i_12 - 2] [i_13] [i_13])))) < (((/* implicit */int) ((1055531162664960LL) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                var_34 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (min((4341398045350685204LL), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)11)))))))));
                arr_47 [(unsigned char)8] [i_12] [i_12] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-39)) ? (min((min((((/* implicit */long long int) var_13)), (-2569819177540281506LL))), (((((/* implicit */_Bool) 47394104)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15150))) : (4193766547945236410LL))))) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0] [i_0])))));
            }
            /* vectorizable */
            for (long long int i_14 = 2; i_14 < 12; i_14 += 4) 
            {
                var_35 = ((/* implicit */long long int) -180218060);
                /* LoopSeq 2 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_16 = 0; i_16 < 14; i_16 += 4) 
                    {
                        arr_57 [i_0] [i_0] [i_0] [i_12] [i_0] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (unsigned short)21894)) : (((/* implicit */int) (unsigned char)5))));
                        arr_58 [i_12] = ((/* implicit */unsigned char) arr_21 [i_0] [i_0] [i_0]);
                    }
                    for (int i_17 = 3; i_17 < 12; i_17 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) var_10);
                        var_37 = ((/* implicit */unsigned char) (~((~(arr_13 [9LL] [i_12 - 2] [2LL] [i_12])))));
                        arr_63 [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)248)) ? (arr_41 [i_0] [i_17 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) != (arr_7 [i_0] [(signed char)10] [(signed char)10] [2ULL])));
                        arr_64 [i_0] [i_0] [6U] [i_12] [i_14] [i_15] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)5)) == (arr_55 [i_12 - 2] [i_17 - 1] [i_14] [i_12] [i_14 + 2])));
                        var_38 = ((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_0] [i_0]);
                    }
                    var_39 = (((-(((/* implicit */int) (unsigned short)15142)))) + (((((/* implicit */_Bool) arr_59 [i_0] [i_12] [i_0] [i_15])) ? (((/* implicit */int) (short)27676)) : (((/* implicit */int) (unsigned short)49031)))));
                    var_40 = ((/* implicit */unsigned short) var_1);
                    var_41 = ((/* implicit */int) ((9223372002495037440ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                }
                for (int i_18 = 0; i_18 < 14; i_18 += 4) 
                {
                    var_42 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)32256)) == (((/* implicit */int) (unsigned short)14559))))) * (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)19))) != (6391534261157792165LL))))));
                    var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_0] [i_0] [i_12] [i_14] [i_18])) ? (arr_41 [i_12 + 2] [i_12 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_12] [i_12 + 1])))));
                    arr_68 [i_0] [i_0] [i_0] [i_12] [i_18] = ((/* implicit */short) var_3);
                }
            }
            var_44 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_5))));
        }
        for (unsigned short i_19 = 3; i_19 < 12; i_19 += 4) /* same iter space */
        {
            var_45 = max((min((arr_43 [i_0]), (((/* implicit */unsigned long long int) 3400923886U)))), (((var_11) & (((/* implicit */unsigned long long int) arr_67 [i_0] [i_19] [i_0] [i_19 + 1])))));
            arr_71 [i_19] [i_0] [i_0] = var_14;
            var_46 = ((/* implicit */int) ((((((/* implicit */_Bool) 3144000367728476910LL)) ? (((/* implicit */int) arr_66 [i_19 - 2] [i_19 - 3] [i_19] [i_19])) : (((/* implicit */int) arr_22 [i_19 - 2])))) < (max((-1785637763), (((/* implicit */int) arr_45 [i_0] [i_19 - 2] [i_19 - 2] [i_19 - 2]))))));
            arr_72 [i_0] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) arr_24 [i_19] [i_19 + 1] [i_19 + 2] [i_19 - 1])) ? (((/* implicit */int) arr_24 [i_19] [i_19 + 1] [i_19 + 2] [i_19 - 1])) : (((/* implicit */int) arr_24 [i_19] [i_19 + 1] [i_19 + 1] [i_19 - 3])))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_20 = 0; i_20 < 14; i_20 += 4) /* same iter space */
            {
                arr_75 [i_19] = ((/* implicit */long long int) var_15);
                arr_76 [i_0] [i_19] [i_20] [(unsigned short)6] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)32)) ? (12958406586940938808ULL) : (((/* implicit */unsigned long long int) ((2563842245551133426LL) ^ (-910404258153891137LL))))));
            }
            /* vectorizable */
            for (int i_21 = 0; i_21 < 14; i_21 += 4) /* same iter space */
            {
                var_47 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_42 [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)108))))));
                arr_80 [i_0] [(short)13] [i_21] = ((((/* implicit */_Bool) arr_41 [i_19 - 2] [i_19 - 2])) ? (((/* implicit */int) (unsigned short)15150)) : (((/* implicit */int) arr_74 [i_19] [i_19] [i_19 - 3] [i_21])));
                var_48 = ((/* implicit */signed char) var_6);
            }
            for (int i_22 = 0; i_22 < 14; i_22 += 4) /* same iter space */
            {
                var_49 = ((/* implicit */signed char) (unsigned char)64);
                var_50 = ((/* implicit */long long int) var_16);
                arr_83 [i_0] [i_0] [i_22] [i_22] = ((/* implicit */unsigned short) ((3144000367728476910LL) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-32751)))));
                /* LoopSeq 1 */
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_24 = 1; i_24 < 13; i_24 += 4) 
                    {
                        var_51 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_1)) != (7985343819195027676ULL)));
                        var_52 = (!(((/* implicit */_Bool) ((unsigned short) (_Bool)1))));
                        var_53 = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (5986688414897602265LL))) + (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_22] [i_19 - 2] [i_19] [i_19 - 3])))));
                        var_54 = ((/* implicit */unsigned char) arr_7 [i_0] [i_19] [i_23] [(short)1]);
                    }
                    /* vectorizable */
                    for (long long int i_25 = 0; i_25 < 14; i_25 += 2) 
                    {
                        arr_92 [i_0] [i_19] [(signed char)10] [6ULL] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (var_16) : (arr_78 [i_0])));
                        arr_93 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (~(16302547894052008371ULL)));
                    }
                    for (unsigned long long int i_26 = 1; i_26 < 13; i_26 += 4) 
                    {
                        var_55 = ((/* implicit */unsigned short) var_12);
                        arr_98 [i_0] [i_19 + 1] [i_19 - 2] [i_23] [i_26 + 1] [i_19] [i_26] = ((/* implicit */unsigned short) arr_10 [i_0]);
                        var_56 = ((/* implicit */int) (-(((arr_89 [i_0] [i_19 - 3] [i_22] [i_23] [i_26 - 1]) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_19] [i_19 - 3] [i_22])))))));
                    }
                    var_57 = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_4)) == (max((((/* implicit */unsigned long long int) (short)384)), (0ULL))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_89 [i_0] [i_0] [i_0] [i_19 + 2] [i_19 - 1]))) + (arr_27 [i_0] [i_19]))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-29451))) : (var_1))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)13277)) < (((/* implicit */int) var_5))))))))));
                }
            }
        }
    }
    var_58 = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)65509))));
    var_59 = ((/* implicit */int) ((((/* implicit */_Bool) (short)29450)) ? (((/* implicit */long long int) 295504752)) : (5986688414897602265LL)));
}
