/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94769
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
    var_16 += ((/* implicit */long long int) var_2);
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_14))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) <= (((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_1)))))))) : (((/* implicit */int) var_10))));
    var_18 = min((var_11), (var_11));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_5))) / (var_12)))), (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    arr_12 [i_2] [(unsigned short)0] [i_1] [i_1] = ((/* implicit */unsigned long long int) var_10);
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 11; i_4 += 3) 
                        {
                            {
                                arr_18 [i_0] [i_3] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((((((/* implicit */int) var_11)) & (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_13))))))) / (var_12)));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775795LL)) ? (3991959587U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11))))) : (min((((((/* implicit */_Bool) var_12)) ? (var_14) : (var_14))), (((/* implicit */unsigned int) ((9223372036854775807LL) == (-9223372036854775795LL)))))))))));
                            }
                        } 
                    } 
                }
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_5 = 1; i_5 < 11; i_5 += 1) 
                {
                    arr_22 [i_5] [i_1] = ((((_Bool) var_6)) ? (((/* implicit */int) var_10)) : (((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_7)))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))));
                }
                for (unsigned short i_6 = 1; i_6 < 12; i_6 += 3) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 14; i_7 += 1) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                        {
                            {
                                arr_30 [i_1] [i_1] [i_8] [i_7] [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) / (((/* implicit */long long int) min((var_0), (((/* implicit */int) var_10)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned int) var_10))))) && (var_1))))) : (min((var_4), (min((var_4), (((/* implicit */unsigned long long int) var_2))))))));
                                arr_31 [i_8] [i_8] [i_8] [i_8] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_13))) * (max((((/* implicit */int) var_2)), (var_0)))))), (var_15)));
                                arr_32 [i_0] [i_1] [i_6 - 1] [i_1] [i_8] = ((/* implicit */signed char) ((unsigned char) ((max((var_3), (((/* implicit */long long int) var_10)))) / (((/* implicit */long long int) ((/* implicit */int) var_7))))));
                                arr_33 [i_0] [i_1] [i_1] [i_8] [0ULL] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_12))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 3) 
                    {
                        for (int i_10 = 1; i_10 < 13; i_10 += 3) 
                        {
                            {
                                arr_38 [i_10] [8LL] [i_6] [i_1] [8LL] |= ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */int) var_13)) | (((/* implicit */int) var_2)))) != (((/* implicit */int) max((((/* implicit */signed char) var_2)), (var_5)))))))) | (((var_12) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_8))))))));
                                arr_39 [i_9] [i_10 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) var_15)) : (var_4))), (((/* implicit */unsigned long long int) var_11))))) ? (((((((/* implicit */_Bool) var_14)) ? (var_3) : (((/* implicit */long long int) var_8)))) | (((/* implicit */long long int) ((var_1) ? (((/* implicit */int) (unsigned char)80)) : (((/* implicit */int) (signed char)-99))))))) : (((((((/* implicit */_Bool) var_14)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9))))) | (((/* implicit */long long int) ((((/* implicit */int) var_9)) & (var_0))))))));
                            }
                        } 
                    } 
                }
                arr_40 [(short)0] = ((int) max((((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_3))), (((/* implicit */long long int) ((_Bool) var_7)))));
            }
        } 
    } 
}
