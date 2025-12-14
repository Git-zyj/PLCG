/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87098
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
    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_19 |= ((/* implicit */unsigned char) max((((/* implicit */long long int) (_Bool)1)), ((-(((((/* implicit */_Bool) arr_0 [(signed char)16] [i_0])) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        var_20 = ((/* implicit */long long int) max((var_20), (2308588304345126211LL)));
        var_21 = ((/* implicit */_Bool) min((max((2308588304345126211LL), (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) min(((short)-7396), (((/* implicit */short) ((2308588304345126211LL) == (((/* implicit */long long int) ((/* implicit */int) var_2)))))))))));
        var_22 |= ((/* implicit */unsigned short) arr_1 [i_0]);
        arr_2 [i_0] [i_0] = ((/* implicit */int) arr_1 [i_0]);
    }
    var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) (+(((/* implicit */int) var_13)))))));
    var_24 = ((/* implicit */signed char) var_11);
}
