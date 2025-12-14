/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73693
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
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) (~((~(((((/* implicit */int) (unsigned short)51907)) & (((/* implicit */int) (_Bool)0))))))));
                arr_6 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_1 - 1]);
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) (signed char)(-127 - 1))), (var_6)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : (var_6))) << (((((((/* implicit */_Bool) arr_0 [i_1])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))) - (3861851890U)))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7)))))));
}
