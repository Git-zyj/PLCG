/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82577
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82577 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82577
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_19 = ((/* implicit */int) arr_1 [i_0]);
        arr_2 [i_0] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_0 [i_0])))));
    }
    for (signed char i_1 = 3; i_1 < 11; i_1 += 4) 
    {
        var_20 = min(((-(((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_1 [i_1])))));
        var_21 = ((/* implicit */int) ((min((min((arr_0 [10]), (((/* implicit */unsigned long long int) var_11)))), (var_1))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_3 [i_1 + 1] [i_1]))))));
        arr_5 [i_1] = min((((/* implicit */long long int) var_0)), (min((((/* implicit */long long int) var_11)), (max((arr_4 [i_1 - 3] [i_1]), (((/* implicit */long long int) arr_1 [i_1])))))));
        var_22 = ((/* implicit */int) max((min((arr_1 [i_1 - 1]), (arr_1 [i_1 + 4]))), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_1 + 4])))))));
        arr_6 [i_1] [i_1 + 3] &= ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) (-(arr_4 [(_Bool)1] [(_Bool)1])))), (max((arr_0 [i_1 - 2]), (var_1))))), ((-(arr_0 [i_1])))));
    }
    var_23 = ((/* implicit */int) ((((((/* implicit */_Bool) max((var_11), (((/* implicit */int) var_12))))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
