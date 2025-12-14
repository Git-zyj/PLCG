/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81375
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81375 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81375
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) arr_0 [i_0]))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) arr_0 [i_0])) - (46586)))));
        arr_2 [(short)13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) (_Bool)1))) : (((/* implicit */int) ((unsigned short) 8046059139396377482LL)))));
    }
    for (unsigned char i_1 = 1; i_1 < 22; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)20760))))) ^ (arr_4 [i_1 - 1] [i_1 - 1]))) | (min((((/* implicit */unsigned int) (_Bool)1)), (8191U)))));
        var_14 = ((/* implicit */unsigned char) ((signed char) min((arr_3 [i_1 + 1]), (arr_3 [i_1 + 1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((long long int) min((((/* implicit */unsigned int) var_8)), (1776541208U))));
    }
    var_15 |= ((/* implicit */signed char) var_4);
}
