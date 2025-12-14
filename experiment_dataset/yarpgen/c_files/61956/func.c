/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61956
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
    var_15 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_2), (var_11))))) >= (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */int) (unsigned char)191)) : (((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) var_8)) ? (8565050078751121652ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) : (min((((/* implicit */unsigned long long int) (unsigned char)1)), (8565050078751121668ULL)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (var_13)))));
        var_16 = ((/* implicit */unsigned long long int) (signed char)-96);
        var_17 ^= ((/* implicit */int) var_7);
        var_18 = ((/* implicit */int) ((unsigned long long int) 8565050078751121647ULL));
        var_19 &= ((/* implicit */unsigned int) arr_1 [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned char i_1 = 4; i_1 < 9; i_1 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_9 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_7 [i_2] [i_2] [i_2]))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1 + 2]))));
            arr_10 [i_2] [i_2] [i_1 - 1] = ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_1 [i_1 + 2] [i_2])) : (((/* implicit */int) arr_7 [i_1] [i_1 + 3] [i_2])));
        }
        for (signed char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            arr_13 [i_1] [i_1 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)193)) && (((/* implicit */_Bool) 8565050078751121633ULL))));
            arr_14 [i_3] [(_Bool)1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_1 [i_3] [i_3]))));
            var_20 = ((/* implicit */unsigned short) arr_6 [i_1 - 1] [i_3] [i_3]);
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_1] [i_1 - 4] [i_3])) + (var_6)));
            var_22 = ((/* implicit */long long int) ((7368364467598200649ULL) - (var_7)));
        }
        for (int i_4 = 1; i_4 < 9; i_4 += 4) 
        {
            var_23 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) 26U)) : (14ULL)));
            var_24 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_4 - 1])) && (((/* implicit */_Bool) arr_3 [i_4 + 2]))));
        }
        /* LoopSeq 1 */
        for (int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned char i_7 = 2; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned short) -9223372036854775793LL);
                            var_26 = ((/* implicit */short) ((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7] [i_7] [i_7 + 1] [i_7 + 1])))));
                        }
                    } 
                } 
            } 
            var_27 = ((/* implicit */signed char) (-(var_14)));
            var_28 = var_10;
            /* LoopSeq 3 */
            for (long long int i_9 = 0; i_9 < 12; i_9 += 1) 
            {
                arr_33 [i_1 - 2] [i_5] [i_5] [i_1 - 2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned int) arr_6 [i_1] [i_5] [i_9])))));
                var_29 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [10LL] [10LL] [i_5] [i_9]))));
            }
            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                var_30 = ((/* implicit */int) (_Bool)1);
                /* LoopNest 2 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        {
                            arr_42 [i_12] [i_11] [i_11] [5LL] [i_1] = ((/* implicit */short) arr_22 [i_10] [i_10] [i_12]);
                            arr_43 [i_1 - 2] [i_11] [i_1] [i_1] [i_1] = arr_39 [0U] [i_11] [i_11] [i_5] [i_1];
                        }
                    } 
                } 
            }
            for (long long int i_13 = 3; i_13 < 8; i_13 += 3) 
            {
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_13))));
                var_32 = ((/* implicit */unsigned long long int) ((((10610432937284773177ULL) >= (8565050078751121661ULL))) ? (((/* implicit */long long int) arr_12 [i_13 - 3] [i_1 + 3])) : (var_8)));
                var_33 = ((((/* implicit */_Bool) arr_41 [i_1 + 3] [i_1 + 2] [i_13 + 1] [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 4])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_1 + 3] [i_1 + 2] [i_13 + 1] [i_13 + 2] [i_13 + 2] [i_13 + 2]))));
            }
        }
        var_34 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_1 - 2])) & (((/* implicit */int) arr_20 [i_1 - 2]))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_35 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) arr_0 [i_14] [i_14])) ? (var_7) : (((/* implicit */unsigned long long int) arr_0 [i_14] [i_14])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (unsigned short)255))))));
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_48 [i_14])) : (var_6)))) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_14)) : (var_12))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_48 [i_14]), (arr_48 [i_14])))))));
        arr_49 [(unsigned short)1] [i_14] = ((/* implicit */signed char) (_Bool)1);
    }
    var_37 = ((/* implicit */unsigned short) var_3);
    /* LoopSeq 1 */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_16 = 0; i_16 < 14; i_16 += 4) 
        {
            arr_56 [i_16] [i_15] [i_16] = ((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) ((18446744073709551615ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) >> (((((var_6) + (var_1))) + (1074276743)))));
            var_38 = ((/* implicit */signed char) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) == ((+(var_8))))) ? (((/* implicit */int) arr_1 [i_15] [i_16])) : (arr_0 [i_15] [i_16])));
            var_39 -= ((/* implicit */short) arr_53 [i_16] [i_16]);
            var_40 = ((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) arr_51 [i_15] [i_16])), (((((/* implicit */_Bool) arr_51 [i_15] [i_16])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
        }
        arr_57 [i_15] = ((/* implicit */unsigned int) arr_55 [i_15] [i_15]);
        arr_58 [i_15] [i_15] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (arr_55 [i_15] [i_15]) : (((/* implicit */unsigned long long int) min((3353718907U), (((/* implicit */unsigned int) arr_51 [i_15] [i_15]))))))), (((((/* implicit */_Bool) var_1)) ? ((((_Bool)1) ? (var_7) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_14) != (var_8)))))))));
        /* LoopSeq 4 */
        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 4) 
        {
            arr_62 [i_15] [i_17] = ((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((_Bool) arr_47 [i_17] [i_15])))));
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) 8565050078751121645ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_53 [i_15] [i_17])))) : (18U)));
        }
        for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
        {
            var_42 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_53 [i_15] [i_15]))));
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) (~(((9223372036854775807LL) & (((/* implicit */long long int) ((/* implicit */int) (signed char)18))))))))));
            var_44 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (_Bool)1)), (((((((/* implicit */_Bool) arr_54 [i_15] [i_15] [i_15])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) 17U)))) + (((arr_55 [(_Bool)1] [i_18]) | (((/* implicit */unsigned long long int) arr_0 [i_15] [i_18]))))))));
        }
        /* vectorizable */
        for (unsigned int i_19 = 0; i_19 < 14; i_19 += 1) 
        {
            var_45 = ((/* implicit */unsigned int) min((var_45), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((unsigned int) (_Bool)1))))));
            /* LoopNest 2 */
            for (unsigned char i_20 = 0; i_20 < 14; i_20 += 4) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_46 = ((/* implicit */unsigned long long int) ((unsigned short) arr_51 [i_15] [i_15]));
                        arr_73 [i_15] [i_15] [i_20] [i_21] = ((/* implicit */_Bool) (~((-(arr_63 [(short)12])))));
                    }
                } 
            } 
            arr_74 [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) >= (var_9)));
        }
        /* vectorizable */
        for (unsigned char i_22 = 0; i_22 < 14; i_22 += 2) 
        {
            var_47 = ((/* implicit */long long int) ((_Bool) var_14));
            var_48 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
            arr_78 [i_15] [i_22] [i_15] = (i_15 % 2 == 0) ? (((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_15] [i_22])) >> (((((/* implicit */int) arr_53 [i_15] [i_15])) - (19607)))))) : (((/* implicit */unsigned char) ((((/* implicit */int) arr_53 [i_15] [i_22])) >> (((((((/* implicit */int) arr_53 [i_15] [i_15])) - (19607))) + (1514))))));
            arr_79 [i_15] = ((/* implicit */unsigned long long int) arr_52 [i_15]);
        }
        /* LoopSeq 1 */
        for (int i_23 = 0; i_23 < 14; i_23 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 4) 
            {
                var_49 = ((/* implicit */short) var_7);
                /* LoopSeq 4 */
                for (unsigned int i_25 = 4; i_25 < 12; i_25 += 4) 
                {
                    arr_88 [i_15] [i_23] [i_15] [i_25 - 2] = ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_70 [i_23] [i_23] [1ULL] [i_25 + 2] [1ULL] [i_25]))))) * (var_7));
                    var_50 = ((/* implicit */signed char) -502045717);
                    arr_89 [i_15] [i_15] [i_24] [i_25 - 2] = ((/* implicit */unsigned int) var_2);
                }
                for (int i_26 = 0; i_26 < 14; i_26 += 1) 
                {
                    arr_92 [i_24] [i_15] = min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (signed char)113)), (arr_50 [i_15])))), ((~(137438953471ULL))));
                    arr_93 [i_26] [i_23] [i_15] [i_26] [i_23] [i_24] = ((/* implicit */unsigned long long int) var_11);
                    var_51 = ((/* implicit */short) -1347903015);
                    arr_94 [i_15] [i_23] [i_15] [i_26] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned long long int) 0U))) ? (max((min((((/* implicit */unsigned int) arr_1 [i_23] [i_23])), (var_5))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_50 [i_15]))) & (arr_85 [i_15] [i_15] [i_23] [i_24] [i_26] [i_26]))))) : (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)16128)) : (((/* implicit */int) var_2)))))))));
                }
                for (unsigned int i_27 = 0; i_27 < 14; i_27 += 1) 
                {
                    var_52 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_75 [i_27] [i_27])) ? (((/* implicit */unsigned long long int) min((arr_52 [i_15]), (18U)))) : (var_4)));
                    arr_97 [i_15] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((signed char) (signed char)32))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65513))))), ((-(6U)))))));
                    var_53 = max((max((((/* implicit */unsigned long long int) (-(arr_67 [i_15] [i_15] [i_24])))), (arr_91 [i_15] [i_15] [i_15] [i_27]))), (((/* implicit */unsigned long long int) max((((/* implicit */int) arr_81 [i_15])), (arr_66 [i_23] [i_27])))));
                }
                /* vectorizable */
                for (signed char i_28 = 4; i_28 < 13; i_28 += 3) 
                {
                    arr_101 [i_15] [i_28] [i_15] [i_15] = ((/* implicit */unsigned short) ((arr_60 [i_15]) ? ((~(arr_82 [i_15]))) : ((-(-1347903003)))));
                    /* LoopSeq 1 */
                    for (short i_29 = 0; i_29 < 14; i_29 += 4) 
                    {
                        var_54 = ((/* implicit */_Bool) var_14);
                        arr_106 [i_29] [i_28] [i_15] [i_23] [i_15] = 9647087323657136689ULL;
                        var_55 = ((/* implicit */unsigned char) 2147483647ULL);
                        var_56 = ((/* implicit */int) ((((/* implicit */int) arr_102 [i_15] [i_23] [i_24] [i_28 + 1] [i_29] [i_28 - 1] [4U])) >= (-1347903012)));
                    }
                }
            }
            for (signed char i_30 = 0; i_30 < 14; i_30 += 4) 
            {
                var_57 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_65 [i_15] [i_15] [i_15]))))) != (max((((/* implicit */unsigned long long int) var_2)), (arr_91 [i_15] [i_23] [i_30] [i_23])))));
                var_58 = ((/* implicit */_Bool) min((((/* implicit */int) min((arr_1 [i_15] [i_23]), (arr_1 [i_15] [i_23])))), (2147483647)));
                var_59 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_51 [i_15] [i_15])) & (((/* implicit */int) (short)4))));
            }
            for (unsigned short i_31 = 0; i_31 < 14; i_31 += 2) 
            {
                var_60 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_111 [i_23] [i_15] [i_31] [i_15])) ? (1610612736) : (arr_111 [i_15] [i_15] [i_31] [i_15])))) >= ((+(min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (24U)))))));
                /* LoopSeq 1 */
                for (unsigned char i_32 = 0; i_32 < 14; i_32 += 4) 
                {
                    var_61 = ((/* implicit */long long int) var_12);
                    arr_114 [i_15] [i_31] [i_23] [i_15] = ((/* implicit */int) (unsigned char)236);
                }
                arr_115 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned int) var_1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7128914534354473689ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)239))) : (-8749286719973090816LL)))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_109 [i_15] [i_23] [i_15])) * (18446744073709551608ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 8191ULL)))) : ((~(var_9)))))));
            }
            arr_116 [i_15] [i_23] [4] = ((/* implicit */unsigned long long int) (((~(var_14))) + (((/* implicit */long long int) ((/* implicit */int) var_10)))));
            var_62 = (!(((/* implicit */_Bool) ((short) var_6))));
            arr_117 [i_15] [i_15] [i_15] = ((/* implicit */int) min((arr_68 [i_15] [i_23] [i_23]), (((/* implicit */unsigned short) ((_Bool) arr_68 [i_23] [i_15] [i_15])))));
        }
    }
    var_63 = ((/* implicit */unsigned long long int) 268435456U);
}
