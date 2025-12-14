/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62875
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62875 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62875
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
    var_18 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_14)) + (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5))))))));
    var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((((/* implicit */int) var_14)) * (((/* implicit */int) var_1))))))) ? ((+(var_7))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_7)))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            for (signed char i_2 = 3; i_2 < 14; i_2 += 2) 
            {
                {
                    var_20 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_11)) ? (var_13) : (((/* implicit */int) var_10)))) < (((/* implicit */int) var_2))));
                    arr_7 [i_2] [i_1] [i_1] [i_0] = (~(((((/* implicit */_Bool) var_5)) ? (var_6) : (((/* implicit */unsigned long long int) var_7)))));
                }
            } 
        } 
    } 
    var_21 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_16)) : (var_13)))) ? (var_4) : (((/* implicit */unsigned long long int) var_12)));
}
