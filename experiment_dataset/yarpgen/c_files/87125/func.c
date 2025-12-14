/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87125
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
    var_11 = ((/* implicit */int) ((unsigned short) ((((/* implicit */int) min((var_2), (var_7)))) / ((~(((/* implicit */int) var_1)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8191)) + ((~(((/* implicit */int) (_Bool)1))))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) + (8912167912295753388ULL)));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (var_5)));
    }
}
