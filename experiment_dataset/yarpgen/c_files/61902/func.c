/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61902
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
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 1; i_3 < 11; i_3 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_14 = ((/* implicit */int) 8129188766792100793LL);
                            arr_13 [i_0] [i_1] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_0 [i_0 + 1]) + (arr_0 [i_0 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1] [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))) ? (arr_9 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_3 - 1] [i_0 + 1])))))) : (min((((/* implicit */unsigned long long int) arr_9 [i_1])), (min((((/* implicit */unsigned long long int) (unsigned short)65535)), (18446744073709551615ULL)))))));
                            var_15 = ((/* implicit */signed char) (~(((/* implicit */int) (short)-28975))));
                            var_16 = ((/* implicit */unsigned short) ((((long long int) 14090165550939096132ULL)) & (arr_9 [i_0])));
                            var_17 = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) -6978484656278602227LL)) ? (13206421291884846293ULL) : (((/* implicit */unsigned long long int) 1791838733)))));
                        }
                        for (short i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            arr_17 [i_0] = ((/* implicit */long long int) min((((((/* implicit */_Bool) 1848395032)) ? (((/* implicit */unsigned long long int) ((arr_7 [i_5] [i_1] [i_2] [i_1]) - (134217727U)))) : (min((arr_10 [i_0 + 2] [i_5]), (((/* implicit */unsigned long long int) 8293017795576261762LL)))))), (((/* implicit */unsigned long long int) arr_9 [(unsigned char)8]))));
                            var_18 &= ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)38))) != (min((((/* implicit */long long int) (unsigned char)107)), ((-9223372036854775807LL - 1LL))))));
                            arr_18 [i_5] [i_3 - 1] [(short)5] [i_1] [(short)5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3 + 1])) ? (arr_4 [i_1] [i_2] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)62809))))))) && (((/* implicit */_Bool) arr_10 [i_1] [2]))));
                            arr_19 [i_0] [i_1] [i_2] [i_3] [i_1] [i_0] = ((((((/* implicit */int) (signed char)-68)) >= (((/* implicit */int) arr_16 [i_3] [i_3] [i_3] [i_3] [(signed char)4])))) ? ((+(arr_9 [i_0 + 1]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (-2609395533217628751LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-30285)) ? (((/* implicit */int) (unsigned char)187)) : (((/* implicit */int) (short)15890))))))));
                            var_19 ^= ((/* implicit */short) min((((long long int) arr_16 [i_3 + 1] [i_5] [i_5] [i_5] [i_5])), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)68)) ? (((/* implicit */int) (signed char)36)) : (((/* implicit */int) (signed char)68)))))));
                        }
                        for (unsigned int i_6 = 3; i_6 < 10; i_6 += 4) 
                        {
                            arr_24 [i_0] [i_1] [i_2] [i_2] [i_3] [i_3 - 1] [i_6] = ((/* implicit */short) min((((((((/* implicit */long long int) ((/* implicit */int) (signed char)64))) / (-3382959282571496516LL))) * (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), ((unsigned char)29))))))), (((/* implicit */long long int) -1014882779))));
                            var_20 += ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1LL)) && (((/* implicit */_Bool) 3ULL))))), (arr_10 [i_0 + 2] [i_6 + 2])))));
                            arr_25 [i_6] [i_0] [i_2] [i_2] [i_1] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)77))))) && (((/* implicit */_Bool) arr_9 [6LL])));
                        }
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 - 1] |= ((/* implicit */long long int) 4064790619U);
                            var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)173)) ? (((/* implicit */int) (unsigned short)60631)) : (min((((((/* implicit */int) (unsigned char)53)) ^ (((/* implicit */int) (unsigned short)57398)))), (((/* implicit */int) (unsigned short)58396))))));
                            var_22 ^= ((/* implicit */unsigned short) 0U);
                        }
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((((/* implicit */long long int) max((((((/* implicit */int) arr_31 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] [i_0] [i_0])) << (((((/* implicit */int) arr_2 [i_2])) + (42))))), (((/* implicit */int) (unsigned char)19))))) / (((((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_0] [i_1] [i_2] [i_3] [i_1] [i_8])) ? (((/* implicit */int) arr_12 [i_0] [i_0])) : (((/* implicit */int) arr_31 [i_8] [i_3] [i_3] [i_2] [i_1] [i_1] [1ULL]))))) ^ (((-6828300739525328159LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))))))))));
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((((/* implicit */int) arr_6 [i_1] [i_3] [i_8])) + (2147483647))) >> (((((/* implicit */int) arr_6 [i_0] [i_0 - 1] [i_0])) + (30549))))))));
                            arr_32 [i_8] [i_1] [(unsigned char)9] [i_3 + 1] [i_8] [(unsigned char)9] [i_1] = ((min((((/* implicit */unsigned long long int) arr_12 [i_0 - 1] [i_3 + 1])), ((((_Bool)0) ? (((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])) : (5529585303769184389ULL))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_6 [i_3] [i_1] [i_0])) <= (((((/* implicit */int) (unsigned char)134)) - (((/* implicit */int) (unsigned char)183)))))))));
                        }
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_2] [i_1] [(_Bool)1] [i_1] [8LL] [i_1])) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned char)186)), (7669620260004186405ULL)))) && (((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0 + 3] [i_3])) || (((/* implicit */_Bool) arr_11 [i_0] [i_0 + 1] [i_0])))))));
                    }
                    arr_33 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_2] [i_1] [i_1] [i_0] [i_0]))))) <= ((-(arr_5 [i_0 + 3] [i_0] [i_0 - 1])))));
                    var_26 &= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_9 [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)7))) : (arr_9 [i_0 - 1]))) << (((/* implicit */int) ((((/* implicit */_Bool) (short)13222)) && (((/* implicit */_Bool) max((arr_10 [i_0] [i_0]), (((/* implicit */unsigned long long int) (unsigned char)7))))))))));
                    var_27 = ((/* implicit */unsigned short) max((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */unsigned char) (_Bool)1)), (arr_16 [i_0] [i_2] [i_2] [i_0 - 1] [i_1]))))) ? (max(((+(((/* implicit */int) arr_2 [i_2])))), (((/* implicit */int) ((_Bool) 13972934590437529659ULL))))) : (((((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (short)-30707)) + (30707))))) - (min((((/* implicit */int) arr_31 [i_2] [i_2] [i_1] [i_0] [i_0] [i_0] [i_0])), (arr_11 [(unsigned char)2] [i_1] [i_0]))))))))));
                    arr_34 [i_1] [i_1] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((arr_23 [i_2] [i_1] [i_2] [i_0 - 1] [i_0] [i_2]) ? (((/* implicit */int) (short)31463)) : (((/* implicit */int) (signed char)-81))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_2] [i_1] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_1] [i_2] [i_2])) : (((/* implicit */int) (unsigned char)255))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) (short)-15156)) : (((/* implicit */int) (short)32767)))) > (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_0] [i_1] [i_2] [i_0] [i_0] [i_0]))) < (-3474986069830044044LL)))))))) : (((min((8391076112409917045LL), (((/* implicit */long long int) arr_26 [i_0] [i_0] [i_1] [i_2] [i_0 - 1] [i_1])))) + (((/* implicit */long long int) (+(((/* implicit */int) arr_23 [i_0 + 1] [i_0] [i_0] [9U] [i_1] [i_2])))))))));
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */long long int) max((var_28), (((/* implicit */long long int) var_9))));
}
