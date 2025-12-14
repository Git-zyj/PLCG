/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91955
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
    var_11 = ((/* implicit */int) var_7);
    var_12 = ((/* implicit */long long int) var_1);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 2) 
    {
        var_13 += ((/* implicit */short) arr_2 [i_0 - 4]);
        arr_3 [0LL] = ((/* implicit */_Bool) min((12U), (var_10)));
    }
    for (long long int i_1 = 3; i_1 < 20; i_1 += 2) 
    {
        var_14 = ((/* implicit */int) min((((13ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 3]))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_1])))))));
        var_15 = ((/* implicit */_Bool) 4294967284U);
    }
}
