/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8474
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) (short)60);
        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((((/* implicit */int) ((unsigned short) 3546652973143050808LL))) > (((/* implicit */int) (!(((/* implicit */_Bool) (short)60))))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((unsigned int) max(((unsigned short)38587), (arr_1 [i_0]))));
    }
    for (unsigned int i_1 = 1; i_1 < 17; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) ((int) min((min((((/* implicit */long long int) arr_1 [i_1 + 2])), (3865511968186311977LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)-61))) > (arr_2 [i_1])))))));
        arr_8 [i_1 + 2] = ((/* implicit */unsigned long long int) min((3865511968186311968LL), (min((-3865511968186311962LL), (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))))))));
    }
    var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (short)-61)))))));
}
