/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92323
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
    var_11 = ((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) % (541108863425875435LL));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 1) 
        {
            {
                arr_6 [i_0] = ((/* implicit */unsigned short) ((var_7) + (((/* implicit */unsigned long long int) var_6))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_1]) ^ (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))) - (max((arr_0 [(_Bool)1]), (((/* implicit */unsigned long long int) (short)-11153))))))));
                arr_8 [i_0] [i_0] [i_0] = (((((_Bool)0) ? (((/* implicit */int) arr_5 [i_0] [i_1 - 1])) : (((/* implicit */int) var_3)))) >> (((((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1])) ? (-8078349873866371311LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_1 - 1]))))) + (8078349873866371342LL))));
                arr_9 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_6) >= (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))))))) : (max((((/* implicit */long long int) var_2)), (-7232161332174872433LL)))))));
            }
        } 
    } 
}
