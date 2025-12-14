/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60152
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 529816477U)) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) (short)27800))));
        var_14 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) >> ((((((~(((/* implicit */int) var_9)))) * (((/* implicit */int) var_6)))) + (89)))));
        arr_5 [i_0] [i_0] = ((/* implicit */signed char) var_0);
    }
    for (short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned long long int) arr_6 [i_1] [i_1]);
        arr_9 [i_1] = ((/* implicit */long long int) var_13);
        var_15 = ((/* implicit */short) min((var_15), (min(((short)-25081), (((/* implicit */short) (signed char)-24))))));
        var_16 = var_1;
    }
    var_17 = ((/* implicit */short) var_8);
}
