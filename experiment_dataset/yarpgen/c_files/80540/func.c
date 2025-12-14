/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80540
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80540 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80540
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
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (((+(arr_2 [i_0] [i_0]))) & (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (((/* implicit */int) arr_0 [i_0]))))));
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -5854330393458126452LL)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) : (((arr_1 [(signed char)6]) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */long long int) (-(arr_2 [i_0] [i_0])))) : (((arr_0 [i_0]) ? (var_15) : (((/* implicit */long long int) arr_2 [i_0] [i_0]))))));
    }
    var_18 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_10))) & ((-((+(-5854330393458126447LL)))))));
}
