/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90427
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
    for (long long int i_0 = 3; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) ((signed char) arr_4 [i_0]))) : (((/* implicit */int) var_15))));
            var_17 = ((/* implicit */int) arr_2 [i_0 + 1]);
        }
        for (unsigned long long int i_2 = 4; i_2 < 7; i_2 += 3) 
        {
            var_18 = ((/* implicit */unsigned long long int) ((unsigned char) arr_7 [i_0]));
            var_19 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_1 [i_0]))));
        }
        for (int i_3 = 0; i_3 < 11; i_3 += 1) 
        {
            var_20 = ((/* implicit */short) min((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_4 [i_0]))))))), (max((((((/* implicit */_Bool) var_14)) ? (arr_8 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((unsigned char) arr_8 [i_0])))))));
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [0LL])) ? (((/* implicit */unsigned int) var_12)) : (var_0)));
        }
        var_22 = ((/* implicit */int) max((max((min((((/* implicit */long long int) 3176263577U)), (6888119992853666812LL))), (((/* implicit */long long int) ((((((/* implicit */int) (short)-20810)) + (2147483647))) << (((((/* implicit */int) (signed char)103)) - (103)))))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) arr_5 [i_0])) ? (arr_4 [(short)2]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [6ULL])))))))));
        var_23 = ((/* implicit */short) min((((unsigned long long int) (-(((/* implicit */int) arr_2 [i_0]))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)112)) >= (((((/* implicit */int) var_1)) - (((/* implicit */int) var_2)))))))));
        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) arr_3 [i_0]))));
    }
    var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((unsigned char) var_4)))));
    var_26 *= ((/* implicit */long long int) ((((((((/* implicit */_Bool) 7970395047369564466LL)) ? (1776676399U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))) > (((/* implicit */unsigned int) var_6)))) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) ((((((/* implicit */int) (signed char)-62)) * (((/* implicit */int) (_Bool)1)))) <= (((/* implicit */int) var_1)))))));
}
