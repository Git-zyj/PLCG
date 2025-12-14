/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76560
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
    var_14 = ((/* implicit */long long int) var_9);
    var_15 = ((/* implicit */int) max((var_15), (var_8)));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) ^ (arr_0 [i_0]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 4294967232U)))))))) ? (max(((-(var_4))), (((arr_0 [i_0]) * (var_9))))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(((/* implicit */int) var_11))))) / (arr_1 [i_0] [i_0]))))));
        arr_2 [i_0] = ((/* implicit */signed char) arr_1 [i_0] [i_0]);
    }
    for (short i_1 = 0; i_1 < 14; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */long long int) var_5);
        var_17 = (!(((/* implicit */_Bool) arr_0 [i_1])));
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_1])) ? ((((+(var_8))) - (((((/* implicit */int) (unsigned short)65488)) / (((/* implicit */int) arr_4 [i_1] [i_1])))))) : (((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (var_0))), (((0ULL) >= (arr_0 [i_1]))))))));
    }
}
