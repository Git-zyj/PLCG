/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62026
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_11 ^= ((/* implicit */unsigned int) var_6);
                var_12 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((int) (_Bool)1))))) & (min((((/* implicit */unsigned int) ((1463100185U) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))), (arr_5 [i_1] [i_0])))));
            }
        } 
    } 
    var_13 *= max((((((/* implicit */_Bool) (~(-1870925133)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_6)))) : (min((((/* implicit */unsigned long long int) var_10)), (var_7))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) -1870925133)))))))));
}
