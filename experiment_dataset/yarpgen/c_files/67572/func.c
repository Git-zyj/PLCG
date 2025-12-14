/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67572
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
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 17; i_2 += 4) 
                {
                    arr_8 [(short)16] [i_1] [i_0] [(signed char)4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) (+(((/* implicit */int) (unsigned short)47017)))))) ? ((+(max((((/* implicit */unsigned long long int) (unsigned short)53566)), (arr_6 [i_0] [i_0]))))) : (max((arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1 + 1])))));
                    var_10 = var_0;
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (short i_3 = 0; i_3 < 17; i_3 += 3) 
                    {
                        var_11 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >> (((/* implicit */int) ((_Bool) var_5)))));
                        var_12 = ((/* implicit */short) ((((/* implicit */_Bool) arr_10 [i_1 + 1] [i_1] [i_1] [i_0])) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-59))) | (3704398133U))))));
                    }
                    /* vectorizable */
                    for (short i_4 = 2; i_4 < 15; i_4 += 2) 
                    {
                        arr_14 [i_4 + 1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (3728546497212645105LL) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))));
                        /* LoopSeq 3 */
                        for (short i_5 = 1; i_5 < 14; i_5 += 4) 
                        {
                            arr_18 [i_0] [i_5] [i_0] [i_0] [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_17 [i_0] [i_5])) >> (((var_4) - (14665747748447503349ULL)))));
                            var_13 = ((/* implicit */unsigned short) (-(arr_10 [i_5 + 1] [i_5 + 2] [i_5 - 1] [(_Bool)1])));
                            var_14 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (short)13856)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((long long int) arr_13 [i_0] [i_0]))));
                        }
                        for (short i_6 = 4; i_6 < 14; i_6 += 3) 
                        {
                            var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_0] [i_0])))))));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(((/* implicit */int) (signed char)45)))))));
                        }
                        for (short i_7 = 3; i_7 < 16; i_7 += 4) 
                        {
                            var_17 = ((unsigned short) (-(((/* implicit */int) arr_7 [(short)6] [(short)6] [(short)6] [(short)6]))));
                            var_18 = ((/* implicit */unsigned long long int) (unsigned char)224);
                            var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) (signed char)-63))));
                            arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_13 [i_1 - 2] [i_0]);
                            var_20 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */int) var_3)) >> (((-9125405408565308837LL) + (9125405408565308861LL))))));
                        }
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_8))));
                    }
                }
                for (short i_8 = 0; i_8 < 17; i_8 += 3) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((var_4) & (var_6))), (((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_1])))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0))));
                    arr_31 [i_8] [i_1] = ((/* implicit */unsigned char) (~((+(arr_10 [i_0] [i_1 - 2] [i_8] [i_0])))));
                    arr_32 [i_0] [i_0] [i_1 - 1] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_9))));
                }
                arr_33 [i_0] [i_0] = (!(((/* implicit */_Bool) var_9)));
                var_23 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (signed char)22)), ((unsigned short)53569)));
                var_24 = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)228)) >> ((-((~(0ULL)))))));
            }
        } 
    } 
    var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((var_5) * (var_5))))));
}
