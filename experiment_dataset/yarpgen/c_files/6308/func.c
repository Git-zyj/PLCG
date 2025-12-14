/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 6308
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=6308 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/6308
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
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) max((((var_6) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))))), (((/* implicit */unsigned long long int) var_15))))) ? (((((min((var_13), (var_13))) + (9223372036854775807LL))) >> (((/* implicit */int) min(((unsigned short)54684), (((/* implicit */unsigned short) (_Bool)1))))))) : (((/* implicit */long long int) ((/* implicit */int) var_1)))));
    var_18 += ((/* implicit */short) max((min((var_13), (((/* implicit */long long int) var_11)))), (((/* implicit */long long int) var_8))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_1] [i_1] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10861)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1))))) ? (arr_4 [i_0]) : (((((/* implicit */int) (unsigned short)39555)) / (((/* implicit */int) arr_8 [i_2] [i_0] [5]))))))) ? ((~(max((((/* implicit */unsigned int) arr_8 [i_2] [i_0] [i_0])), (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_3 [i_1 + 3] [i_0] [i_1 - 2])) != (((/* implicit */int) arr_7 [(short)7] [i_1] [i_1 - 1]))))))));
                    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) arr_4 [i_2]))));
                }
            } 
        } 
    } 
}
