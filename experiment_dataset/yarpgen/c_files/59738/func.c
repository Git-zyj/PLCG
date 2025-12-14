/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59738
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
    var_13 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_12))));
    var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max(((signed char)-112), ((signed char)-93)))) ? (((/* implicit */int) (signed char)92)) : (var_7)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [(signed char)13] [i_2]))))) << (((((/* implicit */int) var_3)) - (112)))))) : (arr_3 [i_1] [i_0])));
                    var_16 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_1 [i_2] [i_1])) ? (((unsigned long long int) var_6)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)89)) >= (((/* implicit */int) var_12))))), (max((11933980950355107150ULL), (((/* implicit */unsigned long long int) arr_0 [(signed char)11]))))))));
                }
            } 
        } 
    } 
}
