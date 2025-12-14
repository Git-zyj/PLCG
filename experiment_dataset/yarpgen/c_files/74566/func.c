/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74566
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
    var_17 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) && (((/* implicit */_Bool) -1))))) / (((/* implicit */int) (unsigned short)65535))));
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) 0)) : (((((/* implicit */_Bool) ((unsigned int) var_4))) ? (max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551608ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65515))) : (2U))))))));
    var_19 = var_13;
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        arr_2 [i_0] |= ((/* implicit */long long int) ((unsigned long long int) -4096));
        arr_3 [i_0 - 3] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)20)) ^ ((~(((/* implicit */int) (short)0))))));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)0)) ^ (arr_0 [i_0 - 1])));
    }
}
