/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99789
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99789 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99789
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
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2883871475U)) ? (((/* implicit */int) (unsigned char)172)) : (((/* implicit */int) (short)-18897))));
        var_20 = ((/* implicit */_Bool) arr_2 [i_0] [i_0]);
    }
    var_21 = ((/* implicit */short) (!(((/* implicit */_Bool) max((var_0), (((/* implicit */int) var_16)))))));
    var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) max((((/* implicit */signed char) var_17)), ((signed char)-65)))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_4)))) : (((((/* implicit */_Bool) 1168247142)) ? (((/* implicit */int) ((short) var_15))) : (((/* implicit */int) var_7))))));
    var_23 = max((var_7), (var_9));
}
