/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90899
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] = ((min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_6))))), (((903703824U) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32768))))))) < (((/* implicit */unsigned int) ((/* implicit */int) max((min((var_7), (var_0))), (min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_10 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)61092)) ? (2251799813685248ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    }
    var_11 = ((/* implicit */_Bool) var_4);
}
