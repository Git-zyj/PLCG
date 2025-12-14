/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75655
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75655 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75655
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
    var_12 *= ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) (unsigned char)136)) : (((/* implicit */int) (signed char)94))))), (max((20ULL), (((/* implicit */unsigned long long int) 67108863U))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (short)0))));
        var_13 ^= ((/* implicit */unsigned char) arr_2 [i_0] [i_0]);
    }
}
