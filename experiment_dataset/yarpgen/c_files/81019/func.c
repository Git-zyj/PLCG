/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81019
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81019 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81019
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
    var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((var_11) != (((/* implicit */long long int) ((/* implicit */int) var_0)))))))) ^ (((int) min((var_11), (((/* implicit */long long int) (short)-2931)))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) arr_1 [i_0]))) && (((/* implicit */_Bool) (+(arr_2 [i_0]))))));
        var_17 = ((/* implicit */short) (+(min((((/* implicit */unsigned int) (short)-30401)), (arr_2 [i_0])))));
    }
}
