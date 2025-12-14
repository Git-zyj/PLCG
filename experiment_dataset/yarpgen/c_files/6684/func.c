/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6684
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6684 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6684
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
    var_17 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((unsigned int) 1329969539)) : (((/* implicit */unsigned int) min((var_7), (((/* implicit */int) var_15))))))) * (((/* implicit */unsigned int) (-(((((/* implicit */int) var_2)) / (2147483647))))))));
    var_18 = ((/* implicit */int) var_8);
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [(_Bool)1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4267052123U)) ? (4267052134U) : (((/* implicit */unsigned int) -398472915))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 398472915)) ? (var_5) : (((/* implicit */int) var_2))))) ? (((/* implicit */int) arr_0 [i_0 - 3])) : (var_6))) : (398472910)));
                arr_6 [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 4267052123U)) ? (((/* implicit */int) arr_3 [i_0 - 4] [i_0 - 2])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1])))))));
                var_19 = ((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))));
                var_20 = ((/* implicit */_Bool) ((((((/* implicit */long long int) (~(-2147483643)))) == (((((/* implicit */_Bool) 1071644672)) ? (var_8) : (((/* implicit */long long int) var_3)))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) max((var_16), ((short)-18825)))) : (((/* implicit */int) ((((/* implicit */_Bool) 27915198U)) || (var_1)))))) : (var_5)));
            }
        } 
    } 
}
