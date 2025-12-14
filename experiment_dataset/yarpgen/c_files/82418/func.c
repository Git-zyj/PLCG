/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82418
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
    for (signed char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-17373))) != (arr_2 [i_1] [i_1] [i_0])));
            arr_5 [i_1] = ((/* implicit */int) var_3);
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) | (((/* implicit */int) arr_1 [i_1]))));
        }
        var_12 = var_6;
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) var_3))) ? (var_0) : (((/* implicit */long long int) ((((((/* implicit */int) arr_1 [i_0])) + (2147483647))) >> (((var_11) + (5795775458421468590LL))))))));
        arr_7 [i_0] = ((/* implicit */short) (signed char)114);
        var_14 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_4))))) / (arr_2 [i_0] [i_0] [i_0])));
    }
    var_15 = ((/* implicit */signed char) var_2);
    var_16 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((short)-14220), (((/* implicit */short) var_7)))))) % (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) var_4))))), (max((var_9), (var_11)))))));
}
