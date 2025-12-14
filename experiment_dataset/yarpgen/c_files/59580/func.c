/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59580
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
    var_19 = ((/* implicit */unsigned short) var_4);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (!((_Bool)1)));
    }
    for (unsigned short i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_9 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (+(min(((-(6933087586789030970LL))), (arr_5 [i_1])))));
            /* LoopSeq 2 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
            {
                arr_12 [i_2] [2LL] = ((/* implicit */unsigned int) var_17);
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    var_20 = ((/* implicit */short) ((long long int) ((((/* implicit */int) (unsigned short)5770)) + (((/* implicit */int) arr_4 [i_1] [i_1])))));
                    var_21 = ((/* implicit */short) ((unsigned char) ((unsigned char) arr_7 [i_4 - 2])));
                }
                arr_15 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_4 [i_1] [i_2])))) >> (((((/* implicit */int) arr_13 [8U] [i_2] [8U] [i_2])) - (94)))));
                arr_16 [i_1] [i_3] [i_1] [i_1] &= ((/* implicit */unsigned char) ((_Bool) var_16));
            }
            for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_22 -= ((/* implicit */unsigned int) ((short) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)59746))))))));
                    var_23 |= ((/* implicit */short) var_13);
                    var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned short) arr_19 [i_1])), (arr_0 [i_1]))))) || (((((/* implicit */_Bool) (short)-23163)) && ((!(((/* implicit */_Bool) var_16)))))))))));
                    var_25 |= ((/* implicit */long long int) min(((~(((/* implicit */int) arr_22 [i_1] [(unsigned short)10] [i_1] [i_1])))), (((/* implicit */int) min((var_12), (max(((short)12607), (((/* implicit */short) var_7)))))))));
                }
                arr_23 [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) max((arr_20 [i_1] [i_1] [i_5]), (min((((/* implicit */short) (_Bool)1)), (arr_10 [i_1] [(unsigned short)2] [i_1] [i_5])))));
                var_26 = ((/* implicit */_Bool) (-(((/* implicit */int) max((arr_11 [i_2] [i_2] [i_5] [i_1]), (arr_11 [i_2] [i_2] [i_2] [(unsigned short)3]))))));
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    for (unsigned char i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_30 [i_1] [i_2] [i_2] [i_7] [(signed char)7] [(unsigned short)4] [1ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_1] [i_2])) ? (min((((unsigned int) (_Bool)1)), (((/* implicit */unsigned int) var_15)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min(((unsigned short)4096), (((/* implicit */unsigned short) arr_22 [i_1] [i_1] [i_1] [i_1])))))))));
                            var_27 |= ((/* implicit */unsigned short) max((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */int) (unsigned short)52374)) : (((/* implicit */int) arr_4 [i_1] [i_7]))))), (((long long int) (short)24685)))), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)116)))))));
                        }
                    } 
                } 
            }
            var_28 = ((/* implicit */unsigned short) (~(max((((/* implicit */unsigned long long int) (signed char)116)), (17941595672623843908ULL)))));
            arr_31 [i_1] [(short)6] [i_1] &= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_4))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_25 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_1]))) : (arr_5 [i_1])))) : ((+(arr_18 [i_1] [i_2] [i_2] [i_1])))));
            /* LoopSeq 2 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) max(((unsigned short)4093), (((/* implicit */unsigned short) arr_13 [i_1] [i_1] [i_1] [i_1])))))))) ? (((((/* implicit */_Bool) arr_27 [i_1] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_27 [i_1] [i_2])))) : ((+(((((/* implicit */int) arr_24 [(unsigned char)7] [i_2] [i_9] [i_9] [i_2])) << (((/* implicit */int) arr_11 [i_1] [(_Bool)1] [i_1] [i_9]))))))));
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_25 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) -4888969561371569758LL)))) : ((-(((var_5) ? (var_18) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23737)))))))));
                var_31 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_28 [i_1])) : (((/* implicit */int) arr_28 [7LL])))), (((/* implicit */int) arr_28 [i_9]))));
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (4503599627369472ULL)));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
            {
                var_33 &= ((/* implicit */signed char) 12986822783871315898ULL);
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 12; i_11 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) min((arr_37 [i_1] [i_1] [i_1] [i_1] [6ULL] [i_1]), (arr_37 [(short)0] [9ULL] [i_10] [i_11] [(short)8] [i_11]))))));
                    arr_41 [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((arr_14 [i_1] [i_1] [i_1]) ? (((/* implicit */int) arr_14 [i_1] [i_10] [i_11])) : (((/* implicit */int) (unsigned short)4032)))) < ((-(((/* implicit */int) var_0))))));
                }
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 4) 
                {
                    var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) max(((-(arr_35 [i_1] [i_1] [i_1] [i_2]))), (((/* implicit */long long int) arr_8 [(unsigned char)9] [i_2]))))) ? ((+(((var_18) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((arr_18 [i_12] [i_12 + 1] [i_12 - 1] [i_12]) >> (((((/* implicit */int) ((short) arr_18 [(signed char)2] [i_2] [i_2] [i_2]))) + (6500)))))));
                    var_36 = ((/* implicit */short) min((((/* implicit */unsigned long long int) (unsigned short)59766)), (((9ULL) % (var_2)))));
                }
                var_37 ^= ((((/* implicit */int) max(((unsigned short)61410), (((/* implicit */unsigned short) arr_11 [i_1] [i_1] [i_1] [i_1]))))) < (((/* implicit */int) (unsigned char)5)));
            }
        }
        /* vectorizable */
        for (unsigned int i_13 = 0; i_13 < 12; i_13 += 4) 
        {
            /* LoopSeq 3 */
            for (short i_14 = 0; i_14 < 12; i_14 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_15 = 0; i_15 < 12; i_15 += 1) 
                {
                    arr_51 [i_1] [i_14] [(short)1] [i_15] = ((/* implicit */unsigned long long int) (signed char)116);
                    var_38 &= ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))));
                    /* LoopSeq 1 */
                    for (unsigned int i_16 = 2; i_16 < 11; i_16 += 4) 
                    {
                        arr_56 [i_16] |= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_54 [i_16 - 2] [i_16] [i_16] [i_16] [i_16 - 2] [i_16 - 1]))));
                        var_39 = ((/* implicit */unsigned short) ((long long int) arr_47 [i_16 - 1] [(signed char)4] [i_16 - 1] [i_16 + 1]));
                        var_40 = ((/* implicit */unsigned char) max((var_40), ((unsigned char)78)));
                        var_41 = ((/* implicit */long long int) arr_14 [i_1] [i_15] [i_16]);
                        arr_57 [i_16] [i_16 - 2] [i_16] [i_14] [i_16 - 2] = ((/* implicit */short) arr_26 [i_14] [i_16 - 2] [i_16] [i_16 - 2] [2ULL]);
                    }
                }
                for (short i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 4) 
                    {
                        arr_64 [i_14] [i_14] [(short)9] [i_17] [(short)9] = ((/* implicit */short) arr_8 [i_1] [i_1]);
                        var_42 = ((/* implicit */unsigned char) min((var_42), (((/* implicit */unsigned char) ((arr_34 [i_13]) == (arr_34 [i_18]))))));
                    }
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) 5246636423927489209LL);
                        var_44 = ((/* implicit */unsigned int) arr_8 [(unsigned short)9] [i_19]);
                        var_45 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_45 [i_1])));
                    }
                    for (unsigned short i_20 = 2; i_20 < 11; i_20 += 1) 
                    {
                        arr_69 [i_1] [6ULL] [i_1] [i_1] [i_1] [i_1] [i_1] |= ((/* implicit */signed char) (-(((/* implicit */int) var_16))));
                        var_46 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((-5246636423927489210LL) / (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (unsigned short)4096)) : (((/* implicit */int) arr_8 [i_20 - 2] [i_20 + 1]))));
                    }
                    arr_70 [i_14] [(short)2] [i_1] [i_17] [i_1] = ((/* implicit */signed char) arr_0 [i_1]);
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_47 = ((/* implicit */short) (unsigned short)13160);
                    arr_73 [i_1] [i_13] [i_14] [i_14] = ((/* implicit */short) arr_65 [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] [i_1]);
                    var_48 = ((/* implicit */short) ((((/* implicit */int) arr_49 [i_1] [i_14])) >> ((((((_Bool)1) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)61425)))) - (20902)))));
                }
                var_49 = (unsigned short)5667;
                var_50 = ((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_1]))));
            }
            for (unsigned long long int i_22 = 0; i_22 < 12; i_22 += 4) /* same iter space */
            {
                var_51 = var_0;
                /* LoopSeq 4 */
                for (short i_23 = 3; i_23 < 11; i_23 += 3) /* same iter space */
                {
                    var_52 = ((/* implicit */unsigned short) (+(arr_35 [i_1] [i_23 - 3] [i_22] [i_23])));
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 2; i_24 < 11; i_24 += 1) 
                    {
                        var_53 -= ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-12))));
                        var_54 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_24 - 1] [i_23 - 1])) % (((/* implicit */int) (unsigned short)13160))));
                        var_55 = ((/* implicit */unsigned long long int) max((var_55), (((/* implicit */unsigned long long int) var_11))));
                    }
                }
                for (short i_25 = 3; i_25 < 11; i_25 += 3) /* same iter space */
                {
                    var_56 ^= ((/* implicit */unsigned char) ((((/* implicit */int) arr_32 [i_25 - 3] [i_25 - 1] [i_1] [i_25])) / ((+(((/* implicit */int) var_0))))));
                    arr_85 [i_1] [(_Bool)1] [i_25] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 18098322819169650634ULL)) ? (arr_62 [i_25 + 1] [i_25] [i_25] [i_25 - 1] [i_25 + 1]) : (18446744073709551597ULL)));
                    var_57 -= ((/* implicit */unsigned int) ((short) var_15));
                }
                for (short i_26 = 0; i_26 < 12; i_26 += 4) 
                {
                    var_58 *= ((/* implicit */short) arr_18 [(_Bool)1] [i_13] [i_13] [i_26]);
                    var_59 = ((/* implicit */short) var_2);
                }
                for (unsigned int i_27 = 1; i_27 < 10; i_27 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_28 = 2; i_28 < 11; i_28 += 1) 
                    {
                        var_60 &= ((/* implicit */short) ((((/* implicit */_Bool) arr_36 [i_1] [i_13] [i_1])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_29 [i_13]))));
                        var_61 = ((/* implicit */short) arr_54 [i_1] [i_13] [(short)4] [i_22] [i_27] [i_28]);
                        var_62 = ((unsigned short) (-(((/* implicit */int) arr_1 [i_1]))));
                        arr_92 [i_1] [i_1] [i_1] [i_27] [i_1] = ((/* implicit */short) (unsigned short)13156);
                        var_63 |= ((/* implicit */unsigned long long int) ((long long int) arr_27 [i_27 + 1] [i_13]));
                    }
                    for (unsigned short i_29 = 0; i_29 < 12; i_29 += 4) 
                    {
                        var_64 = ((/* implicit */short) ((arr_5 [i_1]) == (((/* implicit */long long int) ((/* implicit */int) arr_95 [i_1])))));
                        var_65 = ((/* implicit */unsigned short) ((((/* implicit */int) ((short) 1707277920267191314ULL))) * (((/* implicit */int) ((signed char) arr_63 [i_1] [i_13] [i_22] [i_27] [i_13])))));
                        arr_97 [8ULL] [i_27] [i_22] [i_22] [(short)9] = (unsigned short)35602;
                    }
                    var_66 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_76 [i_1] [i_13] [i_22])) && (((/* implicit */_Bool) 255046226U))));
                }
            }
            for (unsigned long long int i_30 = 0; i_30 < 12; i_30 += 4) /* same iter space */
            {
                var_67 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) - (((/* implicit */int) arr_38 [i_1]))));
                var_68 = ((/* implicit */short) var_3);
            }
            arr_102 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_18 [(short)11] [(unsigned short)2] [i_1] [i_1]);
        }
        arr_103 [i_1] [8LL] = ((/* implicit */short) var_17);
    }
}
