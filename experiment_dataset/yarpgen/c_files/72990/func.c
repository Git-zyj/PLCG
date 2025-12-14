/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72990
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
    var_17 = (~(var_12));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */int) var_10);
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(arr_2 [i_0] [i_1 + 2] [3])));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_3 [i_1] [i_1])), (1371328109)))) < (((unsigned long long int) arr_3 [i_1] [i_1]))))) >> (min((((/* implicit */unsigned long long int) ((5862060242459895848ULL) > (((/* implicit */unsigned long long int) var_13))))), (((unsigned long long int) var_11))))));
                var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_2 [i_1 - 2] [i_1 + 2] [i_1 + 2])) % (var_2)))) ? (((((/* implicit */_Bool) ((unsigned long long int) arr_1 [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) 1371328090)) / (arr_2 [i_0] [i_0] [i_1 + 2]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((1371328109) & (((/* implicit */int) (short)-1083))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551615ULL)) || (((/* implicit */_Bool) arr_1 [(unsigned short)10]))))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */int) (~(((2450236910090264267ULL) | (((/* implicit */unsigned long long int) var_4))))));
    var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) var_14)), (var_15)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((min((var_2), (((/* implicit */unsigned long long int) (_Bool)1)))) <= (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) var_8))))))))) : (var_13)));
}
