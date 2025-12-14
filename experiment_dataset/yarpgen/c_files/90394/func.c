/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90394
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) ((unsigned char) (short)-30452));
        var_17 = ((/* implicit */short) (!(((/* implicit */_Bool) 1796624826U))));
    }
    for (short i_1 = 0; i_1 < 15; i_1 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) ((short) var_0))) : (((/* implicit */int) ((arr_3 [i_1]) || (((/* implicit */_Bool) arr_5 [i_1] [i_1])))))));
        var_19 = ((unsigned long long int) arr_5 [i_1] [i_1]);
        arr_7 [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_8 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 2) 
    {
        arr_11 [i_2] = ((/* implicit */unsigned char) (((+(max((((/* implicit */unsigned int) arr_9 [i_2])), (2498342470U))))) != (((/* implicit */unsigned int) (-(((/* implicit */int) arr_9 [i_2])))))));
        var_20 = ((/* implicit */short) var_3);
    }
    for (unsigned long long int i_3 = 4; i_3 < 22; i_3 += 3) 
    {
        var_21 = ((/* implicit */short) ((((/* implicit */_Bool) min((1796624838U), (((/* implicit */unsigned int) arr_13 [i_3 + 1]))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_13 [i_3 - 1])))) : (((/* implicit */int) var_12))));
        var_22 = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) 9223372036854775807LL)))))));
        var_23 = ((/* implicit */unsigned long long int) var_13);
        arr_14 [i_3] = ((((/* implicit */_Bool) max((((((/* implicit */int) var_13)) ^ (((/* implicit */int) arr_13 [i_3])))), ((-2147483647 - 1))))) ? (max(((~(var_1))), (((/* implicit */unsigned int) ((unsigned char) arr_13 [(short)18]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [(unsigned short)5]))));
        var_24 = ((signed char) ((int) var_9));
    }
    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((/* implicit */unsigned int) var_8)) * (var_1))))));
}
