/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95487
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((max((var_7), (((/* implicit */unsigned long long int) var_6)))) & (((var_7) & (((/* implicit */unsigned long long int) var_1)))))) : (((/* implicit */unsigned long long int) ((unsigned int) var_6)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) max((var_11), (((/* implicit */unsigned int) (+(var_1))))));
                arr_5 [i_0] [i_1] = ((/* implicit */int) ((unsigned int) min((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (0U)))), (min((((/* implicit */long long int) var_1)), (arr_4 [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) var_1))));
    var_13 = ((((/* implicit */_Bool) var_9)) ? (4229589248U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))));
}
