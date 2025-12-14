/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69929
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
    var_13 *= var_10;
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) var_1))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */short) max((((((/* implicit */_Bool) 3059507096U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned short)59212)))), (((/* implicit */int) ((unsigned char) ((unsigned int) arr_0 [i_1]))))));
                var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (3336335213697165427ULL) : (var_12)))) ? (min((27ULL), (((/* implicit */unsigned long long int) (unsigned short)52975)))) : ((-(9921783930285773993ULL))))))))));
            }
        } 
    } 
}
