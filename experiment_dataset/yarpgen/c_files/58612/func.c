/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58612
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
    var_13 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (121167581) : (((/* implicit */int) (short)-20212))))) && (((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) (short)14093))))) : (((/* implicit */int) var_12))));
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? ((-(var_0))) : (((/* implicit */long long int) ((/* implicit */int) var_11)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 8; i_0 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (short i_1 = 2; i_1 < 7; i_1 += 3) 
        {
            var_15 ^= ((/* implicit */short) var_3);
            arr_5 [i_0] [10LL] [i_1 + 3] |= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) 3)) + (arr_2 [i_0 - 3])));
            arr_6 [i_0] [i_1] = ((/* implicit */signed char) ((arr_0 [i_1 - 2]) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
        }
        for (signed char i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (short i_5 = 3; i_5 < 7; i_5 += 4) 
                    {
                        {
                            arr_17 [i_4] [i_2] [(signed char)9] [i_4] = ((/* implicit */unsigned int) arr_7 [i_5]);
                            var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0 + 3] [i_2] [i_5 - 3] [i_2] [i_2]))) == (9223372036854775807LL)));
                            var_17 = ((/* implicit */unsigned short) (((_Bool)1) ? (7382139700655795982ULL) : (((/* implicit */unsigned long long int) 187178358U))));
                            arr_18 [6LL] [i_2] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */_Bool) var_6);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned int) (!(arr_14 [i_0] [i_2] [i_0 - 2] [i_0])));
            arr_19 [i_0] [(short)9] [i_2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_7)))) & (((/* implicit */int) (_Bool)0))));
        }
        for (long long int i_6 = 2; i_6 < 10; i_6 += 4) 
        {
            var_19 = ((/* implicit */long long int) ((_Bool) arr_7 [i_0 - 1]));
            /* LoopNest 2 */
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                for (signed char i_8 = 1; i_8 < 8; i_8 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                        {
                            var_20 = ((/* implicit */int) ((signed char) arr_15 [i_0 - 2] [i_6] [i_6 - 2] [0U] [i_8 + 2]));
                            var_21 |= ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
                            arr_31 [i_0] [i_0] [i_0] [i_0] [i_9] = ((/* implicit */long long int) ((var_3) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14612)))));
                        }
                        for (unsigned int i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_4)) % (((((/* implicit */int) (short)-14612)) * (((/* implicit */int) (short)14093))))));
                            arr_35 [i_0] [i_0] [i_6] |= ((/* implicit */long long int) (+(arr_1 [i_6 + 1] [i_0 - 2])));
                            arr_36 [6] [6] [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-14612))));
                            var_23 -= ((/* implicit */short) ((unsigned short) arr_2 [(unsigned char)1]));
                        }
                        for (unsigned int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
                        {
                            arr_41 [i_0] [i_8] [i_7] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_27 [i_6 - 1] [i_6 - 1] [i_0 - 2])) ? (arr_0 [i_6 - 1]) : (((/* implicit */unsigned long long int) var_2))));
                            arr_42 [i_0] = ((/* implicit */short) ((((((/* implicit */int) (short)-1)) + (((/* implicit */int) arr_38 [(unsigned char)3] [i_6] [i_6] [i_8] [(unsigned char)3] [i_11])))) >= (((((/* implicit */int) (unsigned char)133)) ^ (((/* implicit */int) var_11))))));
                        }
                        arr_43 [i_0] [i_6 + 1] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_0] [i_6 + 1] [i_6])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_10 [i_0 + 1] [i_6 - 1] [i_7]))));
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) arr_24 [i_0 + 1]))));
                    }
                } 
            } 
            var_25 += ((/* implicit */int) (signed char)5);
            /* LoopNest 2 */
            for (long long int i_12 = 2; i_12 < 9; i_12 += 4) 
            {
                for (signed char i_13 = 0; i_13 < 11; i_13 += 3) 
                {
                    {
                        var_26 ^= ((/* implicit */unsigned short) (~(((((arr_7 [i_0]) + (2147483647))) << (((((-973969827) + (973969853))) - (24)))))));
                        var_27 = ((((/* implicit */_Bool) arr_16 [6] [i_6] [i_6 - 2] [6] [i_12])) ? (((((/* implicit */int) (signed char)75)) + (((/* implicit */int) (unsigned char)47)))) : (((/* implicit */int) arr_37 [i_12 + 2] [i_12 - 2] [i_12] [i_12 - 1])));
                        arr_48 [i_0] [i_6 - 2] [i_12] [i_13] |= ((/* implicit */short) (-(arr_29 [i_0 + 2] [4] [i_6 + 1] [i_0 + 2])));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (int i_14 = 4; i_14 < 10; i_14 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                var_28 = ((/* implicit */short) ((((/* implicit */int) (short)20212)) >= (((/* implicit */int) (unsigned short)24576))));
                arr_56 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_51 [i_14] [i_0])) ? (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_15])) : (((/* implicit */int) arr_10 [i_0] [i_14] [i_15]))))) ^ (var_3)));
            }
            for (short i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                var_29 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) var_3))) - (((/* implicit */int) arr_8 [i_0 + 1] [i_0 + 1]))));
                var_30 = ((/* implicit */short) ((_Bool) ((arr_14 [i_0] [i_14] [3LL] [3LL]) ? (((/* implicit */int) (short)14070)) : (((/* implicit */int) (unsigned char)223)))));
                arr_61 [i_16] [i_16] = ((/* implicit */unsigned short) arr_40 [i_0] [0LL] [i_16] [i_16] [0LL]);
            }
            var_31 = ((/* implicit */unsigned short) (-(arr_47 [i_14] [i_14 - 2] [i_14 - 2] [i_14])));
        }
        for (int i_17 = 4; i_17 < 10; i_17 += 3) /* same iter space */
        {
            arr_64 [i_0] [i_17] [i_0] = arr_63 [i_0];
            var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_44 [i_0 - 3] [i_0 - 1] [i_17 - 2])) ? (((/* implicit */int) arr_26 [i_17 + 1] [i_17 + 1] [i_17] [i_0 + 3])) : (((/* implicit */int) var_4)))))));
            /* LoopNest 2 */
            for (long long int i_18 = 2; i_18 < 8; i_18 += 3) 
            {
                for (unsigned int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    {
                        var_33 = ((/* implicit */_Bool) max((var_33), (((((((/* implicit */_Bool) arr_37 [i_0] [i_0] [(short)7] [i_0])) || (arr_55 [i_0] [(short)7]))) || (((/* implicit */_Bool) (-(var_9))))))));
                        arr_70 [i_19] [i_19] = ((/* implicit */int) arr_12 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 3]);
                        var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) var_1))));
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) 6668655172544934625LL))));
                        /* LoopSeq 1 */
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_36 ^= ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) == (var_2)))) > (var_9)));
                            var_37 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-14628)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (short)-14612)))))));
                            arr_73 [i_0] [i_0] [8ULL] [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_20] [i_0] [i_18] [i_0] [i_17] [i_0]))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)14093))) : (arr_0 [i_17])))));
                            arr_74 [i_17] [i_17] [i_19] [7U] [i_19] [i_17] = ((((/* implicit */_Bool) arr_8 [i_18 - 2] [i_17])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_0] [i_18 - 2] [i_0 + 2] [i_17 - 1]))));
                        }
                    }
                } 
            } 
            var_38 = ((/* implicit */long long int) min((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)24))))) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) arr_69 [i_0] [i_0] [i_0] [2U])))) : (((-1) | (((/* implicit */int) var_11)))))))));
        }
        var_39 = ((/* implicit */long long int) max((var_39), (((/* implicit */long long int) ((((/* implicit */int) arr_40 [(unsigned short)3] [(unsigned short)3] [i_0] [i_0] [i_0])) >> (((/* implicit */int) arr_40 [i_0 - 2] [i_0] [i_0 - 2] [i_0] [i_0 + 1])))))));
        /* LoopSeq 2 */
        for (long long int i_21 = 2; i_21 < 9; i_21 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (unsigned int i_22 = 1; i_22 < 10; i_22 += 4) 
            {
                /* LoopSeq 1 */
                for (long long int i_23 = 1; i_23 < 9; i_23 += 4) 
                {
                    arr_83 [i_0] [i_21] [i_21] [i_23] [(unsigned short)6] = (+(((/* implicit */int) var_8)));
                    var_40 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-29)) || ((!(((/* implicit */_Bool) -742088147827019354LL))))));
                }
                arr_84 [i_0] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_46 [i_22]))));
                /* LoopNest 2 */
                for (unsigned char i_24 = 4; i_24 < 10; i_24 += 4) 
                {
                    for (long long int i_25 = 3; i_25 < 9; i_25 += 4) 
                    {
                        {
                            var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) ((_Bool) arr_60 [i_25 - 3])))));
                            arr_91 [i_0] [i_0] [i_25] [9U] [i_0] [i_0] &= ((/* implicit */short) ((((/* implicit */_Bool) (-(4707940066106456444LL)))) || (((/* implicit */_Bool) 226972194U))));
                            arr_92 [i_25] = ((/* implicit */short) ((((/* implicit */int) arr_23 [i_0] [i_21])) == (((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_93 [(unsigned char)4] [(unsigned char)4] [i_21] [(signed char)8] = ((/* implicit */unsigned short) ((unsigned long long int) arr_69 [i_0] [i_0] [i_22] [i_0]));
            }
            for (int i_26 = 3; i_26 < 9; i_26 += 3) 
            {
                arr_97 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) < (4503599627370495ULL)));
                arr_98 [i_21] = arr_44 [i_26] [i_0] [i_0];
            }
            var_42 += (~(((/* implicit */int) (signed char)-108)));
            /* LoopSeq 2 */
            for (short i_27 = 1; i_27 < 9; i_27 += 4) /* same iter space */
            {
                arr_101 [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_94 [i_21 - 2] [i_27 + 2] [i_21 - 2] [i_0 + 2])) ? (arr_94 [i_27] [i_27 - 1] [i_21 + 2] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (short)20212)))));
                arr_102 [i_21] [i_0] [i_21] [i_0] = ((/* implicit */unsigned short) var_9);
                arr_103 [i_27] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_38 [(_Bool)0] [(_Bool)0] [(_Bool)0] [i_21] [i_27 - 1] [i_27])) - (((/* implicit */int) (short)20219))));
                var_43 |= ((/* implicit */_Bool) -2365761611052309568LL);
            }
            for (short i_28 = 1; i_28 < 9; i_28 += 4) /* same iter space */
            {
                arr_106 [i_0] [i_21] [i_21] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_37 [i_21 + 1] [i_21 - 1] [i_21 + 1] [i_21 - 1]))));
                arr_107 [i_0] [i_21 + 2] [i_28] = ((/* implicit */int) arr_22 [i_0] [i_28 + 2]);
            }
        }
        for (long long int i_29 = 2; i_29 < 9; i_29 += 3) /* same iter space */
        {
            arr_110 [0LL] [i_29] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_89 [i_0] [i_29 + 2] [i_0] [i_29] [i_0 + 1])) >> (((var_0) - (4427445645384041987LL)))));
            /* LoopNest 3 */
            for (unsigned int i_30 = 0; i_30 < 11; i_30 += 4) 
            {
                for (unsigned int i_31 = 2; i_31 < 10; i_31 += 3) 
                {
                    for (int i_32 = 0; i_32 < 11; i_32 += 4) 
                    {
                        {
                            var_44 += ((/* implicit */_Bool) ((((((/* implicit */_Bool) (short)14066)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_114 [i_0] [i_30] [i_30]))) : (var_3))) - (((/* implicit */unsigned long long int) 226972182U))));
                            arr_121 [i_29] = ((/* implicit */int) ((unsigned char) arr_113 [i_29 + 2] [i_29] [i_29 + 1] [i_29 + 2]));
                            arr_122 [i_29] [i_29] = ((((/* implicit */int) arr_99 [i_0 + 2] [i_0 - 1] [i_0 - 1])) == (((/* implicit */int) (unsigned char)242)));
                            var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) -9223372036854775804LL))));
                        }
                    } 
                } 
            } 
            var_46 = ((/* implicit */short) ((((/* implicit */_Bool) arr_111 [i_29] [i_29] [i_29])) ? (((/* implicit */long long int) -1)) : (arr_13 [i_0] [i_0] [i_29] [i_29 + 1] [i_0] [i_0 + 3])));
        }
    }
    /* vectorizable */
    for (int i_33 = 3; i_33 < 8; i_33 += 3) /* same iter space */
    {
        var_47 = ((((/* implicit */_Bool) (unsigned char)255)) ? (arr_7 [i_33]) : (((((/* implicit */int) arr_63 [i_33])) / (((/* implicit */int) (signed char)-1)))));
        var_48 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_33] [i_33])) / (((/* implicit */int) arr_104 [i_33 + 3] [i_33 - 2]))));
        var_49 = ((/* implicit */_Bool) ((arr_27 [i_33 + 3] [i_33 + 2] [i_33]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_33] [i_33 - 3])))));
        arr_125 [i_33] = ((long long int) var_2);
    }
}
