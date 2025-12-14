/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7428
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
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)3057)) ? (1746896205) : (928990408)))) ? (((/* implicit */int) var_11)) : (((((/* implicit */_Bool) ((var_16) / (((/* implicit */int) arr_1 [12U]))))) ? (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (var_14))) : (((/* implicit */int) var_10))))));
        arr_2 [i_0] |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) % (1385170145U)))) ? ((-(((/* implicit */int) arr_1 [i_0])))) : ((~(((/* implicit */int) arr_1 [i_0]))))));
    }
}
