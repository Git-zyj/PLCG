/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75309
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
    for (short i_0 = 1; i_0 < 24; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2143810086U)) && (((/* implicit */_Bool) (short)30210)))))) | (((long long int) (signed char)(-127 - 1))))))));
        var_18 += ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) | (arr_0 [i_0 + 1] [i_0 - 1])));
        arr_2 [i_0] = ((/* implicit */long long int) -1767618088);
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(1825771162U)))) ? (((/* implicit */long long int) ((int) arr_1 [i_0] [(unsigned short)19]))) : (((long long int) arr_0 [i_0] [i_0]))));
    }
    var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) var_2))));
}
