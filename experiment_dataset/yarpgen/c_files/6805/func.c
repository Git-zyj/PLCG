/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6805
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
    var_18 = ((((((((/* implicit */_Bool) (unsigned short)504)) ? (((/* implicit */int) (unsigned short)7168)) : (((/* implicit */int) var_9)))) <= (((int) var_12)))) ? (((/* implicit */int) var_1)) : (((int) ((unsigned int) var_4))));
    var_19 -= ((/* implicit */_Bool) var_12);
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) + (((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_15)))))) ? (min((var_16), (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) var_10))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 18; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_17))))) ? (((/* implicit */int) arr_0 [i_0] [10])) : ((-(((/* implicit */int) arr_5 [(signed char)2] [i_0]))))))) ? (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) arr_1 [i_0])), (var_15))))) : (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 19; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_13 [i_3] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((var_8) && (arr_10 [i_0] [i_0] [(_Bool)1] [i_2] [i_3])))) : (((/* implicit */int) arr_11 [i_0] [i_1 - 2] [i_2] [i_0]))));
                        arr_14 [i_3] [10ULL] [10ULL] [10] |= var_5;
                    }
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        arr_18 [i_4] [i_4] [i_2] [i_2] [i_4] [i_0] = ((/* implicit */signed char) var_3);
                        arr_19 [i_4] [i_4] [i_0] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_11 [i_0] [i_1 + 1] [i_2] [(short)14])) ? (arr_16 [i_2] [15U] [15U] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) var_13)))))));
                    }
                    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
                    {
                        arr_22 [17U] [i_2] [i_0] [i_0] = ((/* implicit */unsigned char) ((signed char) min((((/* implicit */long long int) (short)4)), (arr_15 [i_5 + 1] [i_5] [(signed char)16] [i_5] [i_5 - 2] [i_1]))));
                        arr_23 [i_1] = ((/* implicit */unsigned long long int) ((min((((((/* implicit */int) arr_9 [i_0] [i_1] [i_0])) ^ (((/* implicit */int) (short)3)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_1]))) <= (var_2)))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) arr_17 [i_1] [i_1] [i_1] [i_1 - 3])))))));
                        var_22 = ((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) var_6)), (arr_15 [i_5 - 1] [i_1] [i_2] [i_0] [i_2] [i_1 - 3]))));
                    }
                    for (signed char i_6 = 1; i_6 < 18; i_6 += 2) 
                    {
                        arr_26 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(var_14)))) ? (((((/* implicit */int) var_5)) >> (((((/* implicit */int) arr_21 [i_6 - 1] [i_1 - 1] [i_1 - 1] [i_0])) + (112))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [1]))))) ? (((/* implicit */int) min((((/* implicit */short) arr_12 [i_6] [i_6])), (var_9)))) : (((/* implicit */int) arr_11 [i_1] [i_1 - 3] [(signed char)4] [i_6]))))));
                        /* LoopSeq 1 */
                        for (long long int i_7 = 0; i_7 < 19; i_7 += 4) 
                        {
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)62)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                            arr_30 [i_6] [i_1] [i_6] [i_6] [i_7] = ((/* implicit */_Bool) arr_0 [i_6] [i_6]);
                        }
                        var_24 = ((((/* implicit */_Bool) arr_29 [(short)11] [i_6] [i_6] [i_6] [i_6 + 1])) ? (((/* implicit */long long int) ((max((((/* implicit */unsigned int) arr_10 [i_0] [i_0] [(short)3] [i_2] [(short)3])), (var_15))) % (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) : (max((arr_27 [i_6 - 1] [i_1 - 4]), (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (((/* implicit */int) arr_11 [16ULL] [i_1] [16ULL] [2LL]))))))));
                    }
                    var_25 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_4 [i_0] [i_0])))) ? ((~(arr_28 [i_1 - 1] [i_1] [(signed char)16] [(short)14] [(signed char)16] [i_1 - 2] [i_0]))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1 - 4] [i_1 - 3] [i_1] [i_1 - 1]))) != (arr_15 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2]))))));
                }
                /* vectorizable */
                for (unsigned char i_8 = 3; i_8 < 17; i_8 += 3) 
                {
                    arr_35 [i_0] [i_0] [i_8] [i_0] = ((/* implicit */long long int) arr_8 [i_0]);
                    /* LoopSeq 1 */
                    for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [17U] [i_8 + 1])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [i_8 - 1]))));
                        var_27 &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)190))) ^ (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((23LL) < (arr_16 [(short)4] [i_1 - 2] [i_8] [16ULL]))))) : (((((/* implicit */_Bool) arr_15 [i_0] [(unsigned char)9] [i_1 - 2] [i_8] [i_8] [i_9])) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_24 [i_9]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_0] [i_1] [i_8 - 1] [i_9])) && (((/* implicit */_Bool) (unsigned char)120))))) : (((/* implicit */int) var_7)))))));
                    }
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 3; i_10 < 18; i_10 += 2) 
                    {
                        var_29 = ((/* implicit */unsigned char) (_Bool)0);
                        /* LoopSeq 1 */
                        for (signed char i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            arr_43 [i_10] = ((/* implicit */_Bool) arr_24 [i_11]);
                            var_30 = ((/* implicit */long long int) ((unsigned int) arr_36 [i_1 - 3] [i_8 - 1] [i_10 + 1]));
                            arr_44 [(unsigned char)10] [i_10] [i_10] [i_8] [i_10] [i_1] [(unsigned char)10] = ((/* implicit */_Bool) arr_3 [(unsigned short)14]);
                            var_31 = ((arr_42 [i_11] [i_11] [i_10 - 2] [i_8 + 2] [i_8]) / (((/* implicit */long long int) ((/* implicit */int) var_6))));
                            arr_45 [i_11] [i_10] [i_8] [i_10] [(signed char)9] = ((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_8] [i_11]);
                        }
                        var_32 ^= ((/* implicit */_Bool) (short)0);
                    }
                    var_33 += ((/* implicit */signed char) ((arr_38 [i_8 + 1] [i_8 - 1] [i_8 - 3] [i_1 - 4]) + (arr_38 [i_8] [i_8 - 1] [i_8 - 2] [i_1 - 2])));
                    var_34 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_17)) ? (2745142345220134770ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_0] [(unsigned char)11] [i_1] [i_0] [i_0] [i_1])))))));
                }
            }
        } 
    } 
}
