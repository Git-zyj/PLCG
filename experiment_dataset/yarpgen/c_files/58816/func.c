/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58816
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_1])) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1))))), (((arr_3 [i_1] [i_0]) | (((/* implicit */long long int) ((/* implicit */int) (short)26249))))))) < (((/* implicit */long long int) (-(((/* implicit */int) (short)-26270)))))));
                arr_5 [i_0] = ((/* implicit */unsigned short) min((((((var_5) > (((/* implicit */unsigned long long int) 8367626440999838397LL)))) ? (((((/* implicit */_Bool) 2LL)) ? (-3759764686535993423LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))) : (arr_3 [i_0 + 2] [i_0 + 1]))), (((/* implicit */long long int) min((((/* implicit */int) max(((short)26249), ((short)-26268)))), (var_1))))));
            }
        } 
    } 
    var_15 = ((/* implicit */short) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (var_5)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 0LL)) < (var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26268))) & (var_5))))) - (max((((((/* implicit */_Bool) var_9)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)34013))))), (((/* implicit */unsigned long long int) -280516125))))));
}
