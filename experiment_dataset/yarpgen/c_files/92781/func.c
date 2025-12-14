/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92781
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned char) max((var_11), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(var_1)))))))));
        var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) ((((/* implicit */int) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) var_3)))) || (((/* implicit */_Bool) (~(17377382514061946745ULL))))))) - ((-(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [12LL])) : (((/* implicit */int) arr_2 [i_0])))))))))));
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (signed char)56)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))));
    }
    var_14 = ((/* implicit */signed char) ((3514483979U) << (((-3337994911620914561LL) + (3337994911620914566LL)))));
}
