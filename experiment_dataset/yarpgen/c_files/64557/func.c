/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64557
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (signed char i_2 = 2; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_2 - 2] [i_2 - 2] [i_4] = ((/* implicit */signed char) var_0);
                                var_17 |= ((/* implicit */unsigned int) var_0);
                                arr_15 [(unsigned short)2] [i_1] [i_1] [(unsigned short)2] [(unsigned short)2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)18804)) - (((/* implicit */int) (signed char)82))));
                                arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] = ((/* implicit */short) ((((/* implicit */int) var_14)) + (((/* implicit */int) var_14))));
                            }
                        } 
                    } 
                } 
                var_18 = arr_1 [i_0];
            }
        } 
    } 
    var_19 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (((var_9) / (((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)101))) : (var_0)))))));
}
