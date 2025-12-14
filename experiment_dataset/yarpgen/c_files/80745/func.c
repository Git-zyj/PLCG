/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80745
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
    var_15 &= ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((var_9) == (((/* implicit */long long int) ((/* implicit */int) var_14)))))), (((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-7449677331029361867LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) (signed char)-68)))))));
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((~(var_12))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-11))) : (20U)))))) ? (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) (signed char)59)) ? (var_0) : (var_3)))))) : (var_4)));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    arr_7 [i_1] [8U] [i_0] = ((((int) (_Bool)1)) * ((~(((/* implicit */int) (signed char)-59)))));
                    arr_8 [i_0] [5U] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-59)) ? (arr_4 [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [20U]))))))))) ? (((((/* implicit */_Bool) ((signed char) arr_2 [i_0] [i_0] [i_1]))) ? (((/* implicit */int) ((signed char) arr_3 [6] [i_1] [(signed char)11]))) : (min((arr_6 [i_1] [i_1]), (arr_6 [2LL] [i_2]))))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-59)) ? (((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_1])) : (((/* implicit */int) (unsigned char)13))))))))));
                }
            } 
        } 
    } 
}
