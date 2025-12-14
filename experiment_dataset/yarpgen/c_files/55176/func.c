/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55176
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 3) 
    {
        for (short i_1 = 4; i_1 < 20; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0]))))), (arr_0 [i_0 - 1] [i_0 + 1])))) >= (((/* implicit */int) min((((/* implicit */unsigned short) var_15)), (max((var_7), (((/* implicit */unsigned short) var_19)))))))));
                var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((((/* implicit */int) var_2)) * (((/* implicit */int) arr_3 [i_1]))))) : ((-(var_16)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */short) arr_3 [i_0 + 3])), (var_15))))) : (((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0] [i_1] [i_1]))) ? (var_16) : (((/* implicit */long long int) ((var_6) % (((/* implicit */int) arr_3 [i_0 - 1])))))))));
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_1] [i_0] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) var_14)))))) : (max((((/* implicit */unsigned long long int) var_7)), (var_9))))))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned char) var_3);
    var_24 = ((/* implicit */short) var_16);
}
