/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59164
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
    var_12 = ((short) var_2);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) arr_1 [i_0] [i_0]))));
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((var_2) | (arr_0 [i_0]))))));
    }
    var_15 = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1048544ULL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)7519)))))))));
}
