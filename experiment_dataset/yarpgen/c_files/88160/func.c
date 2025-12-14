/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88160
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
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_12 = ((/* implicit */short) max(((-(6658542936732271767LL))), (((/* implicit */long long int) ((((arr_1 [i_0] [i_0]) + (2147483647))) << (((((min((((/* implicit */int) var_1)), (arr_1 [i_0] [i_0]))) + (530474889))) - (8))))))));
        var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) arr_0 [i_0])), (min((min((var_7), (((/* implicit */unsigned int) arr_2 [i_0])))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_2)) + (-6658542936732271751LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (((-2686893959931781871LL) + (((/* implicit */long long int) arr_1 [i_1] [i_1]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */long long int) var_6)), (2686893959931781890LL)))) ? (((unsigned long long int) arr_0 [i_1])) : (((/* implicit */unsigned long long int) arr_0 [i_1])))) : (((/* implicit */unsigned long long int) (-(max((676852502), (var_11))))))));
        var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((max((((/* implicit */int) arr_2 [i_1])), (var_9))) >> (((2475335195U) - (2475335170U)))))), ((~(var_7)))));
    }
    var_15 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned short)40792)) : (((/* implicit */int) (unsigned short)7085)))));
    var_16 = ((/* implicit */unsigned short) (~(((max((((/* implicit */unsigned int) -676852478)), (var_10))) << (((var_11) + (2023981019)))))));
}
