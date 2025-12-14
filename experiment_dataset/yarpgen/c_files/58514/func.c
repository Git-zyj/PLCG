/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58514
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)0)) >> (((/* implicit */int) (unsigned short)2))));
        var_19 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(2297343530977969055ULL)))) ? (((((/* implicit */_Bool) arr_1 [4LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [10U]))) : (2297343530977969055ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [14ULL])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) 760196734);
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
    {
        var_20 += ((/* implicit */_Bool) 760196740);
        arr_6 [i_1] = ((((/* implicit */unsigned long long int) arr_1 [i_1])) != (16149400542731582537ULL));
    }
    var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((((_Bool)1) && (((/* implicit */_Bool) var_17)))))))) & (((((/* implicit */_Bool) ((var_9) ? (-760196748) : (var_16)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))))))));
    var_22 = ((/* implicit */short) var_7);
}
