/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9121
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
    for (int i_0 = 1; i_0 < 15; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */signed char) max((-8222363771954854240LL), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)48))))) != (((long long int) (_Bool)1)))))));
                    arr_8 [i_0] [i_0] = arr_7 [i_2] [i_2] [i_2] [i_2];
                    arr_9 [i_2] = var_6;
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) min((arr_11 [i_0] [i_1] [i_2] [i_3] [(_Bool)1] [i_2]), (((/* implicit */short) var_7))))) ? (min((-8222363771954854240LL), (((/* implicit */long long int) arr_1 [i_3] [i_0 - 1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0 - 1] [i_3] [i_0] [i_0])) && (((/* implicit */_Bool) (unsigned short)64))))))))));
                                var_18 = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_3 [i_3 + 2] [i_3 + 3] [4ULL])) >= (((/* implicit */int) arr_3 [i_3 - 1] [i_3] [i_3]))))) | (((/* implicit */int) max((arr_3 [i_3 - 1] [i_2] [i_2]), (((/* implicit */unsigned short) var_12)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */short) ((max((((/* implicit */long long int) max((var_6), (((/* implicit */short) (unsigned char)154))))), (min((((/* implicit */long long int) var_8)), (-8222363771954854224LL))))) >> ((((((!(((/* implicit */_Bool) var_10)))) ? (min((var_15), (((/* implicit */unsigned int) var_7)))) : (((473563441U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-14879))))))) - (3821389005U)))));
}
