/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86492
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
    var_14 = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned int) min((((/* implicit */int) var_3)), (var_1)))), (min((((/* implicit */unsigned int) (unsigned char)152)), (var_9))))), (((/* implicit */unsigned int) ((signed char) max((var_1), (var_13)))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_1 [i_0]), (((/* implicit */long long int) min((((/* implicit */unsigned short) var_12)), (arr_0 [i_0]))))))), (min((((/* implicit */unsigned long long int) min((((/* implicit */int) var_5)), (var_11)))), (min((((/* implicit */unsigned long long int) var_5)), (4ULL))))))))));
        var_16 = ((/* implicit */unsigned long long int) min((min((arr_1 [i_0 - 1]), (((/* implicit */long long int) min((((/* implicit */unsigned int) (unsigned char)113)), (4073544183U)))))), (((((/* implicit */_Bool) ((unsigned short) var_13))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) max((var_8), (((/* implicit */short) (unsigned char)113))))))))));
        var_17 *= ((/* implicit */unsigned char) arr_0 [i_0]);
    }
}
