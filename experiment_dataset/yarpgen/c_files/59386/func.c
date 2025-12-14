/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59386
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59386 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59386
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
    for (int i_0 = 2; i_0 < 16; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0 - 1]) ? (((/* implicit */int) ((unsigned char) (unsigned short)18440))) : (((/* implicit */int) ((unsigned short) 3676555317U)))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_0 [i_0 + 1])), ((unsigned short)15073))))));
        arr_4 [i_0] &= ((/* implicit */int) var_16);
        arr_5 [i_0 - 1] [i_0 + 1] &= ((/* implicit */unsigned long long int) 2914010199U);
    }
    var_19 ^= max((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3)) ? (7LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)132))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-6194016987163491487LL)))))), (((var_13) - (((/* implicit */unsigned long long int) max((var_7), (((/* implicit */unsigned int) (short)32767))))))));
    var_20 &= ((/* implicit */unsigned char) var_15);
}
