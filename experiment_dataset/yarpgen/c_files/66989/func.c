/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66989
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66989 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66989
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
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) 9223372036854775807LL);
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    /* LoopNest 3 */
    for (unsigned char i_1 = 2; i_1 < 13; i_1 += 1) 
    {
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_14 = (i_2 % 2 == zero) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))) % (var_5)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 2])) + (2147483647))) << (((arr_8 [i_2] [i_2]) - (1234830881)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2]))) : (((17957616041940940109ULL) >> (((arr_4 [i_2] [i_3]) - (404814065)))))))))) : (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_1] [i_2] [i_1]))) % (var_5)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_1 + 3] [i_1 + 3] [i_1 + 2])) + (2147483647))) << (((((((arr_8 [i_2] [i_2]) - (1234830881))) + (2045049846))) - (4)))))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2]))) : (((17957616041940940109ULL) >> (((arr_4 [i_2] [i_3]) - (404814065))))))))));
                    arr_12 [i_1] [i_2] [i_1] = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (9223372036854775807LL)))) ? (((var_12) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (var_6))) % (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_4) : (var_8)))) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-2)))))))));
    var_16 = ((/* implicit */int) var_7);
}
