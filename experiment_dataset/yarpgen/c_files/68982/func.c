/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68982
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68982 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68982
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
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) ((var_4) >= (((/* implicit */long long int) ((int) 721914877))))))) : (var_4)));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 1; i_2 < 9; i_2 += 1) 
                {
                    for (unsigned int i_3 = 4; i_3 < 7; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */_Bool) (-(arr_7 [i_3] [i_1] [i_3 + 2] [i_1] [i_0])));
                            var_14 = ((/* implicit */_Bool) max((var_3), (((/* implicit */short) var_6))));
                        }
                    } 
                } 
                arr_9 [i_0] [i_0] [10U] = ((/* implicit */_Bool) (-(max((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (((unsigned long long int) 1071644672))))));
            }
        } 
    } 
}
