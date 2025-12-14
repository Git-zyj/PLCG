/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99372
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
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) ((unsigned char) var_2)))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) var_12))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((var_9), (var_8)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_0 [i_0] [i_0 + 1]), (((/* implicit */short) (signed char)93)))))) : (var_11))))));
                var_17 |= ((/* implicit */unsigned short) ((((unsigned int) var_4)) - (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_0 + 1])))));
                var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) min((max((arr_3 [i_0 + 1]), (arr_3 [i_0 + 2]))), (min((arr_3 [i_0 + 2]), (arr_3 [i_0 - 1]))))))));
            }
        } 
    } 
}
