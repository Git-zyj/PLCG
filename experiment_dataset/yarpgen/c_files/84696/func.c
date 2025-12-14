/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84696
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84696 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84696
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
    var_13 = ((/* implicit */unsigned short) var_7);
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) ((unsigned short) var_10))))))));
                var_15 = ((/* implicit */unsigned long long int) arr_2 [i_0]);
            }
        } 
    } 
    var_16 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) | (((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
    var_17 ^= ((/* implicit */unsigned long long int) var_1);
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
}
