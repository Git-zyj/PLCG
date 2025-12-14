/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71256
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
    for (unsigned short i_0 = 2; i_0 < 7; i_0 += 1) 
    {
        var_18 *= ((((/* implicit */_Bool) 1591276646196512190LL)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((signed char) var_3))))))));
        arr_2 [8] [8] &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1])) - (((/* implicit */int) arr_0 [i_0 - 1]))))) ? (((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_0 [i_0 + 2])) : (((/* implicit */int) (short)32704)))) : (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_19 += ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (var_17)))))) ? (((/* implicit */int) (!(((((/* implicit */_Bool) var_2)) || ((_Bool)1)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))))));
        var_20 = (((~(((/* implicit */int) arr_0 [i_0 - 1])))) << (((arr_1 [i_0 - 1]) - (10874145744336132445ULL))));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        var_21 -= ((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_1]))));
        var_22 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (var_1)))) / (((/* implicit */int) arr_4 [i_1]))));
    }
    var_23 = ((/* implicit */long long int) var_3);
    var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((short) 3006616361054340429ULL))))) : (min((((/* implicit */unsigned long long int) min((var_10), (((/* implicit */long long int) (unsigned short)27799))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (8632241083187145844ULL))))))))));
}
