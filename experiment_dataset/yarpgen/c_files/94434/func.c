/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94434
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
    var_12 = ((/* implicit */signed char) var_7);
    var_13 ^= (+(3917817457669039448ULL));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (int i_1 = 3; i_1 < 10; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                            {
                                arr_12 [i_0] [(unsigned char)6] [(unsigned char)6] [(unsigned char)6] [i_1] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 3540618578U)) ? (((/* implicit */unsigned long long int) 754348717U)) : (547430155642904650ULL)))))))));
                                var_14 = ((/* implicit */short) max((((/* implicit */long long int) min((((unsigned int) -7178409908070317098LL)), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_10)), (arr_11 [i_1] [i_1]))))))), ((~(arr_0 [i_2 - 1] [i_2 + 1])))));
                                arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) (~((~((+(((/* implicit */int) arr_4 [i_1]))))))));
                                arr_14 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2 - 1] [i_4]))));
                            }
                            for (signed char i_5 = 1; i_5 < 7; i_5 += 4) 
                            {
                                arr_17 [i_1] [i_2 + 1] [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) var_11))))) ? ((~(((/* implicit */int) var_4)))) : (((int) (short)-28398)))))));
                                arr_18 [i_0] [i_0] [i_0] [i_2] [i_1] [i_5 + 2] = ((/* implicit */unsigned char) var_8);
                            }
                            for (unsigned int i_6 = 1; i_6 < 9; i_6 += 4) 
                            {
                                arr_21 [i_1] [i_1] [i_1] [i_1] [i_6 + 2] = ((/* implicit */short) ((int) ((short) arr_20 [i_0] [i_0] [(unsigned char)10] [i_3] [i_0])));
                                var_15 = ((/* implicit */unsigned short) var_6);
                                arr_22 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */short) arr_2 [i_0] [i_0])), ((short)28398))))));
                            }
                            for (unsigned char i_7 = 1; i_7 < 9; i_7 += 4) 
                            {
                                var_16 = ((/* implicit */_Bool) arr_5 [i_7] [i_3] [i_2] [i_1]);
                                arr_27 [i_0] [i_0] [i_0] [i_3] [i_0] [(_Bool)1] [(_Bool)1] |= (!(((/* implicit */_Bool) 9875065297196014633ULL)));
                                arr_28 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_26 [2LL] [i_1 - 2] [2LL] [i_7 + 1] [i_7 + 2])), (14528926616040512167ULL))), (arr_16 [5LL] [i_1 - 2] [i_1] [i_2] [i_1] [(short)3]))))));
                                arr_29 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)-28417);
                                var_17 = min((min((arr_3 [i_7 - 1]), (((/* implicit */unsigned long long int) var_11)))), (17899313918066646965ULL));
                            }
                            /* LoopSeq 3 */
                            for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
                            {
                                var_18 -= min((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) != (14528926616040512167ULL))), (((9223372036854775807LL) != (((/* implicit */long long int) -2111629011)))));
                                arr_33 [i_1] [i_1] [i_1] [i_3] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_15 [i_2 - 1] [i_1] [i_1 + 1] [i_3] [i_8]) ^ (arr_15 [i_2 + 1] [i_2 + 1] [i_1 - 1] [i_3] [i_8])))) ? (((/* implicit */unsigned long long int) max((-1358795242338825057LL), (((/* implicit */long long int) (unsigned short)8889))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_2 + 1] [i_2 - 1] [i_2 + 1] [i_2 - 1] [i_2 - 1]))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-102))) ^ (17899313918066646981ULL)))))));
                                var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_9 [i_0] [i_0] [i_2 - 1] [i_1] [i_8])) : (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned int) arr_6 [i_1] [i_2 + 1] [i_1] [i_2 + 1])), (arr_31 [i_0] [i_0]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 754348712U)) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned char)83)))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                            {
                                var_20 = ((/* implicit */int) 4182473798U);
                                var_21 = ((/* implicit */signed char) ((unsigned long long int) arr_31 [i_1 + 1] [i_3]));
                                arr_37 [i_9] [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) var_6);
                            }
                            for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                            {
                                arr_40 [i_1] [i_1 - 2] [i_1] [i_1] [(signed char)8] [i_1] [i_1] = ((/* implicit */short) arr_23 [i_10] [i_1] [i_1] [i_0]);
                                arr_41 [i_1] [i_3] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(min((arr_36 [i_0] [i_3]), (((/* implicit */long long int) (signed char)-53))))))) ? (((/* implicit */unsigned long long int) min((arr_10 [i_0] [i_0] [i_2 - 1] [i_3] [4ULL]), (((/* implicit */long long int) arr_11 [i_1] [i_1 - 1]))))) : (min((arr_16 [(_Bool)1] [i_3] [i_1] [i_1] [i_1] [i_0]), (arr_16 [i_0] [i_1] [i_1] [i_0] [i_1] [i_1])))));
                            }
                        }
                    } 
                } 
                var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((max((17899313918066646958ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1] [i_1])))) == (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_7 [(signed char)8] [i_1 + 1] [i_1] [(signed char)8])))))))) != (((((/* implicit */_Bool) (signed char)-99)) ? (((/* implicit */int) min((var_4), (((/* implicit */signed char) var_8))))) : (((/* implicit */int) (short)18028))))));
            }
        } 
    } 
}
