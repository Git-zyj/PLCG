/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89727
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
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 23; i_1 += 4) 
        {
            {
                var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) arr_0 [6U]))));
                arr_7 [i_1 + 2] [20] = ((/* implicit */int) arr_4 [3U] [i_1 + 1]);
                /* LoopNest 2 */
                for (signed char i_2 = 2; i_2 < 23; i_2 += 4) 
                {
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        {
                            var_12 += ((/* implicit */unsigned int) ((unsigned long long int) ((unsigned int) arr_11 [(unsigned char)3] [(unsigned short)1] [i_0] [(unsigned short)14] [i_1 + 2])));
                            arr_15 [i_0] [(unsigned short)12] [(short)0] [2U] = max((((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_12 [(unsigned short)13] [20U] [i_2 - 1] [i_3])))) - (((unsigned int) var_8)))), (((/* implicit */unsigned int) ((unsigned short) (+(arr_11 [i_0] [i_0] [(unsigned short)16] [(unsigned short)19] [16]))))));
                            arr_16 [15U] [i_1 - 3] [(unsigned short)21] [i_1 + 2] [(unsigned short)2] [17] = ((((/* implicit */_Bool) ((((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned short) arr_5 [(unsigned short)4] [i_1] [(unsigned char)18]))))) - (((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))) ? (((/* implicit */int) var_10)) : (min((var_7), (((/* implicit */int) arr_4 [i_1 + 1] [i_2 + 1])))));
                            arr_17 [i_3] [i_3] [21ULL] [i_1] [(unsigned char)17] = ((/* implicit */short) var_8);
                        }
                    } 
                } 
            }
        } 
    } 
    var_13 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((int) var_9))), (var_2)))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_1)) : (var_4)))), (((unsigned long long int) var_1)))) : (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_10)) | (((/* implicit */int) var_8)))), (((/* implicit */int) var_0)))))));
    var_14 = var_6;
}
