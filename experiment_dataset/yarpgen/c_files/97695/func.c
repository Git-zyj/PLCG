/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97695
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
    var_12 &= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (var_6) : (var_0))) : (var_0))) : (((/* implicit */unsigned long long int) var_10))));
    var_13 = var_7;
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        arr_4 [i_0] = ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) 5562921961687135720ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-21603))) : (13040225649655463652ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))))));
        var_14 = ((/* implicit */short) var_10);
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        var_15 = ((/* implicit */unsigned long long int) var_7);
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7)))))) : (((/* implicit */int) var_4))));
        var_16 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_6))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))));
        arr_10 [i_1] = var_9;
    }
}
