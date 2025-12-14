/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80981
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80981 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80981
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
    for (short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] [(short)3] = ((/* implicit */short) ((((/* implicit */int) arr_1 [i_0])) != ((-(((/* implicit */int) (short)21287))))));
        var_17 = ((/* implicit */unsigned long long int) ((unsigned short) arr_0 [i_0] [i_0]));
    }
    var_18 = ((/* implicit */signed char) min((var_9), (((/* implicit */int) ((short) var_12)))));
    var_19 = ((/* implicit */unsigned short) max((min((((/* implicit */unsigned int) var_0)), (((unsigned int) (unsigned short)27358)))), (((/* implicit */unsigned int) (unsigned short)27353))));
    var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) var_1))));
}
