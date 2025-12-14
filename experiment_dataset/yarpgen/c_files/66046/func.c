/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66046
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
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            {
                var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) (-(((((/* implicit */int) (signed char)-50)) * (((/* implicit */int) arr_4 [i_0] [i_0]))))))) : (arr_0 [i_0 + 1])));
                arr_5 [i_0] [i_1 + 3] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (+(((-1020716026) / (-564821524)))))) ? (min((((/* implicit */unsigned int) (unsigned short)15299)), (arr_0 [i_1 - 1]))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) -1235217464)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (-862228750))), ((-(((/* implicit */int) var_7)))))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_3)))) + (((/* implicit */int) var_16)))) >= ((-(((/* implicit */int) var_14))))));
    var_20 = var_4;
}
