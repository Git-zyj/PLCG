/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74398
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74398 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74398
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
    for (signed char i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_1] &= ((/* implicit */_Bool) min((((/* implicit */int) var_1)), (((((/* implicit */_Bool) var_6)) ? (arr_3 [i_1 + 1]) : (((/* implicit */int) var_1))))));
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    for (unsigned short i_3 = 1; i_3 < 7; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_3] [i_0] = ((/* implicit */unsigned short) arr_11 [i_3] [i_3] [0U] [i_3 + 3] [i_3 + 1] [i_3 + 2]);
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)9566)) - (((/* implicit */int) (unsigned char)229))))) : (((((/* implicit */unsigned long long int) var_0)) ^ (arr_1 [(signed char)1])))));
                            }
                            arr_13 [i_0] [i_3] [i_2] [i_3] [i_1] = ((/* implicit */unsigned int) min((max((min((arr_8 [i_0] [i_0] [(unsigned short)4] [i_3] [i_0] [(_Bool)0]), (((/* implicit */unsigned long long int) var_8)))), (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_1] [(signed char)9] [i_3] [i_0] [i_1]), (((/* implicit */signed char) arr_2 [i_2]))))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 1374773494U)))))));
                            var_14 = ((/* implicit */unsigned long long int) 1374773494U);
                            var_15 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) 1374773494U)) / (12657544214991714367ULL))), (((/* implicit */unsigned long long int) max((arr_11 [i_0] [i_2 + 2] [i_1 + 1] [i_0] [(short)3] [(unsigned short)3]), (arr_11 [i_1] [i_2 + 1] [i_1 + 1] [i_1 + 1] [(unsigned short)9] [i_0]))))));
                        }
                    } 
                } 
                arr_14 [i_0] [i_1] [i_1 + 1] = ((unsigned short) ((((/* implicit */int) (unsigned short)22416)) > (((/* implicit */int) arr_2 [i_1 + 1]))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 1) 
                {
                    for (long long int i_6 = 0; i_6 < 10; i_6 += 1) 
                    {
                        {
                            arr_19 [i_5] [i_5] [i_5] [i_5] [(_Bool)1] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */long long int) arr_2 [i_0])), (((arr_10 [i_0]) % (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0])))))));
                            arr_20 [i_0] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) 2920193788U))))))));
                            var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) ((((var_7) | (((/* implicit */long long int) ((/* implicit */int) min((var_12), (((/* implicit */unsigned short) arr_0 [(signed char)7])))))))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */short) var_8)), ((short)-3783)))) ? (((/* implicit */int) (signed char)60)) : (((/* implicit */int) arr_11 [i_0] [i_1 + 1] [i_5] [i_5] [i_5] [i_5]))))))))));
                            var_17 = ((/* implicit */unsigned int) (!(((((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1])) >= (((/* implicit */int) arr_6 [i_1] [i_1 + 1] [i_1]))))));
                            arr_21 [i_0] [i_0] [i_0] [i_6] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_15 [i_0] [i_1 + 1])) : (778399906))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_7 = 0; i_7 < 14; i_7 += 2) 
    {
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 4) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_9 = 1; i_9 < 13; i_9 += 4) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_18 *= ((/* implicit */unsigned long long int) var_12);
                            arr_34 [i_7] [3ULL] [i_8] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_7] [i_9 - 1])) ? (((/* implicit */long long int) max((((/* implicit */int) arr_30 [i_7] [10U] [(unsigned char)9] [i_10])), ((~(((/* implicit */int) (unsigned short)65535))))))) : (((long long int) arr_29 [i_9]))));
                            var_19 = ((/* implicit */long long int) (-(min((arr_32 [i_7] [i_9]), (((/* implicit */unsigned long long int) var_12))))));
                        }
                    } 
                } 
                arr_35 [i_7] [i_7] = ((/* implicit */_Bool) 2920193810U);
            }
        } 
    } 
    var_20 = ((unsigned long long int) var_0);
}
