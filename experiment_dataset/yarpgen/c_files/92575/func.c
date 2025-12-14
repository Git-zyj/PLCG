/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92575
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
    var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -2504184988071720907LL)))) | (min((((/* implicit */unsigned long long int) var_4)), (var_18)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((unsigned int) var_11))))) : (((((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_12))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))));
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) & (var_7)))) ? (((unsigned int) (~(var_0)))) : (0U)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 3; i_1 < 13; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)252))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : (var_0)));
                arr_6 [i_0] [i_0] = ((/* implicit */short) max((((((/* implicit */_Bool) arr_2 [i_1 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) arr_2 [i_1 - 1])))), (((((/* implicit */int) arr_2 [i_1 - 3])) * (((/* implicit */int) arr_2 [i_1 - 1]))))));
                var_21 = ((/* implicit */unsigned long long int) (~(min(((~(4294967295U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))));
            }
        } 
    } 
}
