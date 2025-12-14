/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75572
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75572 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75572
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
    var_19 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (signed char)44)), (var_13)));
    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((min((9223372036854775807LL), (var_14))), (((/* implicit */long long int) var_13))))) ? (((long long int) ((((/* implicit */_Bool) var_6)) || ((_Bool)1)))) : (((/* implicit */long long int) ((((((/* implicit */int) var_5)) == (((/* implicit */int) var_3)))) ? (var_13) : (((/* implicit */unsigned int) ((((/* implicit */int) (short)32762)) ^ (((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 18; i_1 += 4) 
        {
            var_21 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2656733898U)) || (((/* implicit */_Bool) -4865693472729665837LL))));
            var_22 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)183)) & (((/* implicit */int) (signed char)(-127 - 1)))));
        }
        arr_8 [i_0] = ((/* implicit */unsigned int) (-(720128837102662003ULL)));
        var_23 ^= ((/* implicit */signed char) ((-2659538604358719178LL) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
    }
    var_24 = var_5;
}
