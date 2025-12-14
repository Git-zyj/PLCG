/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88276
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
    for (unsigned int i_0 = 1; i_0 < 22; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 += ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (var_6))))))), ((~(max((((/* implicit */unsigned long long int) var_10)), (var_13)))))));
                arr_5 [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_2 [i_0])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-60))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1] [i_1 - 1] [i_1 - 1])))))) ? ((+(((/* implicit */int) min((((/* implicit */signed char) arr_4 [i_1])), (var_3)))))) : (((((((/* implicit */int) arr_3 [i_0 + 1] [i_0 + 1] [i_1 - 1])) / (((/* implicit */int) var_3)))) - (((/* implicit */int) (short)-20492))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 22; i_2 += 1) 
                {
                    arr_8 [1LL] [i_0] [i_2] = ((/* implicit */unsigned char) var_4);
                    arr_9 [i_0] [i_2 + 1] [i_1 - 1] [i_0] = ((/* implicit */unsigned char) ((arr_3 [2LL] [i_0 + 1] [2LL]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : ((-(var_4)))));
                    var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) 1096367105U)))))));
                }
                /* vectorizable */
                for (unsigned char i_3 = 1; i_3 < 20; i_3 += 1) 
                {
                    arr_12 [i_0] [i_1 - 1] [i_1 - 1] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) -1244149337))));
                }
                for (long long int i_4 = 0; i_4 < 23; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 23; i_5 += 1) 
                    {
                        for (long long int i_6 = 1; i_6 < 22; i_6 += 3) 
                        {
                            {
                                arr_21 [12U] |= ((/* implicit */unsigned long long int) (_Bool)1);
                                var_17 += ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) : (var_2)))) && ((!(((/* implicit */_Bool) var_7))))))), ((~(var_8)))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 3) 
                    {
                        for (unsigned int i_8 = 0; i_8 < 23; i_8 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) == (min((var_2), (var_10)))))) % (max((((((/* implicit */int) arr_4 [i_8])) << (((3198600185U) - (3198600169U))))), ((((_Bool)1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)253))))))));
                                var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_0 [i_4] [i_0])) ? (((/* implicit */int) (unsigned char)16)) : (((/* implicit */int) (unsigned short)65525))))))) ? (((var_5) | (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(arr_26 [i_8] [i_4] [i_7] [i_8] [(short)13] [i_0] [i_7]))) >= (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) >> (((((/* implicit */int) var_6)) - (14148))))))))))));
                                var_20 = ((/* implicit */int) var_2);
                                arr_27 [i_0] [i_4] [i_1 - 1] [i_0] [i_1] = arr_4 [i_4];
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_21 = ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_4)));
    /* LoopNest 2 */
    for (unsigned short i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        for (signed char i_10 = 1; i_10 < 14; i_10 += 4) 
        {
            {
                var_22 = ((/* implicit */unsigned int) ((min((arr_29 [i_10] [i_10 + 2]), (arr_29 [i_9] [i_10 + 2]))) && (((/* implicit */_Bool) max((((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_16 [i_10 - 1] [i_10] [i_10] [i_10] [i_10])))))));
                var_23 = ((/* implicit */short) (((~(((/* implicit */int) arr_3 [i_10 - 1] [(unsigned short)0] [i_9])))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)13)) ? (var_5) : (var_1)))))))));
                var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_26 [i_9] [i_9] [(_Bool)1] [i_9] [i_9] [i_10] [i_10]), (((/* implicit */unsigned long long int) (short)-1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))) : (((((/* implicit */unsigned long long int) var_1)) & (var_13)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)253)) & (((-581701899) - (((/* implicit */int) arr_3 [i_9] [i_9] [i_10]))))))) : (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) & (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)2))) : (arr_15 [i_9] [i_9] [16U] [i_10])))))));
            }
        } 
    } 
    var_25 = ((/* implicit */signed char) max(((~(((((/* implicit */int) var_6)) - (((/* implicit */int) var_7)))))), (((/* implicit */int) var_6))));
}
