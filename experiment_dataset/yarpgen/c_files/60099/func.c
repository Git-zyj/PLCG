/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60099
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
    var_15 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        var_16 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)14801))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-4449)) ? (-300970281) : (300970281)));
        arr_4 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-24388)) ? (((/* implicit */int) ((((/* implicit */int) ((unsigned short) arr_1 [i_0 + 1] [i_0 - 1]))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) : (((((/* implicit */_Bool) -300970281)) ? (300970270) : (((/* implicit */int) ((300970270) > (300970280))))))));
    }
    for (unsigned short i_1 = 3; i_1 < 13; i_1 += 4) 
    {
        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_6 [i_1] [i_1])), (((/* implicit */unsigned long long int) min((var_7), (((/* implicit */int) var_1)))))))) ? (min((arr_6 [i_1] [13]), (min((((/* implicit */unsigned int) (short)13760)), (var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
        arr_7 [i_1] = (+(min((((/* implicit */unsigned int) arr_0 [i_1 + 2])), (arr_6 [i_1 + 2] [i_1 + 1]))));
    }
    for (short i_2 = 3; i_2 < 12; i_2 += 4) 
    {
        arr_10 [i_2] = ((/* implicit */unsigned short) var_1);
        arr_11 [8ULL] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)99))));
        /* LoopSeq 2 */
        for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            var_18 = ((/* implicit */short) (((+(((/* implicit */int) max((var_5), (var_1)))))) <= ((~(((((/* implicit */int) var_5)) << (((/* implicit */int) var_14))))))));
            var_19 = ((/* implicit */unsigned long long int) (unsigned short)33846);
        }
        for (short i_4 = 1; i_4 < 12; i_4 += 2) 
        {
            arr_16 [(short)4] [i_4] = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_8 [i_2])) ? (arr_6 [2ULL] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2 - 2])))))));
            arr_17 [i_2] [i_4] = ((/* implicit */unsigned long long int) arr_5 [12ULL]);
        }
        var_20 = ((/* implicit */unsigned short) ((max((var_6), (((/* implicit */unsigned int) -1096630298)))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_2 + 2] [i_2 - 3]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2 + 1])))))))));
    }
    var_21 = ((/* implicit */unsigned long long int) ((short) (+((+(300970280))))));
}
