/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97127
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
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_10 = ((/* implicit */signed char) min((var_10), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) | (((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) && (((/* implicit */_Bool) 633173993U)))))) : (633173993U))))))));
        var_11 -= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_2 [i_0] [i_0])), (-2514574159888840369LL))))))) >> (((/* implicit */int) (!(((((/* implicit */int) (unsigned short)65523)) >= (((/* implicit */int) arr_1 [i_0])))))))));
    }
    var_12 = ((/* implicit */long long int) min((((((/* implicit */int) (short)31744)) & (((/* implicit */int) (unsigned short)65523)))), (((/* implicit */int) var_8))));
    var_13 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
}
