/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82590
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
    var_20 = ((/* implicit */signed char) min((((/* implicit */long long int) (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (max((var_5), (((/* implicit */unsigned int) (_Bool)1))))))), (((((/* implicit */_Bool) min((0LL), (((/* implicit */long long int) var_17))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_17))))) : (max((((/* implicit */long long int) var_16)), (var_8)))))));
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)34)) ? (((((/* implicit */int) (unsigned char)219)) + (((/* implicit */int) (unsigned char)226)))) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1 + 3])))))));
                var_21 = ((/* implicit */int) max((var_21), (max((((((((/* implicit */int) arr_1 [i_1 + 1])) << (((/* implicit */int) arr_1 [i_1])))) * (((/* implicit */int) max((arr_3 [i_0 + 1] [6]), (((/* implicit */short) var_0))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (_Bool)1))))))))));
                var_22 -= ((/* implicit */short) min((((((/* implicit */_Bool) ((arr_1 [i_1]) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) var_2))))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) arr_1 [i_0 + 1])))), (max((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) (unsigned char)29)))), (((/* implicit */int) var_12))))));
                var_23 = (unsigned char)226;
            }
        } 
    } 
    var_24 |= ((/* implicit */long long int) min((min((min((8796093022207ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_13)), (var_19)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (8796093022219ULL)))) && (var_13))))));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) (~(var_16))))));
}
