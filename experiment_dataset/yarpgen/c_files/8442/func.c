/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8442
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = (-(((/* implicit */int) min((max((((/* implicit */short) (_Bool)1)), ((short)-5))), (((/* implicit */short) (_Bool)0))))));
        arr_4 [i_0] = max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_10))))) > (((/* implicit */int) var_5))))), (((((/* implicit */int) var_0)) << (((((/* implicit */int) var_10)) - (26867))))));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */signed char) ((((var_5) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_7)))) * (((((/* implicit */int) var_9)) << (((/* implicit */int) var_5))))));
        arr_8 [i_1] = ((/* implicit */short) var_3);
        arr_9 [i_1] [i_1] = ((/* implicit */long long int) ((signed char) var_2));
    }
    /* vectorizable */
    for (short i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        var_13 = ((/* implicit */int) ((short) var_11));
        var_14 = ((/* implicit */int) max((var_14), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_6)))));
        arr_13 [i_2] [i_2] &= ((/* implicit */_Bool) ((int) var_9));
        arr_14 [(short)9] [(short)9] = var_2;
    }
    var_15 = max((500532101), (((/* implicit */int) (_Bool)1)));
}
