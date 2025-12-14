/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94222
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94222 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94222
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
    /* LoopNest 2 */
    for (short i_0 = 4; i_0 < 16; i_0 += 4) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 1; i_2 < 16; i_2 += 3) 
                {
                    for (unsigned int i_3 = 1; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_14 = ((/* implicit */int) ((min((((/* implicit */unsigned long long int) 131071)), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2])), (var_12))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_1 [i_0] [i_1 + 1])), ((short)26108)))))));
                            arr_10 [i_0] [i_2] [i_2] [i_0] &= ((/* implicit */int) ((((/* implicit */_Bool) ((((var_8) ^ (((/* implicit */long long int) ((/* implicit */int) var_7))))) | (((/* implicit */long long int) (-(((/* implicit */int) (short)-21)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-1))) : (((((/* implicit */_Bool) ((short) arr_7 [i_0] [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)137))))) : (((((/* implicit */_Bool) (signed char)-32)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_3]))) : (var_8)))))));
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 17; i_4 += 4) 
                            {
                                arr_13 [i_3] [i_2] [16] [i_3 + 2] [i_4 - 1] = min((((/* implicit */int) (signed char)48)), (max((((((/* implicit */int) (short)-23287)) & (((/* implicit */int) (short)-26)))), (((/* implicit */int) arr_1 [i_4 + 1] [i_4 + 1])))));
                                arr_14 [i_0] [i_3] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [15LL] [i_2 - 1]))))), (max((arr_4 [i_0] [(short)6]), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_4])))))))));
                            }
                            arr_15 [i_3] [17] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 3278105916U)) ? (((/* implicit */int) (unsigned char)90)) : (var_11))) << (((max((((/* implicit */long long int) arr_5 [i_0 - 2] [i_1] [i_1])), (arr_8 [i_1 + 2] [i_1] [i_1 + 2] [i_1]))) - (1188311445952301889LL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_1 + 4])))))) ? ((~(-1437480213))) : (((var_11) & (((/* implicit */int) arr_2 [i_0] [i_0])))))) : (((/* implicit */int) ((unsigned char) arr_11 [i_3 + 1] [i_1] [i_2] [i_2 + 1] [i_1] [i_3] [i_1 + 3])))));
                        }
                    } 
                } 
                var_15 += ((/* implicit */short) ((((/* implicit */_Bool) -1437480213)) ? (((/* implicit */long long int) (~((~(((/* implicit */int) (unsigned char)218))))))) : (((((/* implicit */long long int) (-(1016861388U)))) + (((((/* implicit */long long int) -1)) | (arr_6 [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned int) var_11);
    var_17 = ((/* implicit */short) ((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
}
