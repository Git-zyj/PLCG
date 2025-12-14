/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74820
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26943))) * (((unsigned long long int) arr_5 [i_0] [i_1 - 2])))))));
                var_16 = ((/* implicit */unsigned char) ((_Bool) ((short) var_2)));
                var_17 = ((/* implicit */unsigned short) max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) ((short) ((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((2626884785U) * (1668082510U)))) ? (max((var_8), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) var_5))));
}
