/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93047
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93047 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93047
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
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (var_10) : (((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_8)))) * ((-(((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) min(((signed char)109), ((signed char)32)))) : (((/* implicit */int) arr_3 [i_0 + 3] [i_0 + 3] [i_0 + 2]))))) ? (((((/* implicit */_Bool) (signed char)-110)) ? (arr_2 [i_0 + 1]) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [i_0 + 1]) : (((/* implicit */long long int) arr_0 [i_0])))))) : (((/* implicit */long long int) max((max((arr_0 [i_0]), (((/* implicit */unsigned int) (signed char)44)))), (((/* implicit */unsigned int) arr_3 [i_0 + 3] [i_0 + 2] [i_0 - 1])))))));
                var_16 |= ((/* implicit */long long int) max((arr_1 [(unsigned char)13]), (arr_1 [i_0 + 2])));
                var_17 = max((arr_2 [i_1]), (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_2 [i_1]) : (arr_2 [i_0 + 2]))));
            }
        } 
    } 
}
