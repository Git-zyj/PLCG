/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87689
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
    var_20 = ((/* implicit */short) var_15);
    var_21 = ((/* implicit */unsigned short) max((var_21), (((unsigned short) var_7))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) min((((int) ((((/* implicit */_Bool) 1591430671U)) ? (1591430671U) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))), (((/* implicit */int) var_1)))))));
        var_23 = ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned short) min((var_11), (arr_0 [i_0])))));
    }
}
