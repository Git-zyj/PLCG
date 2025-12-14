/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61749
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 24; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (short)5739))));
                    var_16 &= ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */int) max((arr_2 [i_2] [i_2 + 1]), (((/* implicit */short) arr_0 [i_1]))))), (var_1))));
                    var_17 = ((/* implicit */int) ((short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) / (4270020571298891068ULL))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_9)) >> (((/* implicit */int) (signed char)4)))) == (((((/* implicit */int) var_5)) << (((/* implicit */int) var_8))))))), (((((/* implicit */_Bool) max((var_7), (var_14)))) ? (((var_5) ? (2305708369850623171ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30879))))) : (((/* implicit */unsigned long long int) ((((-3878039733235677355LL) + (9223372036854775807LL))) << (((((var_1) + (1184319617))) - (48))))))))));
}
