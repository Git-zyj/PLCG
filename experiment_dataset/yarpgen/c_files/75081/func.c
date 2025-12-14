/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75081
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
    var_10 |= var_8;
    var_11 = ((/* implicit */unsigned int) var_4);
    var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (var_5)))) ? (((/* implicit */int) var_3)) : (var_4)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) min((arr_5 [i_0] [12LL] [i_1]), (arr_3 [(unsigned short)22]))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((short) arr_5 [i_0 - 1] [16] [i_0])), (max((arr_5 [i_0 - 1] [i_0] [15U]), (arr_5 [i_0 + 1] [i_0 - 1] [(_Bool)1])))));
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_1 [i_0 - 1] [i_0])) ? (arr_1 [i_0 - 1] [i_0]) : (arr_1 [i_0 - 1] [i_0]))), (arr_1 [i_0 - 1] [i_0])));
                arr_8 [i_0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((min((-1LL), (((/* implicit */long long int) arr_0 [i_0] [(short)5])))), (((/* implicit */long long int) max((((/* implicit */unsigned short) arr_0 [i_0] [i_1])), ((unsigned short)13786))))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (max((1LL), (((/* implicit */long long int) max(((unsigned char)100), (((/* implicit */unsigned char) (_Bool)1)))))))));
                arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (arr_1 [i_0 - 1] [i_0]) : (((/* implicit */int) ((short) arr_5 [i_0 - 1] [i_0 + 1] [i_0 + 1])))));
            }
        } 
    } 
    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_8), (((/* implicit */int) var_2))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) min((-24LL), (((/* implicit */long long int) var_4))))))))) : ((-(6LL)))));
}
