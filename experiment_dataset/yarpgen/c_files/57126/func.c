/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57126
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
    var_11 &= ((/* implicit */signed char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) var_4))));
    var_12 = ((/* implicit */short) (!(((/* implicit */_Bool) min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))), (var_5))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */int) var_8)) != (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (_Bool)1)) <= (arr_1 [2LL])))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)11])) || (((/* implicit */_Bool) arr_1 [i_0]))))))), (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (signed char)17)))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((var_7) | (((/* implicit */int) arr_0 [i_0] [i_0]))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) var_7)))))) % (((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0]))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned short i_2 = 1; i_2 < 9; i_2 += 2) 
        {
            for (short i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_4 = 1; i_4 < 7; i_4 += 1) 
                    {
                        var_14 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_2 [8U])) ? (arr_9 [i_4 + 2]) : (((/* implicit */int) arr_12 [i_4 - 1] [(short)1] [i_2 + 1] [7])))) <= (var_10)));
                        var_15 = ((/* implicit */unsigned int) (+(((((/* implicit */int) var_6)) >> (0ULL)))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 8; i_5 += 1) 
                    {
                        for (unsigned char i_6 = 1; i_6 < 9; i_6 += 1) 
                        {
                            {
                                var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
                                arr_21 [i_1 - 1] [i_2 + 1] [i_3 - 1] [i_5] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((unsigned char) var_3))) || (((/* implicit */_Bool) var_8)))) ? (arr_9 [i_6 - 1]) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-21)))))));
                                arr_22 [i_6 + 1] [i_5 - 1] [(unsigned short)5] [i_2] [(short)1] &= ((/* implicit */unsigned char) ((var_2) ? ((+(((/* implicit */int) (unsigned char)66)))) : (((((/* implicit */_Bool) var_10)) ? (arr_17 [i_6 - 1] [i_1] [i_3 - 1] [(unsigned char)8] [i_6 + 1] [i_6 + 1]) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_7 [i_3])))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_23 [i_1 - 2] = ((/* implicit */unsigned int) arr_9 [i_1]);
        arr_24 [i_1 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)49037))));
    }
    for (short i_7 = 0; i_7 < 20; i_7 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_8 = 0; i_8 < 20; i_8 += 1) 
        {
            arr_29 [i_8] = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) var_7)) * (4294967295U)))))) || (((((/* implicit */int) var_2)) > (((((/* implicit */_Bool) arr_28 [i_8] [4LL])) ? (-1110842846) : (var_10)))))));
            arr_30 [i_8] = ((/* implicit */unsigned short) min((max((max((arr_27 [i_8] [i_8]), (((/* implicit */unsigned int) var_9)))), (((/* implicit */unsigned int) var_4)))), (((/* implicit */unsigned int) ((var_2) ? ((~(((/* implicit */int) (unsigned short)896)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_8] [(signed char)9]))))))))));
        }
        /* LoopNest 2 */
        for (int i_9 = 3; i_9 < 17; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 20; i_10 += 1) 
            {
                {
                    arr_37 [i_7] [(short)13] [(short)13] [i_10] = ((/* implicit */unsigned short) (-(var_7)));
                    arr_38 [i_10] [i_10] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_31 [i_10] [i_7]))))) ? (((/* implicit */unsigned long long int) ((var_1) & (var_5)))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) ^ (8ULL))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))));
                    arr_39 [16] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_5), (var_5)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_10]))) : (((((/* implicit */_Bool) var_9)) ? (arr_36 [i_7] [2] [i_10]) : (((/* implicit */unsigned int) (+(var_10))))))));
                }
            } 
        } 
    }
}
