/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61408
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
    var_12 = ((/* implicit */_Bool) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)0))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) ((((_Bool) max(((unsigned short)17585), (((/* implicit */unsigned short) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0])), (arr_0 [i_0])))) ? (((/* implicit */int) ((_Bool) arr_1 [i_0]))) : ((-(((/* implicit */int) arr_1 [i_0]))))))) : (min((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))), (((unsigned int) arr_0 [i_0]))))));
        var_14 = ((/* implicit */signed char) (~(max((2590418875U), (((/* implicit */unsigned int) arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) min((arr_1 [i_0]), (arr_1 [17LL])))))) > (((unsigned int) ((_Bool) 400710913179628306LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
}
