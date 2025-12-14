/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85775
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
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */long long int) var_3);
            var_14 = ((/* implicit */_Bool) ((((((var_8) / (((/* implicit */int) arr_3 [i_0])))) + (2147483647))) >> ((((-(((/* implicit */int) arr_3 [i_0])))) + (18)))));
        }
        var_15 = (~(((((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30624))))) ? (((((/* implicit */int) arr_2 [i_0])) >> (((898601196U) - (898601180U))))) : (((/* implicit */int) (!(arr_3 [i_0])))))));
    }
    var_16 = ((short) ((long long int) max((((/* implicit */unsigned int) (short)11782)), (var_3))));
}
