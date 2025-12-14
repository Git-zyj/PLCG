/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56414
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
    for (unsigned int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */short) var_6);
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_15 = (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                    arr_9 [(_Bool)1] [i_0] [i_1 + 1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_2])) ? (4236424323284872995LL) : (4236424323284872995LL))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_10)))) ? (((/* implicit */int) arr_10 [i_1] [i_1 + 1] [(unsigned char)6] [i_1 + 2])) : (((arr_7 [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1]) / (arr_8 [i_1 - 1] [i_1 + 1] [i_1 + 1] [i_1])))));
                                var_17 = ((/* implicit */signed char) max((var_17), ((signed char)125)));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_15 [i_1] [i_1] [i_1 + 1] [i_1] [i_1 - 1])))));
                }
                for (unsigned char i_5 = 3; i_5 < 24; i_5 += 1) 
                {
                    var_18 = ((((/* implicit */_Bool) -4236424323284872996LL)) ? ((+((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0])));
                    /* LoopSeq 1 */
                    for (long long int i_6 = 0; i_6 < 25; i_6 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_7 = 0; i_7 < 25; i_7 += 4) 
                        {
                            arr_23 [i_5] [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_5] [i_7]) - (((/* implicit */int) ((_Bool) var_2))))))));
                            arr_24 [i_0] [i_1] [i_5] [i_6] [21LL] [i_7] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_3 [i_1 + 2] [i_5 - 3])) : (((/* implicit */int) arr_3 [i_1 - 1] [i_5 + 1]))))) ? (((/* implicit */long long int) (-(arr_22 [i_1 - 1] [i_5 - 2])))) : (max((((/* implicit */long long int) (!(((/* implicit */_Bool) 9223372036854775807LL))))), (((((/* implicit */_Bool) 3520252352696246766LL)) ? (((/* implicit */long long int) var_11)) : (3520252352696246766LL)))))));
                            arr_25 [i_5] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((arr_6 [1] [i_0] [(unsigned short)19]) <= (((/* implicit */int) arr_19 [(short)10] [i_5] [i_5 - 2] [i_5 - 1] [i_5 + 1] [i_6])))))) - (((unsigned int) arr_6 [i_1 + 2] [i_5 + 1] [(short)12]))));
                            var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (~(9987540275429706816ULL))))));
                            var_20 = ((/* implicit */long long int) (+(((((/* implicit */unsigned int) arr_8 [(signed char)0] [(signed char)0] [i_1 + 1] [i_5 + 1])) / (arr_22 [i_0] [i_0])))));
                        }
                        for (int i_8 = 2; i_8 < 22; i_8 += 2) 
                        {
                            arr_29 [i_0] [i_0] [i_0] [i_0] [i_1] [20ULL] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_5 [i_1])) % (((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_0] [i_1] [i_5] [i_6] [(unsigned char)16]))) : ((-(2654980919U))))) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_8] [i_8] [i_8] [i_1] [i_8] [(unsigned char)4] [i_8 + 3])) ? (((/* implicit */int) ((((/* implicit */_Bool) 8459203798279844800ULL)) || (((/* implicit */_Bool) arr_11 [i_1]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) != (var_6)))))))));
                            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3520252352696246766LL)) ? (arr_22 [i_1] [i_1]) : (((/* implicit */unsigned int) arr_8 [i_0] [i_1] [i_1 + 1] [i_1]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_28 [i_8 - 2] [i_6] [i_5] [i_1] [i_0] [i_0] [i_0])) : (((/* implicit */int) (short)31908)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 1] [i_8 + 1] [i_8])))))));
                            var_22 += ((/* implicit */short) ((((/* implicit */int) (signed char)110)) > (((((/* implicit */int) var_2)) ^ (((/* implicit */int) (unsigned short)0))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 1) 
                        {
                            var_23 ^= ((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_9] [i_6] [i_9]);
                            arr_32 [i_1] [i_1] = min((((int) (+(((/* implicit */int) (short)31892))))), (((/* implicit */int) (short)6490)));
                            arr_33 [i_1] [(short)17] [i_5] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) arr_14 [i_1] [i_1])))) ? (arr_0 [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_19 [5] [6U] [i_1] [i_5] [i_6] [i_9]))))))))) ? (((/* implicit */int) ((unsigned short) arr_30 [i_0] [i_9] [i_5] [i_0] [i_5 - 3] [i_1] [i_0]))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (4236424323284872996LL) : (((/* implicit */long long int) arr_8 [i_6] [i_1] [i_5] [i_6]))))))))));
                            arr_34 [i_9] [i_1] [i_5] [i_5] [i_9] [i_0] = ((/* implicit */signed char) min((-3520252352696246766LL), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_0] [i_1] [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) 3520252352696246783LL)) : (9987540275429706842ULL)))) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-31908)) : (((/* implicit */int) (signed char)46)))) : (((/* implicit */int) var_2)))))));
                        }
                        /* LoopSeq 3 */
                        for (short i_10 = 2; i_10 < 24; i_10 += 4) 
                        {
                            arr_39 [22] [i_0] [i_1] [i_5] [i_6] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? ((-(((/* implicit */int) arr_3 [i_1] [i_1])))) : (((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) / (((/* implicit */int) var_4))))) ? (max((arr_8 [i_0] [i_5] [i_6] [i_10]), (((/* implicit */int) (short)32066)))) : (((((/* implicit */_Bool) arr_10 [i_1] [i_1 + 2] [i_5] [i_1])) ? (((/* implicit */int) (short)-22034)) : (((/* implicit */int) (unsigned short)65514))))))));
                            var_24 = ((/* implicit */long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) 3397372291U))))), ((~(133955584)))));
                            arr_40 [i_1] = ((/* implicit */short) ((((arr_3 [i_5 - 2] [i_10 - 1]) ? (arr_8 [i_10 - 2] [i_10] [i_10] [17LL]) : (((/* implicit */int) arr_3 [i_5 - 1] [i_10 - 2])))) - (((((/* implicit */_Bool) arr_20 [i_10] [i_10] [i_10 - 2] [i_5] [23LL] [23LL])) ? ((+(((/* implicit */int) var_13)))) : ((-(-1946749109)))))));
                            arr_41 [i_0] [i_1] [i_1] [i_6] [i_1] [0U] = ((/* implicit */short) arr_0 [i_0]);
                        }
                        for (int i_11 = 3; i_11 < 22; i_11 += 3) 
                        {
                            var_25 ^= ((/* implicit */signed char) 2147483647);
                            arr_46 [i_0] [i_1] [i_0] [i_6] [i_6] [i_11] = ((/* implicit */unsigned char) -3520252352696246767LL);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) : (6ULL)));
                            var_27 = ((((((/* implicit */_Bool) arr_7 [i_11 - 1] [i_1] [i_5] [i_6])) && (((/* implicit */_Bool) 8459203798279844800ULL)))) ? (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32761)) && (((/* implicit */_Bool) arr_43 [i_0] [i_0] [i_5] [i_6] [i_11])))) || (((((/* implicit */_Bool) 960)) || (((/* implicit */_Bool) 8459203798279844800ULL))))))) : (((/* implicit */int) (((!(((/* implicit */_Bool) 6U)))) && ((!(((/* implicit */_Bool) -4236424323284873007LL))))))));
                        }
                        /* vectorizable */
                        for (short i_12 = 0; i_12 < 25; i_12 += 4) 
                        {
                            arr_51 [(signed char)15] [i_1] [i_5 - 2] [i_1] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (short)-31900)) : (((int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_12] [i_12]))));
                            var_28 = ((/* implicit */long long int) min((var_28), (-3744448847720575836LL)));
                        }
                        var_29 = ((/* implicit */short) ((((/* implicit */_Bool) 14ULL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))));
                    }
                    var_30 = ((/* implicit */short) max(((~(4294967295U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)3)))))));
                }
                for (signed char i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    arr_56 [i_1] [i_1] [i_13] [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_26 [i_0] [i_1 + 2] [i_0] [i_13] [i_13])) || (((/* implicit */_Bool) arr_26 [i_13] [i_13] [i_13] [i_1] [i_0])))) ? (((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_13] [i_0])))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_26 [i_0] [(unsigned short)24] [(unsigned short)24] [i_0] [i_0])) || (((/* implicit */_Bool) 6711984343938080354LL)))))));
                    arr_57 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) (+(-1)));
                    var_31 = ((/* implicit */int) (unsigned char)245);
                    arr_58 [i_1] [i_1] = ((/* implicit */unsigned long long int) (signed char)41);
                }
                for (unsigned int i_14 = 3; i_14 < 23; i_14 += 4) 
                {
                    arr_61 [i_0] [i_0] [i_1] [i_0] &= ((/* implicit */long long int) (~((-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32557))) : (var_9)))))));
                    var_32 = ((/* implicit */unsigned int) arr_15 [i_1] [i_1 + 1] [i_1] [i_1] [(short)15]);
                }
            }
        } 
    } 
    var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)163))));
}
