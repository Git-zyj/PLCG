/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99155
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99155 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99155
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
    var_13 -= var_2;
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    arr_6 [i_1] [i_2 + 1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) ((unsigned short) ((var_4) > (var_8))))) ^ (((/* implicit */int) (short)0))));
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 1; i_3 < 10; i_3 += 3) 
                    {
                        var_14 -= ((/* implicit */short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)0))))), (arr_7 [i_3] [i_3 - 1] [i_3] [i_3]))))));
                        arr_9 [i_1] [i_1] [(short)5] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_5 [i_3] [i_2] [i_1 - 1] [i_0])), (((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13906))) : (5207339531103987325ULL)))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)18))))), (((((/* implicit */int) arr_5 [i_0] [i_2] [i_2] [i_2])) / (((/* implicit */int) arr_4 [i_3] [(unsigned short)2] [(unsigned short)2] [i_0])))))) : (((/* implicit */int) max((((_Bool) arr_0 [i_1])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_9)))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        arr_12 [i_0 - 1] [i_0 + 1] [i_1] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)13))));
                        arr_13 [i_0] [i_1 + 1] [(unsigned short)4] [(short)0] [i_4] [i_0] &= ((((((/* implicit */_Bool) arr_11 [i_0] [i_4])) ? (arr_11 [i_4] [i_4]) : (arr_11 [i_0] [i_1 + 3]))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)13612))));
                        var_15 = ((short) ((((/* implicit */int) var_3)) - (((/* implicit */int) var_11))));
                        var_16 = ((/* implicit */unsigned short) ((arr_10 [i_1] [i_2 + 1] [i_1 + 1] [i_1]) - (8388607ULL)));
                        var_17 = ((arr_0 [i_0 - 1]) ^ (arr_0 [i_0 + 1]));
                    }
                    for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                    {
                        var_18 ^= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) arr_15 [i_0] [i_1] [i_2 + 1] [i_5])) >= (((/* implicit */int) (short)(-32767 - 1)))))) + (((((/* implicit */_Bool) (~(arr_11 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_15 [i_0] [i_1 + 2] [i_1 - 1] [i_1 - 1])) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_0])) : (((/* implicit */int) arr_1 [i_0 - 1] [i_0])))) : (((/* implicit */int) arr_2 [i_1] [i_1]))))));
                        var_19 -= ((/* implicit */short) (((+(((/* implicit */int) arr_5 [i_5 + 2] [i_2] [i_1 + 1] [i_0 - 2])))) == (((arr_5 [i_0] [i_1] [i_2] [i_5]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_5 [i_0 + 2] [(short)3] [i_1] [i_0 + 2]))))));
                        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_5 - 1])) ? (((((/* implicit */_Bool) var_3)) ? (arr_10 [i_0 - 2] [i_1] [i_2 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) | (((/* implicit */int) (unsigned short)17725)))))))) ? (((/* implicit */int) arr_2 [i_1 + 3] [i_5 + 1])) : (((/* implicit */int) arr_16 [i_1] [(_Bool)1] [i_1] [i_1]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 3) 
                        {
                            var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((((/* implicit */_Bool) ((arr_11 [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0)))))) && (((/* implicit */_Bool) var_8)))))));
                            arr_19 [i_6] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))));
                            var_22 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) arr_14 [i_1] [(short)6] [(short)0] [i_1])) : (((/* implicit */int) arr_3 [i_0 - 1] [i_1]))));
                        }
                        arr_20 [i_1] [i_1] = max((13299581200808380501ULL), (((/* implicit */unsigned long long int) (short)0)));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 1; i_7 < 9; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((var_8) * (var_4))))))), (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_7] [(short)1])), ((~(var_4))))))))));
                                arr_25 [i_1] [i_1 + 3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (short)-5833);
                                var_24 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_3 [i_1] [i_0])), (arr_1 [i_1] [i_1])))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_9 = 2; i_9 < 10; i_9 += 4) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */short) min((((((/* implicit */_Bool) min((arr_10 [i_2 + 1] [i_1 + 1] [(_Bool)1] [i_1]), (((/* implicit */unsigned long long int) (short)0))))) ? (((((/* implicit */_Bool) arr_23 [i_10] [0ULL] [i_9] [i_2] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10004))) : (var_4))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_1] [i_9] [7ULL] [i_1] [i_1])) - (((/* implicit */int) arr_29 [i_1] [i_1] [i_1] [(short)2] [(short)2]))))))), ((-(((((/* implicit */_Bool) var_3)) ? (arr_7 [i_9] [i_9] [i_9] [i_9]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))))));
                                var_26 -= ((/* implicit */short) ((((((/* implicit */_Bool) min((arr_29 [i_9] [i_9] [i_2 + 1] [i_9] [i_9]), (((/* implicit */unsigned short) var_0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) arr_21 [i_0])) : (((/* implicit */int) (_Bool)1))))) : (max((arr_10 [i_0 + 2] [i_1 + 3] [i_2] [i_0]), (((/* implicit */unsigned long long int) arr_21 [i_0])))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [(short)9] [(short)9] [(short)9] [(short)9] [i_10])))));
                                arr_31 [i_0 + 2] [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) arr_26 [i_1] [i_2] [i_1] [i_1]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
