/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82865
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
    var_13 = ((/* implicit */unsigned short) max((min(((~(var_2))), (var_9))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) min((2704382611U), (((/* implicit */unsigned int) (_Bool)1))))) : (var_9)))));
    var_14 = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)103))));
    var_15 = ((/* implicit */long long int) max((var_15), (((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1146243098)) > (2265160653U))))) * (max((((/* implicit */long long int) ((var_9) > (((/* implicit */long long int) var_4))))), (((long long int) var_12))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)39859)) ? (arr_0 [i_0 - 3]) : (arr_0 [i_0 - 2]))) >= (arr_0 [i_0 - 1])));
                var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -97784082)) ? (1282543065262974692LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-84)))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) max((var_18), (((((/* implicit */_Bool) (signed char)-84)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-103)))))));
}
