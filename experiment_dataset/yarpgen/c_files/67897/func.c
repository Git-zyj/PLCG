/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67897
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (var_10)))) ? (((/* implicit */int) ((var_11) > (((/* implicit */long long int) var_1))))) : (min((((/* implicit */int) var_8)), (var_2)))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_11)))) : (((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */unsigned long long int) var_11))))))));
    var_16 = max((((long long int) min((var_10), (((/* implicit */int) var_7))))), (((/* implicit */long long int) (+(max((((/* implicit */int) var_14)), (var_2)))))));
    var_17 = ((/* implicit */long long int) (((((+(((/* implicit */int) var_7)))) | (((/* implicit */int) max((var_3), (var_3)))))) % (var_2)));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_18 -= ((/* implicit */signed char) ((min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) var_8)))), (((/* implicit */int) var_9)))) * (((/* implicit */int) (!(((((/* implicit */int) var_12)) < (((/* implicit */int) arr_1 [i_0] [i_0])))))))));
                /* LoopSeq 3 */
                for (unsigned char i_2 = 4; i_2 < 19; i_2 += 4) 
                {
                    var_19 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_6))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : ((+(arr_2 [i_0 - 2] [i_1] [i_0 - 2]))))) >> (((((/* implicit */int) max((arr_1 [i_0 - 2] [i_2 - 1]), (arr_1 [i_0 - 1] [i_2 + 1])))) - (83)))));
                    arr_8 [4LL] = ((((((/* implicit */_Bool) ((int) var_8))) && (((/* implicit */_Bool) max((((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [5LL])), (var_1)))))) || (((/* implicit */_Bool) ((((((/* implicit */int) var_12)) + (((/* implicit */int) arr_1 [i_1] [i_1])))) | (((((/* implicit */int) var_9)) % (((/* implicit */int) var_9))))))));
                    var_20 *= ((/* implicit */signed char) (+(((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0])) >= (((/* implicit */int) arr_4 [i_0]))))) + ((~(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
                    arr_9 [i_0 - 3] [i_0 - 3] [i_1] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (max((((/* implicit */int) var_14)), (var_4)))))) ? ((+(((/* implicit */int) arr_0 [i_2 + 1])))) : (((((/* implicit */int) min((arr_3 [i_1] [i_1]), (var_3)))) + (((/* implicit */int) min((var_8), (var_12))))))));
                }
                for (unsigned long long int i_3 = 0; i_3 < 21; i_3 += 3) 
                {
                    arr_12 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */int) var_5)) >= ((~(((((/* implicit */int) var_14)) & (((/* implicit */int) var_6))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (((((/* implicit */int) ((arr_0 [i_1]) || (((/* implicit */_Bool) var_7))))) != (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1]))))))));
                    var_22 -= ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) ((var_6) ? (((/* implicit */unsigned long long int) var_2)) : (arr_10 [i_0] [i_1] [(signed char)17])))) && (((/* implicit */_Bool) min((arr_7 [i_3]), (arr_7 [i_3])))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (arr_11 [i_3])))) ? ((-(arr_11 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_7)) | (((/* implicit */int) arr_7 [i_1]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_3 [i_1] [i_3])) : (var_4))))))))));
                }
                for (int i_4 = 0; i_4 < 21; i_4 += 4) 
                {
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_4] [i_1] [i_0] [i_0]))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        var_24 += ((/* implicit */short) ((((((/* implicit */int) var_9)) + (((/* implicit */int) var_8)))) / (((/* implicit */int) ((unsigned char) var_11)))));
                        var_25 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) >> (((((/* implicit */int) arr_1 [i_1] [i_1])) - (90)))))) > (var_0)));
                    }
                    for (short i_6 = 0; i_6 < 21; i_6 += 4) 
                    {
                        var_26 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [10LL] [i_6] [i_4])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_18 [i_0] [i_1] [i_4] [i_6])))))))));
                        var_27 = ((/* implicit */short) arr_11 [i_6]);
                        arr_23 [i_0] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) arr_0 [i_4])), (var_11))))), (((arr_10 [i_0 + 1] [i_0 + 1] [i_6]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) var_4)) != (var_11)))))))));
                    }
                    for (unsigned char i_7 = 1; i_7 < 19; i_7 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (short i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_28 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_1 [i_8] [i_1])) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) arr_21 [i_1] [i_7])) & (((/* implicit */int) arr_5 [(unsigned char)15] [i_0] [(short)10])))))) | (max((var_2), (((((/* implicit */_Bool) arr_10 [i_1] [i_8] [i_4])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))));
                            var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_26 [i_8] [i_7 + 2] [i_0 + 1] [i_0] [i_0 + 1] [i_0 - 1]))))) ? (((((/* implicit */int) arr_5 [i_0 + 1] [i_0 - 3] [i_7 + 2])) >> (((/* implicit */int) ((arr_11 [i_1]) != (((/* implicit */long long int) ((/* implicit */int) var_7)))))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_14)) / (var_1)))) ? (var_2) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))));
                            var_30 += ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 3])))))));
                            arr_30 [i_0] [i_0] [6] &= ((/* implicit */long long int) ((int) ((short) ((arr_25 [i_0 - 3] [i_1] [20] [i_1]) >= (((/* implicit */long long int) ((/* implicit */int) var_14)))))));
                            var_31 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0 + 1] [i_0 + 1] [i_0] [i_0])) < (((/* implicit */int) var_9)))))))), ((-(((var_0) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_4] [i_1])))))))));
                        }
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            arr_34 [i_7] = ((/* implicit */short) ((((/* implicit */int) arr_19 [i_4] [(unsigned char)1] [i_4] [i_1])) ^ (((/* implicit */int) arr_31 [i_0] [i_1] [i_7 + 1] [i_9]))));
                            arr_35 [i_0] [i_1] [i_4] [i_7] [i_7] = ((/* implicit */signed char) ((arr_25 [i_0 - 1] [i_7 + 1] [i_0] [i_0 - 1]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9])) ? (var_10) : (var_2))))));
                            arr_36 [i_0] [i_1] [i_1] [i_1] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_17 [i_0] [i_1] [i_4] [i_4] [i_9] [i_7])) : (var_4))) - (((/* implicit */int) ((((/* implicit */int) arr_31 [i_9] [i_7] [i_4] [i_0])) >= (((/* implicit */int) arr_14 [8ULL] [i_4] [i_9])))))));
                        }
                        for (signed char i_10 = 0; i_10 < 21; i_10 += 1) 
                        {
                            arr_39 [(unsigned char)16] [i_1] [(unsigned char)16] [i_4] [i_1] [i_7] [i_10] = min((((((/* implicit */long long int) ((/* implicit */int) var_12))) % (max((var_11), (((/* implicit */long long int) arr_14 [i_0] [i_7] [i_10])))))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_4), (((/* implicit */int) var_9))))) ? (((var_2) / (((/* implicit */int) arr_13 [i_0] [i_0 - 3] [i_0] [i_0])))) : (((((/* implicit */int) var_14)) ^ (((/* implicit */int) var_7))))))));
                            var_32 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (arr_10 [i_0 - 3] [i_0 + 1] [i_0 - 1]))) < (((/* implicit */unsigned long long int) ((int) arr_10 [i_0 - 2] [i_0 + 1] [i_0 - 2])))));
                            arr_40 [i_0] [i_4] [i_0] [i_4] [11ULL] = ((/* implicit */short) max((((/* implicit */int) arr_18 [i_0 - 1] [i_0] [i_0] [i_0])), (((((((/* implicit */int) var_9)) > (((/* implicit */int) arr_15 [i_0] [i_1] [i_1] [i_0])))) ? (((/* implicit */int) min((var_14), (((/* implicit */unsigned char) var_6))))) : (((/* implicit */int) arr_6 [i_0] [i_1] [i_0] [i_0]))))));
                        }
                        var_33 += ((/* implicit */unsigned char) var_4);
                        var_34 = ((/* implicit */long long int) min(((((~(var_0))) > (((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) - (((/* implicit */int) arr_20 [i_7]))))))), (((arr_17 [i_0] [i_0] [i_0] [i_0 - 3] [i_0] [i_0]) && (((/* implicit */_Bool) var_9))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_11 = 1; i_11 < 18; i_11 += 4) 
                        {
                            arr_44 [i_11] [i_7] [(short)12] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 3])) ? (arr_38 [i_11]) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */int) arr_15 [i_0] [i_0 + 1] [i_0] [i_0 - 3])) : (((/* implicit */int) ((unsigned char) arr_5 [i_1] [i_1] [i_1])))));
                            arr_45 [i_7] [i_7] [i_7 - 1] [i_4] [i_1] [5U] [i_0] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_7 + 2] [i_11 - 1])) ? (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [5])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_11])))))));
                        }
                    }
                    arr_46 [i_0] [(_Bool)1] [i_0] &= (((-((~(((/* implicit */int) arr_3 [i_0 - 2] [i_1])))))) >= (((/* implicit */int) var_3)));
                    arr_47 [i_0] [i_1] [i_4] [13U] = ((/* implicit */int) max(((+(min((arr_38 [i_0]), (((/* implicit */long long int) var_10)))))), (((/* implicit */long long int) var_7))));
                    arr_48 [i_0] [i_1] = ((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0] [i_0] [i_0]);
                }
                var_35 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 3]))) : (min((arr_38 [i_1]), (((/* implicit */long long int) arr_43 [i_1] [i_1] [i_1] [i_1] [i_0] [i_1] [i_1])))))) != (((/* implicit */long long int) ((/* implicit */int) ((arr_11 [i_0 - 1]) > (((/* implicit */long long int) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_37 [i_0] [i_0] [i_0])))))))))));
            }
        } 
    } 
}
