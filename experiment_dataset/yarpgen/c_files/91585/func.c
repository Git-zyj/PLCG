/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91585
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
    var_15 = ((/* implicit */_Bool) (~(var_2)));
    var_16 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((((/* implicit */int) (short)30222)) - (30198)))))) ? (((/* implicit */unsigned long long int) min((15872U), (((/* implicit */unsigned int) (unsigned char)72))))) : (var_8))) > ((+(min((var_8), (((/* implicit */unsigned long long int) (short)4321))))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 14; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */int) (((_Bool)0) ? (4294951423U) : (((/* implicit */unsigned int) -1683074843))));
                arr_5 [i_1] [i_0] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) 15872U)), (5050541319192346427ULL)));
                var_18 = ((/* implicit */unsigned int) var_6);
                var_19 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 0)) ? (-1683074861) : (2010399977)))), (min((var_1), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                arr_6 [i_0] = ((((/* implicit */_Bool) arr_2 [i_1 + 1] [i_1 - 4] [i_1 - 4])) ? (max(((-(var_8))), (((/* implicit */unsigned long long int) var_10)))) : (min((max((((/* implicit */unsigned long long int) var_11)), (var_5))), ((-(var_6))))));
            }
        } 
    } 
}
