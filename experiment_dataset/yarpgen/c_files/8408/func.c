/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8408
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
    var_15 = ((/* implicit */_Bool) max((min((((/* implicit */int) (signed char)25)), ((~(((/* implicit */int) var_14)))))), (((/* implicit */int) var_10))));
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)32)), ((-2147483647 - 1))));
    var_17 = ((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32704))) : (2ULL)))) || (((/* implicit */_Bool) 0ULL)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0 - 3] = ((/* implicit */unsigned short) (short)0);
        var_18 = min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [i_0]))))), (((((/* implicit */unsigned long long int) 0)) | (18446744073709551615ULL))));
    }
}
