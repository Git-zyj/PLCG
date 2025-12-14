/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67041
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
    var_15 = ((/* implicit */int) var_9);
    var_16 = ((/* implicit */unsigned long long int) ((min(((~(var_13))), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-24))))))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
    /* LoopSeq 1 */
    for (short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_10);
        var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) var_4)), (((4441167288866239703LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)30810))))))), (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) var_10)) ^ (3913883862U))))))))));
        var_18 = ((/* implicit */int) max((((((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (((/* implicit */long long int) var_12))))) ? (min((((/* implicit */long long int) var_9)), (var_14))) : (((/* implicit */long long int) 2147483629)))), ((-(arr_0 [i_0 - 1] [i_0])))));
        var_19 = ((/* implicit */int) min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_12), (((/* implicit */short) (signed char)-29)))))) : (var_2))), (((/* implicit */unsigned int) (~(((arr_1 [i_0]) ^ (((/* implicit */int) var_7)))))))));
    }
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */long long int) var_9)) == ((-(min((((/* implicit */long long int) var_11)), (var_0)))))));
    var_21 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
}
