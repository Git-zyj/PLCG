/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73073
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
    var_10 |= ((/* implicit */unsigned short) (~(var_7)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] = (!(((/* implicit */_Bool) (unsigned char)49)));
        var_11 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_1 [i_0])) || (((/* implicit */_Bool) var_9)))) ? (((1543520041629592278ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) (+(var_6))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) var_8))));
            var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((arr_1 [i_0]) >= (((/* implicit */long long int) arr_4 [i_0])))) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-80))))) : (var_8))))));
            arr_6 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (0LL)));
        }
    }
}
