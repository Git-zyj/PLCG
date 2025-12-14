/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86815
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86815 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86815
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
        for (short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((var_0) >= (((long long int) arr_0 [i_0] [i_0]))))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (var_4)))) : (((/* implicit */int) min((((/* implicit */short) arr_3 [i_0])), (var_9))))))));
                var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(-6811170692545548601LL)))) ? (max((((/* implicit */long long int) arr_4 [i_0] [i_0])), (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (short)-10705))))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1])))));
            }
        } 
    } 
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_1))));
    var_16 = ((/* implicit */long long int) (signed char)-123);
    var_17 = ((/* implicit */_Bool) var_12);
}
