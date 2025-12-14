/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71081
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
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */int) max((var_10), ((signed char)7)))) * ((~(((/* implicit */int) (unsigned short)57706)))))) : (((/* implicit */int) var_10))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned char) ((unsigned long long int) max((((((/* implicit */_Bool) -1633747196)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_7))), ((-(2049318057U))))));
                    arr_7 [i_1] [i_2] = ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_2] [i_0]))) : (2049318057U))), (((/* implicit */unsigned int) (signed char)-8)))) & (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) min((2049318029U), (((/* implicit */unsigned int) arr_4 [i_2])))))))));
                }
            } 
        } 
    } 
}
