/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84324
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84324 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84324
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
    for (signed char i_0 = 4; i_0 < 19; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            {
                var_10 = arr_3 [13U];
                var_11 = ((((2473786562U) << (((((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)27292)))) - (132))))) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27306))));
                var_12 *= ((/* implicit */signed char) ((long long int) ((((((/* implicit */_Bool) (short)8)) ? (((/* implicit */unsigned long long int) arr_2 [i_0 - 1])) : (16231809691859689631ULL))) << (((((unsigned long long int) (signed char)-81)) - (18446744073709551485ULL))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_4)) : (((/* implicit */unsigned long long int) -1512265113790902218LL))));
    var_14 = ((/* implicit */long long int) ((unsigned short) 12426696699351443554ULL));
    var_15 = ((/* implicit */short) var_7);
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) var_4))));
}
