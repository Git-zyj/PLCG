/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55898
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
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_3 [(signed char)2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_8) ? ((+(var_2))) : (var_2)))) ? (max((((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_0] [i_0]))))), ((-(113088919850362880LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)239))))))));
        var_14 = ((/* implicit */unsigned int) min((var_14), (((((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
        arr_4 [0LL] &= ((/* implicit */long long int) arr_2 [i_0] [i_0]);
    }
    var_15 = ((/* implicit */long long int) (short)6063);
    var_16 &= ((/* implicit */short) 3256053292U);
}
