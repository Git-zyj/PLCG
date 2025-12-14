/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61805
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
    var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-34)) ? (var_11) : (((/* implicit */int) var_3))))) : (((3873619626403291852LL) + (((/* implicit */long long int) ((/* implicit */int) var_8))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */int) var_3)) * (((/* implicit */int) var_9)))) : (((/* implicit */int) var_3))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) ((int) arr_0 [i_0] [i_0])));
        arr_3 [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (var_0)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) / (((/* implicit */int) var_7))))) : (min((-1120716077041228818LL), (3873619626403291852LL)))))));
    }
    var_18 = ((/* implicit */int) var_16);
    var_19 ^= ((/* implicit */int) var_2);
}
