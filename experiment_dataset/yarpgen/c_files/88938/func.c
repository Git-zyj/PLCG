/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88938
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
    var_20 |= ((/* implicit */long long int) var_14);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                var_21 = ((/* implicit */unsigned int) min(((((!(((/* implicit */_Bool) var_4)))) ? (((/* implicit */int) min((var_5), ((unsigned char)216)))) : (((/* implicit */int) var_3)))), (var_2)));
                var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (-(959518015U)))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [i_0])), (2240699477U)))) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) var_17)))) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1])))))));
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) ? (max((((/* implicit */unsigned long long int) var_15)), (max((arr_1 [i_1]), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) max((((unsigned int) var_12)), (((/* implicit */unsigned int) (+(((/* implicit */int) var_1))))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((((/* implicit */int) var_16)) ^ (((/* implicit */int) var_9)))) >> (((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (signed char)-84)) : (((/* implicit */int) var_17)))) + (106)))))), (min((((/* implicit */unsigned int) var_5)), (var_4)))));
}
