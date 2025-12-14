/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6531
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
    var_19 = ((/* implicit */int) min((((/* implicit */unsigned int) var_3)), (var_1)));
    var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_3)), (var_18)))), (2255827972310951935ULL)))) ? ((-(var_11))) : (((/* implicit */int) min((((short) 2255827972310951947ULL)), (((/* implicit */short) var_12)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_21 = ((/* implicit */int) max((var_21), (arr_0 [i_0])));
        var_22 = ((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0]));
        var_23 = ((/* implicit */long long int) arr_1 [i_0]);
    }
    var_24 = max((max((max((((/* implicit */long long int) var_13)), (var_2))), (((/* implicit */long long int) (+(((/* implicit */int) var_10))))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) max((var_9), (var_5)))), (((unsigned short) var_18))))));
}
