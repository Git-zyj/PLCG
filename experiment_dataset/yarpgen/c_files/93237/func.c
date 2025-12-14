/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93237
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93237 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93237
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
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((signed char) min((min((arr_0 [i_0] [i_0]), (((/* implicit */int) var_18)))), (((/* implicit */int) arr_1 [i_0])))));
        arr_3 [i_0] = ((/* implicit */signed char) arr_0 [1ULL] [i_0]);
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */signed char) (~(((unsigned long long int) arr_0 [i_1] [i_1]))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 4) 
    {
        var_20 = ((/* implicit */unsigned char) ((arr_8 [i_2] [i_2]) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_8 [i_2] [i_2]) <= (var_9)))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)4331)))) : (arr_8 [i_2] [i_2]))))));
        var_22 ^= ((/* implicit */unsigned char) (((~(arr_8 [i_2] [i_2]))) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [i_2])))));
        var_23 = ((unsigned int) arr_8 [i_2] [i_2]);
        arr_10 [(short)12] [i_2] = ((/* implicit */short) ((unsigned char) arr_9 [i_2] [i_2]));
    }
    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_4))));
    var_25 = ((/* implicit */signed char) (+(min((((((/* implicit */_Bool) 3140705984U)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4327))))), (var_5)))));
}
