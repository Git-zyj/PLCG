/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7456
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
    var_10 = ((((72057594037927936LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)180))))) - (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_4)), (9225758859615677443ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 739185536U)) || (((/* implicit */_Bool) var_4)))))) : (max((((/* implicit */long long int) var_3)), (var_9))))));
    var_11 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_9))))), (var_8)))) && (((/* implicit */_Bool) ((var_9) & (min((var_9), (1068153604309143033LL))))))));
    var_12 = ((/* implicit */unsigned short) ((unsigned int) (+(var_1))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_13 ^= ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) (+(-1)))) ? (((/* implicit */long long int) max((arr_2 [i_0] [i_0]), (((/* implicit */unsigned int) (unsigned short)0))))) : (min((((/* implicit */long long int) arr_4 [(unsigned short)0])), (arr_5 [i_0] [i_2] [i_1]))))));
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)225)))))))) ? (((((/* implicit */_Bool) min((arr_3 [4U] [i_1 + 1] [i_2]), (((/* implicit */long long int) 1))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [12] [12] [i_2 + 1] [i_2])))))) : ((-(var_1))))) : (min((((/* implicit */long long int) ((unsigned char) arr_6 [i_0] [(unsigned char)12]))), (arr_5 [i_2 + 1] [i_2] [i_1 - 3]))))))));
                    var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) min((((arr_7 [i_1] [i_1 + 1] [i_2 + 1] [i_2]) & (((/* implicit */unsigned int) 2013265920)))), ((~(arr_6 [i_1] [4ULL]))))))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */unsigned int) var_7);
}
