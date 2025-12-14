/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97466
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 12; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */int) (unsigned char)62)) ^ (((/* implicit */int) (unsigned char)193)));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned char)86)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((((/* implicit */_Bool) var_6)) ? (19ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)194)))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(_Bool)0] [i_0 + 1])) ? (var_8) : (arr_2 [i_0 - 1] [i_0 - 1])));
        arr_6 [i_0] [i_0] = ((/* implicit */int) arr_0 [i_0 - 1]);
    }
    /* LoopNest 3 */
    for (long long int i_1 = 2; i_1 < 20; i_1 += 2) 
    {
        for (short i_2 = 1; i_2 < 20; i_2 += 4) 
        {
            for (signed char i_3 = 0; i_3 < 22; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                    {
                        arr_17 [i_1] [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) var_0);
                        arr_18 [i_1] [i_4] [i_2 + 2] [i_3] [i_4] [16] = ((/* implicit */signed char) max((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (arr_8 [i_3] [i_1 - 2])))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_2] [(unsigned short)12] [(unsigned short)12] [i_2]))) : (0ULL))))), (((/* implicit */unsigned long long int) (((-(var_10))) - (((((/* implicit */int) arr_10 [i_1] [i_2] [i_4])) + (((/* implicit */int) var_9)))))))));
                        arr_19 [i_1 + 2] [i_4] [i_4] [i_1 + 2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_4 - 1] [i_4 - 1] [i_4 - 1])) > (((/* implicit */int) var_5))))), (((unsigned long long int) ((unsigned short) var_10)))));
                        arr_20 [i_1] [i_1] [i_4] [i_1] [0ULL] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_1] [i_4 - 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_10 [i_4 - 1] [i_3] [i_2])) : (((/* implicit */int) arr_16 [i_1 + 2] [i_1]))))) : (arr_8 [i_4 - 1] [i_2 - 1])))), (((var_5) ? (((((/* implicit */_Bool) var_8)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) : (max((10ULL), (((/* implicit */unsigned long long int) (unsigned char)85))))))));
                        arr_21 [5LL] [i_4] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1])) : (((/* implicit */int) arr_7 [i_3] [i_2 + 1])))))));
                    }
                    arr_22 [i_3] [i_2] [(signed char)8] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((unsigned int) arr_10 [i_2 + 1] [i_1 + 1] [(signed char)17]))) : ((((_Bool)1) ? (808613760457079672LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
                    var_11 = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) 16083471296778227414ULL)) ? (9223372036854775807LL) : (((/* implicit */long long int) var_4)))))) - (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_12 [i_1 - 2]))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 2; i_5 < 15; i_5 += 3) 
    {
        for (signed char i_6 = 1; i_6 < 17; i_6 += 1) 
        {
            {
                arr_28 [i_5 - 1] [i_5 - 1] [i_5] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 808613760457079672LL))))), (arr_7 [i_6 - 1] [i_5 - 2]))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 18; i_7 += 3) 
                {
                    for (long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) (-(max((arr_24 [i_5 - 2]), (((((/* implicit */_Bool) var_2)) ? (arr_23 [i_5]) : (((/* implicit */long long int) var_4))))))));
                            arr_37 [i_5] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_10 [i_5] [i_6] [i_6])) ? (((/* implicit */int) arr_9 [i_5] [i_5])) : (((/* implicit */int) arr_16 [i_5 + 2] [i_6 - 1])))))) < (((((/* implicit */_Bool) ((signed char) arr_34 [i_5] [1LL] [(signed char)2] [i_5 + 3] [i_5 - 2]))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned char) var_0))))) : (((/* implicit */int) ((((/* implicit */int) arr_36 [(signed char)1] [i_5])) >= (((/* implicit */int) arr_10 [i_7] [i_6 + 1] [i_7])))))))));
                            arr_38 [i_5] [i_7] [i_6] [i_5] = ((/* implicit */long long int) (((-(((/* implicit */int) arr_10 [2ULL] [i_6 - 1] [i_5 + 3])))) & (((((/* implicit */int) arr_10 [i_8] [i_6 - 1] [i_5 - 1])) % (((/* implicit */int) arr_10 [i_8] [i_6 - 1] [i_5 + 3]))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    arr_41 [i_5] [i_5] [i_6] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) 808613760457079697LL)) ? (-583175481) : (((/* implicit */int) (unsigned char)73)))));
                    arr_42 [17LL] [i_5] [i_6] [i_5] = ((/* implicit */short) ((signed char) max((((/* implicit */long long int) ((((/* implicit */int) arr_39 [i_5] [i_6 + 1] [i_6 + 1] [i_9])) / (arr_12 [i_9])))), (((long long int) (signed char)-32)))));
                    var_13 = ((/* implicit */unsigned char) max((var_13), (((/* implicit */unsigned char) (-(max((arr_8 [i_5] [i_6 - 1]), (arr_8 [i_6 + 1] [i_9]))))))));
                    var_14 ^= ((/* implicit */long long int) var_6);
                }
                arr_43 [i_5] [i_5] = var_7;
            }
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_10 = 0; i_10 < 18; i_10 += 3) 
    {
        for (signed char i_11 = 0; i_11 < 18; i_11 += 1) 
        {
            for (long long int i_12 = 0; i_12 < 18; i_12 += 4) 
            {
                {
                    arr_53 [i_10] [i_11] [5] = var_6;
                    /* LoopNest 2 */
                    for (int i_13 = 1; i_13 < 15; i_13 += 4) 
                    {
                        for (long long int i_14 = 0; i_14 < 18; i_14 += 4) 
                        {
                            {
                                arr_60 [i_14] [i_11] [i_10] [i_11] [(unsigned char)0] = ((signed char) ((unsigned long long int) arr_48 [i_10] [i_11]));
                                var_15 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((1883075319U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-106)))))), (((((/* implicit */_Bool) arr_39 [16LL] [2] [16LL] [i_14])) ? (arr_24 [i_12]) : (arr_8 [i_13] [i_10])))))), (((((/* implicit */_Bool) ((arr_34 [i_10] [i_10] [(unsigned char)5] [i_10] [(unsigned char)5]) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_54 [i_11] [i_10] [i_10]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_8))))))));
                            }
                        } 
                    } 
                    arr_61 [i_10] [i_10] = ((/* implicit */long long int) arr_58 [i_10] [i_11] [(_Bool)1] [i_11] [i_11] [i_11] [i_10]);
                }
            } 
        } 
    } 
}
