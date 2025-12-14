/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59706
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
    var_16 = var_13;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        var_17 = (+((+(min((arr_0 [i_0]), (((/* implicit */long long int) arr_1 [i_0] [i_0])))))));
        var_18 = ((/* implicit */int) ((((arr_0 [i_0]) > (min((((/* implicit */long long int) arr_1 [3ULL] [4LL])), (var_13))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (5711004884614350697ULL)))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0 + 1])) ? (var_9) : (((/* implicit */unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) ((var_1) << (((((/* implicit */int) var_7)) - (19)))))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)217)) << (((9223372036854775807LL) - (9223372036854775804LL)))))) & (((9223372036854775807LL) | (arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned char) max((((9223372036854775807LL) >> ((((((-9223372036854775807LL - 1LL)) - (-9223372036854775796LL))) + (54LL))))), ((~(arr_0 [i_0])))));
    }
    var_20 &= ((/* implicit */unsigned char) var_12);
    var_21 -= ((/* implicit */int) (!(((/* implicit */_Bool) var_15))));
}
