/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86506
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
    for (int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_14 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_4 [i_0])))));
                arr_6 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) 15U)) && (((/* implicit */_Bool) (unsigned char)220))))) - (arr_2 [i_0] [i_0])))) || (((/* implicit */_Bool) ((unsigned long long int) var_1)))));
                var_15 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (signed char)127)), (arr_1 [i_0]))))))) >= ((+(((/* implicit */int) (signed char)20))))));
            }
        } 
    } 
    var_16 = ((/* implicit */long long int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) / (((((/* implicit */_Bool) var_5)) ? (7032604650060099532ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= (min((((/* implicit */int) var_8)), (1943948335))))))));
    var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) max((((/* implicit */unsigned int) ((_Bool) var_12))), (((unsigned int) (-(((/* implicit */int) (unsigned char)67))))))))));
}
