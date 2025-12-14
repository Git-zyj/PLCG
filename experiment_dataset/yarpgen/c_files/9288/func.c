/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9288
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
    var_17 = ((985285896U) + (((/* implicit */unsigned int) var_8)));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                arr_4 [i_0] = ((/* implicit */unsigned int) arr_2 [i_1 + 1] [i_1 - 1] [i_1]);
                var_18 = ((((/* implicit */_Bool) var_2)) ? (min((((/* implicit */unsigned int) (unsigned char)8)), (3309681406U))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_3 [i_0] [i_1 - 2] [i_1 - 1]))))));
                var_19 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((3309681406U) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)0] [i_0] [i_1])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_0))))))))));
            }
        } 
    } 
    var_20 += ((/* implicit */short) ((long long int) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned short)65535)))), (((/* implicit */int) var_12)))));
    var_21 = var_0;
}
