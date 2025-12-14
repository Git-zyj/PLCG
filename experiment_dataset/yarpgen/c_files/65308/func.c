/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65308
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
    var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned short) var_7)), (((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-67))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0] [i_0]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4345277507068166561ULL)) && (((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
        var_13 *= ((/* implicit */short) (((~(arr_1 [i_0] [i_0]))) / ((+(arr_1 [i_0] [i_0])))));
    }
}
