/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68075
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_4 [(unsigned char)8] [(unsigned char)4]) / (((/* implicit */int) arr_5 [i_2]))))) ? (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) var_4)) : (arr_4 [6] [i_1 + 1]))) : (((/* implicit */int) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (_Bool)0)))))))) ? ((-(((/* implicit */int) max((var_1), (((/* implicit */unsigned char) arr_0 [i_0] [i_1]))))))) : (((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)98)) ? (1010203729533638035ULL) : (((/* implicit */unsigned long long int) arr_8 [i_0])))) >= (((((/* implicit */_Bool) 15399643274519472707ULL)) ? (arr_7 [4]) : (((/* implicit */unsigned long long int) arr_8 [i_0])))))))));
                    arr_9 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((arr_8 [i_1 - 2]) + (arr_8 [i_1 + 1])))), (max((min((arr_7 [(signed char)11]), (((/* implicit */unsigned long long int) var_12)))), (((/* implicit */unsigned long long int) arr_3 [(unsigned short)6]))))));
                    arr_10 [i_0] [i_1] [i_2] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(_Bool)1]))) : (var_10)))) ? ((+(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (short)7)))), (((((/* implicit */_Bool) arr_2 [i_0] [i_1 + 2])) ? (((/* implicit */int) arr_2 [i_1 + 1] [i_2])) : (((/* implicit */int) arr_2 [i_0] [i_1 - 2]))))));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) var_2))));
    var_18 = ((/* implicit */unsigned char) ((var_13) <= (max((max((((/* implicit */int) (short)7)), (1))), (((((/* implicit */_Bool) (unsigned char)247)) ? (((/* implicit */int) var_0)) : (-1194929086)))))));
}
