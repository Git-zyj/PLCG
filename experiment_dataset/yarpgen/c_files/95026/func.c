/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95026
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
    for (long long int i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_14 ^= ((long long int) (~(min((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) var_5))))));
        var_15 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)2639))))), (arr_1 [i_0 + 1]))))));
        arr_2 [i_0] = ((/* implicit */int) max((max((arr_0 [i_0 - 2]), (((/* implicit */unsigned long long int) arr_1 [i_0 + 1])))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 - 2]), (((/* implicit */long long int) -1071507627)))))));
        arr_3 [i_0 - 2] = ((/* implicit */unsigned int) min((((/* implicit */long long int) (_Bool)1)), (arr_1 [i_0])));
    }
    var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_11))) <= (var_2))))) != (((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) 1071507627))))))))))));
}
