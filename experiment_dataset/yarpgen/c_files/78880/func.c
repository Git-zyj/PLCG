/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78880
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
    var_10 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)23494)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_5)))), (max((((/* implicit */unsigned long long int) (signed char)116)), (var_7))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (max((var_5), (((/* implicit */unsigned int) var_6)))) : (var_3))))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((-758936718), (((/* implicit */int) arr_3 [i_1] [i_2]))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)255)))))) : (max((arr_1 [i_2]), (arr_1 [i_2])))));
                    arr_9 [i_0] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65166)) ? (((/* implicit */int) (short)-4337)) : (((/* implicit */int) (unsigned short)2578))))) ? (max((((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) arr_1 [i_0])))), (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)11)) ? (((/* implicit */int) (short)4096)) : (((/* implicit */int) (unsigned short)65166)))))));
                }
            } 
        } 
    } 
    var_11 = ((/* implicit */short) var_2);
    var_12 = ((/* implicit */short) -7045550644359814178LL);
}
