/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60433
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
    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) var_7))));
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned short)41525)) : (-675321944)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)227))) : (2715605891U)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) (signed char)98);
        arr_2 [i_0] = ((/* implicit */short) (signed char)-5);
    }
}
