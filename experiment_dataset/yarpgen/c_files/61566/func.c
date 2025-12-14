/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61566
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
    var_16 = ((/* implicit */long long int) var_5);
    var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */short) var_14)), ((short)-18452)))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12))))) ? (((/* implicit */long long int) ((var_15) >> (((((/* implicit */int) var_12)) - (189)))))) : (var_11))))));
    var_18 = ((/* implicit */short) (-(((/* implicit */int) var_13))));
    /* LoopNest 3 */
    for (signed char i_0 = 3; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                arr_12 [i_0] [i_1] [(unsigned char)1] [i_1] [i_3] [i_4] [(unsigned char)7] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) (short)18451))))) ? (((var_14) ? (((/* implicit */int) arr_10 [(_Bool)1] [i_1] [i_2] [i_2] [i_1])) : (((/* implicit */int) var_8)))) : (((/* implicit */int) arr_4 [(_Bool)1] [(unsigned char)4]))))) ? (((/* implicit */unsigned int) max(((+(((/* implicit */int) arr_7 [i_0 - 1] [i_0] [i_0])))), (((/* implicit */int) arr_7 [i_4] [(_Bool)1] [i_2]))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0 - 2] [(unsigned short)0] [i_3] [i_1])) ? (((/* implicit */int) arr_7 [(unsigned char)7] [5U] [(_Bool)1])) : (((/* implicit */int) var_13))))), (arr_5 [i_3] [(_Bool)1] [i_3 - 1] [(short)2])))));
                                arr_13 [i_1] [i_1] [i_2] [i_2] [(unsigned char)9] [i_4] = ((/* implicit */int) max((((/* implicit */long long int) ((var_5) & (max((arr_6 [i_0] [i_1] [i_2] [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_1])))))), (((((/* implicit */_Bool) arr_9 [i_3] [i_3] [i_3] [i_1])) ? (arr_9 [i_3] [4LL] [6LL] [i_1]) : (arr_9 [0ULL] [i_3] [i_3 - 1] [i_1])))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) ((((((((/* implicit */_Bool) var_0)) ? (arr_6 [i_0 - 1] [(_Bool)0] [i_1] [i_1]) : (var_5))) == (((/* implicit */unsigned int) (~(((/* implicit */int) arr_11 [i_0 - 2] [i_1] [i_2] [(unsigned char)3]))))))) ? (((((/* implicit */_Bool) (~(var_10)))) ? (((/* implicit */unsigned int) (~(var_2)))) : (arr_6 [i_0 - 3] [i_0 + 1] [i_2] [i_1]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0 - 3] [i_0 + 1])) ^ (((/* implicit */int) arr_3 [i_0 - 2] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 2; i_5 < 10; i_5 += 2) 
                    {
                        for (int i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_19 [i_1] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_4 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_5 - 2] [(signed char)10]))) : (var_3))));
                                arr_20 [i_0] [i_2] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) ((unsigned short) (unsigned char)0));
                                var_20 = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_1)))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_1] [(unsigned short)0])), (var_9)))) : (((((/* implicit */_Bool) arr_7 [i_1] [i_2] [1LL])) ? (4194304) : (((/* implicit */int) var_14))))))), (max((((((/* implicit */_Bool) (short)-6423)) ? (3432604301U) : (((/* implicit */unsigned int) -1961892020)))), (((/* implicit */unsigned int) max((((/* implicit */short) arr_10 [i_0] [10LL] [i_0] [8] [i_1])), (arr_18 [3LL] [i_1] [i_2] [(unsigned char)9] [(unsigned char)10]))))))));
                                arr_21 [i_0] [3U] [i_1] [i_5] [i_6] = min((max((arr_9 [i_1] [i_5 + 1] [(short)0] [i_1]), (arr_9 [i_1] [i_5 + 1] [i_5] [i_1]))), (((((/* implicit */_Bool) arr_9 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_1])) ? (arr_9 [i_0] [i_5 + 1] [(unsigned char)3] [i_1]) : (arr_9 [(unsigned short)3] [i_5 + 1] [i_6] [i_1]))));
                                arr_22 [i_1] = ((/* implicit */long long int) (!(((arr_14 [8U] [8U] [i_2] [(_Bool)1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
                            }
                        } 
                    } 
                    arr_23 [i_2] [i_2] [i_1] [i_2] &= ((/* implicit */unsigned int) var_2);
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) 3432604301U)) ? (3432604301U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
}
