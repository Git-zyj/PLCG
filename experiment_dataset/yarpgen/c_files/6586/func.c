/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6586
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6586 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6586
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
    var_12 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 1 */
    for (long long int i_0 = 2; i_0 < 16; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((arr_0 [i_0]), (((/* implicit */long long int) max((((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))), (arr_3 [(short)11] [i_0 - 1]))))));
        var_14 = ((/* implicit */signed char) (~(((/* implicit */int) (signed char)-93))));
        var_15 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) max((-54231942354112833LL), (((54231942354112833LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)-10)))))))) ? (max((322951706), (((/* implicit */int) (signed char)0)))) : (((((/* implicit */_Bool) arr_1 [(unsigned char)15])) ? (((/* implicit */int) max(((short)0), ((short)-1)))) : (((((/* implicit */int) (short)7)) / (((/* implicit */int) (signed char)10))))))));
            var_17 = ((322951706) >> (((-1456318492069698014LL) + (1456318492069698027LL))));
            var_18 -= ((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)8128)) != (((/* implicit */int) (signed char)101)))) ? (((((/* implicit */int) arr_1 [i_0 - 2])) >> (((((/* implicit */int) arr_1 [i_0 + 2])) - (67))))) : (((max((2115376387), (((/* implicit */int) (signed char)10)))) << (((((/* implicit */int) ((signed char) 4258514481U))) - (49)))))));
        }
        var_19 ^= ((/* implicit */unsigned int) arr_3 [i_0 + 2] [i_0 + 2]);
    }
}
