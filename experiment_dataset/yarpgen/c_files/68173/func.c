/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68173
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68173 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68173
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 10; i_0 += 4) 
    {
        var_15 += ((/* implicit */unsigned short) ((((/* implicit */long long int) ((arr_1 [i_0 - 1]) ? (((arr_1 [i_0]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_1 [i_0]))))) <= (((((/* implicit */_Bool) 5254316389413153164LL)) ? (((var_1) % (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-1))))))))));
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) arr_0 [i_0 - 3]))));
        var_17 = ((/* implicit */unsigned int) ((short) ((signed char) arr_0 [i_0 - 2])));
        var_18 = ((/* implicit */_Bool) min((var_18), (arr_1 [(_Bool)1])));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned int) ((int) (short)25995))), (((((/* implicit */_Bool) ((unsigned short) 1U))) ? (((/* implicit */unsigned int) arr_2 [i_1] [i_1])) : (((var_10) ? (var_6) : (((/* implicit */unsigned int) arr_2 [i_1] [i_1]))))))));
        var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? ((+((+(1668944501))))) : ((((+(((/* implicit */int) var_0)))) & (arr_2 [(unsigned short)7] [(unsigned short)7]))))))));
    }
    /* LoopNest 3 */
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 1) 
    {
        for (signed char i_3 = 3; i_3 < 13; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 2; i_4 < 13; i_4 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
                        {
                            {
                                arr_21 [i_3] [i_5] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) % (((/* implicit */int) ((unsigned char) (short)-18929)))))) ? (((((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2])) && (((/* implicit */_Bool) arr_11 [i_3] [i_4] [i_3] [i_6]))))) + (-1668944482))) : (((((/* implicit */_Bool) (~(-293665320)))) ? (((/* implicit */int) arr_6 [(unsigned char)4])) : (((/* implicit */int) ((_Bool) var_0)))))));
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_14 [(_Bool)0] [(signed char)1] [i_4] [i_5] [(_Bool)1]))));
                                arr_22 [i_2] [i_6] [(unsigned char)11] [i_2] [i_2] = ((/* implicit */unsigned int) min((max((((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)9090)) : (((/* implicit */int) (signed char)63)))), (((/* implicit */int) ((signed char) 2525400501U))))), (min((((/* implicit */int) var_9)), (1668944502)))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned char i_7 = 3; i_7 < 13; i_7 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((unsigned int) var_7))) + (((((/* implicit */_Bool) max((arr_23 [i_2] [i_3] [i_4 + 1]), (((/* implicit */long long int) arr_16 [i_2] [i_4] [i_4] [9LL] [9LL] [i_7 - 3]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_9 [i_2] [5LL])) + (((/* implicit */int) arr_7 [i_2] [i_2]))))) : (max((((/* implicit */unsigned long long int) arr_7 [i_4 + 1] [i_7])), (arr_13 [i_4] [i_4]))))))))));
                        arr_26 [i_2] [i_2] [i_4] [i_7 - 2] = ((/* implicit */_Bool) arr_10 [i_7 - 1]);
                    }
                    for (unsigned char i_8 = 3; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        arr_29 [8U] [8U] [i_2] = max((((((/* implicit */_Bool) max((arr_11 [i_2] [(_Bool)1] [i_2] [i_2]), (((/* implicit */short) arr_20 [i_2] [i_2] [i_4]))))) ? (((/* implicit */int) min((arr_18 [i_2] [i_3] [i_4 + 2] [i_8] [2]), (((/* implicit */unsigned char) (_Bool)1))))) : (((((/* implicit */_Bool) arr_16 [i_2] [i_2] [i_2] [i_3 + 1] [i_3 + 1] [(unsigned short)1])) ? (((/* implicit */int) (unsigned short)65528)) : (arr_19 [i_2] [i_3] [i_4 - 1] [i_4 + 1] [i_4 - 1] [(unsigned short)13] [(_Bool)1]))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned char)73))))))));
                        arr_30 [0] = ((/* implicit */signed char) arr_13 [(signed char)14] [(signed char)14]);
                        arr_31 [i_2] [3LL] [i_4] [i_3] [i_3 + 2] |= ((/* implicit */unsigned short) ((max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_18 [i_8] [i_8] [i_8 + 1] [(short)10] [i_8])) / (((/* implicit */int) (unsigned char)221)))))) / (arr_28 [i_2] [i_2] [i_2])));
                    }
                    for (unsigned char i_9 = 3; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_22 &= ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */int) (signed char)-113)) + (((/* implicit */int) (signed char)18)))), ((-(((/* implicit */int) var_12))))))) ? (((/* implicit */int) (signed char)-118)) : (((((/* implicit */_Bool) ((short) arr_23 [i_2] [(unsigned char)10] [i_2]))) ? (((((/* implicit */int) (unsigned short)0)) + (arr_17 [i_2] [i_2] [i_2] [(_Bool)1] [(signed char)9]))) : (((/* implicit */int) arr_7 [i_2] [(_Bool)1]))))));
                        arr_34 [2] [2] [i_4] = ((/* implicit */signed char) (+(min((1941652514444012499LL), (((/* implicit */long long int) -605901))))));
                        arr_35 [(_Bool)1] [(_Bool)1] [i_4] [i_9] [i_4 + 1] [(_Bool)1] = (short)-11766;
                        arr_36 [i_2] [i_3] [i_9 - 3] = ((/* implicit */short) ((((((/* implicit */int) arr_27 [i_3 - 3] [(signed char)12] [(signed char)12] [i_4 + 1] [i_4] [i_9 - 3])) <= (((/* implicit */int) arr_27 [i_3 + 1] [i_3 + 1] [i_4] [i_4 - 1] [i_3 + 1] [i_9 - 1])))) ? (((((/* implicit */_Bool) arr_19 [i_4 + 1] [i_4 - 1] [i_9 + 2] [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) arr_27 [i_3 - 3] [i_3] [i_4] [i_4 + 1] [i_4 + 1] [i_9 + 1])) : (arr_19 [i_2] [i_4 + 1] [i_9 - 2] [i_4 + 1] [i_9 - 3] [i_9] [i_4 + 1]))) : (((/* implicit */int) ((((/* implicit */long long int) 1447387338)) >= (-2788677878694352214LL))))));
                    }
                    /* vectorizable */
                    for (short i_10 = 3; i_10 < 12; i_10 += 1) 
                    {
                        var_23 = ((/* implicit */unsigned short) arr_3 [i_10]);
                        var_24 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_10))) | (((((/* implicit */_Bool) arr_5 [i_2])) ? (arr_23 [i_3] [i_4] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (short)32767)))))));
                        arr_39 [i_3] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_2] [i_3] [13U] [i_3])) ? (11LL) : (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) ((unsigned char) arr_9 [i_10] [i_3]))) : (((/* implicit */int) ((unsigned short) arr_9 [(unsigned short)11] [i_2])))));
                    }
                    arr_40 [i_2] [i_3 + 2] [(_Bool)1] [i_2] = ((/* implicit */signed char) arr_6 [i_2]);
                }
            } 
        } 
    } 
}
