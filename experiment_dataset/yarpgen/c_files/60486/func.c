/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60486
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
    var_20 = ((/* implicit */long long int) var_15);
    var_21 = ((/* implicit */signed char) min(((-(var_11))), (var_11)));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_22 = ((((/* implicit */_Bool) max((arr_0 [i_0]), (arr_0 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (((((/* implicit */_Bool) 4294967295U)) ? (1U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)1))))))) : (((/* implicit */unsigned int) ((int) arr_1 [i_0]))));
        var_23 = ((/* implicit */signed char) (~(4294967276U)));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 13; i_1 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((arr_1 [i_1]) > ((+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21852))) : (arr_2 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 12; i_2 += 2) 
        {
            arr_8 [i_1] = ((/* implicit */int) arr_2 [i_1] [i_1]);
            var_25 = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (unsigned char)59)));
            arr_9 [i_1] = ((/* implicit */_Bool) 1854726340);
            arr_10 [i_2] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (signed char)-20)) : (var_11)));
        }
        arr_11 [i_1] = max((((/* implicit */long long int) (unsigned short)1916)), (1750049306122225799LL));
        var_26 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))), ((~(-3528426993656833921LL)))));
        var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))) : (var_17)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_2))))) : (((arr_1 [i_1]) * (arr_1 [i_1])))));
    }
}
