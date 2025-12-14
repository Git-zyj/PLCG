/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9311
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9311 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9311
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
    for (unsigned short i_0 = 1; i_0 < 22; i_0 += 2) 
    {
        var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_2 [i_0 - 1]))))), (arr_1 [i_0] [i_0 + 1]))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [19LL]))))) ? (((/* implicit */long long int) max((min((var_17), (((/* implicit */unsigned int) 1297802359)))), (((unsigned int) arr_1 [i_0] [i_0 + 1]))))) : (((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)37909)) ? (var_14) : (var_10)))) | ((-(var_16)))))));
    }
    var_19 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) < (((/* implicit */int) (signed char)40)))) ? (((/* implicit */int) var_4)) : ((~(((/* implicit */int) var_8))))));
}
