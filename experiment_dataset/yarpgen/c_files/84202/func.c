/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84202
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
    var_18 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_15)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)240))) * (var_4))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_11)))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 13; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                arr_6 [(short)0] [i_1] [3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((((/* implicit */_Bool) arr_4 [i_1] [i_0] [i_0])) ? (arr_3 [i_1]) : (((/* implicit */int) arr_2 [i_1] [(unsigned short)4])))) : (((/* implicit */int) arr_5 [i_1 + 1]))))) : (var_6)));
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) ((long long int) var_16));
            }
        } 
    } 
    var_19 *= ((/* implicit */unsigned short) var_17);
}
