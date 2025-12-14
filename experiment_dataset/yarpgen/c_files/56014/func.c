/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56014
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56014 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56014
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
    var_13 = ((/* implicit */short) min((var_5), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-10685)) ? (8U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-8493))))))));
    var_14 = ((/* implicit */signed char) ((((((var_7) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) var_9))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
        arr_3 [i_0] [i_0 + 1] = ((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (short)933))));
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 17; i_1 += 2) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-111)) : (((((/* implicit */int) var_11)) + (((/* implicit */int) arr_5 [i_1]))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) var_11);
    }
    for (short i_2 = 2; i_2 < 14; i_2 += 1) 
    {
        arr_11 [i_2 - 1] = ((/* implicit */unsigned long long int) arr_4 [12U]);
        arr_12 [i_2 - 1] = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_9 [i_2 - 2])) && (((/* implicit */_Bool) arr_10 [i_2] [i_2])))));
    }
    for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_15 = ((/* implicit */unsigned short) (+(((unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) (signed char)-93)))))));
        arr_16 [i_3] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) * (arr_13 [i_3 - 1])))) != ((+(var_0))))));
    }
}
