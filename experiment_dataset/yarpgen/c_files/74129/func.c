/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74129
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74129 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74129
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
    for (unsigned int i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned short) (!(((11353010615800158884ULL) >= (var_10)))));
                arr_5 [i_0 - 1] [i_1] [i_0] |= ((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) 1283285715U))))))) <= (((/* implicit */int) (signed char)60))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        arr_14 [i_0] = var_9;
                        var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_11 [(unsigned short)3] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1])) ? (arr_11 [i_0] [i_0 + 1] [i_0 - 2] [i_0] [i_0 - 1] [i_0 + 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0 - 2] [i_0])))));
                    }
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_8 [i_0] [i_1] [i_2]))) : (arr_8 [i_0 + 1] [i_1] [i_0 - 2]))))));
                }
                arr_15 [i_0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)127), (((/* implicit */unsigned short) arr_2 [i_0] [i_0 - 1])))))) < (((unsigned int) arr_2 [i_0] [i_0 - 1]))));
                arr_16 [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-21288)) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0 + 1])) - (56929))))) != (((((/* implicit */_Bool) arr_0 [i_0 - 2])) ? (((/* implicit */int) arr_0 [i_0 - 1])) : (((/* implicit */int) (unsigned short)51821))))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) (signed char)127)) != (((/* implicit */int) var_9))))))))));
    var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) var_2))));
}
