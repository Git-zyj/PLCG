/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88881
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
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            {
                var_10 = ((/* implicit */unsigned int) max((var_10), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */int) var_7)) - (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min(((short)-5448), (arr_4 [i_1] [14LL] [i_0]))))) : (((var_2) + (((/* implicit */unsigned long long int) var_1)))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_7))))))))))));
                var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [(unsigned short)16] [i_0])) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5447))) : (4993377160781896768LL)));
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) (unsigned short)57282)), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) - (8361923792516147921LL))))) / (((arr_1 [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) 0)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_2 [i_0])))))))));
            }
        } 
    } 
    var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_3)) : (var_0)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) + (var_2))) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (var_1))))))));
    var_13 ^= ((/* implicit */unsigned short) (+(1721763508)));
}
