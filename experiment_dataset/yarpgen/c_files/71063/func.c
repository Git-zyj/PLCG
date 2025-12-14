/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71063
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
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */_Bool) min((arr_5 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967288U))))))));
                var_14 = ((/* implicit */unsigned int) (unsigned short)2672);
                /* LoopSeq 1 */
                for (unsigned short i_2 = 1; i_2 < 21; i_2 += 2) 
                {
                    var_15 = ((((long long int) max((262143U), (((/* implicit */unsigned int) arr_4 [i_0] [i_0] [i_2]))))) <= (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1)))));
                    /* LoopSeq 3 */
                    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned short) (+(min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_7 [i_0] [12ULL] [i_2 + 1] [i_3])) : (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [2ULL])))), (((/* implicit */int) min((arr_6 [i_0] [(signed char)19] [i_0] [i_0]), (((/* implicit */unsigned short) var_1)))))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            arr_14 [i_0] [i_0] [i_2 - 1] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_8 [i_0] [i_1] [i_2 - 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) (!((_Bool)1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1])))))))) ? (arr_5 [(signed char)14] [i_4]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) arr_9 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) max(((_Bool)1), ((_Bool)1))))) : (((((/* implicit */_Bool) arr_1 [i_2 + 1] [i_2 + 1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                            var_17 ^= (_Bool)1;
                            var_18 = ((/* implicit */_Bool) var_8);
                            var_19 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0]))))) ? ((+(((/* implicit */int) arr_6 [i_0] [(unsigned short)9] [7LL] [i_1])))) : (((/* implicit */int) (signed char)127))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_20 = ((/* implicit */_Bool) ((var_12) ? ((((+(((/* implicit */int) var_7)))) / (((/* implicit */int) ((signed char) arr_13 [i_2] [i_1] [(unsigned short)0]))))) : (((/* implicit */int) (unsigned short)31744))));
                            var_21 = ((/* implicit */long long int) (_Bool)1);
                        }
                        for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                        {
                            var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [14LL] [(unsigned short)11] [i_2 + 1] [i_2 + 1])) || (((/* implicit */_Bool) arr_2 [i_0] [14LL])))))));
                            var_23 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_6 [(signed char)14] [i_1] [i_3] [i_2]))))) ? (((/* implicit */int) arr_9 [i_2])) : ((-(((/* implicit */int) arr_11 [i_0] [i_0] [i_2] [i_3] [i_3]))))))), (min((min((((/* implicit */long long int) var_0)), (arr_8 [i_0] [i_1] [i_2 - 1] [(_Bool)1]))), (((/* implicit */long long int) arr_11 [i_0] [(signed char)13] [i_0] [i_3] [i_6]))))));
                            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((arr_3 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_10 [i_1] [i_1] [i_2 + 1])))))) ? (((min((((/* implicit */unsigned long long int) arr_16 [i_6] [i_0] [i_2 + 1] [(_Bool)1] [i_6] [i_2] [i_2])), (arr_12 [i_0] [i_1] [i_6]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2 - 1] [i_2] [i_2 + 1] [i_2 - 1] [i_6]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) 9497480559340824121ULL))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) arr_15 [i_6])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_1] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) var_6)) - (21213)))))) == (((((/* implicit */_Bool) arr_6 [16ULL] [(signed char)1] [i_2 + 1] [i_3])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_8 [(unsigned short)18] [i_2] [i_3] [i_6]))))));
                            var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (arr_8 [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1])))) ? (((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_3])))) % (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) arr_18 [i_0] [i_1] [i_2] [i_2] [i_1])))))))) : (max((((unsigned long long int) var_9)), ((+(0ULL)))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_7 = 1; i_7 < 21; i_7 += 2) 
                        {
                            arr_24 [i_7 - 1] [i_3] [i_3] [i_1] [(_Bool)1] [i_1] [(signed char)6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_7 + 1] [i_1] [i_1] [i_3] [i_0]))));
                            var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_1] [i_3])) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)0)))) < (((((/* implicit */_Bool) arr_20 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27504))) : (var_8)))))) : (((/* implicit */int) var_12))));
                        }
                    }
                    /* vectorizable */
                    for (long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) + ((+(((/* implicit */int) (_Bool)1))))));
                        var_28 = ((/* implicit */unsigned long long int) arr_11 [i_2] [i_2 - 1] [i_2 - 1] [i_2] [i_2]);
                        arr_27 [i_0] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_2 + 1] [(signed char)21] [i_1] [i_8] [i_8])) : (((/* implicit */int) ((_Bool) var_9)))));
                        /* LoopSeq 2 */
                        for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) ((((_Bool) (signed char)1)) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_8] [i_9] [i_1] [i_1] [i_2 - 1])) : (((arr_9 [i_9]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_1] [i_2 - 1] [i_1] [i_8] [i_9]))))));
                            var_30 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_9] [i_2 - 1] [i_2 - 1] [i_1]))));
                        }
                        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
                        {
                            var_31 = ((/* implicit */signed char) ((_Bool) arr_22 [i_1] [i_2 - 1] [i_2 - 1] [i_10 + 1] [i_10] [i_10 + 1] [i_10 + 1]));
                            var_32 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_10 + 1] [i_2 + 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (var_10) : (var_5)))) : (arr_5 [i_2 - 1] [i_10])));
                        }
                    }
                    for (unsigned short i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_33 += ((/* implicit */signed char) (~(min((((/* implicit */int) arr_31 [i_11] [i_2 - 1] [(_Bool)1] [i_11] [0ULL] [i_0] [(_Bool)1])), ((~(((/* implicit */int) arr_18 [i_0] [(_Bool)1] [(signed char)6] [i_11] [i_11]))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_12 = 0; i_12 < 22; i_12 += 3) 
                        {
                            var_34 = ((/* implicit */_Bool) ((unsigned int) arr_23 [i_2] [i_2 + 1] [i_2] [15LL] [i_2 - 1]));
                            var_35 = ((/* implicit */_Bool) (+(262163U)));
                        }
                        var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_2 + 1]))) : (min((((/* implicit */long long int) arr_17 [i_0] [i_11] [i_2] [18LL] [i_11])), (arr_8 [16LL] [i_1] [i_2] [i_11])))))), (var_11))))));
                        var_37 &= ((/* implicit */signed char) ((unsigned long long int) (+(((/* implicit */int) ((_Bool) var_10))))));
                    }
                }
            }
        } 
    } 
    var_38 = ((/* implicit */signed char) min((min((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) var_12))))), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9)))))), (((/* implicit */int) var_12))));
    var_39 = ((/* implicit */_Bool) (((((-(var_5))) + (9223372036854775807LL))) << (((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) & (var_3)))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_11) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))))) - (5188648710468740805ULL)))));
}
