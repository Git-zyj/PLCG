/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74707
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
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 -= ((/* implicit */int) max((((/* implicit */short) ((arr_1 [i_0]) || (arr_1 [i_0])))), (((short) ((unsigned char) arr_0 [i_0])))));
        var_14 -= var_5;
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((min((16383U), (4294967279U))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (min((var_3), (((/* implicit */unsigned int) var_4)))))))))));
        arr_2 [i_0] [5ULL] |= ((/* implicit */unsigned int) ((0ULL) << (((/* implicit */int) arr_1 [i_0]))));
    }
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (~(((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) var_11)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_7)), (var_1)))))))))));
    var_17 |= ((/* implicit */unsigned long long int) ((long long int) var_7));
}
