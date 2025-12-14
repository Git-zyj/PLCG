/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66772
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66772 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66772
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
    var_13 = ((/* implicit */short) (~(((((((/* implicit */long long int) 3656024994U)) != (var_10))) ? (((/* implicit */unsigned long long int) ((long long int) var_3))) : (((((/* implicit */_Bool) (unsigned short)62923)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_6)))))));
    var_14 = ((/* implicit */int) ((_Bool) (-((-(((/* implicit */int) (short)-14445)))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) ((short) (unsigned short)2611));
                arr_6 [i_0] [i_0 - 1] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) (short)14445))));
                var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (signed char)-6)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-14446))))))))));
            }
        } 
    } 
}
