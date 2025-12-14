/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66434
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
    for (long long int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_19 = ((/* implicit */unsigned long long int) (+((~(((((/* implicit */int) var_4)) ^ (((/* implicit */int) (unsigned char)252))))))));
        var_20 = max((max((arr_0 [i_0]), (((/* implicit */short) var_5)))), (max((arr_1 [i_0]), (((/* implicit */short) ((signed char) var_2))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-9702)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8191))) : (16176124816261859196ULL)))) ? (((/* implicit */int) ((unsigned char) arr_1 [6LL]))) : (((/* implicit */int) max((var_4), (((/* implicit */unsigned short) (_Bool)1)))))))));
    }
    var_21 |= ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_7)), (18446744073709551613ULL)));
    var_22 |= var_14;
}
