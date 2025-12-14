/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80305
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80305 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80305
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
    /* vectorizable */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_18 = ((/* implicit */int) arr_2 [i_0]);
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_0])))))));
        var_20 *= ((/* implicit */short) ((((/* implicit */int) (unsigned char)30)) > (((/* implicit */int) (unsigned char)140))));
        arr_4 [i_0] = ((/* implicit */short) var_0);
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) 18446744073709551615ULL))));
    }
    var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)34)) ? (((/* implicit */int) ((_Bool) var_5))) : (((/* implicit */int) var_4))))) && (((((/* implicit */_Bool) (unsigned char)47)) && ((_Bool)0)))));
    var_23 = 5556659429082437192ULL;
}
