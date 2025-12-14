/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77221
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
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 15; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) arr_3 [i_0] [i_1]))));
                arr_4 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned char)127))) > (-696169257)));
            }
        } 
    } 
    var_17 = ((/* implicit */_Bool) ((short) ((((/* implicit */int) var_3)) ^ (696169256))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14)))))) ? (((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_0))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_11))))))) : (((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_15))))) / (((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))))))));
    var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_1))));
}
