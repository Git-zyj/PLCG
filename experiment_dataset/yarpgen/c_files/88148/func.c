/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88148
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-61)))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) ((unsigned short) var_9));
    }
    var_16 = ((/* implicit */unsigned long long int) var_9);
    /* LoopSeq 1 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_9 [i_1] [i_1] = var_4;
        arr_10 [i_1] [2U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)60)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) : ((-(((/* implicit */int) (signed char)50))))));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_1)))))));
    }
    var_18 = ((/* implicit */_Bool) (((~((~(9223372036854775807LL))))) - (((/* implicit */long long int) (-((-(var_5))))))));
}
