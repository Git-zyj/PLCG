/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76604
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
    var_15 = var_0;
    var_16 = ((/* implicit */unsigned long long int) var_4);
    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_13))));
    /* LoopSeq 4 */
    for (short i_0 = 2; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (var_8))))));
        var_19 += ((/* implicit */unsigned long long int) min((max((var_14), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) max((arr_0 [(short)12] [i_0]), (var_13))))));
        var_20 += var_11;
    }
    for (short i_1 = 3; i_1 < 13; i_1 += 3) 
    {
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_4 [i_1 + 1])), (min((var_14), (var_3)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) : (var_12)));
        arr_5 [i_1] = var_7;
        var_22 = ((/* implicit */unsigned long long int) var_10);
    }
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        var_23 = ((/* implicit */short) max((var_23), (var_7)));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) arr_7 [i_2]))));
        var_25 += ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
    }
    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
    {
        var_26 = ((/* implicit */short) var_14);
        var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_12)) >= (var_8))))));
        var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_3 [(short)2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_3 [(short)2]))))), (((((/* implicit */_Bool) var_0)) ? (var_10) : (var_12))))))));
    }
}
