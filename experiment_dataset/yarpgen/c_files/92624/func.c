/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92624
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
    var_12 = ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-11058)))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_3))) * (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) max((((var_5) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2)))))))));
    var_13 = ((/* implicit */long long int) var_7);
    var_14 = ((/* implicit */short) ((((((/* implicit */int) var_4)) > (((/* implicit */int) var_1)))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned short)12)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : ((-(var_3))))) : (((/* implicit */long long int) (+(((var_6) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
        arr_4 [i_0] [i_0] = ((/* implicit */signed char) var_2);
    }
    var_15 = ((/* implicit */long long int) (short)11042);
}
