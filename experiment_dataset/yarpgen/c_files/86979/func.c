/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86979
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
    var_15 = ((/* implicit */signed char) ((int) min((min((((/* implicit */int) (_Bool)1)), (var_12))), (var_10))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (short)-10393))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) (short)10393)) ? (((/* implicit */int) (short)-10398)) : (((/* implicit */int) (short)10399)))))) ? (((int) ((((/* implicit */_Bool) arr_0 [(short)5])) ? (((/* implicit */int) (short)-10405)) : (((/* implicit */int) (short)-10399))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-10396)))))) ? (((/* implicit */int) (short)-10402)) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)10418)) : (((/* implicit */int) (short)10399))))))));
            }
        } 
    } 
    var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-10409)) ? (((/* implicit */int) (short)-10405)) : (((/* implicit */int) (short)10398))))))) ? (min(((~(((/* implicit */int) (short)-10371)))), (((/* implicit */int) ((short) var_11))))) : (((/* implicit */int) (short)10404))));
}
