/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73013
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
    for (int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        var_13 = ((/* implicit */short) (-(((/* implicit */int) (_Bool)1))));
        var_14 = ((/* implicit */int) var_6);
        var_15 -= ((((/* implicit */int) (_Bool)1)) << (((1192272527570052994LL) - (1192272527570052979LL))));
        var_16 -= ((/* implicit */short) ((((/* implicit */int) var_5)) - (arr_1 [i_0])));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)4421)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))));
    var_18 = ((/* implicit */unsigned int) var_3);
    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1LL)) || ((_Bool)1)));
}
