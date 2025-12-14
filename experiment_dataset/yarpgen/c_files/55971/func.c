/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55971
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55971 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55971
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
    for (unsigned short i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0 + 1] [(short)8] |= ((/* implicit */_Bool) ((arr_0 [i_0 - 1]) / (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 3 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_1 [i_0 - 1])) : ((-(((/* implicit */int) arr_1 [i_0 - 1]))))));
                /* LoopSeq 3 */
                for (unsigned long long int i_3 = 3; i_3 < 10; i_3 += 1) 
                {
                    arr_11 [i_1] [i_2] [i_0] [i_1] = ((/* implicit */_Bool) min((-229257020718985126LL), (((/* implicit */long long int) -1704715715))));
                    /* LoopSeq 3 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                    {
                        arr_14 [i_4] [i_4] [i_1] [i_2] [i_1] [6] [i_0] = ((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0 - 1] [i_0])))));
                        var_13 = ((/* implicit */long long int) (~(arr_7 [1LL] [i_2] [i_3 - 3])));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                    {
                        arr_18 [i_1] [i_1] [i_1] = max((14747760811208049347ULL), (((/* implicit */unsigned long long int) 0U)));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_5] = ((/* implicit */unsigned long long int) ((short) (short)0));
                        var_14 = ((/* implicit */unsigned char) (+(arr_16 [i_1] [(short)4] [i_0] [i_3])));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_1] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) -229257020718985109LL)) / (arr_4 [i_1] [i_2] [i_6]))) >> (((arr_8 [i_3 + 1] [i_3 + 1] [i_3]) - (6264767764784864898LL)))));
                        var_15 += ((/* implicit */signed char) arr_21 [i_6] [i_3] [i_2] [(unsigned short)8] [4LL] [i_0]);
                    }
                }
                for (signed char i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    arr_26 [i_0] [10ULL] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) max(((+(max((arr_5 [(unsigned short)6] [8U]), (((/* implicit */unsigned long long int) arr_6 [i_2] [i_7])))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_9 [i_7] [i_1])) ? (var_9) : (((/* implicit */long long int) 944362720U)))), (((/* implicit */long long int) arr_7 [i_0 + 1] [i_0 + 1] [i_0 + 1])))))));
                    arr_27 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((arr_22 [i_0] [i_1] [(unsigned short)5] [(unsigned short)5] [i_7]) > (-229257020718985126LL))) || (var_10)))), (min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)14257))))), (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1] [i_1] [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
                    var_16 = ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */long long int) ((unsigned int) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1]))) < (((arr_8 [(_Bool)1] [(_Bool)1] [i_0 + 1]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)51278))))))))));
                }
                /* vectorizable */
                for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        arr_33 [i_1] [i_1] [i_1] [i_1] [i_9] [i_0] [i_8] = (i_1 % 2 == 0) ? (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((var_5) >> (((((/* implicit */int) arr_9 [i_0] [i_1])) - (38453)))))) : ((+(229257020718985109LL)))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((var_5) >> (((((((/* implicit */int) arr_9 [i_0] [i_1])) - (38453))) + (19628)))))) : ((+(229257020718985109LL))))));
                        var_17 = ((/* implicit */unsigned long long int) (-(-229257020718985109LL)));
                        arr_34 [i_1] [(short)10] [i_8] [(signed char)1] = ((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_8] [i_1]);
                        arr_35 [i_0] [i_0] [i_0] [(signed char)6] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((var_8) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
                        var_18 = (unsigned short)42898;
                    }
                    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [0ULL])) ? (((/* implicit */int) (unsigned short)58030)) : (((var_10) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_11))))));
                    var_20 = ((/* implicit */int) max((var_20), ((~(((/* implicit */int) arr_6 [(signed char)10] [5LL]))))));
                    arr_36 [i_1] = ((/* implicit */_Bool) (~(((/* implicit */int) var_1))));
                }
                /* LoopSeq 1 */
                for (unsigned int i_10 = 1; i_10 < 9; i_10 += 3) 
                {
                    arr_39 [i_1] = ((/* implicit */signed char) arr_29 [i_10] [5ULL]);
                    arr_40 [i_0] [i_1] [i_2] [i_1] = (+(((/* implicit */int) (unsigned short)51278)));
                }
                arr_41 [i_0] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((unsigned long long int) (unsigned short)14257)) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_0 + 1] [i_0 - 1] [i_1] [i_0 + 1] [i_0]))))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)47)) || (((/* implicit */_Bool) var_1))))))));
            }
            for (long long int i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
            {
                arr_46 [i_1] [i_11] = (i_1 % 2 == 0) ? (((/* implicit */unsigned short) ((((229257020718985096LL) << (((arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_1]) - (467945635U))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22637)))))))) : (((/* implicit */unsigned short) ((((229257020718985096LL) << (((((arr_17 [i_0 - 1] [i_0 - 1] [i_0] [i_1]) - (467945635U))) - (2949887588U))))) <= (((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)22637))))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 2; i_12 < 8; i_12 += 1) 
                {
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        {
                            var_21 = (~((~((~(((/* implicit */int) (signed char)-79)))))));
                            arr_53 [i_0 + 1] [i_1] = ((/* implicit */signed char) (~(min((((/* implicit */unsigned int) arr_15 [i_0] [(short)8] [i_1] [i_0] [i_0 + 1])), ((+(var_8)))))));
                            var_22 *= ((/* implicit */signed char) min((-1687854584), (((/* implicit */int) (signed char)-16))));
                            arr_54 [i_1] = ((/* implicit */int) min((max((229257020718985126LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_25 [i_13] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) var_6))))))), (((/* implicit */long long int) (unsigned short)58413))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (int i_14 = 3; i_14 < 9; i_14 += 4) 
                {
                    arr_59 [i_1] [i_1] [i_11] [i_14] = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 229257020718985125LL)) ? (-1901600554) : (((/* implicit */int) (unsigned short)48))))), (arr_38 [i_14 - 2] [1] [2U] [1LL] [i_0 - 1] [i_0])));
                    arr_60 [(unsigned short)1] [(unsigned short)0] [i_11] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_1] [3] [i_14] [(unsigned short)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_14 + 1] [3U] [i_1] [(_Bool)1] [1LL]))) : (-5453039627529862275LL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */int) arr_43 [3ULL] [i_1] [i_0] [(_Bool)1])))) > (((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_14] [i_14] [i_14])))))))) : (((((/* implicit */_Bool) var_7)) ? ((-(1352409005))) : (((/* implicit */int) ((((/* implicit */int) (signed char)-50)) <= (((/* implicit */int) var_2)))))))));
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 1) 
                {
                    arr_64 [i_0] [i_1] [i_1] [3] = ((/* implicit */int) (+(arr_17 [i_0] [i_15] [i_11] [i_1])));
                    arr_65 [i_1] [i_1] = ((/* implicit */unsigned char) 18446744073709551615ULL);
                }
                for (unsigned int i_16 = 0; i_16 < 11; i_16 += 1) 
                {
                    arr_68 [i_0] [i_0] [i_16] [i_1] [i_1] = ((/* implicit */int) min((((unsigned long long int) (signed char)42)), (((/* implicit */unsigned long long int) arr_22 [i_0] [i_0] [i_11] [i_0] [6ULL]))));
                    arr_69 [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_61 [i_16] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1])) ? (var_5) : (((/* implicit */int) arr_61 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))) >= ((~(var_7)))));
                }
                arr_70 [i_1] [i_1] [i_11] = ((/* implicit */unsigned int) (((~(var_9))) & (((/* implicit */long long int) ((((((/* implicit */int) (short)-1272)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) 1704715714)) || (((/* implicit */_Bool) (unsigned short)51272))))) - (1))))))));
            }
            for (long long int i_17 = 0; i_17 < 11; i_17 += 4) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((arr_48 [i_0 - 1]) | (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [4LL] [4LL] [6LL])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(_Bool)1]))) : (arr_38 [i_0] [i_1] [i_1] [i_0] [i_0] [i_1])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((-1352409008) < (((/* implicit */int) (unsigned char)150)))))))))))));
                /* LoopNest 2 */
                for (long long int i_18 = 3; i_18 < 9; i_18 += 1) 
                {
                    for (unsigned char i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)22637)) == (arr_73 [0LL] [i_19] [i_17])));
                            var_25 = ((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_74 [i_19] [(short)0] [i_17] [i_0 - 1] [i_0 - 1]))))), (((((/* implicit */_Bool) arr_76 [i_1] [i_1] [i_17] [(unsigned char)3] [(unsigned char)3] [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_19]))) : (arr_0 [i_18]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((1360807571U) == (((/* implicit */unsigned int) ((/* implicit */int) (signed char)42))))))));
                            var_26 = ((/* implicit */long long int) ((unsigned long long int) arr_12 [(unsigned char)4] [i_1] [7LL]));
                            arr_80 [i_1] [i_17] [i_1] = arr_63 [i_0] [(unsigned short)8] [i_1] [i_18 - 2] [i_19];
                        }
                    } 
                } 
            }
            var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned char)106)) ? (-1901600554) : (((/* implicit */int) (signed char)-79)))), (((/* implicit */int) arr_77 [i_0] [i_1] [(signed char)4] [i_1]))));
        }
    }
    var_28 = ((/* implicit */short) var_3);
}
