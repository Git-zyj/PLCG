/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64999
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
    var_17 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)11851)) ? (((/* implicit */int) (short)-31260)) : (((/* implicit */int) (short)29616)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) ((_Bool) arr_0 [i_0]));
                arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_1])) ? (((/* implicit */int) arr_4 [i_0])) : ((+(((/* implicit */int) (_Bool)1))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) max((((var_16) ? (((/* implicit */int) max(((short)5003), (var_7)))) : (((/* implicit */int) var_12)))), (((/* implicit */int) ((short) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-28012))))))));
}
