/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70377
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) ((arr_0 [i_0]) / (((((/* implicit */_Bool) var_2)) ? (2584193579303948391LL) : (-9043813855836982027LL)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (+(arr_0 [8LL])));
        var_17 = ((/* implicit */short) 2418800630U);
    }
    var_18 = ((/* implicit */signed char) max((max(((+(((/* implicit */int) var_15)))), (((/* implicit */int) var_5)))), (((/* implicit */int) ((((long long int) var_8)) == (((/* implicit */long long int) ((/* implicit */int) var_2))))))));
    var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) (+(((/* implicit */int) ((_Bool) var_13))))))));
}
