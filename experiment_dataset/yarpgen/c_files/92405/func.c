/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92405
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
    var_12 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((var_8), (var_8)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) var_11)))) | ((~(((/* implicit */int) min(((short)-19768), (var_11))))))));
    var_13 = ((/* implicit */unsigned long long int) (unsigned short)23479);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            {
                var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) && ((_Bool)0))))) - (max((((/* implicit */unsigned int) (short)-23647)), (4U)))))) ? (((/* implicit */int) min((min(((short)23647), ((short)19750))), ((short)19763)))) : (((/* implicit */int) (short)-19779))))));
                arr_4 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2856901710U)) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)23479)))))))) || (((/* implicit */_Bool) (((~(var_10))) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))));
            }
        } 
    } 
}
