/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73662
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
    for (int i_0 = 3; i_0 < 7; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) min((((/* implicit */long long int) ((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))), (((((/* implicit */long long int) ((/* implicit */int) (signed char)68))) / (-5359088964605616843LL))))))));
                var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min(((-(2952358266U))), (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-112)))))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)-72)))) - ((+(-5359088964605616843LL))))) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))));
                var_16 |= ((/* implicit */signed char) ((((long long int) var_12)) ^ (((/* implicit */long long int) arr_1 [i_0] [i_0 + 3]))));
                var_17 = ((/* implicit */unsigned int) ((((unsigned int) ((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 3] [i_0])) || (((/* implicit */_Bool) var_11))))) >= (((/* implicit */unsigned int) arr_1 [i_0] [i_1]))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((int) var_13))) | ((-(4294967295U)))))));
}
