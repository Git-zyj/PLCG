/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82884
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
    var_18 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))));
    var_19 = ((/* implicit */_Bool) ((short) var_3));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_3 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_1]))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_0])) ? (var_17) : (((/* implicit */int) (unsigned short)20))))) ? (((/* implicit */int) arr_5 [i_1 - 1] [i_1])) : ((~(((/* implicit */int) (unsigned char)255)))))) : (((/* implicit */int) (unsigned char)9))));
                var_20 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_0]))));
            }
        } 
    } 
    var_21 = ((/* implicit */int) ((signed char) min((((((/* implicit */_Bool) (unsigned char)184)) ? (((/* implicit */int) (short)-550)) : (((/* implicit */int) var_8)))), (max((var_17), (((/* implicit */int) var_0)))))));
}
