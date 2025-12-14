/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62775
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
    var_15 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) (+(((/* implicit */int) var_9))))) * (((var_13) * (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))))));
    var_16 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (signed char i_2 = 1; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */short) var_10);
                    arr_8 [i_2] [i_2] [i_1] [(_Bool)1] = ((/* implicit */_Bool) (+(arr_4 [i_0] [i_0 + 2] [i_2 + 1])));
                }
            } 
        } 
        arr_9 [i_0] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0])))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned int i_4 = 0; i_4 < 23; i_4 += 3) 
            {
                {
                    var_18 = ((/* implicit */int) 13107829204559338210ULL);
                    var_19 = ((/* implicit */long long int) ((unsigned long long int) ((var_1) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_3 [i_0] [i_3] [i_0])))));
                    var_20 = arr_12 [i_0] [i_3] [i_3];
                    var_21 *= ((((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_4] [i_4])) | (((/* implicit */int) arr_15 [i_0] [i_0 - 1] [i_0] [i_0])));
                }
            } 
        } 
        var_22 = ((/* implicit */_Bool) ((arr_11 [i_0] [i_0 - 1]) ^ (arr_11 [i_0] [i_0 + 2])));
    }
    for (long long int i_5 = 0; i_5 < 10; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (long long int i_6 = 2; i_6 < 9; i_6 += 3) 
        {
            for (unsigned short i_7 = 0; i_7 < 10; i_7 += 2) 
            {
                {
                    var_23 *= ((/* implicit */short) (+((+(((/* implicit */int) arr_19 [i_6 - 1] [i_6 + 1] [i_7]))))));
                    var_24 = ((/* implicit */unsigned short) 13107829204559338200ULL);
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) arr_28 [i_5] [i_6 - 1] [i_7] [i_8] [i_7]))) || (((/* implicit */_Bool) ((var_12) - (((/* implicit */long long int) ((/* implicit */int) arr_7 [7ULL] [i_6 - 1] [i_6] [i_8]))))))));
                                arr_30 [i_8] [i_8] [i_7] [i_6] [i_8] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_5] [i_6 - 2] [19ULL] [19ULL]))))) ? (((unsigned long long int) 5338914869150213405ULL)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_11)))))), (((/* implicit */unsigned long long int) ((_Bool) ((_Bool) var_7))))));
                                arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_27 [i_8] [i_8])) > (((/* implicit */int) var_0))));
                                var_26 ^= ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_11)))), (((((/* implicit */_Bool) arr_6 [i_5] [i_6] [i_6 + 1])) ? (arr_6 [i_5] [i_5] [i_6 + 1]) : (arr_6 [i_6 + 1] [i_6] [i_6 + 1])))));
                            }
                        } 
                    } 
                    arr_32 [i_5] [i_5] [i_7] [i_7] = ((528482304) == (((/* implicit */int) (_Bool)1)));
                    var_27 = ((/* implicit */long long int) 5338914869150213422ULL);
                }
            } 
        } 
        var_28 = ((((((/* implicit */unsigned long long int) min((var_12), (((/* implicit */long long int) var_8))))) | (arr_20 [i_5] [i_5]))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-5206))));
        arr_33 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((+(13107829204559338204ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-107))) : (4294967295U)))))))));
    }
    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) 
                    {
                        for (short i_14 = 0; i_14 < 14; i_14 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((arr_47 [i_10] [i_10] [(short)5] [i_10] [i_10]) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)6])) ? (((/* implicit */int) arr_44 [i_11])) : (((/* implicit */int) var_9)))))))) * (max((5338914869150213378ULL), (((/* implicit */unsigned long long int) var_0))))));
                                arr_48 [i_10] = ((/* implicit */short) (!(((/* implicit */_Bool) 5338914869150213394ULL))));
                                arr_49 [i_10] [i_11] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5338914869150213404ULL)) ? (5338914869150213378ULL) : (((/* implicit */unsigned long long int) -1822957382))));
                            }
                        } 
                    } 
                    var_30 ^= ((/* implicit */unsigned short) arr_11 [i_10] [i_11]);
                    /* LoopNest 2 */
                    for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        for (long long int i_16 = 3; i_16 < 10; i_16 += 2) 
                        {
                            {
                                var_31 = (((+(arr_41 [i_10] [i_10] [i_16 + 4] [i_10] [i_16 - 1]))) - (((/* implicit */unsigned int) min((max((var_8), (((/* implicit */int) var_5)))), ((+(((/* implicit */int) var_0))))))));
                                var_32 = ((/* implicit */short) (((((~(max((((/* implicit */long long int) arr_15 [i_10] [i_16 + 1] [i_12] [i_15])), (arr_34 [i_12]))))) + (9223372036854775807LL))) << ((((-((+(arr_42 [i_10]))))) - (551629941)))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 = ((/* implicit */unsigned long long int) ((int) (+(min((arr_36 [(short)0] [7LL] [i_10]), (((/* implicit */long long int) var_1)))))));
    }
    /* vectorizable */
    for (unsigned long long int i_17 = 1; i_17 < 9; i_17 += 1) 
    {
        var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_14)))))));
        var_35 = ((/* implicit */signed char) (~(13107829204559338233ULL)));
        arr_57 [6U] [i_17] = ((/* implicit */unsigned short) var_2);
    }
}
