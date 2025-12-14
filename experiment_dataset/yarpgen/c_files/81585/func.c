/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81585
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
    var_10 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (((var_1) % (((/* implicit */unsigned long long int) max((var_3), (((/* implicit */long long int) var_7)))))))));
    var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)18151)), (13U))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)43)) ? (max((((/* implicit */unsigned long long int) max((arr_4 [i_1] [i_1] [(unsigned short)5]), (((/* implicit */long long int) arr_2 [(unsigned short)2] [i_0] [i_0]))))), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))));
                var_13 = ((/* implicit */unsigned long long int) min((var_13), (max((min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_7)))), (((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((arr_5 [i_1] [i_0]) << (((/* implicit */int) (_Bool)1)))))))))));
            }
        } 
    } 
}
