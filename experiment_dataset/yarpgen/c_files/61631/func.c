/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61631
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_7)) ^ ((-(((/* implicit */int) var_9))))));
    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62))))));
    var_15 = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) -1)) ? (11307125404718686066ULL) : (11307125404718686066ULL))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) | (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) var_3)) : (11307125404718686066ULL)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (7139618668990865557ULL) : (arr_0 [i_0])))) ? (min((3324982566736373887ULL), (arr_0 [i_0]))) : (11307125404718686066ULL))))));
        var_17 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) arr_1 [i_0])) / (((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (var_10) : (var_12))))) * (15121761506973177729ULL)));
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_3 [i_1])) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))))) & (((arr_2 [i_1] [i_1]) << (((((/* implicit */int) arr_3 [i_1])) - (6628)))))));
        var_19 += ((/* implicit */_Bool) (+(((/* implicit */int) var_8))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 22; i_2 += 3) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 22; i_3 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_4 [i_2] [i_3]))));
            arr_8 [i_2] [i_3] [i_2] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) (short)29341)) : (var_11))) & (((/* implicit */int) var_2))));
            arr_9 [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) || (var_7));
            var_21 = ((/* implicit */unsigned int) 7783994575777847081LL);
        }
        for (long long int i_4 = 0; i_4 < 22; i_4 += 2) /* same iter space */
        {
            /* LoopSeq 4 */
            for (long long int i_5 = 0; i_5 < 22; i_5 += 2) 
            {
                arr_15 [i_2] [i_4] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1023)) >= (7139618668990865549ULL)));
                var_22 &= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_5])) ? (((((/* implicit */_Bool) var_9)) ? (var_10) : (11307125404718686066ULL))) : (((/* implicit */unsigned long long int) 7749118484275535005LL))));
            }
            for (unsigned int i_6 = 0; i_6 < 22; i_6 += 2) 
            {
                arr_18 [i_2] [i_4] [i_4] [i_2] = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_8))))));
                var_23 = ((/* implicit */unsigned long long int) arr_14 [i_2] [i_4] [8ULL] [i_2]);
                var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) 3324982566736373887ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)7))));
                var_25 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_4] [i_4] [i_4])) ? (707042048) : (arr_14 [i_2] [i_2] [i_2] [i_4])));
            }
            for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 4) 
            {
                arr_21 [i_2] [0] = ((/* implicit */short) ((((/* implicit */_Bool) (-(18446744073709551615ULL)))) ? (((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_7])) : (((/* implicit */int) arr_7 [i_2] [i_4]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 2) 
                {
                    var_26 = ((/* implicit */unsigned long long int) var_6);
                    var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_4 [i_2] [i_2]))));
                }
                /* LoopSeq 2 */
                for (int i_9 = 0; i_9 < 22; i_9 += 3) 
                {
                    arr_28 [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_2] [14LL] [i_7])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_27 [i_2] [(unsigned short)11] [i_7]))));
                    arr_29 [14ULL] [i_2] [i_7] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)-11164)) : (((/* implicit */int) arr_7 [i_2] [i_2]))))));
                    arr_30 [i_2] [i_2] [i_7] [(_Bool)1] = var_3;
                    var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((7139618668990865567ULL) ^ (((/* implicit */unsigned long long int) -32768)))) & (((((/* implicit */_Bool) arr_27 [i_4] [i_7] [i_7])) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))))));
                }
                for (signed char i_10 = 3; i_10 < 20; i_10 += 2) 
                {
                    var_29 += ((/* implicit */short) (!(((/* implicit */_Bool) 7139618668990865574ULL))));
                    /* LoopSeq 1 */
                    for (int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_30 = ((/* implicit */long long int) var_10);
                        var_31 ^= ((/* implicit */int) var_10);
                        var_32 = arr_33 [i_2] [i_2] [i_10 + 1] [i_10 - 2];
                    }
                }
                arr_37 [i_2] [i_2] = ((/* implicit */long long int) arr_3 [i_2]);
            }
            for (long long int i_12 = 2; i_12 < 21; i_12 += 3) 
            {
                var_33 ^= ((/* implicit */unsigned long long int) var_0);
                var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) || (((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_4] [i_12 - 1]))));
            }
            arr_41 [i_2] = ((/* implicit */unsigned int) ((var_11) - (arr_10 [i_2] [i_4] [i_4])));
        }
        arr_42 [i_2] = ((/* implicit */unsigned short) arr_12 [i_2]);
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
    {
        var_35 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned char)253)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)17))) : (15121761506973177729ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
        /* LoopNest 2 */
        for (signed char i_14 = 0; i_14 < 19; i_14 += 2) 
        {
            for (long long int i_15 = 0; i_15 < 19; i_15 += 4) 
            {
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), ((~(((((/* implicit */_Bool) var_12)) ? (var_4) : (0ULL)))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 19; i_16 += 1) 
                    {
                        for (signed char i_17 = 0; i_17 < 19; i_17 += 4) 
                        {
                            {
                                var_37 |= ((((/* implicit */_Bool) arr_47 [i_15])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_13]))));
                                var_38 = ((/* implicit */short) var_1);
                            }
                        } 
                    } 
                    /* LoopSeq 3 */
                    for (int i_18 = 1; i_18 < 18; i_18 += 2) /* same iter space */
                    {
                        var_39 = ((/* implicit */signed char) 707042059);
                        arr_57 [i_18] [i_14] = ((/* implicit */signed char) ((3324982566736373885ULL) << (((((/* implicit */int) (unsigned short)511)) - (492)))));
                    }
                    for (int i_19 = 1; i_19 < 18; i_19 += 2) /* same iter space */
                    {
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_25 [i_19] [i_19 + 1] [(_Bool)1] [i_15])) ? (arr_25 [i_19] [i_19] [i_19] [i_15]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_14] [i_14] [i_19 - 1] [i_19] [i_19 + 1]))))))));
                        arr_60 [i_13] [i_14] [6LL] |= ((/* implicit */long long int) ((((/* implicit */_Bool) 2982870556829238900LL)) && (((/* implicit */_Bool) ((var_11) & (((/* implicit */int) (unsigned char)41)))))));
                    }
                    for (unsigned long long int i_20 = 0; i_20 < 19; i_20 += 2) 
                    {
                        arr_63 [i_20] [i_15] [i_14] [i_13] &= ((/* implicit */short) ((((/* implicit */_Bool) arr_55 [i_13] [i_20])) ? (arr_55 [(unsigned short)13] [i_20]) : (arr_55 [i_13] [i_14])));
                        var_41 &= ((/* implicit */short) ((var_0) / (((/* implicit */long long int) arr_39 [i_13] [i_14] [i_15] [i_20]))));
                        var_42 = ((/* implicit */long long int) min((var_42), (((((/* implicit */_Bool) 707042059)) ? ((-(arr_2 [i_13] [(_Bool)1]))) : (((/* implicit */long long int) ((arr_51 [i_13] [10LL] [3LL] [3LL]) - (((/* implicit */int) var_8)))))))));
                        arr_64 [8LL] [8LL] [(_Bool)1] [i_20] = ((((/* implicit */_Bool) arr_54 [i_13] [(signed char)12] [i_14] [17ULL] [i_20])) ? (arr_45 [i_13] [i_13]) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 7320921330312407939LL)) >= (3705745270474683457ULL)))));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 11649640422828213545ULL)) ? (((/* implicit */int) arr_53 [i_13] [i_14] [i_15] [i_20] [i_14])) : (((/* implicit */int) arr_47 [i_20]))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */int) max((var_44), (((((/* implicit */int) arr_16 [i_13] [i_13] [i_13])) >> (((((/* implicit */int) arr_16 [i_13] [i_13] [i_13])) - (13883)))))));
        /* LoopNest 3 */
        for (int i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            for (unsigned char i_22 = 0; i_22 < 19; i_22 += 4) 
            {
                for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                {
                    {
                        var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_7 [i_21] [i_21])))))));
                        arr_75 [i_23] [i_21] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26914)) ? (((/* implicit */unsigned long long int) -2982870556829238900LL)) : ((~(var_10)))));
                        arr_76 [i_23] = ((/* implicit */long long int) (~(arr_12 [i_13])));
                    }
                } 
            } 
        } 
        arr_77 [i_13] = (~(7372966272686696034LL));
    }
    /* vectorizable */
    for (long long int i_24 = 0; i_24 < 18; i_24 += 4) 
    {
        arr_81 [i_24] [i_24] = ((/* implicit */long long int) (((+(((/* implicit */int) var_8)))) - (((/* implicit */int) var_6))));
        /* LoopNest 2 */
        for (unsigned int i_25 = 0; i_25 < 18; i_25 += 4) 
        {
            for (unsigned short i_26 = 0; i_26 < 18; i_26 += 3) 
            {
                {
                    var_46 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)3)) ? (arr_61 [i_25] [i_25] [i_25] [i_25] [i_25]) : (arr_61 [i_24] [i_25] [5LL] [i_26] [i_26])));
                    var_47 = ((/* implicit */_Bool) ((arr_2 [i_25] [i_26]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_26] [i_26])))));
                    arr_88 [i_26] = ((/* implicit */_Bool) (-((~(arr_23 [i_26] [i_26] [i_25] [i_25] [18LL] [i_24])))));
                    arr_89 [i_24] &= ((/* implicit */_Bool) 671296345U);
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_27 = 1; i_27 < 21; i_27 += 2) 
    {
        var_48 = ((/* implicit */_Bool) (~(arr_91 [i_27])));
        arr_94 [i_27] = ((/* implicit */long long int) (-(((/* implicit */int) var_6))));
        var_49 ^= ((/* implicit */short) (-(arr_90 [i_27 + 2])));
    }
}
