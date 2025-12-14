/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67508
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
    var_13 |= ((/* implicit */signed char) (((!(((/* implicit */_Bool) max((var_4), (var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)32767)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_5)))))) : ((~(var_9)))))) : (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_6)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 2; i_2 < 12; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned short) (short)32767);
                            var_15 = ((/* implicit */signed char) (((+(-2949592666027585284LL))) >= (((/* implicit */long long int) 14U))));
                        }
                    } 
                } 
                var_16 = arr_7 [i_1];
            }
        } 
    } 
    var_17 = ((/* implicit */int) var_10);
}
