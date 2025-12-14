/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61012
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
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */int) arr_2 [i_0 - 1] [i_0])) + (var_3)))) + (((arr_3 [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))) : (arr_1 [i_0])))));
        var_13 = ((/* implicit */int) arr_0 [i_0 - 1]);
    }
    for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) arr_4 [(unsigned char)0])) - (arr_5 [i_1]))) - (((/* implicit */unsigned int) ((var_10) + (((/* implicit */int) var_4)))))))) ? (((/* implicit */int) var_9)) : (((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */int) (signed char)115)) : (((/* implicit */int) arr_6 [i_1])))))))));
        var_15 = ((/* implicit */_Bool) arr_6 [i_1]);
    }
    for (unsigned char i_2 = 3; i_2 < 17; i_2 += 4) 
    {
        var_16 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_5 [i_2 - 3])))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) | (((unsigned long long int) arr_7 [i_2]))))));
        arr_10 [i_2 - 1] = ((/* implicit */int) (+(549755813856ULL)));
        arr_11 [7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_2])) ? (min((((long long int) arr_9 [i_2] [i_2])), (((/* implicit */long long int) ((arr_5 [i_2 - 2]) << (((((/* implicit */int) arr_7 [(signed char)1])) - (3146)))))))) : (((/* implicit */long long int) ((int) arr_9 [i_2 - 2] [i_2 - 2])))));
    }
    var_17 = ((/* implicit */long long int) var_6);
}
