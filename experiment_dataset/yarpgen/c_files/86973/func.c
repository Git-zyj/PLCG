/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86973
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
    var_11 |= ((/* implicit */short) var_5);
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_1 [i_0]))));
        var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_8))) ? (((arr_2 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))) : (((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65531))) : (arr_2 [i_0] [i_0])))));
    }
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((84873189) > (((/* implicit */int) var_1)))) ? (var_8) : ((~(((/* implicit */int) (_Bool)0))))))) ? (var_6) : (var_5)));
    var_14 |= ((/* implicit */short) var_5);
}
