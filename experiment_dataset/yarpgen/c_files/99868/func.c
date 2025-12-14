/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99868
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 -= ((/* implicit */_Bool) max((((/* implicit */signed char) ((var_8) <= ((((_Bool)1) ? (arr_0 [(unsigned short)2]) : (arr_0 [i_0])))))), (arr_1 [i_0] [i_0])));
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_1 [i_0] [i_0])))))));
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((arr_2 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_1 [i_0] [i_0])), (arr_2 [i_0])))) > (((-1116591751748481913LL) / (1116591751748481913LL))))))))))));
        var_14 &= ((/* implicit */_Bool) (signed char)32);
        var_15 += ((/* implicit */short) ((((((((/* implicit */_Bool) var_8)) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))) % (((/* implicit */unsigned int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) + (93)))))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_16 += ((/* implicit */long long int) arr_3 [i_1]);
        arr_5 [i_1] &= ((/* implicit */unsigned short) arr_3 [i_1]);
    }
    /* LoopSeq 4 */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_10 [i_2] [i_2] |= ((((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_2] [i_2])))) >= (((arr_3 [i_2]) / (((/* implicit */int) arr_1 [i_2] [i_2])))));
        var_17 -= ((/* implicit */unsigned short) max((((((/* implicit */int) arr_7 [i_2])) < (((/* implicit */int) arr_7 [i_2])))), ((!(((/* implicit */_Bool) arr_7 [i_2]))))));
        /* LoopSeq 2 */
        for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            var_18 ^= ((/* implicit */unsigned int) ((long long int) (unsigned char)192));
            /* LoopSeq 3 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                var_19 += ((((/* implicit */_Bool) min((((((/* implicit */int) arr_7 [i_4])) >> (((18014398509481983ULL) - (18014398509481975ULL))))), ((-(((/* implicit */int) arr_13 [i_2] [i_2] [i_2] [i_4]))))))) ? (((/* implicit */int) (short)-13772)) : (((/* implicit */int) max((((/* implicit */signed char) var_10)), ((signed char)32)))));
                arr_15 [i_2] [i_2] [i_4] [i_2] |= min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_3 [i_3]))))), (arr_13 [i_2] [i_2] [(unsigned short)0] [i_4]));
                /* LoopSeq 2 */
                for (unsigned long long int i_5 = 3; i_5 < 12; i_5 += 1) 
                {
                    var_20 ^= ((/* implicit */unsigned char) ((((((-587977728) + (2147483647))) >> (((arr_18 [i_2] [i_5 + 1]) - (7579900886354833211LL))))) ^ (max((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)127)), ((unsigned short)38847)))), (((((/* implicit */int) var_0)) / (((/* implicit */int) arr_1 [i_2] [i_3]))))))));
                    var_21 &= ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_5 - 3]) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5] [(unsigned short)5] [(unsigned short)5] [i_2]))))))) / (arr_16 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5 - 2] [i_5] [i_5 + 1]))));
                    arr_20 [i_2] [i_3] [i_3] [i_4] [i_4] [i_3] &= ((/* implicit */unsigned int) var_6);
                    var_22 = min((max((((arr_12 [i_3]) ? (((/* implicit */int) arr_7 [i_4])) : (-587977728))), (((/* implicit */int) arr_8 [i_2] [i_2])))), (((/* implicit */int) var_2)));
                    arr_21 [i_4] &= ((((16625518906552023158ULL) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_7 [i_2]))))))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_3] [i_4] [i_5] [i_5 - 2])) ? (arr_16 [i_2] [i_2] [i_3] [i_5] [i_5] [i_5 - 2]) : (((/* implicit */unsigned int) var_5))))));
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    var_23 |= ((/* implicit */signed char) arr_12 [i_2]);
                    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_4 [i_2])), (arr_8 [i_6] [i_4]))))) == (((arr_16 [i_2] [i_2] [i_3] [i_6] [(unsigned short)2] [i_3]) / (arr_2 [i_6]))))) ? (((((/* implicit */_Bool) min((var_5), (((/* implicit */int) arr_8 [i_3] [i_4]))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (arr_7 [i_2])))) : (((/* implicit */int) ((signed char) -587977736))))) : (((/* implicit */int) max((((((/* implicit */_Bool) var_8)) || (var_0))), (((arr_22 [i_4]) == (((/* implicit */int) arr_19 [i_2]))))))))))));
                    arr_24 [i_2] [5] |= ((/* implicit */unsigned char) max(((!(((/* implicit */_Bool) max((arr_18 [i_6] [i_3]), (((/* implicit */long long int) arr_2 [i_2]))))))), ((!(((/* implicit */_Bool) ((arr_6 [i_3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2] [i_4]))))))))));
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (((!(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2]))) < (var_8))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_6])) - (((/* implicit */int) arr_13 [i_2] [i_3] [i_4] [i_6]))))))))));
                }
                var_26 ^= ((/* implicit */int) arr_6 [i_2]);
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (int i_8 = 3; i_8 < 12; i_8 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) (short)10965)) ? (547935023887571417LL) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_25 [i_2] [i_2] [i_2] [i_7] [i_2])))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_7])) ? (((/* implicit */int) arr_11 [3])) : (((/* implicit */int) arr_13 [i_2] [i_2] [i_4] [i_4])))))))));
                            var_28 += ((/* implicit */long long int) min((((arr_14 [i_3] [i_4] [i_4] [i_8 + 1]) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_8 - 3] [i_3]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8 - 1])) <= (arr_22 [i_7]))))));
                            var_29 -= ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -587977728)) ? (((/* implicit */int) arr_13 [(unsigned short)2] [i_7] [i_4] [i_3])) : (((/* implicit */int) var_0))))) ? (1116591751748481928LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_2] [i_7] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_0 [i_2])))))) == (((/* implicit */long long int) -587977734))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (int i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                {
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) var_2))));
                    arr_34 [i_3] |= (!(((/* implicit */_Bool) arr_17 [i_2] [i_3] [i_2])));
                }
                for (long long int i_11 = 3; i_11 < 11; i_11 += 1) 
                {
                    var_31 = ((/* implicit */_Bool) min((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2])) ? (((((/* implicit */int) var_0)) * (((/* implicit */int) arr_26 [i_9])))) : (((((/* implicit */int) arr_4 [i_2])) * (((/* implicit */int) var_1)))))))));
                    arr_37 [i_3] [i_9] [4U] &= ((/* implicit */_Bool) ((unsigned short) arr_30 [i_11 + 1] [i_11 - 3] [i_11 - 2] [i_11]));
                }
                for (unsigned long long int i_12 = 1; i_12 < 13; i_12 += 2) 
                {
                    var_32 = ((/* implicit */signed char) min((var_32), (((/* implicit */signed char) ((((/* implicit */int) (unsigned short)26688)) << (((/* implicit */int) (!(((/* implicit */_Bool) (short)-14923))))))))));
                    var_33 -= ((/* implicit */signed char) ((((arr_19 [i_12]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_30 [i_2] [i_2] [i_2] [i_12 - 1])))) % (((/* implicit */int) arr_35 [i_3] [i_12 + 1] [i_12 + 1] [i_3]))));
                }
                var_34 &= ((/* implicit */unsigned short) (~(arr_3 [i_3])));
            }
            for (long long int i_13 = 0; i_13 < 14; i_13 += 3) 
            {
                var_35 -= ((/* implicit */unsigned long long int) max((((long long int) (_Bool)1)), (((/* implicit */long long int) arr_30 [(_Bool)1] [i_3] [i_2] [i_2]))));
                var_36 ^= ((/* implicit */unsigned long long int) max((((((/* implicit */long long int) 587977736)) & (((((/* implicit */_Bool) arr_6 [i_3])) ? (5976858626256700699LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-91))))))), (((/* implicit */long long int) min((((((/* implicit */int) arr_27 [i_13] [i_13] [i_2] [i_2] [i_3] [i_2])) | (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) arr_2 [(_Bool)1]))))))));
            }
        }
        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 4) 
        {
            var_37 = ((/* implicit */int) max((var_37), ((~(((((/* implicit */_Bool) arr_1 [i_2] [i_2])) ? (((/* implicit */int) arr_27 [i_14] [i_14 + 2] [i_14] [i_14 + 2] [i_14] [5U])) : (((/* implicit */int) arr_27 [i_14] [i_14] [i_14] [i_14 + 2] [i_14] [i_14]))))))));
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned short) arr_36 [i_2] [(_Bool)0] [i_2] [i_2] [i_2] [i_2]))) >> (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) var_10)) != (((/* implicit */int) (signed char)-118)))))))))))));
            var_39 &= ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_12 [i_14 + 2])), (max((arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]), (arr_2 [i_2])))))) ? (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)15)))) / ((+(arr_3 [i_14])))))) : (((long long int) ((((/* implicit */int) arr_32 [i_14] [i_14] [i_2] [i_2] [i_14] [i_2])) / (((/* implicit */int) (unsigned short)26687)))))));
            arr_45 [(_Bool)1] [(_Bool)1] &= (-(((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (signed char)100)))) << (((arr_38 [(unsigned short)4] [i_14] [i_14] [i_2]) - (542443554U))))));
        }
    }
    for (int i_15 = 4; i_15 < 18; i_15 += 3) 
    {
        arr_50 [i_15 + 2] |= ((/* implicit */signed char) arr_48 [i_15] [i_15 - 2]);
        arr_51 [i_15] |= var_9;
        var_40 = ((/* implicit */long long int) min((var_40), (((/* implicit */long long int) (_Bool)1))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 4) 
            {
                /* LoopSeq 4 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_41 += ((/* implicit */_Bool) (~(arr_56 [i_15 - 2])));
                    var_42 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_55 [i_18])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((_Bool) arr_52 [i_15])))));
                }
                for (unsigned int i_19 = 3; i_19 < 20; i_19 += 3) 
                {
                    var_43 ^= ((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_16]))) * (((((/* implicit */_Bool) arr_57 [i_19] [i_17] [i_16] [i_15])) ? (arr_48 [i_16] [i_16]) : (arr_48 [i_15] [i_16]))));
                    var_44 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_19 - 3] [i_19 + 1])) ? (((/* implicit */int) arr_62 [i_15] [i_15] [i_15] [i_15 + 3] [i_15])) : (((/* implicit */int) (_Bool)0))));
                }
                for (unsigned int i_20 = 1; i_20 < 19; i_20 += 4) 
                {
                    var_45 = ((/* implicit */unsigned long long int) max((var_45), (((/* implicit */unsigned long long int) arr_59 [i_16] [i_16]))));
                    var_46 |= ((/* implicit */_Bool) ((short) (signed char)106));
                    var_47 &= ((/* implicit */unsigned char) ((arr_56 [i_15 - 4]) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-52)))));
                }
                for (int i_21 = 0; i_21 < 21; i_21 += 3) 
                {
                    var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_49 [i_21]))))) ? (((/* implicit */int) arr_49 [(unsigned short)2])) : (((/* implicit */int) arr_58 [(signed char)15] [i_16] [i_17] [i_15 + 3])))))));
                    var_49 = ((/* implicit */unsigned int) min((var_49), (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
                }
                var_50 ^= ((/* implicit */unsigned int) ((arr_54 [i_17] [i_15 - 2] [i_17]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)26688)))));
            }
            for (signed char i_22 = 1; i_22 < 20; i_22 += 1) 
            {
                var_51 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_54 [i_15 - 1] [i_15 - 1] [i_22 + 1])));
                var_52 *= ((/* implicit */signed char) ((((/* implicit */int) arr_61 [i_15 - 3] [i_22 - 1])) > (((/* implicit */int) arr_61 [i_15 + 2] [i_22 + 1]))));
            }
            var_53 = ((/* implicit */_Bool) max((var_53), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) arr_62 [(short)12] [i_16] [i_15] [i_15] [i_15]))))) / (((/* implicit */int) arr_64 [i_15] [i_16] [i_15 + 3] [i_15] [i_15])))))));
        }
        for (unsigned short i_23 = 1; i_23 < 19; i_23 += 3) 
        {
            arr_73 [i_15] [i_23] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_61 [i_15] [1U]))))) ? (((-8447131042337784630LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */long long int) (_Bool)1)), (arr_60 [i_23] [i_23] [i_23] [i_23])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_58 [i_15] [i_23 + 2] [i_15] [i_15]))) % (arr_60 [i_15 + 3] [i_15] [i_23 + 1] [i_23 + 1]))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_65 [i_23] [i_23 - 1] [i_15 - 1] [i_15 + 1])))))));
            var_54 = ((/* implicit */unsigned short) min((var_54), ((unsigned short)16383)));
            /* LoopSeq 1 */
            for (int i_24 = 2; i_24 < 18; i_24 += 4) 
            {
                var_55 ^= ((/* implicit */unsigned int) var_10);
                /* LoopSeq 1 */
                for (unsigned int i_25 = 0; i_25 < 21; i_25 += 3) 
                {
                    arr_78 [i_15] [i_15] [i_15] [i_15] [i_25] [i_24] &= ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_58 [i_15] [i_23] [i_15] [i_15])), (var_4)))) ? (((/* implicit */int) (!(var_1)))) : (((int) arr_61 [i_15 + 1] [i_23])))) <= ((+(((/* implicit */int) arr_55 [i_23 + 1]))))));
                    /* LoopSeq 1 */
                    for (int i_26 = 0; i_26 < 21; i_26 += 1) 
                    {
                        var_56 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */int) arr_49 [i_23])) : (((/* implicit */int) arr_79 [i_15] [i_23] [i_15] [i_15] [i_24] [i_25] [0ULL]))))) ? (((long long int) (_Bool)1)) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)48953)) ^ (((/* implicit */int) arr_66 [i_26] [i_25] [i_24 + 1] [i_23 + 1]))))))) & (((/* implicit */long long int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_58 [i_15] [i_24] [i_25] [i_26])) ? (arr_81 [i_15] [i_24] [i_24] [i_24]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))))));
                        arr_82 [i_15] [i_24] [i_24] [i_24] [i_25] [i_26] |= ((/* implicit */unsigned short) (((_Bool)1) ? (((int) var_7)) : (((arr_80 [i_23 + 2] [i_24] [i_24] [i_24 - 2] [i_25]) % (arr_80 [i_23 - 1] [i_24] [i_24] [i_24 + 1] [i_24])))));
                        arr_83 [i_24] [i_24] [i_24] [i_24] [i_26] |= min((((((/* implicit */int) (signed char)82)) <= (((/* implicit */int) arr_68 [i_23 + 1] [13U] [i_24 - 1] [i_15 - 4])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= (13268940592560745612ULL))));
                    }
                }
            }
        }
        /* vectorizable */
        for (unsigned short i_27 = 2; i_27 < 19; i_27 += 3) 
        {
            var_57 = ((/* implicit */unsigned short) min((var_57), (((/* implicit */unsigned short) arr_72 [i_27] [i_15]))));
            var_58 = ((/* implicit */unsigned short) max((var_58), (((/* implicit */unsigned short) (-(((/* implicit */int) arr_46 [i_27 - 1])))))));
            arr_86 [i_15 + 2] [(short)20] &= ((/* implicit */_Bool) var_2);
            var_59 = ((/* implicit */long long int) max((var_59), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_15])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)120))))) ? (((/* implicit */int) arr_68 [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_61 [i_15 - 2] [i_15 + 1])))))));
            /* LoopNest 3 */
            for (int i_28 = 1; i_28 < 20; i_28 += 4) 
            {
                for (_Bool i_29 = 0; i_29 < 0; i_29 += 1) 
                {
                    for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_60 = ((/* implicit */_Bool) max((var_60), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_15 + 3] [(_Bool)1] [i_28] [i_27 + 2] [(_Bool)1])) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */int) (signed char)-122)) * (((/* implicit */int) arr_84 [(unsigned short)2] [(unsigned short)2])))))))));
                            arr_96 [i_15] [0U] [i_28] [0U] [i_15] &= ((/* implicit */int) ((unsigned long long int) arr_79 [i_15 - 3] [(_Bool)1] [i_28 + 1] [i_29] [i_30 - 1] [i_27 + 1] [i_15 + 1]));
                            var_61 = ((/* implicit */short) max((var_61), (((/* implicit */short) var_6))));
                            var_62 += ((/* implicit */short) ((signed char) arr_69 [(_Bool)1]));
                        }
                    } 
                } 
            } 
        }
        var_63 += ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_76 [i_15 - 3])))))))), (((((/* implicit */int) arr_71 [i_15 - 2] [i_15])) % (((/* implicit */int) arr_59 [i_15] [i_15 - 2]))))));
    }
    for (short i_31 = 0; i_31 < 10; i_31 += 3) 
    {
        arr_101 [i_31] [(signed char)8] &= ((/* implicit */unsigned char) -1038076046436684592LL);
        var_64 -= ((((((((/* implicit */int) var_7)) >= (((/* implicit */int) (unsigned short)65535)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_90 [i_31] [i_31] [i_31] [i_31]))) : (arr_60 [i_31] [i_31] [i_31] [i_31]))) == (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
    }
    /* vectorizable */
    for (unsigned short i_32 = 0; i_32 < 10; i_32 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_33 = 3; i_33 < 9; i_33 += 1) 
        {
            for (unsigned short i_34 = 1; i_34 < 7; i_34 += 4) 
            {
                {
                    var_65 -= ((unsigned short) arr_60 [i_34 + 1] [i_34 + 3] [i_33 - 1] [i_32]);
                    var_66 = ((/* implicit */int) min((var_66), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_31 [i_34 + 1] [i_33] [i_32] [i_32])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1))))))));
                }
            } 
        } 
        var_67 = ((/* implicit */unsigned int) max((var_67), (((/* implicit */unsigned int) ((int) ((((/* implicit */int) (signed char)-95)) / (((/* implicit */int) var_6))))))));
    }
    var_68 = ((/* implicit */unsigned short) min((var_68), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_6), (((/* implicit */unsigned short) max((((/* implicit */short) (signed char)-123)), (var_2))))))) == ((-(((/* implicit */int) var_2)))))))));
}
