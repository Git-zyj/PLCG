/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76702
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
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((var_5) / (arr_2 [i_0]))) == (((arr_2 [i_0]) ^ (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
        arr_4 [i_0] [i_0] = ((((arr_2 [i_0]) ^ (((/* implicit */long long int) 0U)))) + (((-6985819968523962372LL) / (var_5))));
    }
    var_13 = ((/* implicit */short) var_1);
}
