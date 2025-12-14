/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66023
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66023 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66023
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
    for (short i_0 = 2; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((/* implicit */int) var_7))))) ? (((/* implicit */long long int) max((909367327U), (((/* implicit */unsigned int) var_2))))) : ((-(max((((/* implicit */long long int) var_10)), (-5239174846632413211LL))))))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) arr_4 [4ULL] [i_2] [6]))));
                    var_15 |= ((/* implicit */unsigned int) (((~(((((/* implicit */_Bool) 1945179589)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))) >= (((/* implicit */int) var_12))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_3 = 0; i_3 < 18; i_3 += 4) 
    {
        for (int i_4 = 3; i_4 < 17; i_4 += 4) 
        {
            {
                var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (-1945179583) : (((/* implicit */int) ((short) arr_6 [i_3] [i_4 - 2]))))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? ((+(((/* implicit */int) var_12)))) : (max((-1945179592), (((/* implicit */int) arr_9 [i_4] [9LL] [i_3])))))))));
            }
        } 
    } 
}
