/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63083
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
    var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~((~(((/* implicit */int) (signed char)-120))))))) ? (((/* implicit */unsigned long long int) var_10)) : (12652193297938011375ULL)));
    var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((var_5) / (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-121))))), (((((/* implicit */_Bool) (signed char)-119)) ? (var_13) : (18446744073709551608ULL)))))) ? (((((var_13) < (var_13))) ? (((/* implicit */int) ((4290073804720347296ULL) > (((/* implicit */unsigned long long int) var_10))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) 4572507080388813806ULL))))))) : (-2147483642))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 14; i_0 += 1) 
    {
        var_17 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 2])), (-1)))) ? (2772612051890473522ULL) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (arr_1 [8ULL] [i_0 + 3]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */int) max((var_18), (1650216292)));
                    var_19 |= ((/* implicit */signed char) ((((/* implicit */_Bool) 17605750013145519259ULL)) && (((min((var_12), (63334770))) > (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) arr_1 [i_0] [i_2])))))))));
                }
            } 
        } 
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) arr_2 [i_0]))));
    }
    var_21 = min((4589629000167819965ULL), (5794550775771540236ULL));
}
