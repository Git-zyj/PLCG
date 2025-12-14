/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97572
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
    var_13 = ((/* implicit */unsigned short) (_Bool)0);
    var_14 = ((/* implicit */signed char) max((min((2335392655U), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1959574641U))))), (((/* implicit */unsigned int) (signed char)127))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */long long int) (-((+(((/* implicit */int) var_7))))))) & (min((((/* implicit */long long int) min((var_12), (((/* implicit */int) arr_4 [i_0] [i_0] [0ULL]))))), (var_8))))))));
                var_16 *= ((/* implicit */signed char) ((((((/* implicit */int) ((1801156574U) != (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))) != (var_2))) ? (((/* implicit */long long int) (~(((2493810721U) & (1801156574U)))))) : (max((((((/* implicit */_Bool) var_1)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */long long int) ((signed char) arr_2 [i_0])))))));
                var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((16425545094577678929ULL) ^ (((/* implicit */unsigned long long int) min((2493810721U), (1959574640U)))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_1 [i_1])), (((unsigned char) arr_4 [i_0] [i_1] [i_0])))))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) 1801156591U);
}
