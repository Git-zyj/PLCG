/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68720
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68720 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68720
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
    var_10 -= ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)76)) : (((/* implicit */int) (short)-23141))))) ? (((/* implicit */unsigned long long int) (+(592826461U)))) : (((unsigned long long int) var_2))))));
    /* LoopSeq 1 */
    for (short i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */int) var_0);
        var_11 = ((/* implicit */signed char) var_6);
        var_12 = ((/* implicit */long long int) ((int) ((signed char) arr_2 [i_0])));
        var_13 = min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5))) : (max((((/* implicit */long long int) 592826461U)), (9223372036854775807LL))))), (((((/* implicit */_Bool) min((var_2), (((/* implicit */long long int) (signed char)122))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-32755))) : (var_1))));
    }
    var_14 = var_3;
}
