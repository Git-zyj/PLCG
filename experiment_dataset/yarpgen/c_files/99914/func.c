/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99914
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 1; i_0 < 8; i_0 += 4) 
    {
        var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) 1007462266)) : (((7251076737935373599ULL) & (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((/* implicit */int) (+(arr_2 [i_0 - 1] [i_0 - 1])));
        var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) > (((/* implicit */long long int) 941762178U)))))) + (var_11)));
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                arr_9 [i_0] [i_1] = (~(1377059540));
                /* LoopNest 2 */
                for (unsigned char i_3 = 3; i_3 < 9; i_3 += 3) 
                {
                    for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                    {
                        {
                            var_14 = ((((/* implicit */_Bool) arr_5 [i_2] [i_0 + 2] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)));
                            var_15 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 261120U)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_11 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4])))) <= (((/* implicit */unsigned long long int) arr_4 [i_0] [i_1] [i_2]))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_1 + 2])) ? (arr_1 [i_0 - 1] [i_1 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)141)))));
                        }
                    } 
                } 
                var_16 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) ((unsigned char) -8416982255692452882LL)))));
                arr_16 [i_0] [i_1] = ((/* implicit */long long int) (unsigned char)135);
                var_17 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (-1007462267) : (((/* implicit */int) var_7))))) == (775087562U)));
            }
            for (unsigned char i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_21 [i_0] = ((/* implicit */_Bool) arr_0 [i_1]);
                arr_22 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1307030159)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_5]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_1] [i_1] [i_1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_17 [i_0] [i_1] [i_5])))) : (((((/* implicit */_Bool) 11794496444432459868ULL)) ? (((/* implicit */long long int) var_8)) : (8018835285015000865LL)))));
            }
            arr_23 [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_0] [i_0 - 1] [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_1] [i_1] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (var_11)));
            arr_24 [i_0] [i_0] [i_0] = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_20 [i_0] [i_0])) >= (arr_6 [i_0] [i_0] [i_0])))));
            arr_25 [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)9406)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_1]))));
            arr_26 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) (_Bool)1);
        }
    }
    /* LoopNest 2 */
    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 4) 
    {
        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 4) 
        {
            {
                arr_31 [i_6] [i_6] = ((/* implicit */unsigned int) arr_27 [i_6]);
                var_18 |= ((/* implicit */short) (+(-914262635)));
            }
        } 
    } 
}
