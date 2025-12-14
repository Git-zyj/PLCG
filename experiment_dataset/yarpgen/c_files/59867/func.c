/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59867
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59867 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59867
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */_Bool) max((max((((/* implicit */unsigned int) var_5)), (max((var_15), (arr_1 [i_0]))))), (((/* implicit */unsigned int) ((arr_0 [i_0 + 1]) / (((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1])))))));
        var_20 = ((/* implicit */unsigned short) ((((_Bool) max((((/* implicit */long long int) arr_2 [i_0] [i_0])), (-1756517838629840317LL)))) ? (-1756517838629840317LL) : (((/* implicit */long long int) ((((/* implicit */int) (short)511)) - (((/* implicit */int) (short)-516)))))));
    }
    var_21 = ((/* implicit */int) var_14);
    var_22 = ((/* implicit */long long int) min((((/* implicit */unsigned char) ((_Bool) (-(562948879679488LL))))), (((unsigned char) ((((/* implicit */int) (unsigned char)15)) ^ (var_17))))));
}
