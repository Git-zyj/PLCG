/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77776
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
    var_19 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (signed char)102)) - (((/* implicit */int) (signed char)-103))))));
    var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) ((unsigned int) var_15)))));
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (!(((/* implicit */_Bool) max(((signed char)102), ((signed char)-93)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 4; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (max((((/* implicit */unsigned int) var_17)), (3256961842U))) : (((unsigned int) var_3))))), (((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_1) : (((/* implicit */int) var_6))))) : (arr_3 [i_1])))));
                var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) var_3)), (((unsigned long long int) (unsigned short)10)))) & (max((((arr_1 [i_1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_3 [i_0 - 1]))), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */unsigned short) var_15))))))))))));
            }
        } 
    } 
}
