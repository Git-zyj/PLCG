/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80344
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
    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */unsigned long long int) var_11)))), (((/* implicit */unsigned long long int) var_11))))) ? (((/* implicit */unsigned long long int) ((var_5) ? (max((var_14), (var_9))) : (var_14)))) : (var_16)));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10))));
        var_19 = ((/* implicit */signed char) var_2);
        arr_3 [i_0] = ((/* implicit */unsigned short) var_16);
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (min((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_4 [i_1] [9U]))), (((/* implicit */unsigned int) arr_1 [i_1])))))))));
        arr_6 [11ULL] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((((/* implicit */int) var_15)), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_5 [i_1] [i_1]))))))), (max((((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_9))), (((/* implicit */long long int) arr_1 [i_1]))))));
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) min((((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1]))) : (var_2)))) ? (((var_8) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [11])) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_1])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_5)))) : (((arr_5 [i_1] [i_1]) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_1 [i_1]))))))))))));
        var_22 ^= ((/* implicit */int) min((arr_2 [i_1]), (var_13)));
        arr_7 [i_1] = ((/* implicit */unsigned long long int) min((min((arr_4 [i_1] [i_1]), (var_4))), (((/* implicit */unsigned int) max((((/* implicit */short) var_0)), (min((arr_2 [i_1]), (((/* implicit */short) var_10)))))))));
    }
    for (short i_2 = 4; i_2 < 19; i_2 += 1) 
    {
        var_23 -= ((/* implicit */unsigned short) var_0);
        var_24 = arr_9 [i_2];
    }
}
