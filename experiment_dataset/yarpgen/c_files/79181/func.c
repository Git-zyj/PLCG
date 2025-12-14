/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79181
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */short) (unsigned short)4032);
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) == (9223372036854775807LL)));
        arr_3 [i_0] = ((/* implicit */unsigned int) (-((+(((/* implicit */int) (_Bool)0))))));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
    {
        var_11 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */int) arr_4 [i_1])) / (((/* implicit */int) (short)-25458)))));
        var_12 ^= ((/* implicit */unsigned short) var_8);
    }
    for (unsigned short i_2 = 1; i_2 < 13; i_2 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) ((((arr_0 [i_2 - 1] [i_2 - 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) < (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)4017)))))));
        var_14 = ((/* implicit */unsigned char) (_Bool)1);
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-124))))))))) + (((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 + 2] [i_2 - 1]))) + (arr_5 [i_2 + 2])))));
        var_16 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)25371)) ? (((/* implicit */int) arr_4 [(unsigned short)1])) : (((/* implicit */int) (unsigned short)61528))))))))));
        var_17 = ((/* implicit */short) (((-(((/* implicit */int) (unsigned short)19398)))) + ((((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) (_Bool)1))))));
    }
    for (long long int i_3 = 0; i_3 < 11; i_3 += 2) 
    {
        var_18 &= ((/* implicit */short) min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)24303)))), (((arr_6 [i_3]) - (arr_6 [i_3])))));
        var_19 = (+(((((/* implicit */int) min(((unsigned short)3), (((/* implicit */unsigned short) (short)25354))))) * (((((/* implicit */int) (_Bool)0)) * (((/* implicit */int) (_Bool)1)))))));
        var_20 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) (unsigned short)24294)) ? (((/* implicit */int) (unsigned short)1730)) : (1274225346))), (((/* implicit */int) arr_1 [i_3]))));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) var_0);
        arr_14 [i_4] = (-(((/* implicit */int) var_1)));
        arr_15 [i_4] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)25371)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4 + 1])))))));
    }
}
