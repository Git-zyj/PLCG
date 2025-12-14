/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77951
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
    var_11 = ((((/* implicit */_Bool) 4294967295U)) ? (268433408U) : (4294967286U));
    var_12 -= ((/* implicit */unsigned long long int) ((var_9) < (12U)));
    var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) (~(((((((/* implicit */unsigned int) var_7)) < (1190785396U))) ? (((((/* implicit */_Bool) 562949953421311LL)) ? (1068154186610809096LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) 1068154186610809096LL)))))))))));
    var_14 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) (short)32766)) / (((/* implicit */int) (short)3754))))), (min((((/* implicit */long long int) var_10)), (max((-3932227849621357125LL), (((/* implicit */long long int) var_0))))))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 21; i_0 += 1) 
    {
        arr_2 [(short)8] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) 6ULL))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) : (3932227849621357127LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-32757))))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) 4308255296404706804LL))));
        arr_3 [6U] |= ((/* implicit */long long int) (~(((/* implicit */int) (short)-22296))));
        arr_4 [i_0] [i_0] = (+(((/* implicit */int) arr_1 [i_0])));
    }
}
