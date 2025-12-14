/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81976
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81976 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81976
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_15 = ((/* implicit */long long int) min((var_15), ((((~(var_0))) - (((/* implicit */long long int) ((int) 8778913153024LL)))))));
        arr_3 [i_0] = ((/* implicit */int) min((((/* implicit */long long int) ((unsigned short) var_9))), (((min((((/* implicit */long long int) var_2)), (9195697982445763721LL))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) (_Bool)1))))))));
        var_16 -= ((/* implicit */_Bool) (~(((((/* implicit */_Bool) min((arr_1 [i_0]), (((/* implicit */short) var_3))))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0]))))));
        var_17 = ((/* implicit */unsigned char) var_10);
    }
    for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
    {
        var_18 = ((/* implicit */long long int) ((unsigned char) (unsigned short)17236));
        var_19 += ((/* implicit */unsigned char) (unsigned short)8536);
        arr_7 [i_1 - 2] [i_1] = ((/* implicit */signed char) ((long long int) min(((_Bool)1), ((_Bool)1))));
        var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((unsigned char) -1LL)))));
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) ((long long int) ((long long int) ((((/* implicit */_Bool) 5069776026673381178ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_5 [i_1]))))));
    }
    for (unsigned short i_2 = 0; i_2 < 22; i_2 += 4) 
    {
        arr_12 [i_2] [i_2] = ((/* implicit */int) (-(min((((/* implicit */unsigned long long int) var_5)), (arr_6 [i_2] [i_2])))));
        var_21 = ((/* implicit */_Bool) var_3);
    }
    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (~(min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) ^ (-7021548096839056355LL)))), ((~(var_4))))))))));
}
