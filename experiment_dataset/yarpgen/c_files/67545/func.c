/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67545
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
    var_10 = ((/* implicit */short) (~(var_1)));
    var_11 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) < (max((2216615441596416ULL), (((/* implicit */unsigned long long int) var_4))))))), (((((/* implicit */int) var_7)) - (((/* implicit */int) (short)23434))))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_0 [i_0] [12])) : (2147483647)))))) * (18444527458267955199ULL)));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) (_Bool)1)))));
        var_12 += ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_0 + 2] [i_0 + 2])), (((((/* implicit */_Bool) 3661328571U)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (2147483646)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)-23135)) : (((/* implicit */int) arr_0 [i_0] [i_0])))) > (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_0 [i_0] [(signed char)8])) : (arr_1 [i_0]))))))) : (((((((/* implicit */long long int) arr_1 [i_0])) == (var_5))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-11232))) : (min((202361716U), (var_8)))))));
        arr_4 [(_Bool)1] = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3603830769U)) ? (((/* implicit */int) (short)-10150)) : (((/* implicit */int) (signed char)-70))))) ? (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])) : (((unsigned long long int) var_1)))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 17; i_1 += 2) 
    {
        var_13 = ((/* implicit */signed char) var_5);
        var_14 = ((/* implicit */short) var_5);
    }
}
