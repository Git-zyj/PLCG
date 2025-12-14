/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81250
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
    for (long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_13 = ((/* implicit */unsigned long long int) min((max((min((((/* implicit */int) (short)-26832)), (var_8))), ((-(((/* implicit */int) arr_2 [i_0])))))), (((((/* implicit */int) (unsigned short)5451)) - (((((/* implicit */_Bool) -4796613318537990026LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) arr_3 [i_0]))))))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) (short)-26832))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) == (min((((/* implicit */long long int) (_Bool)1)), (-6985375745380422325LL)))))) : (((((/* implicit */_Bool) min((-5851666966379753585LL), (((/* implicit */long long int) (unsigned char)11))))) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)30539)))))))));
        var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (short)32750))));
    }
    var_16 ^= (-(((((/* implicit */_Bool) var_6)) ? (740254064) : (var_8))));
}
