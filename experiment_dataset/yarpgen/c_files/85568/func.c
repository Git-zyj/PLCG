/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85568
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
    for (unsigned char i_0 = 1; i_0 < 16; i_0 += 4) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_17))));
        var_20 = ((/* implicit */unsigned long long int) var_11);
        var_21 += ((/* implicit */signed char) ((arr_2 [i_0 - 1]) / (arr_2 [i_0 + 1])));
    }
    var_22 = ((/* implicit */long long int) min((var_22), (var_9)));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 15; i_1 += 2) 
    {
        var_23 = ((/* implicit */_Bool) var_13);
        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)118)))))));
        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 100663296)) ? (arr_0 [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_18)))))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1])))));
    }
}
