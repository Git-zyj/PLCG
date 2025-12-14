/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56411
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) var_9);
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        {
                            var_14 &= ((/* implicit */short) (+(arr_2 [i_0])));
                            arr_12 [i_0] [i_1] [i_1] [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) & (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_0] [(short)6])) ? (-1319605617) : (arr_9 [i_0] [i_1])))) ^ (arr_11 [i_1] [i_1] [i_1] [i_1])))));
                            var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1)))) + (var_1)))), ((~(min((4665985070659580263ULL), (((/* implicit */unsigned long long int) (unsigned short)51641))))))));
                            var_16 = ((/* implicit */int) min((arr_7 [i_1] [i_1] [i_2]), (((/* implicit */unsigned int) min((var_2), ((unsigned char)237))))));
                            var_17 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (6202431283241526118ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [i_1 + 1] [i_1 + 1]))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = var_6;
    var_19 |= (unsigned char)53;
    var_20 = ((/* implicit */unsigned char) ((((long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (2345183303U)))) + (((/* implicit */long long int) ((356169276) - (((/* implicit */int) (signed char)64)))))));
}
