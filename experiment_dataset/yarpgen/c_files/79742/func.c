/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79742
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
    var_10 = ((/* implicit */short) min((var_10), (var_5)));
    var_11 -= ((/* implicit */short) (!((_Bool)0)));
    var_12 = ((/* implicit */short) (-(((/* implicit */int) var_6))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_13 += ((/* implicit */short) (_Bool)1);
        var_14 = ((/* implicit */_Bool) min((var_14), (((_Bool) ((((/* implicit */int) arr_1 [i_0 - 1])) < ((-(((/* implicit */int) (short)26463)))))))));
    }
}
