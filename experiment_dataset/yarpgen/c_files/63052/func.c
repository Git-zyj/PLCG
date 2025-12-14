/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63052
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
    var_19 = ((/* implicit */unsigned char) max(((-(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0)))))), (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (max((var_16), (((/* implicit */unsigned short) var_0)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_20 = ((/* implicit */int) arr_0 [i_0]);
        var_21 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        var_22 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_0 [i_0])) / (((/* implicit */int) arr_0 [i_0])))) - ((-(((/* implicit */int) arr_0 [i_0]))))));
    }
}
