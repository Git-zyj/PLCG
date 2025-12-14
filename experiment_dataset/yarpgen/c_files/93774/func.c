/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93774
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
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((_Bool) (short)4966))))) ^ (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 + 1]))) & (((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_2 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1])))))))));
        arr_5 [i_0 + 1] = ((((/* implicit */_Bool) max((((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0 + 1])) < (((/* implicit */int) arr_0 [i_0 + 1]))))), (min((((/* implicit */signed char) arr_0 [i_0 - 1])), (arr_1 [i_0 - 1] [i_0 + 1])))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (short)8317)) - (((/* implicit */int) (unsigned short)52413))))) : (max((((/* implicit */unsigned int) ((arr_0 [i_0 - 1]) ? (((/* implicit */int) arr_0 [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1]))))), (((((/* implicit */_Bool) arr_1 [i_0 + 1] [i_0 - 1])) ? (arr_2 [i_0 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1]))))))));
        arr_6 [i_0 - 1] [i_0] = ((/* implicit */signed char) ((((-4278136759344961661LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13135))))) % (((/* implicit */long long int) ((/* implicit */int) max((max((arr_3 [i_0 + 1]), (((/* implicit */unsigned short) arr_1 [i_0 - 1] [i_0 + 1])))), (((/* implicit */unsigned short) arr_0 [i_0 + 1]))))))));
        arr_7 [i_0] = ((/* implicit */unsigned int) (~(max((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0 - 1])))), (((/* implicit */int) ((signed char) arr_1 [i_0 - 1] [i_0 - 1])))))));
    }
    var_11 = ((/* implicit */unsigned long long int) ((unsigned int) max(((-(var_5))), (((/* implicit */unsigned int) ((signed char) var_10))))));
}
