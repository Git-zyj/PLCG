/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89534
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
    var_13 = ((var_4) / (var_11));
    var_14 = ((/* implicit */int) min((var_14), (var_6)));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        var_15 = ((/* implicit */int) max((var_15), (var_8)));
        arr_3 [i_0] [i_0] |= ((((/* implicit */_Bool) (~(arr_2 [i_0])))) ? (((min((arr_2 [i_0]), (arr_0 [i_0]))) / (((var_1) >> (((arr_2 [i_0]) - (857124050))))))) : ((~(var_8))));
        var_16 = var_9;
        arr_4 [i_0] = min(((~(((arr_0 [14]) / (arr_1 [i_0]))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -200662629)) ? (-1031096242) : (arr_2 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_6))))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (var_3))))));
    }
    var_17 = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_0)) ? (var_11) : (var_1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((var_10) % (var_0)))) && (((/* implicit */_Bool) ((420082256) & (193845961))))))) : ((-(((int) var_7)))));
    var_18 = ((/* implicit */int) min((var_18), (var_3)));
}
