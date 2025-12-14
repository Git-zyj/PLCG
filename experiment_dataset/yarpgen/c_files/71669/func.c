/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71669
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 1) 
    {
        for (unsigned char i_1 = 3; i_1 < 16; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 4; i_2 < 16; i_2 += 4) 
                {
                    for (int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        {
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) arr_1 [i_3 + 1])), (var_5))), (((/* implicit */unsigned int) min((arr_1 [i_2 - 4]), (arr_1 [i_3]))))));
                            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_6 [i_1 + 2] [i_1 - 3] [i_1] [i_1 - 3] [i_1 + 2] [i_1 - 3]), (((/* implicit */unsigned int) arr_4 [i_1 - 2] [i_1 - 3] [i_1]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1] [i_1 + 2] [i_1]) >= (arr_2 [i_1] [i_1 - 3] [(short)2]))))) : (var_4)));
                        }
                    } 
                } 
                var_20 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_18)))) ? (var_17) : (((arr_2 [i_0] [i_0] [i_0]) << (((var_8) - (8919820169610596391ULL))))))) >= ((~(var_12)))));
                /* LoopSeq 2 */
                for (short i_4 = 3; i_4 < 16; i_4 += 1) 
                {
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(_Bool)1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))) ? (var_5) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_4])) >> (((((/* implicit */int) var_1)) - (59471))))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_15 [i_1 + 2] [i_1 + 1] [i_1 - 1] [i_1 - 2])) : (((/* implicit */int) arr_7 [15U] [i_0 + 1] [i_0 - 1] [i_0 - 1]))));
                        arr_17 [i_0] [i_0 - 1] [i_0] [(short)1] = ((short) ((unsigned long long int) var_16));
                    }
                    arr_18 [i_0] [i_0] [0] = ((/* implicit */int) min((((arr_6 [i_1] [i_1] [i_1 + 1] [i_1 - 3] [i_1 - 3] [i_1]) - (arr_6 [i_1] [i_1 - 3] [i_1 - 3] [13] [i_1 + 2] [i_1]))), (((unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (9991828170666438763ULL) : (((/* implicit */unsigned long long int) var_10)))))));
                    /* LoopSeq 4 */
                    for (int i_6 = 0; i_6 < 18; i_6 += 2) 
                    {
                        var_22 |= var_17;
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_7 = 2; i_7 < 15; i_7 += 1) 
                        {
                            var_23 |= ((/* implicit */unsigned char) var_15);
                            arr_23 [(short)5] [i_7] [i_7 - 1] [i_7] [(_Bool)0] = ((/* implicit */unsigned int) ((_Bool) 3418987780U));
                        }
                        var_24 = (+(((((/* implicit */_Bool) arr_4 [i_1] [i_1] [i_1])) ? ((-(var_8))) : (min((((/* implicit */unsigned long long int) var_2)), (var_7))))));
                    }
                    for (int i_8 = 3; i_8 < 17; i_8 += 2) /* same iter space */
                    {
                        var_25 = ((signed char) ((((/* implicit */_Bool) min((884541372), (2147483636)))) ? (((((/* implicit */_Bool) arr_1 [i_4 - 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (arr_8 [i_0 + 1] [(unsigned short)11] [i_0 + 1] [i_0]))) : (((((/* implicit */_Bool) -884541370)) ? (var_17) : (8454915903043112853ULL)))));
                        arr_27 [i_0] [i_0] = ((/* implicit */_Bool) max((((long long int) arr_25 [i_0 + 1] [i_0 - 1])), (((/* implicit */long long int) ((((/* implicit */int) ((short) (signed char)-1))) != (((/* implicit */int) (unsigned char)243)))))));
                    }
                    for (int i_9 = 3; i_9 < 17; i_9 += 2) /* same iter space */
                    {
                        arr_30 [i_9] [17LL] [i_4] [17LL] = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_14 [i_0 + 1] [i_0 + 1] [i_0 - 1])) ? (arr_14 [(_Bool)1] [i_1 - 2] [i_1 + 1]) : (arr_14 [i_0 + 1] [i_0] [i_0 + 1]))));
                        arr_31 [i_0] [i_0] [i_0 - 1] [i_9] [(signed char)6] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0 - 1] [i_0] [i_0 - 1]))) : (var_18)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_17))), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */int) (signed char)-1)) > (var_13)))))));
                    }
                    for (int i_10 = 3; i_10 < 17; i_10 += 2) /* same iter space */
                    {
                        arr_34 [i_10 - 2] [i_10] [i_10] [i_10] [i_10] [6LL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_33 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_0] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) : (var_7)))) ? (((((/* implicit */_Bool) arr_33 [i_0] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0])) : (((/* implicit */int) arr_33 [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1] [(signed char)0])))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) arr_33 [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_33 [13LL] [i_0 - 1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 1]))))));
                        arr_35 [i_0 - 1] = ((/* implicit */unsigned char) max((var_9), ((+(2117370745)))));
                        arr_36 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((arr_2 [i_0 - 1] [i_0] [i_0]) >= (((/* implicit */unsigned long long int) var_10))))), (arr_2 [i_0] [i_0 - 1] [i_0 - 1])));
                    }
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 18; i_11 += 2) 
                    {
                        arr_40 [i_0] [10U] [10U] [i_0 - 1] [i_0 + 1] = ((/* implicit */unsigned long long int) var_4);
                        /* LoopSeq 1 */
                        for (int i_12 = 3; i_12 < 17; i_12 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((arr_39 [i_11]), (arr_39 [9LL])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 1] [i_0]))) : (((((-880124356) > (884541380))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_9)))) : (arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 3])))));
                            arr_44 [i_12] [i_12 + 1] [i_12] [i_12] [i_12 - 3] [i_12] = ((/* implicit */_Bool) var_0);
                            var_27 = ((/* implicit */unsigned long long int) var_6);
                        }
                    }
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 18; i_13 += 2) 
                    {
                        var_28 ^= ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_16)))) ? (((/* implicit */unsigned long long int) (-(arr_5 [i_0] [i_0] [(short)14])))) : (((((/* implicit */_Bool) var_16)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32759)))))));
                        arr_48 [9U] [1ULL] [i_4] [i_4] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_4 - 3] [10ULL] [(short)1] [i_4 - 2] [i_4 + 2]))) | (var_4)))) ? (((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) var_5))))) : ((+(arr_12 [(_Bool)1] [(_Bool)1])))));
                    }
                }
                for (unsigned char i_14 = 0; i_14 < 18; i_14 += 1) 
                {
                    var_29 = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */long long int) ((_Bool) var_3))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_14))))) : (((((/* implicit */_Bool) ((unsigned long long int) (short)29504))) ? (((/* implicit */long long int) ((int) arr_25 [i_0] [i_0 + 1]))) : (((arr_37 [(short)12] [i_1] [i_1] [i_1]) / (((/* implicit */long long int) var_18))))))));
                    arr_51 [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) | (arr_28 [i_1 - 1] [i_1 + 1] [i_1 - 1] [(short)2])))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) var_3))) || (((/* implicit */_Bool) min((var_14), (((/* implicit */long long int) var_3)))))))) : (((((/* implicit */_Bool) var_14)) ? (2145029112) : ((-(((/* implicit */int) arr_49 [i_14] [i_14]))))))));
                }
            }
        } 
    } 
    var_30 = ((unsigned long long int) var_8);
}
