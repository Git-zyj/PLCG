/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81493
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81493 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81493
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
    for (short i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((short) (-(arr_1 [i_0 - 1] [i_0])))))));
        arr_4 [i_0] = ((/* implicit */short) ((int) ((((/* implicit */_Bool) 668812011U)) ? (((/* implicit */unsigned int) (+(522194137)))) : (min((arr_2 [i_0]), (var_9))))));
    }
    for (short i_1 = 0; i_1 < 24; i_1 += 2) 
    {
        var_14 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(522194137)))) ^ (((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_4)), (arr_5 [i_1])))) ? (((((/* implicit */_Bool) arr_7 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (arr_7 [i_1] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0))))))));
        var_15 = ((/* implicit */signed char) ((short) (+(((/* implicit */int) var_4)))));
        var_16 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1]))))) : (((((/* implicit */_Bool) (short)-29627)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) (_Bool)0))))))), ((-(arr_5 [i_1])))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((arr_5 [i_1]), (arr_5 [i_1]))))));
        var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-26392))) - (1295376572U)));
    }
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) var_2))));
    var_19 = ((/* implicit */unsigned int) min((min((((/* implicit */int) (short)29618)), (-522194126))), ((~(((/* implicit */int) var_1))))));
    var_20 *= ((/* implicit */int) (!((!(((/* implicit */_Bool) (short)-22219))))));
}
