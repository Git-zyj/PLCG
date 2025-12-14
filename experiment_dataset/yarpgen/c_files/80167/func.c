/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80167
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80167 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80167
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_17 -= ((/* implicit */unsigned char) var_10);
                                var_18 = 261531516U;
                                arr_13 [i_0] [i_1] [i_0] [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (((+(((/* implicit */int) var_13)))) + (((/* implicit */int) (short)17088))))) ? (((/* implicit */int) (unsigned short)33047)) : (((arr_9 [i_0] [i_0]) + (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)32511))))))));
                                var_19 = ((/* implicit */long long int) min((var_19), (arr_10 [i_1] [i_2] [i_3] [i_2])));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                    {
                        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (arr_7 [i_2]) : (arr_7 [i_1])));
                        /* LoopSeq 1 */
                        for (signed char i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [i_1] [i_2] [i_5] [i_6])) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_5] [i_6])))));
                            var_22 = ((/* implicit */short) ((((((/* implicit */int) (short)-18048)) + (((/* implicit */int) var_7)))) == (((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_8)))))));
                            var_23 -= ((/* implicit */signed char) (((((-(((/* implicit */int) (unsigned short)32488)))) + (2147483647))) >> ((((+(((/* implicit */int) arr_1 [i_0] [i_1])))) + (28954)))));
                            var_24 += ((/* implicit */unsigned short) (~((-(var_10)))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_2] [i_2])) : (((/* implicit */int) arr_4 [i_0] [i_0])))))));
                            arr_22 [i_2] = ((/* implicit */unsigned int) ((((-2080973372) & (((/* implicit */int) arr_8 [i_0] [i_1] [i_2] [i_5])))) == (((var_2) - (((/* implicit */int) (_Bool)1))))));
                            var_26 = ((/* implicit */long long int) var_12);
                            arr_23 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((arr_10 [i_0] [i_2] [i_5] [i_7]) >> (((66584576) - (66584573)))));
                        }
                    }
                    /* vectorizable */
                    for (unsigned int i_8 = 0; i_8 < 20; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */unsigned long long int) var_12);
                        /* LoopSeq 2 */
                        for (short i_9 = 2; i_9 < 19; i_9 += 2) 
                        {
                            var_28 ^= ((/* implicit */unsigned char) (short)0);
                            arr_29 [i_0] [i_1] [i_2] [i_8] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_9 + 1] [i_9 + 1] [i_9 + 1] [i_9 - 1]))) : (var_16)));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_29 *= ((/* implicit */unsigned int) (unsigned short)0);
                            arr_32 [i_10] [i_10] [i_10] [i_8] [i_10] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (279223176896970752ULL) : (((/* implicit */unsigned long long int) 261531517U))));
                        }
                    }
                    var_30 = ((/* implicit */unsigned long long int) min((var_30), (((/* implicit */unsigned long long int) arr_1 [i_1] [i_2]))));
                    arr_33 [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (arr_17 [i_0] [i_1] [i_2] [i_2] [i_2])))));
                    var_31 = ((/* implicit */_Bool) 1772967673U);
                }
            } 
        } 
    } 
    var_32 &= ((/* implicit */short) (!(((/* implicit */_Bool) (-(4033435780U))))));
}
