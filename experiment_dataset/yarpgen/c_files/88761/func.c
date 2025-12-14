/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88761
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
    for (int i_0 = 3; i_0 < 11; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                var_20 = ((((/* implicit */_Bool) max((((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)70)), (arr_0 [i_0])))), (arr_2 [i_0 + 1])))) || (((/* implicit */_Bool) arr_1 [i_0])));
                var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0 + 2])) ? (arr_2 [i_0 + 1]) : (arr_2 [i_0 - 1])))) % (((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)70)) - (((/* implicit */int) var_9))))) + (arr_4 [12]))))))));
                var_22 = ((/* implicit */int) arr_4 [i_0]);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
                    {
                        {
                            var_23 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) & (min((arr_2 [i_0 + 3]), (((/* implicit */unsigned int) (short)-20907))))));
                            var_24 = ((/* implicit */unsigned char) ((unsigned int) (-(((/* implicit */int) arr_9 [i_0] [i_1] [i_1] [(short)1] [i_3] [i_3])))));
                            var_25 += ((/* implicit */unsigned short) ((unsigned int) min((arr_3 [i_0 - 1]), (arr_3 [i_0 + 1]))));
                            /* LoopSeq 2 */
                            for (int i_4 = 0; i_4 < 14; i_4 += 3) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0 - 1] [i_0] [i_0] = min((((/* implicit */unsigned int) ((unsigned char) arr_0 [i_0]))), (((unsigned int) arr_0 [i_0])));
                                arr_13 [i_0] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */long long int) ((unsigned short) ((unsigned char) min((((/* implicit */unsigned long long int) (signed char)18)), (arr_4 [i_0])))));
                                arr_14 [(unsigned short)9] [i_3] [i_0] [i_1] [i_0 + 3] = ((/* implicit */unsigned char) max(((+(var_17))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0 - 2])) ? (arr_3 [i_0]) : (arr_3 [i_0 + 1]))))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 3) 
                            {
                                var_26 = ((/* implicit */int) arr_2 [i_0]);
                                var_27 = ((/* implicit */unsigned short) (+(arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0] [i_0] [i_0])));
                                arr_18 [i_0] [i_3] [i_5] = ((/* implicit */unsigned int) ((long long int) ((short) arr_3 [i_0 - 1])));
                                var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) (+(((/* implicit */int) ((arr_10 [i_2] [i_1] [i_0] [i_0] [i_2] [i_1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [(short)0])))))))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 3) 
    {
        var_29 = ((/* implicit */unsigned char) arr_19 [i_6] [i_6]);
        arr_21 [i_6] [i_6] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_19 [i_6] [i_6])) ? (arr_19 [i_6] [i_6]) : (arr_19 [i_6] [i_6])))));
    }
    for (unsigned char i_7 = 0; i_7 < 19; i_7 += 3) 
    {
        var_30 ^= ((/* implicit */unsigned char) max((max(((+(((/* implicit */int) arr_22 [i_7])))), (((((/* implicit */int) (signed char)-17)) | (((/* implicit */int) var_19)))))), (((/* implicit */int) (!(((/* implicit */_Bool) 3026417168U)))))));
        var_31 = ((/* implicit */long long int) (short)-20907);
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 0; i_9 < 13; i_9 += 3) 
        {
            for (long long int i_10 = 0; i_10 < 13; i_10 += 3) 
            {
                {
                    var_32 ^= ((/* implicit */short) arr_24 [i_8]);
                    /* LoopNest 2 */
                    for (int i_11 = 3; i_11 < 10; i_11 += 3) 
                    {
                        for (long long int i_12 = 4; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_38 [i_9] [i_11] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */long long int) arr_10 [i_11 - 3] [i_12 - 3] [i_12] [i_12 - 3] [i_12] [i_12 + 1]);
                                arr_39 [i_8] [i_11] [i_11] [i_8] [i_11] [i_8] = ((((/* implicit */_Bool) (+(((/* implicit */int) arr_34 [i_11 + 2] [i_11 + 3] [i_12 - 3]))))) ? (((arr_27 [i_12 - 2]) ? (((((/* implicit */int) (unsigned short)5812)) / (((/* implicit */int) arr_26 [i_9] [i_9] [i_9])))) : (((((/* implicit */_Bool) 27)) ? (((/* implicit */int) arr_28 [i_8])) : (((/* implicit */int) (unsigned char)51)))))) : (((int) arr_26 [i_12] [i_11 - 1] [i_10])));
                                arr_40 [i_8] [i_8] [i_8] [i_11] [i_8] [i_8] = (((~(arr_15 [i_12 + 1] [i_9] [i_10] [(short)12] [i_11 - 1] [i_9]))) - (((arr_11 [i_11] [i_11 + 3] [i_11] [i_11 + 1] [i_11]) & (((/* implicit */int) (unsigned short)59729)))));
                                arr_41 [i_8] [(short)0] [i_9] [i_10] [i_11] [i_11] [i_12] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) arr_19 [i_12 - 1] [i_12 - 2])))));
                                var_33 = ((/* implicit */int) max((((/* implicit */unsigned int) max((arr_15 [(unsigned char)1] [(unsigned char)1] [i_10] [i_10] [i_9] [i_8]), (arr_15 [i_8] [i_9] [i_10] [i_9] [i_12] [i_11 + 3])))), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_11] [i_11 - 3])) / (((/* implicit */int) (short)-17867))))), (min((4194303U), (((/* implicit */unsigned int) (short)-20907))))))));
                            }
                        } 
                    } 
                    arr_42 [i_9] [i_9] [0U] = ((/* implicit */short) min(((+(5))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [4LL])))))));
                }
            } 
        } 
        var_34 ^= ((/* implicit */unsigned short) arr_30 [i_8] [i_8] [i_8]);
        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((min((max((arr_2 [i_8]), (((/* implicit */unsigned int) arr_37 [i_8] [i_8])))), (((/* implicit */unsigned int) arr_31 [0LL] [i_8] [0LL])))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_9 [9U] [i_8] [i_8] [9U] [i_8] [9U]))))))))));
        var_36 ^= ((/* implicit */unsigned int) arr_11 [i_8] [i_8] [i_8] [i_8] [i_8]);
    }
}
