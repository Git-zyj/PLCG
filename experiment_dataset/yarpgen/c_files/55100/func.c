/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55100
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
    for (unsigned char i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_2 [i_0 + 2]), (((/* implicit */unsigned int) arr_1 [i_0 + 4] [i_0 + 3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) - ((+(arr_2 [i_1])))))));
                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)195)) ? (((/* implicit */int) ((unsigned short) arr_2 [i_0 + 2]))) : (((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-39))))));
                /* LoopSeq 3 */
                for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) /* same iter space */
                {
                    arr_6 [i_0 + 4] [8LL] [i_1] [i_2] |= ((/* implicit */unsigned short) max((((long long int) arr_2 [i_0 + 3])), (((/* implicit */long long int) (+(3038248897U))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) ((short) arr_7 [i_1] [(signed char)5] [i_1] [i_1] [i_1] [i_1])))));
                        var_22 &= ((/* implicit */_Bool) max((((unsigned int) (unsigned char)21)), (((/* implicit */unsigned int) arr_3 [i_0 + 2] [i_2 - 1]))));
                    }
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            {
                                arr_17 [i_2] [i_1] [i_2 - 1] [i_4] [i_5] = ((/* implicit */signed char) (+(max(((+(0LL))), (((((/* implicit */_Bool) (unsigned short)49715)) ? (((/* implicit */long long int) var_14)) : (511LL)))))));
                                arr_18 [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_16 [i_5] [i_2] [i_5] [i_5] [i_2 + 3] [i_2] [i_0 + 4])) ? (arr_16 [i_4] [i_2] [i_0 + 3] [i_0 + 4] [i_2 + 1] [i_2] [i_0 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-29551))))) | (((/* implicit */unsigned int) arr_4 [i_0 + 2] [i_2 + 3] [i_4]))));
                                arr_19 [i_5] [i_2] [i_2] [(_Bool)1] [i_2] [i_0] = ((/* implicit */_Bool) max((((/* implicit */short) arr_14 [i_5] [i_5] [i_2])), (((short) ((arr_1 [i_1] [i_4]) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (_Bool)0)))))));
                            }
                        } 
                    } 
                }
                for (unsigned int i_6 = 1; i_6 < 8; i_6 += 1) /* same iter space */
                {
                    var_23 = ((/* implicit */int) max((((signed char) max((((/* implicit */unsigned int) (signed char)-10)), (arr_16 [i_0] [i_0 + 1] [i_0 + 3] [8ULL] [i_1] [(short)2] [(unsigned char)0])))), ((signed char)100)));
                    /* LoopSeq 1 */
                    for (signed char i_7 = 0; i_7 < 11; i_7 += 2) 
                    {
                        var_24 = ((/* implicit */int) var_4);
                        arr_26 [i_7] [i_1] [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_24 [i_0 + 3]), (arr_24 [i_6 + 1])))) && ((_Bool)1)));
                        var_25 = ((/* implicit */signed char) max((((((/* implicit */_Bool) ((short) 0LL))) ? ((+(((/* implicit */int) arr_1 [i_0] [i_0])))) : (((/* implicit */int) arr_14 [i_0 + 3] [i_0 + 3] [i_7])))), (((/* implicit */int) (unsigned short)19232))));
                        var_26 = ((/* implicit */unsigned char) (+((+(((/* implicit */int) (unsigned char)137))))));
                    }
                }
                for (short i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    var_27 += ((((((/* implicit */_Bool) arr_10 [(unsigned char)10] [(signed char)10] [i_8] [i_8] [(unsigned char)8])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)101))) : (max((2147483647LL), (((/* implicit */long long int) arr_27 [i_0] [i_0 + 4] [i_1] [i_8 + 1])))))) << (((((/* implicit */int) max((var_17), (arr_21 [i_0 + 3] [i_8 - 1] [(signed char)1])))) - (31607))));
                    var_28 = ((/* implicit */signed char) ((int) ((((/* implicit */_Bool) 21LL)) ? (((arr_0 [i_0]) | (117440512U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_1] [i_1] [(unsigned char)8]))))));
                }
            }
        } 
    } 
    var_29 = ((/* implicit */unsigned short) ((13885637739676450965ULL) / (((/* implicit */unsigned long long int) -527637886))));
    /* LoopSeq 1 */
    for (unsigned long long int i_9 = 1; i_9 < 21; i_9 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_10 = 1; i_10 < 23; i_10 += 1) 
        {
            for (unsigned char i_11 = 1; i_11 < 23; i_11 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (short i_12 = 0; i_12 < 24; i_12 += 2) /* same iter space */
                    {
                        var_30 = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9 + 2] [10] [i_10 - 1])) && (arr_34 [i_9] [i_10] [i_10 + 1])))), (((arr_34 [i_9] [i_9 + 3] [i_10 - 1]) ? (((/* implicit */int) arr_34 [i_9 + 1] [i_10] [i_10 + 1])) : (((/* implicit */int) (unsigned char)253))))));
                        arr_40 [i_10] [(unsigned char)3] [i_9] [i_12] [i_10] [i_10] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_37 [7] [i_10])) ? (max((((/* implicit */unsigned int) var_3)), (arr_35 [(unsigned short)8] [i_10] [i_9]))) : (((((/* implicit */_Bool) (-2147483647 - 1))) ? (arr_36 [i_9] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)55690))))))) << (((((/* implicit */int) (unsigned short)7599)) - (7576)))));
                        arr_41 [i_9 - 1] [i_10] [i_11] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max(((+(511))), (((((/* implicit */_Bool) 2614690450857772242LL)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (signed char)-1))))))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)42307)))));
                    }
                    for (short i_13 = 0; i_13 < 24; i_13 += 2) /* same iter space */
                    {
                        arr_44 [i_9 + 1] [i_9] [i_11] [i_11] [i_10 + 1] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) 855550153912387071ULL)) ? (arr_35 [i_11 + 1] [i_9 + 3] [i_10 - 1]) : (max((((/* implicit */unsigned int) (signed char)-8)), (1593595019U))))));
                        arr_45 [i_13] [i_13] [i_11] [i_11 + 1] [22] [22] = ((/* implicit */_Bool) 3144301129U);
                    }
                    var_31 = ((/* implicit */signed char) arr_33 [(signed char)2] [i_11 - 1]);
                    arr_46 [i_9] [i_10] [i_11 - 1] = ((/* implicit */long long int) var_15);
                    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-494LL), (((/* implicit */long long int) arr_37 [i_10] [i_10 + 1]))))) ? (((int) 17592186028032LL)) : (((/* implicit */int) (signed char)-8)))))));
                    var_33 = ((/* implicit */unsigned long long int) 4135130468U);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_15 = 0; i_15 < 24; i_15 += 3) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 1) 
                    {
                        var_34 = ((/* implicit */unsigned short) (signed char)-7);
                        var_35 -= ((/* implicit */signed char) ((((((/* implicit */int) (signed char)127)) << (((((/* implicit */int) (signed char)-122)) + (122))))) << (((/* implicit */int) arr_30 [i_9 - 1]))));
                    }
                    arr_59 [i_9 + 3] [i_14] [9U] = arr_35 [i_9 - 1] [i_9 - 1] [i_9 + 1];
                }
                /* LoopSeq 1 */
                for (signed char i_18 = 0; i_18 < 24; i_18 += 1) 
                {
                    arr_64 [i_18] = ((/* implicit */unsigned int) max((((unsigned long long int) 913144945U)), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)1831)) <= (((/* implicit */int) (_Bool)1)))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        var_36 ^= ((/* implicit */unsigned short) arr_43 [i_9 - 1] [i_14] [8ULL] [i_9 - 1]);
                        var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? ((-(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_9] [i_9] [i_9] [i_9])))))) ? (3012914121222262769LL) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_66 [i_14] [(signed char)16] [i_14] [i_14] [i_9]))) * (((unsigned int) (_Bool)1)))))));
                    }
                    /* vectorizable */
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        arr_70 [i_9] [i_14] [i_20] [5] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_63 [i_9] [i_9] [(signed char)18] [i_9 + 1] [i_9] [i_9])) ? (((/* implicit */int) (short)384)) : (((/* implicit */int) ((short) arr_58 [0LL] [i_9] [i_9])))));
                        arr_71 [i_9] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [i_14] [i_15] [i_18] [i_20])) && (((/* implicit */_Bool) arr_42 [(_Bool)1] [i_15] [i_18] [i_20]))));
                    }
                }
                var_38 = ((/* implicit */unsigned short) (signed char)127);
            }
            for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) /* same iter space */
            {
                var_39 = ((/* implicit */unsigned char) (_Bool)0);
                var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))) : (arr_36 [i_21 - 1] [i_9 + 2])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 7316268950408045904ULL)))) : (max((((/* implicit */unsigned int) (short)384)), (1311818937U)))))) && ((!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_72 [17LL] [i_9 + 1])), (arr_33 [i_9 - 1] [(_Bool)1]))))))));
            }
            for (_Bool i_22 = 1; i_22 < 1; i_22 += 1) /* same iter space */
            {
                arr_77 [i_9 + 2] [(signed char)12] [i_22 - 1] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_72 [i_9 + 3] [i_14])))) && (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_58 [8LL] [8LL] [i_22 - 1]))) : (291612056U)))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_17))))))));
                arr_78 [i_9] [i_14] [i_22 - 1] = ((/* implicit */signed char) 15221861356196045425ULL);
                arr_79 [6U] [i_14] [(unsigned short)9] [(unsigned short)9] &= ((/* implicit */unsigned char) (((((((_Bool)1) ? (3302465933543477869ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)3036))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)39923)) != (((/* implicit */int) arr_32 [20U])))))))) ? (-512LL) : (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_14])))));
            }
            /* LoopNest 2 */
            for (unsigned long long int i_23 = 1; i_23 < 23; i_23 += 1) 
            {
                for (long long int i_24 = 2; i_24 < 23; i_24 += 3) 
                {
                    {
                        var_41 = ((/* implicit */unsigned int) (+(max(((+(((/* implicit */int) (unsigned short)23667)))), (((/* implicit */int) arr_54 [i_23 - 1] [i_23 - 1] [i_23 - 1]))))));
                        arr_86 [i_9 - 1] [i_23] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) (short)15164)) ? (((/* implicit */int) (unsigned char)195)) : ((-2147483647 - 1))))))) ? (((((arr_82 [i_9 + 1] [(short)12] [i_23 - 1] [i_24]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)61))) : (arr_73 [i_9] [i_9 - 1] [i_9] [i_9 - 1]))) | (((/* implicit */unsigned long long int) max((arr_69 [i_23] [(unsigned char)13] [i_14] [i_23] [i_24] [i_24]), (((/* implicit */long long int) -1060498572))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_43 [i_24 - 2] [i_14] [i_23] [i_24])) & (((/* implicit */int) arr_54 [i_23 - 1] [i_24] [i_24 - 1])))))));
                        var_42 = ((/* implicit */unsigned char) ((unsigned short) arr_68 [i_14] [i_14] [i_14] [(unsigned char)15] [i_23 - 1] [i_23] [i_23]));
                        arr_87 [i_9] [i_23] [i_23] [i_24] = ((/* implicit */unsigned short) arr_49 [i_9] [i_9] [i_9]);
                    }
                } 
            } 
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
        {
            arr_92 [i_9] [(_Bool)1] = ((/* implicit */long long int) arr_58 [i_25] [i_25] [i_25]);
            var_43 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned short)39937)))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_39 [(unsigned short)18] [i_25] [i_25]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)63))))) : (((((/* implicit */_Bool) 16267955303964632743ULL)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (signed char)71)))))) : (((((((/* implicit */int) var_2)) + (2147483647))) << (((((((/* implicit */int) (unsigned char)49)) + (((/* implicit */int) (unsigned short)7)))) - (56)))))));
            /* LoopNest 3 */
            for (unsigned short i_26 = 2; i_26 < 23; i_26 += 4) 
            {
                for (unsigned short i_27 = 0; i_27 < 24; i_27 += 4) 
                {
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        {
                            var_44 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((var_1), (((/* implicit */unsigned int) ((unsigned char) arr_66 [i_9] [i_9 + 2] [i_9] [(_Bool)1] [i_9])))))), (((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_48 [i_9] [i_9 + 1]))))) & (((855550153912387091ULL) ^ (arr_83 [i_27])))))));
                            var_45 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_63 [12ULL] [i_25] [i_26 - 1] [i_27] [i_28] [i_28])))) ? (((17591193919797164516ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)97))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_63 [i_28] [6U] [i_26 - 2] [i_25] [i_9] [i_9 + 2]))))));
                        }
                    } 
                } 
            } 
        }
        /* vectorizable */
        for (short i_29 = 1; i_29 < 23; i_29 += 2) 
        {
            var_46 = ((/* implicit */unsigned short) max((var_46), (((unsigned short) ((((/* implicit */_Bool) 3610327163U)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))));
            var_47 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_98 [i_9] [i_9] [i_9 + 2] [i_9 - 1]))));
        }
    }
}
