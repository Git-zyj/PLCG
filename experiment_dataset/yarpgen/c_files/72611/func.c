/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72611
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
    var_18 = var_16;
    /* LoopNest 2 */
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 12; i_1 += 3) 
        {
            {
                arr_4 [i_0 - 1] [i_0] = ((/* implicit */unsigned int) var_6);
                var_19 = ((/* implicit */unsigned int) (((~(max((1466048591U), (var_4))))) != (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > (var_4)))), (((unsigned char) var_4))))))));
                var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_1 [5U]))))) * (min((1466048591U), (((/* implicit */unsigned int) arr_0 [(unsigned char)4]))))))) || ((_Bool)1)))));
                var_21 ^= ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_15)) ? (var_12) : (((unsigned int) arr_1 [i_0])))));
            }
        } 
    } 
    var_22 = ((/* implicit */_Bool) max((var_22), (((((/* implicit */unsigned int) (((+(((/* implicit */int) var_7)))) * (((/* implicit */int) var_0))))) > (((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) == (1466048578U))) ? (min((var_10), (1466048587U))) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_17), ((_Bool)1)))))))))));
    var_23 = ((((max((((/* implicit */unsigned int) (_Bool)1)), (var_10))) != (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) ? (2448029096U) : (((unsigned int) (unsigned char)255)));
}
