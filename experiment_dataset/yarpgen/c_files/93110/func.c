/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93110
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93110 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93110
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
    var_10 = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_0) : (((((/* implicit */int) var_2)) - (((/* implicit */int) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            {
                arr_5 [(unsigned char)9] [i_0] [(signed char)7] = (((~(((arr_0 [(signed char)8]) - (((/* implicit */int) (short)(-32767 - 1))))))) != (((/* implicit */int) (unsigned short)47096)));
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) ((((/* implicit */_Bool) (short)(-32767 - 1))) && (((/* implicit */_Bool) (short)32767)))))));
            }
        } 
    } 
    var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) (~((~(((/* implicit */int) var_5)))))))));
}
