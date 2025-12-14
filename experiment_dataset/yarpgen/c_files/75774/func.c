/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75774
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
    var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (((((~(var_9))) != (((/* implicit */int) var_7)))) && (((/* implicit */_Bool) (+(((/* implicit */int) var_11))))))))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)5803))) ^ (16710310420790190999ULL))));
        /* LoopNest 2 */
        for (long long int i_1 = 1; i_1 < 13; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */int) ((1073741823U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)209)))))) > (((/* implicit */int) ((short) min((var_10), (((/* implicit */int) var_6)))))))))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((unsigned long long int) max((arr_3 [i_1 + 1] [i_1] [i_2]), (arr_5 [i_0] [(unsigned short)8] [i_2] [i_3])))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            arr_14 [i_0] [i_1] [i_1] [i_2] = min((var_14), ((-(((/* implicit */int) var_1)))));
                            arr_15 [i_0] [i_1] [i_2] [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_13 [i_1 + 1] [i_1 + 1] [i_2] [i_4]);
                        }
                        for (int i_5 = 0; i_5 < 15; i_5 += 4) 
                        {
                            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) ((min((((/* implicit */unsigned long long int) (-(arr_13 [i_3] [8ULL] [i_5] [i_3])))), (arr_10 [i_5] [i_5]))) > (min(((-(arr_8 [i_0] [i_3] [(unsigned short)4] [i_3]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_16 [i_0] [i_1] [i_2] [i_3] [i_0] [i_0] [i_0])), (arr_17 [i_0] [(short)0] [i_2] [i_3] [i_5])))))))))));
                            var_24 |= ((/* implicit */unsigned char) arr_6 [i_1 + 2] [0] [1U]);
                        }
                    }
                    for (signed char i_6 = 0; i_6 < 15; i_6 += 4) /* same iter space */
                    {
                        arr_21 [i_2] [i_1] = ((/* implicit */unsigned int) (((+(arr_19 [i_0] [i_1 + 2] [i_2] [(short)10] [i_6]))) ^ (arr_9 [i_0] [i_1 - 1] [i_2] [i_2] [i_6])));
                        var_25 = ((/* implicit */unsigned char) (_Bool)1);
                        arr_22 [i_6] [i_1] [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) arr_20 [i_2]);
                        arr_23 [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) 673913180)), (9012705578036884856ULL)));
                    }
                    for (signed char i_7 = 0; i_7 < 15; i_7 += 4) /* same iter space */
                    {
                        var_26 += 1099511627775ULL;
                        arr_27 [i_2] [i_1] [i_2] [i_7] = ((/* implicit */unsigned char) arr_10 [i_2] [i_2]);
                    }
                    var_27 = ((/* implicit */unsigned short) (+(4294967295U)));
                    var_28 *= ((/* implicit */signed char) (unsigned char)255);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_8 = 4; i_8 < 14; i_8 += 2) 
        {
            for (unsigned short i_9 = 0; i_9 < 15; i_9 += 1) 
            {
                {
                    arr_35 [i_0] [i_0] = ((/* implicit */unsigned short) ((short) 4294967295U));
                    var_29 = ((/* implicit */int) min((min((var_17), (((/* implicit */unsigned long long int) arr_16 [i_0] [i_8 - 4] [i_0] [i_8 - 3] [i_8 - 3] [(unsigned short)0] [i_8 + 1])))), (((/* implicit */unsigned long long int) (_Bool)1))));
                    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_32 [i_0])) ? (arr_7 [i_8] [i_0] [i_8 + 1] [i_0] [i_0] [i_8]) : (arr_7 [i_8] [i_9] [(short)10] [i_8 - 2] [i_0] [i_8]))), (min((((/* implicit */unsigned int) (_Bool)1)), (1819534103U)))))) ? (((/* implicit */unsigned long long int) min(((~(2047))), (((/* implicit */int) (!((_Bool)1))))))) : (arr_26 [(signed char)6] [i_8 - 4] [i_8 - 1] [i_0])));
                    /* LoopNest 2 */
                    for (int i_10 = 4; i_10 < 12; i_10 += 2) 
                    {
                        for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                        {
                            {
                                arr_42 [i_11] [i_8] [i_9] [i_11] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) (_Bool)1)), (18446744073709551615ULL)));
                                arr_43 [i_11] [(signed char)0] = arr_41 [i_0] [i_8] [i_9] [i_0] [0U];
                                arr_44 [i_0] [i_8] [i_8] [i_10] &= ((/* implicit */unsigned char) (unsigned short)46434);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
