/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84403
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_11))), (((((/* implicit */_Bool) var_5)) ? (-9223372036854775796LL) : (((/* implicit */long long int) var_11))))))) ? (var_9) : (((((/* implicit */_Bool) var_17)) ? (((unsigned int) (signed char)114)) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
    var_21 = ((/* implicit */signed char) var_16);
    var_22 = max((((/* implicit */unsigned int) (unsigned short)10280)), (0U));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((1435194403) ^ (((/* implicit */int) (_Bool)1))))) : ((~(arr_2 [i_0]))));
        arr_5 [i_0] [i_0] = ((/* implicit */int) (-(9610970196376402161ULL)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */signed char) ((var_3) & (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_1] [i_1])))));
        var_23 = ((((/* implicit */_Bool) (signed char)-34)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_7 [i_1] [(short)17])));
    }
}
