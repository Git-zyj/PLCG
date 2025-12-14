/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71052
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
    var_17 = var_6;
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 4; i_0 < 15; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0 - 4] = ((/* implicit */unsigned int) ((_Bool) var_14));
        arr_3 [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) var_13)) > (((/* implicit */int) arr_0 [i_0 + 1]))));
    }
    for (signed char i_1 = 4; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_6 [i_1 - 3] [i_1] = ((/* implicit */unsigned short) max((arr_5 [i_1 - 1]), (((/* implicit */int) var_16))));
        arr_7 [i_1] = ((/* implicit */signed char) arr_5 [i_1]);
    }
    for (signed char i_2 = 4; i_2 < 15; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2 - 3] [i_2 - 2] = var_1;
        arr_13 [i_2] [i_2] = ((/* implicit */int) var_7);
    }
    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
    {
        arr_17 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */int) arr_15 [i_3] [i_3])) : (((/* implicit */int) arr_16 [i_3])))) & (((/* implicit */int) max((((/* implicit */short) var_3)), (arr_14 [i_3]))))))) ? (((/* implicit */int) (short)10289)) : (((((/* implicit */_Bool) ((unsigned short) var_7))) ? (((/* implicit */int) arr_14 [i_3])) : (((/* implicit */int) arr_15 [i_3] [i_3]))))));
        arr_18 [i_3] [i_3] = ((/* implicit */unsigned int) var_10);
    }
    var_18 = ((/* implicit */long long int) max((min((var_1), ((unsigned short)16777))), (((/* implicit */unsigned short) var_14))));
}
