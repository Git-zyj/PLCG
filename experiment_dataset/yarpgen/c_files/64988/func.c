/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64988
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64988 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64988
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
    var_16 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)53959))))) : (max((((/* implicit */unsigned int) (_Bool)0)), (var_11)))))));
    var_17 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) (+(((/* implicit */int) var_4))))), (var_7))), (((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12187))) : (7103665719640716000LL)))))));
    var_18 ^= ((/* implicit */long long int) var_0);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) min((-1476454802408582095LL), (((/* implicit */long long int) (short)12472))));
                var_20 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (unsigned short)0)) ? (arr_5 [i_0] [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1])))))));
            }
        } 
    } 
}
