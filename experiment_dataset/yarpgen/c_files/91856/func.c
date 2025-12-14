/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91856
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
    var_18 = ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_12 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */signed char) (-((+(((/* implicit */int) var_11))))));
                    var_19 = ((/* implicit */_Bool) (~(((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)62))) <= (var_12)))))))));
                }
            } 
        } 
    } 
    var_20 += ((/* implicit */_Bool) var_0);
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
    {
        for (long long int i_4 = 3; i_4 < 16; i_4 += 3) 
        {
            {
                /* LoopSeq 4 */
                for (signed char i_5 = 4; i_5 < 16; i_5 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) 
                    {
                        var_21 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_3] [i_4 - 3]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_4 - 3]))) : (((((/* implicit */_Bool) arr_13 [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11092362993974113631ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_4])) ? (((-6844072475553223321LL) & (((/* implicit */long long int) 4294967295U)))) : (((/* implicit */long long int) ((unsigned int) (unsigned short)21870))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_7 = 0; i_7 < 18; i_7 += 3) 
                        {
                            arr_26 [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */short) (+(((/* implicit */int) arr_19 [i_3] [i_4 - 2] [i_4 - 2] [i_6] [i_5 - 1]))));
                            arr_27 [i_7] [(unsigned short)15] [i_3] [i_7] [i_7] [(unsigned short)15] [i_7] = ((/* implicit */short) ((arr_17 [i_4 + 2] [i_4 + 2]) + (((/* implicit */long long int) var_7))));
                            var_22 ^= ((/* implicit */_Bool) ((short) arr_14 [i_5]));
                            var_23 = ((/* implicit */signed char) (-(((/* implicit */int) ((11092362993974113631ULL) < (((/* implicit */unsigned long long int) -6844072475553223317LL)))))));
                        }
                        var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 7406792712834286070ULL))));
                    }
                    var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_18 [i_3])), (6844072475553223320LL)))) ? (var_5) : (((/* implicit */int) var_9))))), (min(((+(4000865631U))), (((/* implicit */unsigned int) arr_20 [i_3] [i_4] [(_Bool)1])))))))));
                    /* LoopNest 2 */
                    for (short i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        for (unsigned short i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            {
                                var_26 -= ((/* implicit */long long int) ((max((((/* implicit */long long int) var_9)), (((((/* implicit */_Bool) arr_19 [i_9] [5] [i_4] [i_4] [i_3])) ? (((/* implicit */long long int) arr_25 [i_3] [i_4 - 2] [i_5] [i_8] [i_5] [i_3])) : (arr_22 [i_3] [i_3] [i_4] [i_5] [i_5] [i_8] [i_9]))))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))))))));
                                var_27 = ((/* implicit */signed char) ((((((/* implicit */int) arr_21 [i_4 - 2] [i_5 - 1])) + (((/* implicit */int) (short)-27895)))) % (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_10 = 3; i_10 < 17; i_10 += 3) 
                    {
                        for (short i_11 = 1; i_11 < 15; i_11 += 3) 
                        {
                            {
                                var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_14 [i_3])))) ? (max((((/* implicit */long long int) var_13)), (arr_22 [(signed char)4] [(signed char)4] [i_4] [i_4] [(short)9] [(signed char)4] [(signed char)4]))) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? (var_5) : (max(((~(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) (unsigned short)0)) - (((/* implicit */int) arr_19 [i_3] [i_4] [i_5 - 3] [i_10 - 1] [i_10 - 1]))))))));
                                arr_39 [i_3] [i_4] [i_11] [i_3] [i_3] [i_5] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_15 [i_3] [i_3])), (arr_30 [15] [i_4 - 3] [i_4] [i_4 - 1])));
                            }
                        } 
                    } 
                }
                for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 3) 
                {
                    var_29 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)78)) >> (((11092362993974113620ULL) - (11092362993974113595ULL)))));
                    var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) (+(((/* implicit */int) arr_13 [i_4 - 3]))))) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_4))) | (((/* implicit */long long int) ((/* implicit */int) var_9))))))));
                }
                for (int i_13 = 3; i_13 < 17; i_13 += 3) 
                {
                    arr_47 [(unsigned short)8] &= ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((59513417) / (((/* implicit */int) arr_44 [i_3] [i_4]))))), (arr_22 [i_3] [i_4] [i_4] [i_13] [i_13] [i_13] [(signed char)15])))));
                    var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((_Bool) var_17))) : (((/* implicit */int) arr_43 [i_4 - 3] [i_4 + 1] [i_4 - 3] [i_13 - 2])))))))));
                    var_32 *= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_18 [i_13 - 1])), (var_3)));
                }
                for (short i_14 = 1; i_14 < 16; i_14 += 3) 
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (short)22312))) : (-2453998680154889632LL)))) ? (((/* implicit */int) min((var_11), (((/* implicit */short) var_10))))) : (((/* implicit */int) arr_23 [i_3] [i_3] [i_4] [i_4]))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) max((var_8), (((/* implicit */signed char) arr_15 [i_4 + 2] [i_4 + 1])))))));
                    var_34 &= (-(((((/* implicit */_Bool) (~(arr_42 [(unsigned short)5] [10LL] [i_14] [(signed char)11])))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_44 [i_3] [i_4])))));
                }
                /* LoopNest 2 */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 3) 
                {
                    for (int i_16 = 3; i_16 < 17; i_16 += 3) 
                    {
                        {
                            var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) (~(7354381079735437984ULL))))));
                            var_36 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_16)) + (((/* implicit */int) var_8))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_11))));
                            /* LoopSeq 2 */
                            for (short i_17 = 0; i_17 < 18; i_17 += 3) 
                            {
                                var_37 += ((/* implicit */signed char) (~(((/* implicit */int) ((_Bool) arr_29 [i_4 + 2] [i_4 + 2] [i_4 + 2] [i_16 + 1])))));
                                var_38 = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) arr_23 [i_4 - 1] [i_4 + 1] [i_16 - 2] [i_16 - 2])) ? (11092362993974113623ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_40 [i_3] [i_4])) > (((/* implicit */int) arr_38 [i_3] [i_3] [i_4 - 2] [i_15] [i_16] [i_17]))))))))));
                                var_39 *= ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_54 [i_4 - 3] [i_16 - 3] [i_4 - 3] [i_16 - 3] [i_17] [i_16 - 3] [i_16])) ? (((/* implicit */int) arr_54 [i_4 - 3] [i_16 - 3] [i_15] [i_16] [i_17] [i_16] [i_15])) : (((/* implicit */int) arr_54 [i_4 - 3] [i_16 - 3] [i_4 - 3] [i_16 - 2] [i_16 - 3] [i_4 + 2] [i_17]))))));
                                var_40 = ((/* implicit */_Bool) arr_13 [(short)7]);
                            }
                            for (unsigned int i_18 = 1; i_18 < 15; i_18 += 3) 
                            {
                                var_41 *= ((/* implicit */short) (signed char)127);
                                arr_58 [i_3] [i_4 - 1] [(signed char)3] [i_15] [i_4 - 1] [i_15] = ((((/* implicit */int) (_Bool)1)) * (arr_31 [i_3] [i_3]));
                                var_42 ^= ((/* implicit */unsigned short) var_1);
                            }
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (signed char i_19 = 0; i_19 < 18; i_19 += 3) 
                {
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                        {
                            {
                                var_43 = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)1)), (arr_38 [i_3] [(short)0] [i_19] [i_3] [(short)0] [i_21])))), ((~(((unsigned long long int) var_5))))));
                                arr_67 [i_3] = ((/* implicit */long long int) var_17);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
