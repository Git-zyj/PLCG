/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73361
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73361 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73361
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
    for (signed char i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                {
                    arr_11 [i_0] [i_3] [i_3] [i_0] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [(unsigned short)3] [(unsigned short)3] [i_1] [(unsigned short)3])) ? (((/* implicit */int) var_16)) : ((-(((/* implicit */int) var_3))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_20 = ((/* implicit */int) (~(18446744073709551594ULL)));
                        var_21 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_3] [i_2])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_0 + 3] [i_1] [i_2] [(_Bool)1] [i_4] [(_Bool)1])) < (22ULL)))) : (((((/* implicit */_Bool) 21ULL)) ? (((/* implicit */int) arr_0 [10LL] [i_0 + 2])) : (((/* implicit */int) (short)-3326))))));
                        arr_15 [i_4] [i_1] [i_2] [i_3] [i_4] [i_4] [i_2] &= ((/* implicit */unsigned long long int) (unsigned short)20323);
                        var_22 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)20323)) ? (((/* implicit */long long int) ((((/* implicit */int) var_16)) << (((((/* implicit */int) arr_5 [i_4] [i_1] [i_1])) - (27334)))))) : (arr_9 [i_0] [i_1] [i_0] [i_3] [i_1] [i_2])));
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_23 -= ((/* implicit */signed char) arr_9 [(short)2] [(unsigned short)10] [i_1] [i_2] [i_3] [(_Bool)1]);
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)31))) * (arr_17 [i_0] [i_1] [i_1] [i_3] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))))));
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((unsigned long long int) arr_0 [i_0 - 1] [i_0 + 3])))));
                }
                arr_18 [i_2] [(unsigned char)9] [i_2] = ((((/* implicit */int) arr_6 [i_2])) % (((/* implicit */int) arr_1 [8LL] [i_0 + 1])));
            }
            var_26 ^= ((/* implicit */unsigned short) arr_13 [i_0] [i_0 - 1] [i_0] [i_0] [(_Bool)1] [(_Bool)1]);
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
            {
                var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 + 2]))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_21 [i_0 + 3] [i_0 + 2] [i_0 + 2] [(unsigned char)5])) ? (arr_21 [i_6] [i_0 + 1] [i_6] [i_6]) : (arr_21 [i_0] [i_0 + 2] [i_6] [i_0])));
                arr_22 [i_0] [i_1] [i_6] = ((/* implicit */int) ((_Bool) arr_1 [i_0 + 1] [i_0 + 3]));
            }
            var_29 = ((/* implicit */unsigned char) (((-(arr_2 [i_0]))) != (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_0 + 2])))))));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 11; i_7 += 4) 
        {
            var_30 |= (unsigned short)11;
            /* LoopSeq 2 */
            for (unsigned char i_8 = 1; i_8 < 9; i_8 += 4) 
            {
                var_31 = ((/* implicit */unsigned char) arr_19 [i_0 + 2] [i_8 + 2]);
                var_32 = arr_20 [i_0];
            }
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                var_33 ^= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_5)))) ? ((+(arr_7 [i_0 + 2] [(_Bool)1] [i_0] [6U]))) : (((/* implicit */int) arr_6 [i_7]))));
                var_34 = ((/* implicit */signed char) ((_Bool) (-(((/* implicit */int) (short)-3326)))));
                var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_2 [i_7])) ? (var_19) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))))))));
            }
            var_36 = ((/* implicit */long long int) ((((unsigned long long int) arr_0 [i_0] [i_0])) * (((/* implicit */unsigned long long int) arr_8 [i_7]))));
            var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (+((~(var_8))))))));
        }
        for (short i_10 = 0; i_10 < 11; i_10 += 3) 
        {
            var_38 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned char) ((_Bool) arr_7 [i_0] [i_0 + 1] [i_0] [i_0]))), (var_11))))));
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_39 -= ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) min((var_16), (arr_14 [i_0 - 1] [i_10] [4ULL] [i_10] [i_11])))), (min(((unsigned char)15), (((/* implicit */unsigned char) arr_12 [i_0 + 2] [i_0 + 2]))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_28 [3U] [i_10] [i_0] [i_0])) && (((/* implicit */_Bool) min((arr_9 [i_11] [(unsigned char)0] [i_10] [i_10] [(unsigned char)0] [i_0]), (var_13))))))) : (((/* implicit */int) var_5))));
                arr_34 [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) var_18);
                var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) arr_12 [0] [i_11])), (((signed char) arr_4 [(unsigned char)5] [6U]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((short) (short)3345))) ? (max((300711875), (((/* implicit */int) (short)3318)))) : ((-(((/* implicit */int) var_17))))))) : (((((/* implicit */_Bool) arr_28 [i_0] [i_10] [i_11] [i_11])) ? (arr_20 [(short)2]) : (arr_24 [10U])))));
            }
        }
        var_41 -= ((/* implicit */short) max((var_19), (((/* implicit */unsigned long long int) arr_30 [i_0 - 1]))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 3; i_12 < 8; i_12 += 4) 
    {
        var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_26 [i_12] [i_12] [(signed char)6]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((long long int) arr_6 [(unsigned char)10])) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) -781757754))))));
        var_43 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_12 - 2])) || (((/* implicit */_Bool) arr_35 [i_12 + 1]))));
        arr_37 [i_12] = ((/* implicit */unsigned char) var_7);
    }
    for (unsigned short i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_44 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)45214)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-3300))) : (21ULL)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_15 = 4; i_15 < 9; i_15 += 3) 
            {
                var_45 = ((/* implicit */long long int) ((((/* implicit */int) arr_13 [i_15 - 4] [i_15 - 1] [i_15 - 4] [i_15 - 2] [i_15 - 3] [(unsigned short)4])) > (((/* implicit */int) arr_13 [i_15 - 3] [i_15 - 1] [i_15 - 3] [i_15 - 4] [i_15 - 1] [i_15]))));
                var_46 |= ((/* implicit */long long int) (-(((/* implicit */int) arr_12 [i_15 - 4] [(short)9]))));
                arr_48 [i_13] [(short)2] [i_15] [8U] |= ((/* implicit */_Bool) 2028733190U);
            }
            for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 3) 
            {
                var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) -1967029753))));
                /* LoopSeq 1 */
                for (short i_17 = 1; i_17 < 9; i_17 += 4) 
                {
                    arr_54 [i_14] [i_17] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
                    var_48 -= ((/* implicit */unsigned char) arr_10 [i_17 - 1] [i_17] [i_17 - 1] [(unsigned char)0]);
                    var_49 -= ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_13 [3LL] [i_14] [3LL] [i_17] [i_17 + 1] [3LL])) ? (((/* implicit */int) (unsigned short)61878)) : (((/* implicit */int) var_11)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 4) 
                    {
                        arr_58 [i_17] [(signed char)4] [i_16] [i_17 - 1] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (arr_56 [i_17] [i_14] [i_16] [i_16] [i_13] [(signed char)7] [i_18])))) ? (((((/* implicit */_Bool) arr_19 [i_13] [i_13])) ? (611167524552106352ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))) : (((/* implicit */unsigned long long int) ((long long int) (short)1023)))));
                        var_50 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)-24141)) ? (var_8) : (((/* implicit */unsigned int) arr_4 [i_18] [i_14]))))));
                        var_51 = ((/* implicit */short) max((var_51), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_50 [i_13] [i_18] [i_13] [i_18])) ? (arr_35 [i_13]) : (arr_23 [i_16] [i_16])))) ? (((/* implicit */int) (short)32767)) : (arr_56 [i_16] [i_16] [i_17 + 1] [(signed char)4] [i_18] [i_17 + 1] [i_14]))))));
                        var_52 = ((/* implicit */unsigned long long int) ((_Bool) ((arr_9 [i_13] [(unsigned char)3] [4U] [0ULL] [i_14] [i_13]) == (var_15))));
                        var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (arr_40 [i_13] [i_16]) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_18] [(short)7] [i_13] [i_13] [i_13])))))) ? (arr_49 [i_17 + 1] [i_17 - 1] [i_17 + 1]) : (((/* implicit */unsigned int) arr_50 [i_13] [i_14] [i_16] [i_17]))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned char i_19 = 1; i_19 < 8; i_19 += 4) 
                {
                    var_54 -= ((/* implicit */unsigned char) (+(arr_59 [i_16] [i_19 + 2] [6] [i_19 - 1] [i_19])));
                    arr_61 [(_Bool)1] [8ULL] [i_13] [(_Bool)1] &= ((/* implicit */_Bool) arr_32 [8ULL] [i_14] [i_14]);
                }
                for (int i_20 = 0; i_20 < 10; i_20 += 3) 
                {
                    arr_64 [i_14] [i_14] [i_14] [i_20] = ((/* implicit */unsigned long long int) (unsigned char)254);
                    var_55 ^= ((/* implicit */_Bool) (short)1023);
                    var_56 = ((/* implicit */unsigned char) ((arr_9 [(signed char)9] [i_14] [i_16] [i_16] [i_14] [i_20]) + (((/* implicit */long long int) ((/* implicit */int) var_1)))));
                    var_57 |= (+(arr_56 [i_13] [i_13] [i_13] [i_14] [i_14] [6U] [i_13]));
                }
                for (unsigned char i_21 = 0; i_21 < 10; i_21 += 3) 
                {
                    var_58 &= ((/* implicit */_Bool) arr_30 [i_13]);
                    var_59 = ((/* implicit */_Bool) min((var_59), (((/* implicit */_Bool) ((((/* implicit */_Bool) -1979888439)) ? (((/* implicit */int) arr_38 [i_14])) : (((/* implicit */int) arr_38 [i_13])))))));
                }
                arr_68 [i_14] [i_14] [i_14] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) (unsigned short)61878)))));
            }
            arr_69 [(_Bool)1] [i_14] |= ((/* implicit */unsigned char) ((var_16) ? ((+(arr_63 [i_13] [i_13] [7U] [i_14]))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
            /* LoopSeq 3 */
            for (unsigned char i_22 = 0; i_22 < 10; i_22 += 3) 
            {
                var_60 = ((((/* implicit */int) arr_38 [i_22])) | (((/* implicit */int) arr_1 [i_14] [i_22])));
                var_61 = ((/* implicit */unsigned char) ((((var_16) ? (((/* implicit */int) arr_25 [i_13])) : (((/* implicit */int) arr_29 [i_14] [i_14] [i_13] [i_13])))) + (((/* implicit */int) var_10))));
            }
            for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
            {
                /* LoopNest 2 */
                for (long long int i_24 = 3; i_24 < 9; i_24 += 3) 
                {
                    for (unsigned long long int i_25 = 1; i_25 < 6; i_25 += 3) 
                    {
                        {
                            arr_80 [i_13] [i_14] [i_14] [i_24] [i_14] = ((/* implicit */short) ((signed char) (-(((/* implicit */int) var_3)))));
                            arr_81 [5LL] [i_14] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((short) (unsigned short)65044))) && (((/* implicit */_Bool) arr_49 [i_24] [i_24] [i_24]))));
                            var_62 -= ((/* implicit */unsigned int) ((((var_1) ? (((/* implicit */int) (unsigned char)95)) : (((/* implicit */int) arr_66 [i_25] [i_24 - 1] [i_14] [i_14])))) < (((/* implicit */int) arr_28 [i_13] [i_14] [i_24 - 1] [i_13]))));
                            arr_82 [i_13] [i_14] [i_14] [i_13] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_14]))) : (arr_36 [i_25 + 4]))) & (arr_59 [i_13] [i_14] [i_14] [i_24] [i_25 + 4])));
                            var_63 &= ((/* implicit */unsigned short) arr_70 [i_24] [i_23] [i_14] [0U]);
                        }
                    } 
                } 
                var_64 = ((/* implicit */signed char) ((((((/* implicit */_Bool) 1263223568U)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (unsigned short)3670)))) % (((/* implicit */int) (unsigned short)20323))));
                /* LoopNest 2 */
                for (unsigned short i_26 = 3; i_26 < 9; i_26 += 3) 
                {
                    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
                    {
                        {
                            var_65 = ((/* implicit */signed char) arr_26 [i_13] [i_13] [i_14]);
                            arr_87 [i_13] [i_13] [i_14] [i_26] [i_27] = ((/* implicit */short) (+(arr_78 [1LL] [i_23] [i_26] [i_27])));
                            arr_88 [i_13] [(_Bool)1] [i_14] [i_26] [i_26] [i_27] = ((arr_7 [i_23] [i_14] [i_23] [i_26 - 1]) != (arr_7 [i_13] [i_14] [i_23] [i_26 - 1]));
                            var_66 = ((/* implicit */unsigned long long int) min((var_66), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_55 [(unsigned char)0] [i_14] [i_26 - 2] [i_27] [i_27])) ? (((/* implicit */int) arr_55 [(short)4] [i_14] [i_26 - 3] [i_26] [(unsigned short)0])) : (((/* implicit */int) arr_55 [(short)6] [6ULL] [i_26 - 2] [(short)6] [6ULL])))))));
                            var_67 = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_3 [i_26 - 1]))));
                        }
                    } 
                } 
            }
            for (int i_28 = 0; i_28 < 10; i_28 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_29 = 0; i_29 < 10; i_29 += 3) 
                {
                    var_68 &= ((/* implicit */unsigned long long int) -1967029753);
                    var_69 |= ((/* implicit */long long int) arr_59 [(unsigned short)6] [i_13] [2] [i_13] [i_13]);
                    var_70 = ((/* implicit */unsigned char) min((var_70), (((/* implicit */unsigned char) arr_40 [i_14] [i_13]))));
                }
                arr_96 [i_13] [i_13] [i_13] [4ULL] &= ((/* implicit */long long int) 2084592207);
            }
            var_71 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_13] [i_14] [i_14] [(unsigned short)9])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)9443))) : (arr_93 [i_14] [i_13])))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_55 [i_14] [i_14] [i_14] [(unsigned char)1] [i_14]))))) : (arr_20 [i_13]));
        }
    }
    var_72 -= ((/* implicit */long long int) ((((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))) > (((((/* implicit */_Bool) var_5)) ? (var_13) : (var_18))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) max((var_13), (((/* implicit */long long int) var_8)))))))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)112))))))))));
}
