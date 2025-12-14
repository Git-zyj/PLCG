/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99208
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99208 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99208
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
    for (unsigned int i_0 = 1; i_0 < 7; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) (-(min((((unsigned long long int) arr_1 [i_0])), (((/* implicit */unsigned long long int) (+(arr_0 [i_0] [4LL]))))))));
        var_20 = ((/* implicit */unsigned long long int) (-(var_12)));
        arr_4 [i_0] = ((/* implicit */short) min((((/* implicit */long long int) ((var_9) <= (((/* implicit */unsigned long long int) 134217728U))))), (((((/* implicit */_Bool) arr_2 [i_0 + 3])) ? (((/* implicit */long long int) arr_2 [i_0 + 2])) : (-3601174568233662909LL)))));
    }
    var_21 = ((/* implicit */_Bool) var_10);
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((unsigned int) ((unsigned int) var_3)))) | (var_17)));
    var_23 += ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((var_11) ? (9223372036854775807LL) : (((/* implicit */long long int) var_12))))) < (var_17)))), (((((/* implicit */long long int) ((/* implicit */int) ((0LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-5065))))))) * (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_6)))))));
}
