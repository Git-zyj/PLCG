/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89627
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89627 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89627
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
    var_17 = ((/* implicit */unsigned char) 72441353U);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 7; i_0 += 3) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1] = ((/* implicit */unsigned char) max(((-(max((var_12), (((/* implicit */long long int) 72441353U)))))), (min((((((/* implicit */_Bool) (short)0)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)29)))))))));
                arr_8 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) var_14);
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned char) (unsigned char)255))) ? (((((/* implicit */_Bool) (unsigned short)32766)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4))) : (((/* implicit */long long int) ((/* implicit */int) (signed char)127)))));
                var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)29)) ? (((/* implicit */int) (unsigned short)16836)) : (((/* implicit */int) (unsigned char)7)))), ((-((+(((/* implicit */int) (unsigned char)23))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned char)29))));
}
