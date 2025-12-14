/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70516
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned int) (unsigned char)128);
        arr_3 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_1 [i_0] [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))) != (((unsigned int) arr_2 [i_0]))));
        var_17 = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 2759629445U))))))), (var_10)));
    }
    var_18 = min((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))))), (((((/* implicit */_Bool) 1535337851U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (min((((/* implicit */unsigned int) (signed char)26)), (var_14))))));
}
