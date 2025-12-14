/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9337
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9337 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9337
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
    var_11 = ((/* implicit */_Bool) var_2);
    var_12 = ((/* implicit */unsigned char) max((var_12), (((/* implicit */unsigned char) ((((/* implicit */int) max((((/* implicit */short) (signed char)47)), (var_8)))) - ((+(33554416))))))));
    var_13 = ((/* implicit */unsigned char) ((short) var_6));
    var_14 = ((/* implicit */int) ((_Bool) var_1));
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14749825778081813356ULL)) ? (((/* implicit */int) (unsigned char)7)) : (((/* implicit */int) (signed char)46))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))));
        arr_3 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)227)) ? (((/* implicit */unsigned long long int) arr_2 [i_0] [i_0])) : (18014398509481983ULL)));
    }
}
