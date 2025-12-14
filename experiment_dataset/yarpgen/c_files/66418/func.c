/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66418
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
    var_19 = ((/* implicit */short) var_1);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 70368744177663LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)13))) : (70368744177663LL)))) ? (min((29ULL), (((/* implicit */unsigned long long int) arr_4 [i_0] [i_0] [i_0])))) : (((/* implicit */unsigned long long int) var_13)))) | (max((((/* implicit */unsigned long long int) -70368744177673LL)), (arr_5 [i_0] [i_1 + 1] [i_1 - 1])))));
                var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) min((18446744073709551596ULL), (((/* implicit */unsigned long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 20ULL)) ? (((/* implicit */int) (signed char)122)) : (((/* implicit */int) (unsigned char)63))))) : (18446744073709551615ULL))) ^ (arr_5 [(unsigned char)9] [i_1 + 2] [i_1 + 2])));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(((/* implicit */int) var_10)))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (short i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        var_22 &= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) (-2147483647 - 1))) ^ (var_7)))) < (((arr_7 [i_2 - 1]) + (((/* implicit */long long int) arr_8 [i_2 - 1] [i_2 - 1]))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) 15ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53913))) : (3246550163778957222LL))), (min((arr_7 [i_2 + 1]), (((/* implicit */long long int) arr_8 [i_2 + 1] [i_2]))))));
    }
    for (unsigned char i_3 = 1; i_3 < 8; i_3 += 3) 
    {
        /* LoopSeq 2 */
        for (signed char i_4 = 1; i_4 < 8; i_4 += 3) 
        {
            var_23 |= ((/* implicit */long long int) (+(min((arr_1 [i_3 + 1] [(unsigned char)14]), (arr_1 [i_3 + 2] [(short)14])))));
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                for (int i_6 = 2; i_6 < 8; i_6 += 2) 
                {
                    {
                        arr_22 [i_6] [i_4] |= ((/* implicit */short) max((((/* implicit */unsigned long long int) 4236644433U)), (min((arr_5 [(unsigned char)11] [(short)9] [i_3 + 2]), (arr_5 [i_3] [i_3] [i_3 + 2])))));
                        var_25 = (unsigned short)11;
                    }
                } 
            } 
        }
        for (long long int i_7 = 0; i_7 < 10; i_7 += 4) 
        {
            var_26 = (i_3 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((unsigned int) 2147483647)) >> (((min((arr_1 [i_3] [i_3]), (arr_1 [i_3] [i_3]))) - (12782381458084737151ULL)))))) : (((/* implicit */unsigned long long int) ((((unsigned int) 2147483647)) >> (((((min((arr_1 [i_3] [i_3]), (arr_1 [i_3] [i_3]))) - (12782381458084737151ULL))) - (16227429960671875357ULL))))));
            var_27 = ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (arr_0 [i_3] [i_7])));
        }
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
        {
            for (unsigned char i_9 = 3; i_9 < 8; i_9 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned short) ((long long int) ((long long int) var_15)));
                    var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) min((max((((/* implicit */int) (unsigned char)254)), (((255) | (2147483647))))), (((/* implicit */int) var_9)))))));
                    /* LoopNest 2 */
                    for (short i_10 = 2; i_10 < 8; i_10 += 3) 
                    {
                        for (signed char i_11 = 1; i_11 < 8; i_11 += 1) 
                        {
                            {
                                var_30 = ((/* implicit */long long int) max((var_30), ((~(((arr_2 [i_11] [i_11 + 2] [i_3 - 1]) ? (-7920617075496611640LL) : (((/* implicit */long long int) arr_31 [i_3 - 1] [i_9 + 2] [(unsigned short)2]))))))));
                                var_31 = ((((/* implicit */_Bool) arr_30 [i_10 - 1] [i_11] [i_11])) && ((!(((/* implicit */_Bool) arr_30 [i_8] [i_9 - 2] [i_11])))));
                                var_32 = ((((/* implicit */_Bool) 536870911)) ? (18446744073709551592ULL) : (((/* implicit */unsigned long long int) -70368744177645LL)));
                                arr_36 [i_3] [i_8] [0U] [i_8] [i_11] [i_3] = ((/* implicit */unsigned int) (+(((((17656254685340428571ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53883))))) ? (((/* implicit */unsigned long long int) 423870461U)) : (18446744073709551570ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */short) 2147483647);
        /* LoopNest 3 */
        for (short i_12 = 0; i_12 < 10; i_12 += 3) 
        {
            for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    {
                        var_34 += arr_17 [i_3 - 1] [i_3 + 1] [i_3 + 1] [i_3 - 1];
                        var_35 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) < (max((((((/* implicit */_Bool) arr_17 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_3] [i_3] [3LL]))) : (arr_18 [i_14]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) / (185943223U))))))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_15 = 0; i_15 < 16; i_15 += 3) 
    {
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            for (long long int i_17 = 0; i_17 < 16; i_17 += 3) 
            {
                for (long long int i_18 = 1; i_18 < 14; i_18 += 3) 
                {
                    {
                        arr_56 [i_17] [i_15] = ((/* implicit */_Bool) arr_53 [i_15]);
                        /* LoopSeq 1 */
                        for (long long int i_19 = 4; i_19 < 15; i_19 += 4) 
                        {
                            var_36 = ((/* implicit */unsigned int) var_9);
                            arr_60 [i_19] [i_15] [i_17] [i_15] [i_15] = ((/* implicit */short) ((var_8) / (var_8)));
                            arr_61 [i_15] [i_15] [i_15] [i_16] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_13) : (((/* implicit */long long int) 1303580317U))));
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_20 = 0; i_20 < 16; i_20 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */long long int) (unsigned short)11602);
            /* LoopSeq 3 */
            for (unsigned short i_21 = 0; i_21 < 16; i_21 += 3) /* same iter space */
            {
                var_38 = ((/* implicit */unsigned long long int) var_0);
                /* LoopSeq 3 */
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) var_6)) ^ (((/* implicit */int) var_0))))));
                    arr_69 [i_15] [i_15] [i_21] [i_15] [i_22] [i_22] = ((/* implicit */int) ((arr_62 [i_15] [i_22] [i_15]) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_15] [i_22])) ? (((/* implicit */int) arr_57 [i_15] [i_22 + 1])) : (((/* implicit */int) arr_52 [i_20] [i_15] [i_20] [i_20]))))) : ((~(arr_45 [i_15])))));
                }
                for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_24 = 1; i_24 < 15; i_24 += 3) 
                    {
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) 2147483647)) / (var_4)));
                        var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1152921504606846975LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_75 [i_24 + 1] [i_20] [i_21] [i_23 + 1]))) : (var_3)));
                        var_42 = ((/* implicit */signed char) min((var_42), (((/* implicit */signed char) -5773477932460890216LL))));
                    }
                    arr_76 [i_23] [i_20] [i_15] [i_15] [i_20] [i_15] = ((/* implicit */unsigned long long int) (~(((var_3) & (((/* implicit */long long int) ((/* implicit */int) var_6)))))));
                }
                for (_Bool i_25 = 0; i_25 < 0; i_25 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) arr_65 [i_25 + 1] [i_25] [i_25 + 1] [i_25 + 1]))));
                    var_44 *= ((/* implicit */int) var_15);
                    var_45 ^= ((/* implicit */int) ((unsigned short) var_6));
                }
                /* LoopSeq 2 */
                for (unsigned short i_26 = 1; i_26 < 12; i_26 += 1) 
                {
                    var_46 = ((/* implicit */short) var_2);
                    var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) ((signed char) arr_74 [i_26 + 1] [i_26 + 1] [i_26 + 4] [i_26] [i_26 + 1])))));
                }
                for (unsigned int i_27 = 0; i_27 < 16; i_27 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_28 = 0; i_28 < 16; i_28 += 4) 
                    {
                        arr_87 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) var_13);
                        var_48 = ((/* implicit */unsigned int) arr_75 [i_15] [i_20] [i_21] [i_21]);
                        var_49 = ((/* implicit */long long int) var_1);
                    }
                    for (unsigned char i_29 = 0; i_29 < 16; i_29 += 2) 
                    {
                        var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((arr_73 [i_15] [i_20] [i_15] [i_29]) ? (arr_45 [i_29]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_21] [i_27] [i_21])))))))))));
                        var_51 -= ((/* implicit */_Bool) ((long long int) -5415493));
                    }
                    arr_91 [i_21] [i_15] [i_21] [i_21] = ((/* implicit */long long int) 4236644433U);
                    var_52 -= ((/* implicit */short) 2147483647);
                }
                var_53 = ((/* implicit */signed char) arr_66 [i_15] [(short)11] [i_21]);
                /* LoopNest 2 */
                for (unsigned long long int i_30 = 0; i_30 < 16; i_30 += 3) 
                {
                    for (unsigned int i_31 = 0; i_31 < 16; i_31 += 2) 
                    {
                        {
                            arr_99 [i_15] = arr_80 [i_15];
                            var_54 = ((/* implicit */_Bool) (~(70368744177663LL)));
                            arr_100 [i_15] [i_20] [i_21] [i_15] [i_31] = ((/* implicit */unsigned short) (short)23095);
                            var_55 = ((/* implicit */unsigned char) var_9);
                        }
                    } 
                } 
            }
            for (unsigned short i_32 = 0; i_32 < 16; i_32 += 3) /* same iter space */
            {
                arr_104 [(short)8] [i_20] [i_20] &= ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned short)15360)));
                var_56 = ((/* implicit */unsigned char) arr_84 [i_15] [12U] [i_20] [(unsigned char)15] [i_32]);
                /* LoopNest 2 */
                for (unsigned int i_33 = 2; i_33 < 15; i_33 += 3) 
                {
                    for (unsigned long long int i_34 = 2; i_34 < 15; i_34 += 3) 
                    {
                        {
                            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_80 [i_15])) : (((/* implicit */int) (short)-24348))));
                            var_58 = ((/* implicit */int) max((var_58), (((/* implicit */int) var_16))));
                            var_59 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (58322863U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_74 [(_Bool)1] [i_20] [i_32] [i_33] [i_34 + 1]))))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_35 = 0; i_35 < 16; i_35 += 3) /* same iter space */
            {
                var_60 *= ((/* implicit */_Bool) ((unsigned int) arr_111 [i_35] [i_20] [i_20]));
                var_61 = ((/* implicit */int) max((var_61), (((((/* implicit */_Bool) -70368744177666LL)) ? (((/* implicit */int) (short)22434)) : (((/* implicit */int) arr_74 [i_35] [i_35] [i_35] [i_35] [i_20]))))));
                var_62 = ((/* implicit */unsigned int) min((var_62), (((/* implicit */unsigned int) arr_106 [4U] [i_20] [i_35]))));
                var_63 = ((/* implicit */unsigned long long int) min((var_63), (((/* implicit */unsigned long long int) arr_2 [i_35] [i_20] [i_15]))));
            }
            var_64 = -7854472942764768268LL;
        }
        for (unsigned char i_36 = 0; i_36 < 16; i_36 += 3) /* same iter space */
        {
            var_65 = ((/* implicit */_Bool) min((var_65), (((/* implicit */_Bool) var_17))));
            var_66 = ((/* implicit */long long int) arr_66 [i_15] [i_15] [i_36]);
            arr_115 [i_15] = ((/* implicit */unsigned short) (_Bool)1);
        }
        for (unsigned char i_37 = 0; i_37 < 16; i_37 += 3) /* same iter space */
        {
            var_67 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_81 [i_15] [i_15] [(short)6] [(short)6]) >= (((/* implicit */unsigned long long int) 4294967269U)))))) ^ (4236644420U)));
            /* LoopNest 2 */
            for (unsigned long long int i_38 = 0; i_38 < 16; i_38 += 3) 
            {
                for (long long int i_39 = 0; i_39 < 16; i_39 += 4) 
                {
                    {
                        var_68 |= ((/* implicit */signed char) arr_109 [i_39] [i_38] [i_38] [i_37] [(unsigned char)8] [i_15] [i_39]);
                        arr_123 [i_15] = ((/* implicit */unsigned char) (signed char)-86);
                    }
                } 
            } 
            var_69 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_15))))) ? (((/* implicit */int) (short)-13371)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
        }
        var_70 |= ((/* implicit */_Bool) (short)-24348);
    }
    for (unsigned char i_40 = 3; i_40 < 17; i_40 += 1) 
    {
        var_71 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_14)) - (arr_1 [i_40] [i_40])));
        /* LoopSeq 1 */
        for (unsigned char i_41 = 0; i_41 < 18; i_41 += 1) 
        {
            var_72 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [(unsigned char)5] [i_41] [i_41])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-74)) || (((/* implicit */_Bool) 4ULL)))))))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))) : (((((/* implicit */_Bool) arr_5 [i_40] [i_41] [i_40])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
            var_73 = ((/* implicit */int) max((var_73), (((/* implicit */int) 0U))));
        }
    }
    var_74 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (var_7))), (((/* implicit */unsigned int) var_17))));
}
