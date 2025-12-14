/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72785
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 2; i_1 < 7; i_1 += 2) 
        {
            {
                arr_7 [i_0] [i_1 - 1] = ((/* implicit */int) ((((/* implicit */int) ((_Bool) (short)2897))) != (((/* implicit */int) ((short) arr_3 [i_0 + 1] [i_0 + 1] [i_1 + 1])))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_17 [(short)6] [i_2] [i_2] [i_2] [i_2] [7LL] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 7006582708235666054LL)) ? (arr_13 [i_4] [(_Bool)1] [i_2] [i_2] [i_1] [i_0]) : (((/* implicit */int) (short)2897))))) ? (((/* implicit */int) var_17)) : (((((/* implicit */_Bool) (short)2897)) ? (arr_6 [(_Bool)1]) : (((/* implicit */int) var_7))))))) ? (((arr_9 [i_0 + 1] [i_1 + 1] [i_1 + 1]) ^ (((/* implicit */unsigned long long int) var_15)))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2902))) : (var_1)))));
                                arr_18 [i_0] [i_2] [6LL] [i_2] [(short)7] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1] [i_1 - 1] [i_1 + 4] [(short)0] [i_4 - 1])) ? (arr_4 [i_0 + 1]) : (((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_5 = 1; i_5 < 6; i_5 += 2) 
    {
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            {
                arr_23 [0ULL] [i_6] |= ((/* implicit */short) ((((/* implicit */int) ((arr_16 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 4]) || (((/* implicit */_Bool) var_15))))) >= (((((/* implicit */int) arr_16 [i_5] [i_5] [i_5 - 1] [i_5] [i_5 + 4])) - (((/* implicit */int) arr_16 [i_5] [i_5] [i_5 - 1] [0LL] [i_5 + 4]))))));
                var_20 = ((((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_19))))) != (((((/* implicit */_Bool) var_15)) ? (31525197391593472LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))));
                var_21 = ((/* implicit */int) ((((((/* implicit */_Bool) 130944U)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5 + 1] [10U] [i_5 + 1] [i_5 - 1] [9]))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((-31525197391593480LL) == (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_5])))))))));
                /* LoopNest 3 */
                for (unsigned short i_7 = 2; i_7 < 8; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) 
                    {
                        for (int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                arr_31 [i_5] [i_6] [i_7] [i_8] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7468))) + (arr_29 [i_7 + 1] [i_5 + 2] [i_5 - 1] [i_5 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) arr_29 [i_7 + 2] [i_5 + 3] [i_5 + 4] [i_5 + 2])))) : (((((/* implicit */_Bool) -31525197391593471LL)) ? (-31525197391593473LL) : (2996956487043907348LL)))));
                                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((int) ((unsigned int) arr_5 [i_5 + 1]))))));
                                var_23 = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) var_11)) | (31525197391593479LL))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_17);
    var_25 = ((/* implicit */unsigned long long int) var_17);
}
