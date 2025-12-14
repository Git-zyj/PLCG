/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9521
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_10 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [i_2 - 1] [i_1])) ? (((/* implicit */int) arr_4 [i_1] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_4 [i_1] [i_2 + 1] [i_1]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) min((arr_3 [i_2 - 1] [i_1] [i_0]), (arr_3 [i_0] [i_1] [i_2 + 1]))))))) : ((+(((((/* implicit */_Bool) arr_3 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1]))) : (var_6)))))));
                    var_11 = ((/* implicit */long long int) (+(((min((var_1), (((/* implicit */unsigned int) (signed char)82)))) ^ (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294967282U)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0] [i_0] [i_0])))))))));
                }
            } 
        } 
    } 
    var_12 = max((((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_9)))))), ((-(((/* implicit */int) ((signed char) var_2))))));
}
