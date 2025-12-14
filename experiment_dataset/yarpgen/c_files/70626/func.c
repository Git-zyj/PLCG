/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70626
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
    for (signed char i_0 = 1; i_0 < 20; i_0 += 4) 
    {
        var_13 = (~((~(((((/* implicit */_Bool) 1048420448U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)8)))))));
        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_0 [(short)16]))));
    }
    var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) var_11))));
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)248)) ? (((/* implicit */int) (unsigned char)3)) : (((/* implicit */int) (_Bool)0))));
}
