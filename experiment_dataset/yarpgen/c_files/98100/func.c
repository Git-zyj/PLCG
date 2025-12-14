/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98100
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
    /* LoopNest 3 */
    for (short i_0 = 1; i_0 < 11; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            for (short i_2 = 1; i_2 < 10; i_2 += 4) 
            {
                {
                    var_20 = ((/* implicit */unsigned char) 426786308U);
                    var_21 = ((/* implicit */unsigned short) var_18);
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (min((((((/* implicit */_Bool) (unsigned short)49391)) ? (3868180976U) : (var_4))), (((/* implicit */unsigned int) var_10)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((3868180959U) | (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) > (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))));
    var_23 = ((/* implicit */unsigned short) max((((((/* implicit */int) (unsigned short)65535)) | (((/* implicit */int) (_Bool)1)))), (((((((/* implicit */int) var_18)) << (((((/* implicit */int) var_11)) - (64260))))) << (((((((/* implicit */int) (short)-32756)) + (32778))) - (14)))))));
}
