/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87672
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
    var_20 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 484089167U)))) : (max((((/* implicit */long long int) (-2147483647 - 1))), (var_7))))));
    var_21 = ((/* implicit */unsigned char) -2147483641);
    var_22 = ((/* implicit */unsigned long long int) var_3);
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_1] [i_1] = ((/* implicit */short) var_16);
                var_23 *= ((/* implicit */unsigned char) ((long long int) min((((var_15) / (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3268910300154262594LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)2734))) : (-3268910300154262596LL)))))));
                var_24 = ((/* implicit */int) min((((((/* implicit */_Bool) ((signed char) 2684161126611608088LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_5 [i_0] [i_0] [i_0]), (((/* implicit */short) (unsigned char)39)))))) : (var_15))), (((/* implicit */unsigned long long int) (unsigned char)57))));
                var_25 = ((/* implicit */long long int) arr_2 [i_0] [i_0]);
            }
        } 
    } 
}
