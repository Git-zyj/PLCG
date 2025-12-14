/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58801
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
    var_12 = ((5387151152919274015ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 18; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */_Bool) ((min((((((/* implicit */_Bool) 1832683625U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_1)))))) | (((/* implicit */int) (_Bool)1))));
                    var_13 = ((/* implicit */unsigned int) ((((5354668081170366985ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) | (((/* implicit */unsigned long long int) ((var_1) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_6)))))));
                    arr_10 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) var_11))))) * (((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_5)) - (48))))))) != (((/* implicit */int) (unsigned short)2862))));
                    var_14 = ((/* implicit */short) (_Bool)1);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))));
}
