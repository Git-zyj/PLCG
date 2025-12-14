/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8299
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
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_10 += ((/* implicit */long long int) var_8);
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            var_11 *= ((/* implicit */unsigned int) (+(arr_0 [i_1 + 1] [i_1 + 1])));
            var_12 = ((/* implicit */int) min((var_12), (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) <= (arr_1 [i_0] [i_1 + 1]))) ? (6760198420395746239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((13417570227378733534ULL) <= (((/* implicit */unsigned long long int) 9223372036854775807LL)))))))))));
            var_13 = ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1]))) <= (arr_3 [(short)15] [(short)15]))) ? (((/* implicit */unsigned long long int) arr_3 [(short)17] [i_1 + 1])) : ((~(11686545653313805377ULL))));
            /* LoopSeq 2 */
            for (int i_2 = 1; i_2 < 17; i_2 += 4) 
            {
                var_14 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 + 1]))) + (arr_1 [i_1 + 1] [(signed char)15])));
                var_15 ^= ((/* implicit */short) arr_8 [i_0] [i_0] [i_1] [11ULL]);
            }
            for (int i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                arr_12 [12ULL] [i_0] [i_3] = ((/* implicit */long long int) ((1619963063U) | (3717842373U)));
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 11686545653313805376ULL))));
                var_17 = ((/* implicit */unsigned long long int) (~((~(arr_8 [i_0] [i_1] [i_1] [i_1])))));
                /* LoopNest 2 */
                for (signed char i_4 = 1; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 2) 
                    {
                        {
                            arr_18 [i_0] [i_0] [i_1] [i_3] [i_4] [i_5 + 1] = ((/* implicit */long long int) var_8);
                            var_18 = ((/* implicit */short) var_2);
                        }
                    } 
                } 
            }
        }
    }
    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 17; i_7 += 3) 
        {
            for (long long int i_8 = 0; i_8 < 17; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 3; i_9 < 15; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 17; i_10 += 3) 
                        {
                            {
                                var_19 ^= ((/* implicit */unsigned short) ((unsigned char) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_0)))));
                                arr_32 [i_6] [i_6] [i_6] [i_7] [5] [i_6] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-((+(var_0)))))), (((((/* implicit */_Bool) arr_14 [i_9 + 1] [i_9 + 2] [i_9] [i_9 - 3] [i_9])) ? (6760198420395746239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9 + 1] [i_7] [i_6] [i_6] [(short)0])))))));
                            }
                        } 
                    } 
                    arr_33 [i_7] [i_7] = ((/* implicit */unsigned long long int) max((min((((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_7] [1LL] [(signed char)15] [2])) ? (arr_21 [3U] [i_8]) : (((/* implicit */int) arr_23 [i_6] [i_7] [i_7] [i_8])))), (((/* implicit */int) arr_13 [i_6] [i_7] [i_8] [i_6] [i_6] [(unsigned short)10])))), (((/* implicit */int) ((unsigned char) ((long long int) arr_21 [i_7] [i_6]))))));
                    var_20 = ((/* implicit */long long int) ((arr_25 [(unsigned char)5] [i_7] [i_7] [(short)4]) ? (((unsigned long long int) min((((/* implicit */unsigned short) arr_5 [i_6])), (arr_31 [i_6] [i_7] [i_8] [i_7] [i_7] [(_Bool)1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 34359476224LL)) < (13417570227378733562ULL)))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-116)) ? (11686545653313805377ULL) : (13417570227378733534ULL)))) ? (((/* implicit */unsigned long long int) 288195191779622912LL)) : (11686545653313805387ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 6760198420395746238ULL))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) /* same iter space */
    {
        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (~(((/* implicit */int) var_2)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32768)) ? (((/* implicit */int) (unsigned short)22552)) : ((-(((/* implicit */int) arr_31 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])))))))));
        /* LoopSeq 1 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_23 = ((/* implicit */unsigned long long int) arr_26 [i_11] [i_11]);
            /* LoopNest 3 */
            for (long long int i_13 = 4; i_13 < 15; i_13 += 1) 
            {
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (short i_15 = 2; i_15 < 15; i_15 += 4) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) max((((11686545653313805377ULL) | (((((/* implicit */_Bool) (unsigned char)210)) ? (((/* implicit */unsigned long long int) arr_19 [i_11])) : (6760198420395746238ULL))))), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(short)15] [(unsigned char)16] [i_13] [7] [i_15] [3ULL]))) - (983040U)))) ? (min((11686545653313805377ULL), (((/* implicit */unsigned long long int) arr_35 [i_11])))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))))))))))));
                            var_25 *= ((/* implicit */unsigned long long int) ((((_Bool) arr_4 [i_11])) ? (((int) (unsigned short)835)) : (((arr_4 [i_12 - 1]) ? (((/* implicit */int) arr_4 [(signed char)10])) : (((/* implicit */int) arr_4 [i_11]))))));
                            var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)30171), (((/* implicit */unsigned short) arr_24 [(unsigned short)13]))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_4)), ((unsigned short)22184)))) : (((/* implicit */int) min((var_4), (((/* implicit */short) (signed char)-16)))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 8279052730122948966ULL)) ? (13911236387639229774ULL) : (11686545653313805378ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_11] [i_12] [(signed char)8] [i_15])) ? (((/* implicit */int) (unsigned short)43351)) : (((/* implicit */int) (unsigned short)22187))))) : (((((/* implicit */_Bool) -2828634973547745731LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_13]))) : (arr_2 [6LL] [i_14] [i_15]))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_26 [i_15] [i_15])))))));
                        }
                    } 
                } 
            } 
        }
    }
    for (int i_16 = 1; i_16 < 18; i_16 += 1) 
    {
        var_27 = (~((~(25165824))));
        arr_50 [i_16] [i_16] = max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_49 [i_16 + 1]))))), (max((((/* implicit */unsigned long long int) arr_48 [i_16 - 1])), (arr_47 [i_16 + 1] [i_16 + 1]))));
        arr_51 [i_16] [i_16] = ((/* implicit */long long int) ((((/* implicit */_Bool) -3021322589145483783LL)) ? (((((arr_49 [i_16]) && (((/* implicit */_Bool) 5299994957755540645ULL)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_16]))) : (arr_47 [9U] [15LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) : (max((arr_47 [i_16] [i_16 + 1]), ((-(5977579278759170863ULL)))))));
    }
    var_28 = ((/* implicit */unsigned long long int) ((_Bool) var_8));
    var_29 = ((/* implicit */_Bool) -1034385660);
}
