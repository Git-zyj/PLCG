/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88948
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
    var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (min((var_8), (((/* implicit */unsigned int) var_19)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_0))))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (((-(((/* implicit */int) (_Bool)1)))) >= (arr_4 [i_0] [i_0] [i_1])))), (((long long int) (~(((/* implicit */int) var_11)))))));
                arr_7 [i_0] [2U] = ((unsigned long long int) ((arr_3 [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-123)))))));
                var_21 = ((/* implicit */signed char) max((max((((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_19))))), (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)114)))))), (min((((/* implicit */int) arr_5 [i_1] [i_0] [i_0])), (arr_4 [i_0] [i_0] [i_0])))));
            }
        } 
    } 
}
