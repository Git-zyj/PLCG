/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81606
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
    for (int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) var_9)), (var_2)))) ? (((((/* implicit */_Bool) ((2001634880U) + (((/* implicit */unsigned int) arr_1 [i_0]))))) ? (var_14) : (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) : (arr_0 [(_Bool)1]))))) : ((-(max((((/* implicit */long long int) var_12)), (arr_0 [i_1])))))));
                arr_4 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((2293332393U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)2))))))));
            }
        } 
    } 
    var_18 -= ((/* implicit */unsigned long long int) (!((_Bool)1)));
}
