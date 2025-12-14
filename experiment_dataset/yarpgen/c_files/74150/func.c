/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74150
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74150 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74150
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
    var_10 = ((/* implicit */unsigned char) max((var_10), (((/* implicit */unsigned char) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (12703572945049294975ULL)))) && (((var_5) && (var_2))))))))));
    var_11 = ((/* implicit */unsigned int) (-2147483647 - 1));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        arr_4 [i_0 - 1] = ((/* implicit */unsigned int) var_6);
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_3);
        arr_6 [i_0] = ((/* implicit */long long int) (signed char)-122);
    }
    for (unsigned short i_1 = 4; i_1 < 17; i_1 += 4) 
    {
        arr_10 [i_1] &= ((/* implicit */unsigned char) min((((/* implicit */int) (short)8918)), (min((((/* implicit */int) max((((/* implicit */short) (unsigned char)30)), ((short)-8919)))), (arr_7 [i_1 - 4] [i_1 - 3])))));
        arr_11 [i_1 + 1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) (+(8191)))) | (max((var_0), (((/* implicit */unsigned long long int) var_1)))))) / (((/* implicit */unsigned long long int) var_3))));
        arr_12 [i_1 + 1] = ((/* implicit */_Bool) (~((-(4243547244U)))));
    }
}
