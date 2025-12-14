/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64465
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
    for (int i_0 = 3; i_0 < 19; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 20; i_2 += 3) 
            {
                {
                    var_15 += ((/* implicit */signed char) max((min((var_8), (((/* implicit */long long int) 340103393U)))), (((((/* implicit */_Bool) var_7)) ? (arr_7 [i_0 - 1] [i_2 + 1] [i_1 - 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0 + 1] [i_2 + 1] [i_1 - 2])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (signed char i_4 = 3; i_4 < 19; i_4 += 4) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned long long int) (~(min((arr_0 [i_1 + 1] [i_0 - 3]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_0 - 2])))))))));
                                arr_16 [i_4] [i_4] [i_3] [i_4] = ((((/* implicit */_Bool) ((short) arr_1 [i_0 - 3]))) ? (((arr_4 [i_0 - 3]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 - 2] [i_1 - 2] [i_0 + 1] [i_0 - 3]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((3954863879U), (((/* implicit */unsigned int) (signed char)0))))) ? (max((((/* implicit */unsigned long long int) 3954863902U)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ? (((/* implicit */unsigned long long int) var_1)) : (((unsigned long long int) ((var_8) < (((/* implicit */long long int) 340103393U)))))));
}
