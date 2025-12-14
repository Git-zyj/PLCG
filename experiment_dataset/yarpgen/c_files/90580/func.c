/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90580
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90580 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90580
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
    var_20 = ((/* implicit */long long int) var_3);
    var_21 = ((/* implicit */unsigned long long int) (!(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49491))) <= (2396713576979447400ULL)))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((unsigned short) arr_0 [i_0 - 1])))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)49500)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (min((((/* implicit */unsigned long long int) (short)16668)), (var_16))) : (max((((/* implicit */unsigned long long int) (short)24071)), (var_10))))))));
        arr_4 [i_0] = min((arr_0 [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) arr_2 [i_0])))))))));
    }
}
