/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87212
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
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 1; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 3; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_2 [i_3]), (((/* implicit */int) arr_1 [i_2 - 2] [i_4 - 2]))))) ? (((4118060936U) - (((/* implicit */unsigned int) arr_6 [i_4 - 1] [i_1 - 1] [i_2 - 2] [i_4 - 1])))) : (((/* implicit */unsigned int) arr_2 [i_4 + 1]))));
                                var_13 = ((/* implicit */unsigned int) arr_9 [(short)0] [i_2 - 1] [i_2] [i_3] [i_2 - 1] [i_4 - 2] [i_2 + 1]);
                                arr_11 [i_0] [(short)16] [i_4] [5LL] [i_3] [i_4 - 3] = max((((/* implicit */unsigned long long int) ((short) arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1]))), (((((/* implicit */_Bool) arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 1])) ? (arr_8 [i_2 - 2] [i_2 + 1] [i_2 + 1]) : (arr_8 [i_2 - 2] [i_2 + 1] [i_2 + 1]))));
                                arr_12 [i_4] [i_1] [i_1] [i_1] [i_1 + 3] [2U] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22749)) ? (arr_8 [i_4 - 3] [4LL] [4LL]) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [0LL] [i_0] [i_4]))))) ? (arr_3 [i_1] [i_2 + 1] [(unsigned char)8]) : (((((/* implicit */_Bool) arr_3 [i_2] [i_2] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1 + 1] [i_2 - 2] [14LL]))) : (176906360U))))) > (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (short)-23847)), (arr_3 [(_Bool)1] [i_3] [(short)4])))) >= (((((/* implicit */_Bool) (short)23825)) ? (((/* implicit */unsigned long long int) arr_3 [4LL] [i_1 + 2] [4LL])) : (arr_8 [i_0] [i_0] [i_0])))))))));
                                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_7 [0LL] [i_3] [i_1] [i_0])), ((+(3160039630U)))))) ? (min((((/* implicit */int) (short)23846)), ((-(((/* implicit */int) arr_9 [4U] [(short)14] [(short)14] [(signed char)8] [i_3] [i_3] [i_4])))))) : (arr_6 [i_2] [i_2] [i_2] [i_2])));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    var_15 = ((/* implicit */short) -1LL);
                    arr_15 [(short)16] [i_1 + 3] [7U] = ((/* implicit */long long int) ((((/* implicit */_Bool) -16LL)) ? (arr_6 [i_1 + 3] [i_1] [i_1 + 2] [i_1 + 3]) : (arr_6 [i_1 + 2] [i_1] [i_1 + 3] [i_1 - 1])));
                }
            }
        } 
    } 
    var_16 = ((unsigned int) ((var_6) == (((((/* implicit */_Bool) 2182861396U)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-23847))) : (var_7)))));
}
