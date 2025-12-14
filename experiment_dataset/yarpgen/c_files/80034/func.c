/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80034
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80034 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80034
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
    for (short i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */unsigned char) min((((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 - 1] [i_0]))))), (((((/* implicit */_Bool) 17993449333104301800ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (arr_2 [i_0])))));
        var_13 = ((/* implicit */unsigned short) min((var_13), (((/* implicit */unsigned short) (~(((long long int) arr_1 [i_0] [8])))))));
        var_14 ^= ((/* implicit */short) ((arr_2 [i_0]) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 2133078629)) <= (13248644483725891949ULL)))))));
    }
    var_15 = ((/* implicit */long long int) var_8);
}
