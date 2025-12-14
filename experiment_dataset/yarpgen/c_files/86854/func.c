/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86854
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
    var_12 -= ((-2083465865) / (((((/* implicit */_Bool) var_11)) ? (var_6) : (((((/* implicit */_Bool) var_9)) ? (var_1) : (var_0))))));
    var_13 = min(((~(var_6))), (-2043736377));
    var_14 ^= max((-18137754), (58720256));
    var_15 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) -58720243)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_5))))) : (min((var_5), (var_2)))))) ? (((((int) 0)) >> (((var_2) + (821824911))))) : ((~(-18137756))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) var_9)) ? (arr_1 [7] [i_1]) : (-18137728))) : (max((var_11), (-18137756)))))) && (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) / (max((18137746), (var_9))))))));
                var_17 = ((/* implicit */int) max((var_17), (var_7)));
            }
        } 
    } 
}
