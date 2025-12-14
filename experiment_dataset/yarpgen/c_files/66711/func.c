/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66711
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (_Bool)1))));
                arr_5 [5LL] [(signed char)7] = ((/* implicit */int) arr_0 [i_0] [i_1]);
            }
        } 
    } 
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((var_8) << (((11461605923389357822ULL) - (11461605923389357805ULL))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_6))))))) ? (((((((/* implicit */_Bool) var_5)) ? (636697638U) : (var_7))) >> (((((/* implicit */int) var_5)) + (123))))) : (((min((3658269685U), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) ((((/* implicit */int) (short)8318)) | (var_14))))))));
    var_17 = var_11;
}
