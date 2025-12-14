/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62070
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
    var_19 = ((/* implicit */signed char) var_14);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_1] = var_4;
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) max((max((arr_5 [i_1]), (((/* implicit */unsigned char) var_8)))), (((/* implicit */unsigned char) ((1804519459U) <= (((/* implicit */unsigned int) -1)))))))) + (min((((/* implicit */int) ((((/* implicit */unsigned long long int) 15)) > (arr_0 [(unsigned char)7])))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) var_11))))))));
            }
        } 
    } 
    var_21 += ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) var_13))))), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)-20))))))) < (((/* implicit */long long int) ((/* implicit */int) var_14)))));
}
