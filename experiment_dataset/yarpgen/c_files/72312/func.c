/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72312
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 1046528)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4))), (((((/* implicit */long long int) var_12)) % (var_4)))))) ? (((/* implicit */int) ((4880694925127515295ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) : (((/* implicit */int) var_11))));
    var_15 = ((/* implicit */signed char) (-((+(((((/* implicit */_Bool) var_11)) ? (1046531) : (-700952046)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (int i_2 = 3; i_2 < 14; i_2 += 2) 
                {
                    arr_9 [i_2] [i_2] = min(((-(-3396692639402362785LL))), (((/* implicit */long long int) (-(arr_0 [i_2 - 3] [i_2 - 3])))));
                    arr_10 [i_0] [i_2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(var_5)))) ? (((/* implicit */long long int) min((((/* implicit */int) var_9)), (var_10)))) : (((((/* implicit */_Bool) var_2)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 11; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_2] [i_2] [i_1] [i_3 + 2] [i_4] = ((/* implicit */long long int) (+(((var_13) >> (((((/* implicit */int) arr_14 [i_2 + 1] [i_2 - 2] [i_3 + 1] [i_4])) + (2388)))))));
                                var_16 = ((/* implicit */unsigned short) min(((+(5207442598289695455LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (arr_6 [i_2 - 3] [i_2 - 3] [i_3 + 3]) : (var_8))))));
                                arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */signed char) ((max((4498296719227898358LL), (((/* implicit */long long int) arr_16 [(short)12] [(unsigned char)3] [i_2] [i_2] [i_3 + 2])))) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_16 [i_3] [(short)8] [i_2] [(short)8] [i_3 + 2])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_5 = 1; i_5 < 12; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            {
                                arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_1)))) ? (max((arr_6 [(unsigned short)13] [i_2] [i_2 - 2]), (((/* implicit */int) (short)30022)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_3 [i_5] [i_5]))));
                                arr_26 [i_0] [i_0] [i_0] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (arr_1 [i_5 + 3] [i_6]) : (var_7))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (1046548) : (-1046533))))))) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_2 - 3] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)156)) : (var_12)))));
                                arr_27 [i_2] [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned int) (_Bool)1);
                            }
                        } 
                    } 
                }
                for (signed char i_7 = 0; i_7 < 15; i_7 += 2) 
                {
                    var_18 += ((/* implicit */signed char) max((var_3), (((/* implicit */unsigned short) ((((((((/* implicit */int) var_11)) + (2147483647))) >> (((var_1) - (3329773414U))))) == (arr_24 [i_0] [i_0] [i_0]))))));
                    arr_30 [i_0] [i_0] [i_0] [i_0] |= ((/* implicit */unsigned int) var_6);
                    var_19 ^= ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))), (max((((/* implicit */unsigned int) (signed char)-51)), (arr_4 [i_0])))));
                }
                for (unsigned short i_8 = 2; i_8 < 14; i_8 += 2) 
                {
                    arr_35 [i_0] [i_0] [4ULL] [i_0] = ((/* implicit */int) (+(((unsigned long long int) arr_1 [i_8] [i_8 - 1]))));
                    arr_36 [i_0] = ((/* implicit */_Bool) var_6);
                    var_20 = ((/* implicit */int) var_5);
                    arr_37 [i_0] [7LL] [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) arr_15 [i_0] [i_0] [i_8])), (min((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (var_13)))));
                }
                arr_38 [i_0] [13ULL] = ((/* implicit */unsigned char) -4498296719227898359LL);
                /* LoopNest 2 */
                for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
                {
                    for (unsigned int i_10 = 3; i_10 < 14; i_10 += 3) 
                    {
                        {
                            var_21 = ((/* implicit */int) (~(((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */_Bool) -1046519)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1])))))))));
                            /* LoopSeq 1 */
                            for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                            {
                                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 1046528))));
                                var_23 = ((/* implicit */signed char) ((unsigned short) max((((/* implicit */long long int) (_Bool)0)), (5207442598289695455LL))));
                                var_24 += ((/* implicit */unsigned long long int) (unsigned char)99);
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
