/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83985
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
    for (unsigned long long int i_0 = 4; i_0 < 13; i_0 += 3) 
    {
        arr_4 [i_0 - 2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) -587416441831723558LL)) ? (((/* implicit */int) (short)19465)) : (((/* implicit */int) (unsigned char)26))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned long long int) var_14)), (var_7))) / (((/* implicit */unsigned long long int) max((var_13), (var_12))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned short) ((-4LL) | (((/* implicit */long long int) ((/* implicit */int) var_11)))));
        arr_8 [i_1] = ((/* implicit */long long int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)63728)));
        var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((4022707121U), (((/* implicit */unsigned int) var_11))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))))));
    }
    /* LoopSeq 2 */
    for (signed char i_2 = 1; i_2 < 14; i_2 += 2) 
    {
        arr_11 [i_2 + 1] = ((/* implicit */unsigned char) var_7);
        var_18 = ((/* implicit */short) var_2);
    }
    /* vectorizable */
    for (unsigned char i_3 = 1; i_3 < 16; i_3 += 4) 
    {
        var_19 = ((/* implicit */unsigned char) var_6);
        var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
        arr_14 [i_3 + 1] [i_3] = ((/* implicit */unsigned int) ((unsigned char) var_12));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (short)19462))));
    }
}
