/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77058
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
    var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) var_4)) < (min((((/* implicit */int) var_13)), (var_1)))))))));
    var_21 = ((/* implicit */int) min((var_21), (var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 21; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        var_22 += ((/* implicit */_Bool) (~((~(1229342356U)))));
                        var_23 = ((/* implicit */unsigned long long int) var_14);
                    }
                    for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) (-(max((((/* implicit */unsigned int) arr_2 [i_2 + 2] [i_2 + 3] [(short)4])), (max((3065624939U), (((/* implicit */unsigned int) (_Bool)1))))))));
                        var_24 = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (short)-4))) >> ((+(((/* implicit */int) arr_3 [i_2 + 1] [i_2 - 1] [i_2]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_5 = 2; i_5 < 22; i_5 += 3) 
                        {
                            var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((short) 3065624939U)))));
                            arr_17 [(signed char)22] [i_4] [20U] [i_4] [i_4] [i_4] [i_5] = ((/* implicit */signed char) max((((((_Bool) arr_14 [8LL] [i_1] [i_2 + 1] [i_4] [i_0] [8LL] [i_1])) ? (((((/* implicit */_Bool) 17642220945094036350ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)768))) : (11536212622665836374ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [(unsigned char)10] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_5]))) : (arr_1 [i_4])))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-27)))))));
                            var_26 |= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(2080768)))) != (arr_0 [i_0] [i_1])));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 24; i_6 += 4) 
                        {
                            arr_20 [i_0] [i_0] [8LL] [i_0] [i_0] = ((/* implicit */short) (~((~(-4640919)))));
                            var_27 &= ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_1] [i_1] [i_2] [i_4] [15U]))));
                            var_28 |= ((/* implicit */long long int) var_1);
                        }
                    }
                    for (unsigned short i_7 = 0; i_7 < 24; i_7 += 2) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [22] = ((((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_17)))) ? (((/* implicit */int) (short)-18190)) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 3221225472U)) < (11536212622665836369ULL)))))) + (2147483647))) >> (((((((/* implicit */_Bool) arr_14 [i_2 - 2] [i_2] [i_2] [19U] [19U] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) * (3065624939U)))) : ((-(var_17))))) - (3065624917ULL))));
                        arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (8815972439097631061LL) : (((/* implicit */long long int) var_11))))))) ? (((arr_10 [i_2 + 1] [i_1] [16ULL] [i_2 + 1]) & (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_2 + 2] [i_1] [i_2 + 2] [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_13 [i_0])) || (((/* implicit */_Bool) (signed char)18))))))))));
                    }
                    var_29 = ((/* implicit */int) arr_0 [i_0] [i_0]);
                    var_30 = (-(((/* implicit */int) ((_Bool) (-(arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [i_2 - 1]))))));
                    arr_25 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_2] [i_1] [i_1] [i_0] [10ULL])) ? (((/* implicit */int) arr_22 [i_1] [i_1] [i_2] [i_2 - 2])) : (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62616))))));
                    var_31 = ((/* implicit */short) max((1850169086), (max(((+(((/* implicit */int) (signed char)-24)))), (((/* implicit */int) arr_21 [i_2] [i_2 + 2] [i_2 + 1]))))));
                }
                for (unsigned long long int i_8 = 3; i_8 < 23; i_8 += 1) /* same iter space */
                {
                    var_32 = ((/* implicit */unsigned int) max((((((/* implicit */int) (!(var_13)))) >= (((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) ? (arr_15 [i_0] [i_0] [(short)21] [i_0] [i_0] [i_0]) : (((/* implicit */int) var_8)))))), ((!(((/* implicit */_Bool) 902738092279086585ULL))))));
                    arr_28 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_21 [(unsigned short)1] [i_1] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)-18404))) : (arr_26 [i_0] [13ULL] [i_1] [13ULL]))), (((/* implicit */long long int) (-(((/* implicit */int) var_8)))))))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (35184372088576ULL)))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        var_33 *= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
                        arr_31 [i_0] [21ULL] [i_0] [4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) 4294967295U))) || (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (signed char)-27)) != (((/* implicit */int) (short)15872))))) + (((/* implicit */int) (short)6718)))))));
                    }
                    for (int i_10 = 0; i_10 < 24; i_10 += 3) 
                    {
                        arr_34 [i_0] [(_Bool)1] [i_8] [i_10] [i_8] [i_10] |= ((/* implicit */short) ((35184372088596ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_8 - 1] [i_1] [i_0])))));
                        arr_35 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((/* implicit */int) ((((/* implicit */long long int) -909463231)) == (8384512LL)))) * (((/* implicit */int) arr_7 [i_8] [i_8] [i_8])));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)0)))))))));
                    }
                    var_35 = max((arr_8 [i_0] [i_0] [(signed char)8] [i_1] [i_0] [5]), (((((/* implicit */_Bool) ((short) (signed char)-120))) ? ((~(((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)163))))))));
                    arr_36 [i_0] [22ULL] [i_8] [i_8] = ((/* implicit */unsigned int) (~(((((/* implicit */int) arr_7 [i_0] [i_0] [i_8 - 3])) & (((/* implicit */int) (short)-18190))))));
                }
                for (unsigned long long int i_11 = 3; i_11 < 23; i_11 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(arr_10 [i_0] [i_1] [i_11] [(_Bool)1])))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned char)158)) == (1073741824)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)88)) != (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)27)))))))));
                    var_37 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) (unsigned short)37891)))) : (((/* implicit */int) ((signed char) (_Bool)1)))))) ? (var_7) : ((+(((/* implicit */int) (unsigned short)62616))))));
                }
                for (unsigned long long int i_12 = 1; i_12 < 22; i_12 += 2) 
                {
                    var_38 = ((/* implicit */unsigned short) max((var_38), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((short) var_2))))))))));
                    var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_5)))))));
                    var_40 = ((/* implicit */unsigned short) (~(min((arr_11 [i_0] [i_0] [16LL] [i_1] [i_12] [i_12 + 2]), (((/* implicit */long long int) ((int) arr_41 [i_0] [i_0] [i_0] [i_0])))))));
                }
                var_41 = ((/* implicit */int) (-(arr_0 [i_0] [i_1])));
                var_42 |= max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_1] [i_1] [i_0]))) == (arr_9 [i_1] [i_1] [(signed char)20] [i_0])))), ((-(arr_26 [i_0] [i_0] [i_0] [i_0]))));
                var_43 = ((/* implicit */short) ((((/* implicit */int) (short)-24396)) + (268435424)));
            }
        } 
    } 
}
