/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87515
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
    var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 4240041782765600823LL)) ? (var_7) : (((/* implicit */int) var_4))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_19 -= ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_6))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) var_1);
        var_20 ^= min((-1417552576), (((/* implicit */int) ((signed char) ((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_1 [i_0] [i_0])))))));
        var_21 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((unsigned long long int) 12U))) ? (((unsigned int) (unsigned char)162)) : (((/* implicit */unsigned int) 1417552576)))), (((/* implicit */unsigned int) arr_1 [i_0] [i_0]))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((unsigned short) 1417552575));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 1) 
    {
        arr_8 [i_1] = min((((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_4 [i_1]) != (((/* implicit */unsigned long long int) var_5))))) != (((int) var_14))))), (((((((/* implicit */_Bool) 162800164)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (arr_0 [i_1] [i_1]))) >> (((((/* implicit */int) (unsigned short)63754)) - (63739))))));
        var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((int) (short)-1)) : (arr_6 [i_1] [i_1])));
    }
    var_23 = ((/* implicit */int) var_14);
}
