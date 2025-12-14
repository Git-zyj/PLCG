/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68404
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
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 15; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_1 [i_0 + 1]))));
        arr_4 [i_0 - 1] = ((/* implicit */short) (~(((((/* implicit */_Bool) 2021800107)) ? (((/* implicit */long long int) 546853915U)) : (6364168414151981989LL)))));
        arr_5 [i_0] [i_0] = ((/* implicit */short) (~(((/* implicit */int) arr_2 [i_0 - 3]))));
        arr_6 [i_0] = ((/* implicit */signed char) ((arr_0 [11] [i_0]) >= ((+(arr_0 [i_0 + 1] [i_0])))));
    }
    var_15 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((long long int) var_12)))))));
}
