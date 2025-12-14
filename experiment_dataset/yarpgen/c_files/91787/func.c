/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91787
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91787 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91787
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
    var_20 -= ((/* implicit */unsigned int) var_10);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                var_21 = ((/* implicit */unsigned char) arr_1 [i_0] [i_0]);
                var_22 = ((/* implicit */unsigned int) max((var_22), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1])))))) ? (((/* implicit */unsigned int) ((((((/* implicit */int) arr_2 [i_0] [i_1])) << (((((/* implicit */int) var_15)) - (126))))) - (((((((/* implicit */int) (short)-14447)) + (2147483647))) >> (((((/* implicit */int) arr_4 [i_0])) - (12321)))))))) : (arr_3 [i_0])))));
            }
        } 
    } 
    var_23 = ((/* implicit */int) var_12);
    var_24 = ((/* implicit */short) max((((/* implicit */long long int) var_6)), (min((((/* implicit */long long int) ((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))), ((-(4456387821440728838LL)))))));
}
