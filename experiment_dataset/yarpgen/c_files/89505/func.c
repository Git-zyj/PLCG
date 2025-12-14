/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89505
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89505 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89505
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
    var_16 = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (2582417081024298640ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))));
    var_17 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (((+(var_12))) <= (var_6)))), (var_3)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) * (((arr_1 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_1))))) : (max((var_4), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0 - 1] [i_0])) / (((/* implicit */int) (unsigned short)23022)))))));
    }
    var_18 = ((/* implicit */unsigned long long int) (unsigned short)11037);
    var_19 *= ((/* implicit */unsigned long long int) var_3);
}
