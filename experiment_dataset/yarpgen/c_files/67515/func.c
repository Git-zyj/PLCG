/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67515
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
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        var_19 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_0 [i_0 - 2])))));
        arr_4 [i_0 + 1] [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) arr_3 [i_0 + 1])) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) arr_3 [i_0 + 1])))));
        var_20 = ((/* implicit */int) ((short) 8589934591ULL));
        arr_5 [10U] = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) arr_0 [9LL])), ((-(((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) arr_2 [i_0])) : (var_12)))))));
    }
    var_21 = ((/* implicit */int) 8589934584ULL);
    var_22 = ((/* implicit */long long int) ((unsigned short) var_18));
}
