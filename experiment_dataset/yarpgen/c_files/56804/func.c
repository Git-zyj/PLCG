/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56804
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
    var_16 = ((/* implicit */signed char) var_10);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 23; i_1 += 1) 
        {
            {
                var_17 *= (-((+(((/* implicit */int) arr_2 [i_0])))));
                var_18 = ((/* implicit */unsigned int) var_9);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((max((((/* implicit */int) var_12)), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)14642)) : (((/* implicit */int) (signed char)41)))))) != (((/* implicit */int) (unsigned short)21017))));
    var_20 = ((/* implicit */short) ((((((min((((/* implicit */long long int) (short)-28173)), (var_15))) + (9223372036854775807LL))) >> (((min((var_0), (var_15))) + (6648750416846336472LL))))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)7297))))) : (var_5))))));
    var_21 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) var_4))))))) ? ((-(((((/* implicit */_Bool) var_6)) ? (-1605759174910889715LL) : (((/* implicit */long long int) ((/* implicit */int) var_9))))))) : (((/* implicit */long long int) ((var_13) - (var_5)))));
}
