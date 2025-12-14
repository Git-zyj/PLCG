/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87017
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
    for (signed char i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */signed char) (-2147483647 - 1));
                var_16 = ((/* implicit */unsigned long long int) (~(1358817190)));
                arr_5 [2ULL] &= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_12)), (min((((/* implicit */unsigned long long int) var_11)), (arr_0 [i_1])))))) ? (((/* implicit */unsigned long long int) max((2607961722U), (((/* implicit */unsigned int) var_0))))) : (max((3458764513820540928ULL), (((/* implicit */unsigned long long int) ((short) var_5)))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_14)) ? ((+(14987979559889010688ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_5)) <= (arr_3 [i_0 + 1])))))));
            }
        } 
    } 
    var_18 = ((/* implicit */signed char) var_10);
    var_19 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-89)) && (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)14572))) <= (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)26115))) + (3446588902520682375ULL)))))));
}
