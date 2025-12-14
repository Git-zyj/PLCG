/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57300
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
    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */long long int) (-((~(((/* implicit */int) var_5))))))), (var_9)));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_21 = ((/* implicit */long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned char) var_11))))) > (((((/* implicit */int) (_Bool)1)) & (var_17))))))));
        arr_3 [i_0] [i_0] |= ((/* implicit */long long int) arr_0 [i_0]);
        arr_4 [i_0] [i_0] = ((/* implicit */short) max((var_0), (((/* implicit */long long int) min((arr_2 [i_0] [i_0]), (arr_2 [i_0] [i_0]))))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(9223372036854775807LL)));
    }
}
