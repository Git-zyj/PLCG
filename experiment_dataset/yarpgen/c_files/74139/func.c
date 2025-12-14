/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74139
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74139 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74139
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
    var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)37)) : (((/* implicit */int) var_4))))) != (var_2))))));
    var_21 = ((/* implicit */short) var_19);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                var_22 ^= (((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((8372224) - (((/* implicit */int) (unsigned short)65514))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_17))))) : (var_19)))));
                var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (+(arr_1 [i_0])))), (arr_0 [i_0])))) ? ((+((~(0ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((4294967293U) % (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_1])))))))))))));
                var_24 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) 1621575159U)) & (var_7)))) ? (((/* implicit */int) var_17)) : ((+(arr_1 [i_0])))))) ? (arr_4 [i_1] [i_0]) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_2 [i_0] [i_0])), (arr_1 [i_0]))))));
                var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((((/* implicit */long long int) -2111779657)) - (arr_0 [i_0]))))));
            }
        } 
    } 
    var_26 = ((/* implicit */long long int) var_0);
}
