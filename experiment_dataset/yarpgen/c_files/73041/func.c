/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73041
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
    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((signed char) var_11))), (var_2))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_0))))))));
    var_20 = ((/* implicit */long long int) (unsigned short)65535);
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) && ((!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) (!(((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) arr_0 [i_0]))))))) == (((/* implicit */int) var_9))));
    }
}
