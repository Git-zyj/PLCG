/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55215
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55215 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55215
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
    var_13 = ((/* implicit */signed char) var_8);
    var_14 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */long long int) ((709403043) << (((((/* implicit */int) var_3)) - (28)))))) + (((((/* implicit */_Bool) 4872348921117040355ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-5460570281774256183LL))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [(signed char)9] [8ULL] = ((/* implicit */unsigned int) arr_1 [(signed char)8] [i_0]);
        var_15 *= 7475127396449544955ULL;
        arr_3 [i_0] = ((/* implicit */short) (-((+(arr_1 [i_0] [i_0])))));
    }
    var_16 = (+(((/* implicit */int) var_10)));
}
