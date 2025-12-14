/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83418
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
    var_14 = min((((/* implicit */unsigned long long int) (~(((var_4) | (((/* implicit */long long int) ((/* implicit */int) var_10)))))))), (var_3));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)79)), (18036415098288043789ULL)));
        var_16 = ((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((arr_1 [i_0]) + (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) min(((-(131071U))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) || (((/* implicit */_Bool) (unsigned char)6)))))));
    }
}
