/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/817
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
    var_20 ^= ((/* implicit */unsigned int) var_19);
    var_21 -= ((/* implicit */short) var_9);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 3) 
    {
        var_22 ^= ((/* implicit */unsigned short) max((((arr_0 [i_0 - 2]) <= (((/* implicit */unsigned long long int) max((((/* implicit */int) var_6)), (arr_1 [i_0] [i_0])))))), (((((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))) != ((~(arr_1 [i_0] [(unsigned short)14])))))));
        var_23 = ((/* implicit */unsigned short) min((max((2704022555U), (((/* implicit */unsigned int) (unsigned short)64749)))), (537271448U)));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) var_4);
        var_24 = ((/* implicit */int) ((((((/* implicit */int) (short)-28102)) != (((((/* implicit */_Bool) 1590944740U)) ? (arr_2 [i_1]) : (var_11))))) ? (max((arr_0 [(unsigned short)14]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) min((380056145U), (((/* implicit */unsigned int) arr_2 [i_1]))))) || (((/* implicit */_Bool) max((2704022555U), (((/* implicit */unsigned int) (short)-32192)))))))))));
        var_25 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) ? (((/* implicit */unsigned long long int) var_12)) : (8758242676636707134ULL)))) ? ((-(var_15))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned int) (+(arr_2 [i_1]))))));
    }
    var_26 = ((/* implicit */unsigned short) var_7);
}
