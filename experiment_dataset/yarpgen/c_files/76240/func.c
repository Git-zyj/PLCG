/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76240
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 3) 
        {
            for (short i_2 = 1; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_11 [(_Bool)1] [i_2 + 4] = ((/* implicit */int) var_16);
                    arr_12 [i_0] [9ULL] [(signed char)6] = ((/* implicit */unsigned int) arr_10 [i_2] [(signed char)17] [i_1] [i_0]);
                    arr_13 [i_0] [19] [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [(short)0] [i_1 + 1])) ? (3111384102U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)25563)))));
                    arr_14 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((var_17), (((/* implicit */unsigned long long int) arr_6 [i_2]))))) ? ((~(((/* implicit */int) (short)0)))) : (((((var_1) + (2147483647))) << (((var_10) - (9302499122661740464ULL)))))))) ^ (((((/* implicit */_Bool) arr_3 [20U] [i_0])) ? (max((((/* implicit */unsigned long long int) 1183583194U)), (arr_1 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1 + 1] [i_1 - 1] [i_1])))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) arr_2 [14])) % (262143))) >> (((9223372036854775807LL) - (9223372036854775787LL))))) >> (((/* implicit */int) ((((((/* implicit */int) arr_6 [i_0])) + (((/* implicit */int) (short)-12533)))) <= (((/* implicit */int) arr_8 [3] [i_2 + 4] [i_1 + 1] [i_2])))))));
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_15);
    var_20 &= ((/* implicit */short) ((max((((/* implicit */int) (short)-24589)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (unsigned short)11459)) : (((/* implicit */int) (unsigned char)46)))))) < (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_0)))) && ((!(((/* implicit */_Bool) var_13)))))))));
    var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+((-(4411964590815606867LL)))))) ? (((long long int) var_17)) : (((/* implicit */long long int) var_11))));
    var_22 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (unsigned char)7)))))) - (((((/* implicit */_Bool) (unsigned char)209)) ? (var_15) : (((/* implicit */unsigned long long int) 3111384102U)))))), (((/* implicit */unsigned long long int) var_16))));
}
