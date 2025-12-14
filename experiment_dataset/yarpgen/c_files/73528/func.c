/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73528
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73528 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73528
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned short) max((var_12), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 2])))))));
        var_13 = ((/* implicit */long long int) max((var_13), (((long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned char)6] [(_Bool)1])) ? (268435328ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)31)))))) ? (((/* implicit */int) ((unsigned char) arr_2 [i_0 - 1] [i_0]))) : (((((/* implicit */int) arr_2 [i_0] [i_0])) | (((/* implicit */int) arr_2 [i_0] [(unsigned char)4])))))))));
        var_15 = ((/* implicit */short) ((arr_2 [i_0 - 1] [i_0 - 1]) ? (((/* implicit */int) arr_2 [i_0 + 1] [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1]))));
    }
    for (unsigned char i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
            {
                {
                    var_16 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) - (((/* implicit */int) arr_2 [i_1] [i_1]))))) ? (((arr_8 [i_1]) | (var_6))) : (((/* implicit */unsigned long long int) 2853161888391981480LL)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)20615)) > (((/* implicit */int) (_Bool)1)))))));
                    arr_12 [i_2] [i_1] [i_2] [i_3] &= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((0U) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)126)) ? (arr_9 [i_2]) : (((/* implicit */int) arr_2 [i_2] [i_3])))))))) & (16250411206882784902ULL)));
                }
            } 
        } 
        var_17 = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (((((/* implicit */_Bool) 16250411206882784885ULL)) ? (arr_8 [(signed char)10]) : (((/* implicit */unsigned long long int) 6))))))) ? (((long long int) ((((/* implicit */_Bool) 8388607)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_7)))))) : (((/* implicit */long long int) ((/* implicit */int) ((9U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)126))))))));
        var_18 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [9U] [i_1])) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_1] [i_1])))))));
    }
    /* vectorizable */
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 4) 
    {
        var_19 *= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_4 - 1]))));
        /* LoopSeq 4 */
        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 2) 
        {
            arr_19 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0ULL)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28430)))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (long long int i_7 = 0; i_7 < 12; i_7 += 3) 
                {
                    {
                        arr_24 [(_Bool)1] [i_5] [i_6] [i_4] [i_7] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_7 [11U]))));
                        /* LoopSeq 1 */
                        for (unsigned short i_8 = 3; i_8 < 11; i_8 += 2) 
                        {
                            arr_29 [i_4] [i_5] [i_4] = var_2;
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_21 [i_7]))));
                            var_21 += ((/* implicit */unsigned short) arr_0 [i_4] [i_5]);
                            arr_30 [i_4] [i_5] [i_6] [i_4] = ((/* implicit */long long int) ((int) arr_1 [i_4 - 1] [i_4]));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (int i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                arr_34 [i_4] [(unsigned char)6] [i_4] = ((/* implicit */unsigned char) ((8191U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                arr_35 [(_Bool)1] [(_Bool)1] |= ((/* implicit */long long int) (short)-20615);
            }
            var_22 ^= ((/* implicit */unsigned char) ((long long int) 3547307553U));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4] [i_4 + 1] [(_Bool)1] [i_4 + 1] [i_4 - 1] [i_4 - 1] [i_4]))) & (var_2)));
        }
        for (long long int i_10 = 3; i_10 < 9; i_10 += 2) 
        {
            arr_38 [i_4] [i_10] = ((/* implicit */long long int) (short)-1296);
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 12; i_11 += 3) 
            {
                var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (+(((/* implicit */int) arr_23 [i_10 - 1] [i_10 + 1] [i_10 + 1] [i_10 - 2])))))));
                arr_42 [i_4] [i_10] [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_3 [i_4 + 1])) + (2147483647))) >> (((((/* implicit */int) arr_3 [i_4 + 1])) + (6927)))));
            }
            for (short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_4] [i_4] [i_12]))))) ? (((/* implicit */int) arr_40 [i_4] [i_4] [i_12])) : ((+(((/* implicit */int) arr_0 [8] [i_10]))))));
                arr_45 [i_4] [i_4] [i_12] = ((/* implicit */short) (-(arr_26 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1])));
            }
            for (long long int i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                var_26 ^= ((/* implicit */_Bool) arr_44 [0U]);
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 10; i_14 += 3) 
                {
                    for (unsigned char i_15 = 0; i_15 < 12; i_15 += 3) 
                    {
                        {
                            arr_53 [i_4] [i_4] [i_10] [i_4] [i_13] [4LL] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_4 - 1] [i_4 - 1] [i_14] [i_14])) ? (((/* implicit */int) arr_0 [i_15] [i_4])) : (((/* implicit */int) arr_51 [i_10 - 3] [i_14] [i_13] [i_10 - 3] [i_4]))));
                            var_27 = ((/* implicit */signed char) ((((/* implicit */int) arr_25 [i_4 - 1] [i_10] [(short)2] [i_14 + 1] [i_10 - 2] [i_10] [i_14 - 1])) ^ (((/* implicit */int) arr_6 [i_4 + 1] [i_10 + 1]))));
                        }
                    } 
                } 
                arr_54 [i_4] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4] [i_4 - 1] [i_10 - 3])) ? (arr_18 [i_4] [i_4 - 1] [i_10 + 1]) : (arr_18 [i_10] [i_4 - 1] [i_10 - 3])));
            }
        }
        for (signed char i_16 = 0; i_16 < 12; i_16 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) 22U))));
                var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4] [i_4])) ? (((/* implicit */long long int) 4294967295U)) : (((arr_11 [i_4] [i_4] [i_4]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)67)))))));
                var_30 = ((/* implicit */_Bool) 3611227754116160486LL);
                var_31 -= ((/* implicit */unsigned short) ((arr_17 [i_4 + 1] [i_17]) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_4] [i_4 - 1] [(unsigned char)0])))));
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_4 - 1] [i_16])) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_17])) : (((/* implicit */int) arr_23 [i_4 - 1] [i_16] [i_4] [i_17]))));
            }
            for (long long int i_18 = 2; i_18 < 8; i_18 += 3) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_19 = 0; i_19 < 12; i_19 += 3) 
                {
                    for (unsigned int i_20 = 0; i_20 < 12; i_20 += 2) 
                    {
                        {
                            arr_68 [i_4] [i_4] [7U] [i_4] = ((/* implicit */int) (~(arr_8 [i_4 + 1])));
                            var_33 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) (_Bool)1)))));
                        }
                    } 
                } 
                arr_69 [i_4] [i_18] [i_18] = ((/* implicit */unsigned int) ((int) 132017144U));
            }
            for (long long int i_21 = 2; i_21 < 8; i_21 += 3) /* same iter space */
            {
                var_34 = ((/* implicit */short) (~(((arr_32 [i_4] [i_16] [i_4] [i_4]) ? (((/* implicit */int) arr_1 [i_4 - 1] [(_Bool)1])) : (((/* implicit */int) arr_5 [i_4]))))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 1; i_22 < 11; i_22 += 2) 
                {
                    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                    {
                        {
                            arr_77 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967288U)) ? (arr_33 [i_4] [i_4] [i_23]) : (arr_64 [i_4] [i_22] [i_21] [i_4])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 5125764938739348096LL)) && (((/* implicit */_Bool) 31)))))) : (((((/* implicit */_Bool) arr_40 [(unsigned char)8] [i_4] [(unsigned char)11])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (233848493915091661LL)))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_59 [i_22 + 1] [i_23] [i_21 - 1] [7])) ? (arr_71 [i_21] [i_22]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_55 [i_22] [10LL] [i_16])) ? (((/* implicit */int) arr_40 [i_21] [i_16] [i_23])) : (arr_48 [i_22] [i_22] [i_4])))))))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (long long int i_24 = 0; i_24 < 12; i_24 += 3) 
            {
                for (long long int i_25 = 0; i_25 < 12; i_25 += 4) 
                {
                    {
                        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) arr_16 [i_16])) ? (((unsigned int) arr_2 [i_24] [i_25])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 439350052U)) ? (((/* implicit */int) (unsigned char)150)) : (((/* implicit */int) (unsigned char)243)))))));
                        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (+(arr_61 [i_4 + 1]))))));
                        var_38 = ((/* implicit */_Bool) arr_3 [i_4 + 1]);
                    }
                } 
            } 
        }
        for (unsigned short i_26 = 0; i_26 < 12; i_26 += 3) 
        {
            arr_87 [i_4] = ((/* implicit */_Bool) arr_23 [i_4] [i_26] [(short)11] [i_4]);
            var_39 = ((/* implicit */unsigned char) min((var_39), (arr_55 [i_26] [(short)8] [i_4 - 1])));
            /* LoopNest 3 */
            for (long long int i_27 = 0; i_27 < 12; i_27 += 3) 
            {
                for (unsigned char i_28 = 2; i_28 < 11; i_28 += 3) 
                {
                    for (long long int i_29 = 0; i_29 < 12; i_29 += 2) 
                    {
                        {
                            var_40 += arr_82 [i_27] [(unsigned short)10] [i_27] [i_4 + 1];
                            var_41 += ((/* implicit */unsigned char) ((unsigned int) arr_13 [i_29]));
                        }
                    } 
                } 
            } 
            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((12LL) | (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_75 [i_4] [(unsigned char)8] [i_26] [i_4] [i_4] [(_Bool)1] [i_26])))))))));
        }
    }
    /* vectorizable */
    for (unsigned char i_30 = 0; i_30 < 11; i_30 += 2) 
    {
        arr_102 [i_30] [i_30] &= ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)85))) : ((-9223372036854775807LL - 1LL))));
        var_43 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)164))) | (0LL)));
        /* LoopNest 3 */
        for (unsigned char i_31 = 1; i_31 < 8; i_31 += 4) 
        {
            for (long long int i_32 = 0; i_32 < 11; i_32 += 3) 
            {
                for (signed char i_33 = 0; i_33 < 11; i_33 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_34 = 0; i_34 < 11; i_34 += 3) 
                        {
                            var_44 = arr_20 [i_32] [i_32];
                            arr_113 [i_32] [i_32] = ((((_Bool) arr_96 [i_32] [i_31] [(unsigned char)11] [i_33] [i_34])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_30] [i_31 + 1] [i_32] [i_33] [i_34])) ? (arr_80 [(unsigned char)8] [8] [i_32] [i_32] [(unsigned char)8]) : (((/* implicit */int) arr_93 [i_30] [i_33] [i_30] [i_30]))))) : (((((/* implicit */_Bool) arr_81 [i_33] [i_32] [i_32] [i_30])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (arr_16 [i_30]))));
                            var_45 = ((/* implicit */unsigned char) ((unsigned int) arr_20 [i_32] [i_31 - 1]));
                            var_46 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_65 [i_30] [i_31 - 1] [(_Bool)1] [i_33] [i_30]) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_74 [i_30] [i_31 + 3] [i_32]))) : (((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */long long int) arr_26 [(_Bool)1] [i_33] [i_32] [i_31] [i_30])) : (arr_92 [i_33] [i_33])))));
                        }
                        arr_114 [i_33] [i_33] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_27 [(signed char)8] [(signed char)8] [i_32] [i_31 + 2] [i_31] [i_32] [i_32])) : (((/* implicit */int) arr_75 [8U] [i_33] [(unsigned short)0] [i_33] [10U] [i_30] [i_30]))))) ? (arr_112 [3LL] [i_30] [(unsigned char)10] [i_32] [i_33]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        var_47 |= ((/* implicit */unsigned int) arr_94 [i_30] [i_30] [i_30]);
                    }
                } 
            } 
        } 
        arr_115 [i_30] [i_30] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_44 [i_30])) >> (((((/* implicit */int) arr_3 [i_30])) + (6925)))));
    }
    var_48 = ((/* implicit */_Bool) ((unsigned char) var_6));
    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) var_11))) ? (((unsigned int) ((((/* implicit */_Bool) (unsigned char)137)) ? (-6LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_9)))))))));
}
