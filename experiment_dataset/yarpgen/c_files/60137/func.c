/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60137
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
    for (unsigned short i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */int) max((var_15), (arr_1 [i_0 + 1] [i_0 + 2])));
        arr_2 [i_0] |= ((/* implicit */unsigned long long int) 1609525791U);
        var_16 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) -6103127985626888593LL)) ? (1609525778U) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))));
        arr_3 [(signed char)10] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0 - 3] [i_0 - 3])) ? (arr_1 [i_0 + 2] [i_0 - 1]) : (((/* implicit */int) var_14))));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */long long int) (~(var_12)))) / (var_8))) : (((/* implicit */long long int) (-((~(1812306407))))))));
    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) var_3))));
}
