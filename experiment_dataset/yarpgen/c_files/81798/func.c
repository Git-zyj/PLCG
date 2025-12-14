/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81798
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
    var_19 = ((/* implicit */unsigned char) var_8);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_20 = ((/* implicit */_Bool) (unsigned char)50);
        arr_2 [i_0] [i_0] = arr_1 [i_0];
        var_21 = ((/* implicit */unsigned int) min((min((((((/* implicit */_Bool) 4294967295U)) ? (549755813887ULL) : (((/* implicit */unsigned long long int) var_3)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (short)13)))))))), (((/* implicit */unsigned long long int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0]))))));
        var_22 = ((/* implicit */unsigned int) 549755813904ULL);
        var_23 *= ((/* implicit */unsigned long long int) 3221225472U);
    }
}
