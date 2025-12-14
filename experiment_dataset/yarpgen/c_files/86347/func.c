/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86347
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86347 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86347
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_20 -= ((/* implicit */int) ((max((((/* implicit */unsigned int) (signed char)124)), (0U))) != (1532837575U)));
        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (max((0ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)-104)), (2030424790725158429LL))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 8; i_1 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) (((+(((/* implicit */int) (unsigned char)53)))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_3 [i_1]), (((/* implicit */unsigned int) 2147483647)))))))))))));
        var_23 = ((((/* implicit */_Bool) max((8U), (((/* implicit */unsigned int) arr_2 [i_1 + 2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((2030424790725158453LL) != (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1 + 2]))))))) : ((+(115300411U))));
        var_24 = ((/* implicit */short) (((+(((/* implicit */int) var_19)))) << (((((var_18) << (((var_13) - (536845790756581779ULL))))) - (505026229384708083ULL)))));
        arr_4 [i_1] [i_1] &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [11U])) << (((/* implicit */int) var_19)))) < (((/* implicit */int) var_16))))), (((((/* implicit */_Bool) max((arr_1 [i_1]), (arr_2 [i_1 - 1])))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))))) : (((var_13) << (((((/* implicit */int) (signed char)90)) - (47)))))))));
        var_25 = ((/* implicit */long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) max((arr_3 [i_1]), (((/* implicit */unsigned int) arr_1 [i_1])))))))), (((((/* implicit */int) (signed char)127)) / (756512627)))));
    }
    var_26 = ((/* implicit */unsigned char) (((~(((var_1) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)49721))))))) | (((/* implicit */long long int) (~(max((((/* implicit */unsigned int) var_15)), (2826569959U))))))));
    var_27 &= ((/* implicit */_Bool) ((min((max((((/* implicit */unsigned long long int) var_14)), (var_13))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)11569)) + (((/* implicit */int) (signed char)-123))))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_19)))));
}
