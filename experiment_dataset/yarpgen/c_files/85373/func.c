/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85373
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85373 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85373
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
    var_16 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25510)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (max((var_12), (17ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_13)) ? (var_3) : (17820079420426486063ULL)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    var_17 ^= ((/* implicit */short) 17820079420426486058ULL);
                    var_18 |= ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 663481273154457013ULL)) ? (785763715937513658ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (min((10900153905490586034ULL), (((/* implicit */unsigned long long int) var_13))))))) ? (((/* implicit */int) min(((short)19844), ((short)-2047)))) : (((/* implicit */int) (short)32767))));
                    var_19 = (i_0 % 2 == 0) ? (min((((/* implicit */short) ((((arr_2 [i_0] [i_1 - 1]) >> (((((/* implicit */int) arr_6 [i_1] [i_0])) + (11539))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28609)))))))))), ((short)18395))) : (min((((/* implicit */short) ((((arr_2 [i_0] [i_1 - 1]) >> (((((((/* implicit */int) arr_6 [i_1] [i_0])) + (11539))) - (26954))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_5 [i_0]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-28609)))))))))), ((short)18395)));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) * (var_1)))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) + (((/* implicit */int) var_11))))) ? (((((/* implicit */int) var_6)) / (((/* implicit */int) var_6)))) : (((/* implicit */int) var_6)))))));
}
