/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90565
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)108))))) % (var_9)))), (min((((/* implicit */unsigned long long int) (-(4294967286U)))), (var_1)))));
    var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_1))));
    var_15 = ((/* implicit */unsigned char) ((unsigned long long int) var_5));
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 19; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) arr_0 [i_0 + 3]))));
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_4 [i_1])) : ((-((-(var_2)))))));
            }
        } 
    } 
}
