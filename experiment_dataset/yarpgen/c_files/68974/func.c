/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68974
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68974 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68974
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
    var_19 = ((/* implicit */_Bool) var_4);
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */long long int) var_4)))))) ? (((var_13) | (var_1))) : (((var_13) + (var_5)))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_1])))) : (max((((/* implicit */long long int) var_9)), (var_10)))));
                var_21 += ((/* implicit */unsigned int) (_Bool)1);
            }
        } 
    } 
}
