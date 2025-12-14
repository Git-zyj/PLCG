/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67240
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
    var_15 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) == (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1262))) : (var_5))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_5 [i_1] [i_1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_3 [i_1] [i_1]), (((/* implicit */short) max(((_Bool)1), ((_Bool)1)))))))) : (((((_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (min((3500553126U), (((/* implicit */unsigned int) (_Bool)1))))))));
                var_16 = ((/* implicit */short) (-(((arr_1 [i_1 + 1] [i_1 + 1]) & (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0])))))));
                var_17 = ((((/* implicit */long long int) ((((/* implicit */_Bool) (short)4936)) ? (((/* implicit */int) arr_3 [i_1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1] [i_1 + 1]))))) ^ (((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((long long int) 0U)) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) * (var_13))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_10)))), (((int) var_2)))))));
}
