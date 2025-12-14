/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65563
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
    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_11))));
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) var_7))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        for (long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))))), (((unsigned int) arr_2 [i_0] [i_0]))))), (((var_9) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_14)) >= (var_5)))))))));
                            var_18 = ((/* implicit */int) (signed char)31);
                        }
                    } 
                } 
                arr_11 [i_0] [i_0] = (~(((((/* implicit */_Bool) var_8)) ? (max((((/* implicit */unsigned long long int) var_13)), (15711218827762329246ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))));
                arr_12 [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_10 [i_1] [i_1] [8LL] [i_1])) ? (((/* implicit */unsigned long long int) arr_9 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1])) : (arr_7 [8LL] [i_0])))));
                /* LoopNest 3 */
                for (unsigned int i_4 = 0; i_4 < 19; i_4 += 1) 
                {
                    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 2) 
                    {
                        for (int i_6 = 3; i_6 < 16; i_6 += 2) 
                        {
                            {
                                arr_20 [4U] [i_0] [i_4] [i_4] [i_5] [i_6 + 1] [i_6] = var_7;
                                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) arr_9 [i_4] [i_4] [i_4] [i_1] [i_1] [(short)0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_20 = var_5;
    var_21 ^= ((/* implicit */signed char) ((var_0) / (var_6)));
}
