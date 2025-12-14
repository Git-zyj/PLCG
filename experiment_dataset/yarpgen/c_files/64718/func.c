/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64718
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64718 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64718
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) 9223372036854775807LL)) ? (3093121189643897937LL) : (((/* implicit */long long int) ((/* implicit */int) var_19)))))))) < (((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) (((-2147483647 - 1)) % (((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))) % (min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_0] [i_1])) + (((/* implicit */int) var_8))))), (((long long int) var_17)))));
                var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((((/* implicit */unsigned int) -2147483638)) <= (2U))) && (var_14))))));
                var_22 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) (short)-28550))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 2; i_2 < 11; i_2 += 2) 
    {
        for (long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    for (int i_5 = 0; i_5 < 12; i_5 += 2) 
                    {
                        for (unsigned char i_6 = 3; i_6 < 9; i_6 += 1) 
                        {
                            {
                                var_23 |= (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_16), (((/* implicit */short) arr_0 [i_6]))))) ? ((-(((/* implicit */int) (short)30676)))) : (((((/* implicit */int) (short)28549)) & (var_5)))))));
                                arr_20 [i_4] [i_3] = (-(((/* implicit */int) arr_19 [i_2] [(signed char)2])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned long long int i_7 = 1; i_7 < 9; i_7 += 1) 
                {
                    arr_25 [11LL] [11LL] [i_7] = ((/* implicit */int) ((unsigned short) max(((-(((/* implicit */int) arr_22 [6ULL] [i_7] [i_7 + 2] [i_7 + 3])))), (min((((/* implicit */int) arr_4 [(unsigned short)16] [(unsigned char)4])), (673253503))))));
                    var_24 ^= ((/* implicit */unsigned short) (signed char)-19);
                }
                for (unsigned int i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    var_25 = ((/* implicit */unsigned char) ((((min((((/* implicit */int) var_11)), (673253497))) & (((/* implicit */int) min((var_18), (((/* implicit */short) (unsigned char)136))))))) == (((((/* implicit */_Bool) arr_19 [i_2] [i_2 - 2])) ? (((/* implicit */int) arr_19 [i_2] [i_2 - 2])) : (((/* implicit */int) arr_19 [i_2] [i_2 - 2]))))));
                    var_26 *= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_14 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 + 1] [i_2 + 1])) <= (((/* implicit */int) var_12))))) < (((/* implicit */int) arr_14 [i_2 - 1] [i_2 - 2] [i_2] [i_2] [i_2 + 1] [i_2 - 2]))));
                    arr_28 [i_2] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_3] [i_8])) - ((-(((var_5) + (-673253501)))))));
                }
                for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
                {
                    var_27 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_7 [i_9]))));
                    arr_31 [i_2] [i_3] [i_9] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_2] [0LL])) ? (arr_6 [i_9]) : (((/* implicit */long long int) ((/* implicit */int) (short)28550)))))) && (((((/* implicit */int) (short)-26065)) <= (((/* implicit */int) var_8)))))))) != (((((var_14) ? (1421635291710215034LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_9 [i_2])) : (((/* implicit */int) var_7)))))))));
                    var_28 ^= ((/* implicit */unsigned short) ((((/* implicit */int) max(((((_Bool)1) || ((_Bool)1))), (arr_27 [i_2] [i_3] [i_2] [i_2])))) & ((+(((/* implicit */int) var_2))))));
                }
                for (short i_10 = 1; i_10 < 8; i_10 += 2) 
                {
                    arr_35 [i_2 - 1] [i_3] [i_10] [i_10] = ((/* implicit */int) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) % (16030717593912480943ULL))) : (((/* implicit */unsigned long long int) arr_32 [i_2] [(short)2] [i_10] [i_10 + 2])))) + (((/* implicit */unsigned long long int) ((arr_17 [7LL] [i_2] [i_2 - 2] [i_2] [i_2 + 1] [i_2]) ? (((((/* implicit */int) arr_10 [i_10] [(short)2] [i_2])) ^ (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_22 [i_2 + 1] [i_10] [i_10] [i_10 + 3])))))));
                    arr_36 [i_2] [i_3] = ((short) (signed char)103);
                    var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_0 [i_10 + 1]) ? (((/* implicit */int) var_18)) : (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) arr_0 [i_2 - 1])), (-1))) : (((arr_0 [i_10 + 2]) ? (((/* implicit */int) arr_0 [i_2 - 1])) : (((/* implicit */int) arr_0 [i_10 + 3]))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 4) 
                    {
                        var_30 ^= ((/* implicit */short) (_Bool)1);
                        var_31 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned char)54)) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_11] [(short)1] [(short)1])))))));
                    }
                    for (unsigned short i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_13 = 0; i_13 < 12; i_13 += 1) 
                        {
                            var_32 = ((/* implicit */unsigned short) (+((~(2147483632LL)))));
                            var_33 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) arr_41 [i_2] [(_Bool)1] [i_13] [11LL] [(_Bool)1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_17))))));
                            arr_47 [i_12] [i_12] [i_12] [(_Bool)0] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9476)) ? (2147483643) : (((/* implicit */int) (unsigned char)49))))) && (((/* implicit */_Bool) ((unsigned long long int) var_18)))));
                        }
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) min((((/* implicit */int) (_Bool)1)), (arr_46 [i_12] [i_10] [i_10] [i_3] [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (((/* implicit */int) min((arr_1 [i_2]), (((/* implicit */unsigned short) arr_37 [i_2 - 1]))))) : (((((/* implicit */int) arr_42 [i_2] [i_3] [i_10] [i_10 + 4] [(short)5])) ^ (((/* implicit */int) (short)28549))))))) : (arr_32 [i_2] [(unsigned char)10] [i_12] [(unsigned short)11])));
                        /* LoopSeq 2 */
                        for (int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            arr_51 [i_2] [7LL] [i_2] [i_2] [i_2] &= ((/* implicit */int) max((((((2U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2] [i_2] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_12 [i_12] [i_12])) > (((/* implicit */int) arr_0 [i_2])))))) : (((arr_30 [i_2] [i_12] [i_14]) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_10]))))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) arr_10 [i_12] [i_10] [i_2 - 1]))))), (((arr_27 [i_2] [i_2] [i_2] [i_12]) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)14969))) : (arr_16 [i_14] [i_12] [i_10 + 3] [i_2] [i_2]))))))));
                            var_35 = (((+(((/* implicit */int) arr_19 [i_2 - 1] [i_12])))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_19 [i_3] [i_12])) : (((/* implicit */int) arr_19 [i_2 + 1] [i_2 - 2])))));
                            arr_52 [i_2 - 1] [i_2] [i_2] [i_2 - 2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3]))) + (min((((/* implicit */long long int) ((unsigned short) var_8))), (((long long int) var_14))))));
                        }
                        for (int i_15 = 0; i_15 < 12; i_15 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) (((((!(((/* implicit */_Bool) arr_53 [i_2] [i_2] [i_10] [i_12] [i_15] [i_15] [i_15])))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_15] [i_10 + 4] [i_3])) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_12] [(short)6] [(unsigned char)2] [i_12] [i_15] [i_15]))))))) ^ (((/* implicit */int) var_11)))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_41 [i_2] [i_2] [i_2] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_29 [i_3] [i_3] [i_2])))))) : (((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (signed char)103)))))));
                            arr_56 [i_15] [i_12] [i_12] [4] [i_3] [i_2] [i_2 - 1] &= ((/* implicit */unsigned char) ((_Bool) -15LL));
                        }
                    }
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) (((+(arr_50 [i_2] [i_3] [i_10 + 3] [i_3] [i_2]))) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_10] [i_2 - 2] [i_10] [i_10 - 1]))))))))));
                }
                var_39 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_2] [i_2])) & (((((/* implicit */_Bool) arr_4 [i_2 + 1] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_4 [i_2 - 1] [i_3]))))));
                var_40 = ((/* implicit */unsigned char) ((short) ((((/* implicit */int) arr_22 [(signed char)7] [i_3] [i_2 + 1] [i_3])) & (((/* implicit */int) arr_1 [i_2 + 1])))));
            }
        } 
    } 
    var_41 = ((/* implicit */unsigned short) max((var_41), (var_7)));
    /* LoopNest 3 */
    for (long long int i_16 = 1; i_16 < 11; i_16 += 1) 
    {
        for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
        {
            for (short i_18 = 3; i_18 < 11; i_18 += 1) 
            {
                {
                    var_42 |= ((/* implicit */unsigned long long int) arr_61 [i_17]);
                    arr_67 [i_16] [i_17] [i_17] [i_17] = ((/* implicit */unsigned short) min((((/* implicit */int) ((_Bool) arr_59 [(_Bool)1] [i_18 + 2] [i_18 - 2]))), (((arr_3 [i_16 + 2] [i_18 + 1]) ? (((/* implicit */int) arr_3 [i_16 - 1] [i_18 - 1])) : (((/* implicit */int) arr_59 [i_18 + 1] [i_16 - 1] [i_16]))))));
                }
            } 
        } 
    } 
}
