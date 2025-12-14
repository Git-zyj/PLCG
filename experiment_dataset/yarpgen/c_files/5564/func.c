/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5564
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
    for (short i_0 = 3; i_0 < 22; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((unsigned char) ((((/* implicit */int) (unsigned char)141)) * (((/* implicit */int) (short)29235))))))));
        var_12 = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
        var_13 = ((/* implicit */unsigned char) ((unsigned int) (+(((/* implicit */int) min(((unsigned char)115), (((/* implicit */unsigned char) (signed char)1))))))));
        var_14 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)28))));
    }
    var_15 = ((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))));
    var_16 = ((/* implicit */unsigned char) 102375322U);
    var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) var_5))));
}
