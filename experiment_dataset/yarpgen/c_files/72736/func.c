/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72736
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72736 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72736
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
    var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) var_1))));
    var_12 *= ((/* implicit */unsigned int) var_8);
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) arr_0 [i_0 - 1] [16]))));
                arr_4 [i_0 - 1] [i_1] [i_0] = ((((/* implicit */int) (!(arr_1 [i_0 - 1])))) > ((+(((/* implicit */int) arr_1 [i_0 - 1])))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_3 [i_0 - 1] [i_1]);
                var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
    var_15 = ((/* implicit */long long int) (((-(1350600799866413803ULL))) % (((((/* implicit */_Bool) (-(((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) -1825653711)) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (4303400624612753071ULL)))))));
}
