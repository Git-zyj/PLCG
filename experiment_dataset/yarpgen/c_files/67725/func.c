/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67725
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
    var_13 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_0)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 17; i_1 += 2) /* same iter space */
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) arr_3 [i_0]))));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)197))) == (((2580252729U) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0])))))))) << (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) 4294967295U)))))))));
        }
        for (signed char i_2 = 0; i_2 < 17; i_2 += 2) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
            {
                for (unsigned int i_4 = 0; i_4 < 17; i_4 += 2) 
                {
                    {
                        var_16 *= ((/* implicit */_Bool) var_0);
                        var_17 = ((/* implicit */unsigned short) min((((/* implicit */short) var_2)), (var_8)));
                        arr_11 [i_0] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) 2580252729U);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_5 = 0; i_5 < 17; i_5 += 4) 
            {
                for (long long int i_6 = 0; i_6 < 17; i_6 += 4) 
                {
                    {
                        var_18 = arr_14 [i_6] [i_5] [i_2] [i_0];
                        var_19 ^= ((/* implicit */unsigned int) arr_7 [i_0] [i_2] [i_2]);
                    }
                } 
            } 
            arr_18 [i_0] = (+((-(((/* implicit */int) (unsigned char)252)))));
        }
        for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
        {
            arr_21 [i_0] [i_0] [i_7] = ((/* implicit */long long int) arr_19 [i_0] [i_7]);
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 15; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) -13)))))))) <= (var_4)));
                        var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_10 = 1; i_10 < 14; i_10 += 2) 
                        {
                            arr_31 [i_7] [i_7] [(short)14] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((4294967295U) != (((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_9] [i_7] [i_0])) << (((arr_19 [i_0] [i_8 + 1]) - (3981739826U))))))));
                            arr_32 [i_10] [i_9] [i_0] [i_7] [16ULL] = ((/* implicit */unsigned char) ((2580252748U) != (arr_5 [i_10 + 2] [i_9] [i_8 + 1])));
                            arr_33 [i_0] [i_9] [i_8] [i_7] [i_7] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)65532)) >> (((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) arr_17 [i_0] [i_0] [i_7] [i_8 + 1] [i_9] [i_10])))))));
                            var_22 = ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)186)));
                            arr_34 [i_7] [i_7] [i_7] [i_8] [i_9] [i_8] [i_10] = ((/* implicit */unsigned char) (unsigned short)0);
                        }
                        for (unsigned int i_11 = 1; i_11 < 15; i_11 += 1) 
                        {
                            arr_37 [i_11] [i_8 + 1] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_7] [i_8 + 1] [i_9] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_14 [i_11] [13U] [i_8 - 1] [i_0])) != (var_1))))) : ((-9223372036854775807LL - 1LL))));
                            arr_38 [i_7] [i_7] [i_7] = ((/* implicit */short) var_3);
                        }
                        for (signed char i_12 = 2; i_12 < 14; i_12 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) var_10))));
                            var_24 = ((/* implicit */short) min((var_24), (((/* implicit */short) ((((/* implicit */int) arr_35 [i_12 - 2] [i_12 - 1] [i_8 - 1])) ^ (((((/* implicit */_Bool) arr_35 [i_12 + 2] [i_12 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_35 [i_12 + 3] [i_12 - 1] [i_8 + 2])) : (((/* implicit */int) var_3)))))))));
                            var_25 = ((/* implicit */_Bool) var_9);
                        }
                    }
                } 
            } 
            /* LoopSeq 4 */
            for (unsigned short i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                arr_44 [i_0] [i_7] [i_13] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_24 [i_13] [i_13] [i_7] [i_0])) == (((/* implicit */int) var_3))));
                /* LoopSeq 1 */
                for (short i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    arr_49 [i_7] = ((/* implicit */unsigned short) var_8);
                    var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 21)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)14))))))));
                }
                arr_50 [i_0] [i_7] [i_13] [i_13] = ((/* implicit */_Bool) (((!((!(((/* implicit */_Bool) arr_10 [15U] [i_7] [i_13] [i_7] [i_13] [i_13])))))) ? (max((arr_27 [i_13] [i_7] [i_7] [i_0]), (arr_4 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                arr_51 [i_0] [i_7] [15U] = ((/* implicit */unsigned long long int) ((8388352U) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)-12378))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)14)))))));
            }
            for (unsigned int i_15 = 2; i_15 < 13; i_15 += 4) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 2) 
                {
                    arr_57 [(unsigned char)10] [i_7] [i_15 + 3] [i_0] [i_16] [i_15] = ((/* implicit */short) arr_39 [i_0] [i_0] [i_0] [1] [i_0]);
                    arr_58 [i_7] [i_16] [i_0] = var_6;
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (short i_17 = 4; i_17 < 14; i_17 += 2) 
                {
                    arr_62 [i_0] [i_7] [i_7] [i_15] [i_17 - 4] = ((/* implicit */long long int) ((((/* implicit */int) (short)-16258)) + (((/* implicit */int) arr_40 [i_17 + 1] [i_17 - 4] [i_17 - 3] [i_17 + 1] [i_17 + 2]))));
                    arr_63 [i_0] [i_0] [i_7] [i_15 + 1] [i_17 - 3] = ((/* implicit */unsigned long long int) 5U);
                }
                for (unsigned char i_18 = 4; i_18 < 13; i_18 += 4) 
                {
                    var_27 = ((/* implicit */unsigned long long int) ((((-1LL) + (9223372036854775807LL))) >> (24ULL)));
                    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) (~((-(((/* implicit */int) (unsigned short)1)))))))));
                    var_29 ^= ((/* implicit */unsigned int) 2147483633);
                }
                var_30 *= ((/* implicit */unsigned short) var_1);
                arr_66 [i_7] [i_0] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) && (((/* implicit */_Bool) ((arr_27 [i_15 + 3] [i_15 + 3] [i_15 - 1] [i_15 + 3]) >> (((arr_27 [i_15 - 1] [i_15 - 2] [i_15 - 1] [i_15 - 2]) - (1359483061445670490ULL))))))));
            }
            for (int i_19 = 0; i_19 < 17; i_19 += 4) 
            {
                var_31 ^= ((/* implicit */signed char) (unsigned short)1154);
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)2692)) != (-33554432)));
                            arr_75 [i_20] [i_7] [i_19] [i_20] [i_21] = ((/* implicit */signed char) (~(min((((((/* implicit */int) var_8)) - (2147483637))), (((/* implicit */int) (!(arr_1 [i_19]))))))));
                            var_33 *= ((/* implicit */int) var_5);
                            var_34 = ((/* implicit */long long int) var_7);
                            arr_76 [i_0] [i_7] [i_19] [i_20] [i_21] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)135))) == ((-(arr_12 [i_0] [i_7] [i_20])))));
                        }
                    } 
                } 
                var_35 ^= ((/* implicit */_Bool) (short)8);
            }
            for (short i_22 = 0; i_22 < 17; i_22 += 1) 
            {
                var_36 = ((/* implicit */unsigned char) var_1);
                arr_80 [i_7] [i_7] [i_22] = ((/* implicit */_Bool) (unsigned short)192);
                arr_81 [i_0] [i_7] = ((/* implicit */int) var_7);
                arr_82 [i_7] [i_7] [i_7] [i_7] = ((/* implicit */short) (unsigned char)249);
                /* LoopSeq 1 */
                for (unsigned int i_23 = 1; i_23 < 14; i_23 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_24 = 0; i_24 < 17; i_24 += 2) 
                    {
                        var_37 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8701))) != (8980783124774856588LL)));
                        arr_88 [i_24] [i_7] [i_24] [i_7] [i_7] = ((/* implicit */unsigned char) (~((-(((/* implicit */int) (unsigned char)133))))));
                    }
                    /* LoopSeq 1 */
                    for (short i_25 = 1; i_25 < 14; i_25 += 1) 
                    {
                        arr_91 [i_22] [i_23 + 3] [i_7] = ((/* implicit */_Bool) (unsigned short)62827);
                        var_38 = ((/* implicit */short) 1U);
                        var_39 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_25 + 1] [i_23 + 3] [i_23 + 1] [i_23 + 1]))));
                    }
                    var_40 ^= ((/* implicit */long long int) arr_90 [i_0] [i_0] [i_7] [i_0] [i_23] [(unsigned short)7]);
                }
            }
            arr_92 [i_7] [i_7] [i_7] = ((/* implicit */short) ((arr_77 [i_0] [i_7] [i_7] [i_7]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned char)151)))));
            var_41 ^= ((/* implicit */unsigned char) max(((~(((/* implicit */int) (short)14964)))), ((+(((/* implicit */int) (unsigned short)62835))))));
        }
        var_42 = ((/* implicit */long long int) arr_84 [i_0] [i_0] [i_0] [i_0]);
    }
}
