/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94893
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94893 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94893
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
    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(var_18))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_21 = arr_0 [i_0];
        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((var_10) << (((/* implicit */int) (_Bool)1)))))));
    }
    var_23 = ((/* implicit */long long int) min((var_23), (var_18)));
}
