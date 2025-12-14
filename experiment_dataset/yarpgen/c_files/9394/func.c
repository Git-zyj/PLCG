/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9394
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) ((short) var_2))))))) : (((((/* implicit */_Bool) var_7)) ? (min((var_4), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) 201848386U))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_1 [i_0 + 2]))))));
        arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_1 [i_0 + 1]))))) * (var_5)));
        var_11 = ((/* implicit */_Bool) min((max((((/* implicit */unsigned int) var_8)), (arr_0 [i_0 + 2]))), (((/* implicit */unsigned int) arr_2 [4U] [4U]))));
    }
    var_12 = ((/* implicit */unsigned int) (short)-18506);
    var_13 = ((/* implicit */_Bool) var_2);
}
