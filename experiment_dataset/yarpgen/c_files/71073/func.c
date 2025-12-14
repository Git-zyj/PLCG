/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71073
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
    for (signed char i_0 = 3; i_0 < 21; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_15 ^= max((((arr_1 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) (short)10205))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) || (arr_0 [i_0 + 2])))));
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
                {
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_2] [i_1] [i_0])))))) ? ((-(var_4))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0 - 3]) || (var_14))))))) > (var_4))))));
                    arr_7 [(unsigned short)6] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(max((var_9), (((/* implicit */unsigned long long int) var_0))))))) || (((/* implicit */_Bool) 10719078783346870246ULL))));
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) ((short) var_12)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (min((231193402U), (((/* implicit */unsigned int) 1454229107))))));
                }
                /* vectorizable */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    arr_11 [i_3] [i_0 - 3] [i_0 - 2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]))));
                    /* LoopNest 2 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 4) 
                        {
                            {
                                arr_16 [i_3] [5U] [5] [5U] [i_3] [i_4] [(unsigned char)24] = ((/* implicit */_Bool) ((((((/* implicit */int) (_Bool)0)) < (((/* implicit */int) (_Bool)1)))) ? (arr_6 [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
                                arr_17 [i_0 - 2] [i_1 - 1] [i_3] [i_5 + 3] = ((/* implicit */_Bool) arr_2 [7] [7ULL] [i_0]);
                            }
                        } 
                    } 
                    arr_18 [i_3] [i_3] [(unsigned short)22] = ((/* implicit */unsigned short) var_1);
                    arr_19 [i_3] = ((/* implicit */int) var_13);
                }
                arr_20 [i_0 + 3] [i_1] = ((arr_13 [i_0 + 4] [i_0 - 3] [i_0] [i_0 + 3] [i_0 - 3] [i_0 - 1]) / ((-(arr_13 [i_0 + 2] [i_0 + 4] [i_0] [i_0 - 1] [i_0 + 3] [i_0]))));
                var_18 += ((/* implicit */signed char) 1454229107);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_2);
    var_20 = ((/* implicit */int) (-(var_9)));
    var_21 ^= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_2)) ? (var_11) : (min((var_11), (((/* implicit */long long int) var_12)))))), (((/* implicit */long long int) min((((((/* implicit */int) (unsigned short)0)) << (((/* implicit */int) var_1)))), (((/* implicit */int) (unsigned short)45999)))))));
}
