/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58418
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
    var_14 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (var_11))))) : (((var_10) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) : (var_3)))))) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((-630125959), (((/* implicit */int) var_11))))), ((~(var_5)))))) : (min((((/* implicit */unsigned long long int) ((var_6) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (10991225496413581346ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 3) 
    {
        for (unsigned int i_1 = 4; i_1 < 11; i_1 += 4) 
        {
            {
                arr_5 [i_1] = ((/* implicit */unsigned short) ((unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_1 [i_0])), (var_0)))))));
                var_15 += ((((_Bool) arr_3 [i_1 - 4] [i_1 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0 - 2]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1] [i_0 - 1]))))))) : (((min((10991225496413581348ULL), (((/* implicit */unsigned long long int) arr_3 [(_Bool)1] [i_1 - 1])))) * (((/* implicit */unsigned long long int) ((unsigned int) (_Bool)1))))));
                arr_6 [i_0] [i_1 - 2] [i_1 - 3] = ((short) ((var_10) ? (min((((/* implicit */unsigned long long int) (unsigned char)168)), (var_7))) : (min((7455518577295970287ULL), (((/* implicit */unsigned long long int) arr_1 [i_0]))))));
                arr_7 [i_0] [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0]))) & (arr_4 [i_0])));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned char) var_7);
    var_17 = var_0;
}
