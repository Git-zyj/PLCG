/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69226
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69226 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69226
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) min((var_17), ((-(((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_7)))))))));
        var_18 = ((/* implicit */short) (~(arr_1 [i_0 - 1])));
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned long long int i_2 = 1; i_2 < 20; i_2 += 1) 
            {
                for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                    {
                        {
                            var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [i_2 + 1] [i_2 + 1] [i_2 + 1]))));
                            var_20 *= ((/* implicit */long long int) var_4);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (int i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                /* LoopSeq 3 */
                for (short i_6 = 1; i_6 < 19; i_6 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_7 = 1; i_7 < 17; i_7 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((int) arr_2 [i_6 + 2])))));
                        var_22 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_17 [i_0 - 1])) : (((/* implicit */int) arr_17 [i_0 - 1]))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_8 = 3; i_8 < 17; i_8 += 2) 
                    {
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (var_9) : (((/* implicit */unsigned long long int) arr_14 [i_6 + 2] [i_6] [i_6 + 2] [i_5]))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_17 [i_6])))))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_8])) ? ((-(6068109549174968227ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    }
                    for (unsigned short i_9 = 3; i_9 < 19; i_9 += 3) 
                    {
                        arr_26 [i_0] [i_0] [i_5] [i_6] [i_9 - 1] = ((((/* implicit */_Bool) 6068109549174968227ULL)) ? (-434474598) : (434474597));
                        arr_27 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((long long int) arr_1 [i_0]));
                    }
                    /* LoopSeq 3 */
                    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_30 [i_0 - 1] [i_0] [i_0 - 1] [i_5] [i_0] [i_10] [i_10] = ((/* implicit */int) arr_7 [i_6 + 1] [i_0 - 1]);
                        arr_31 [i_10] [i_0] [i_6 + 1] [i_1] [i_1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] [i_0] [i_0 - 1]))));
                    }
                    for (long long int i_11 = 3; i_11 < 18; i_11 += 1) 
                    {
                        var_25 = (((-(var_9))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_6 - 1] [i_1] [i_11 + 1] [i_6]))));
                        var_26 = ((/* implicit */signed char) arr_22 [i_0] [i_0] [i_0] [i_0] [i_0]);
                    }
                    for (unsigned long long int i_12 = 3; i_12 < 20; i_12 += 4) 
                    {
                        arr_40 [i_0] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_36 [i_12])) % (arr_10 [i_0] [i_1] [i_5] [i_6 + 2] [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : ((+(var_9))));
                        arr_41 [i_0] [i_0] = ((/* implicit */unsigned short) ((((unsigned long long int) (-9223372036854775807LL - 1LL))) / (((/* implicit */unsigned long long int) arr_0 [i_0 - 1] [i_6 + 1]))));
                        arr_42 [i_1] [i_1] [i_0] [i_1] [i_1] [i_1] = (-(var_6));
                        var_27 = ((((/* implicit */_Bool) ((arr_14 [i_1] [i_5] [i_6] [i_0]) & (((/* implicit */int) var_4))))) ? (((/* implicit */int) (!((_Bool)0)))) : ((-(((/* implicit */int) var_4)))));
                        var_28 -= ((/* implicit */long long int) ((unsigned short) arr_9 [i_12] [i_12 + 1] [i_12 + 1]));
                    }
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) ((434474597) >> (((((((/* implicit */_Bool) (short)18218)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (3534967698U)))));
                    arr_46 [i_0] [i_5] [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) arr_18 [i_0] [i_1] [i_5]);
                    var_30 = (+((~(((/* implicit */int) arr_35 [i_0] [i_0] [i_5] [i_5] [i_13])))));
                }
                for (signed char i_14 = 0; i_14 < 21; i_14 += 3) 
                {
                    var_31 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    /* LoopSeq 1 */
                    for (int i_15 = 2; i_15 < 20; i_15 += 1) 
                    {
                        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_15 - 1] [i_5] [i_15 + 1] [i_15] [i_15] [i_15])) ? (((((/* implicit */int) arr_38 [i_5] [i_5] [i_1] [i_5] [i_5] [i_14] [i_5])) ^ (((/* implicit */int) (short)-18218)))) : (((/* implicit */int) ((short) 9223372036854775807LL))))))));
                        var_33 = ((/* implicit */unsigned long long int) var_11);
                        var_34 = ((/* implicit */long long int) var_10);
                        arr_51 [i_15] [i_0] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 4157123025381074887ULL)) ? (((/* implicit */int) arr_2 [i_0])) : ((-(-434474598)))));
                        var_35 = ((/* implicit */short) ((unsigned int) arr_19 [(unsigned char)15] [i_1] [i_5] [i_5]));
                    }
                }
                arr_52 [i_0] [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((arr_18 [i_0] [i_1] [i_5]) >= ((-(((/* implicit */int) (unsigned char)131))))));
                var_36 = ((/* implicit */_Bool) 9269324781843316759ULL);
            }
            for (unsigned int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((unsigned int) (_Bool)1)) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_47 [i_0] [i_0] [i_0] [i_0] [3U] [i_0])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (short)29159)))))));
                var_38 = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) var_9))) % (arr_28 [i_0] [1U] [i_0 - 1] [i_0 - 1] [i_0 - 1])));
                var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) var_5))));
                var_40 = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0]);
                arr_56 [(short)10] [i_0] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(var_3))))));
            }
        }
        for (long long int i_17 = 0; i_17 < 21; i_17 += 3) 
        {
            arr_60 [i_0] [i_17] = ((/* implicit */unsigned short) var_12);
            arr_61 [i_0] [i_0] = ((/* implicit */unsigned char) (-(arr_39 [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_0 - 1] [i_0])));
        }
    }
    for (unsigned char i_18 = 0; i_18 < 11; i_18 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_19 = 1; i_19 < 9; i_19 += 1) 
        {
            arr_68 [i_18] = var_0;
            arr_69 [i_18] [i_18] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_7), (((/* implicit */unsigned long long int) min((var_3), (((/* implicit */unsigned int) (-2147483647 - 1))))))))) ? ((+(((((/* implicit */_Bool) (unsigned char)125)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)131)))))) : (((/* implicit */int) var_11))));
            arr_70 [i_19 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_57 [i_19 - 1] [i_19] [i_19 - 1]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned long long int) (-(var_6)))) : (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (arr_57 [i_19 - 1] [i_19] [i_19 - 1])))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_20 = 0; i_20 < 11; i_20 += 3) 
            {
                arr_73 [i_20] [i_19 - 1] [i_18] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) (short)11346)) : (((/* implicit */int) (_Bool)1))));
                arr_74 [i_20] [i_19] = ((/* implicit */unsigned char) var_16);
            }
        }
        var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((+(((/* implicit */int) arr_7 [i_18] [i_18])))) : ((-(((/* implicit */int) ((unsigned short) 596672087))))))))));
    }
    for (unsigned long long int i_21 = 3; i_21 < 13; i_21 += 1) 
    {
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_21 - 3] [i_21] [i_21 - 2])) ? (((/* implicit */int) arr_9 [i_21 - 3] [i_21 + 1] [i_21 - 3])) : (((/* implicit */int) arr_9 [i_21 + 2] [i_21 + 2] [i_21 + 2]))))) : (arr_34 [i_21 + 2] [i_21 + 2] [13ULL] [i_21 + 2] [i_21])));
        arr_79 [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) % ((~(arr_29 [12])))));
        arr_80 [i_21] [i_21] = ((/* implicit */int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_12)), (arr_8 [i_21] [i_21])))) ? (((((/* implicit */_Bool) 1825928746175326584ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (18446744073709551615ULL))) : (((/* implicit */unsigned long long int) arr_37 [i_21] [12U])))) == (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-18218)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_1))))) ? (((/* implicit */int) var_10)) : ((~(((/* implicit */int) var_11)))))))));
    }
    var_43 = ((/* implicit */unsigned short) (-((-(((/* implicit */int) ((((/* implicit */int) (short)(-32767 - 1))) == (((/* implicit */int) var_10)))))))));
}
