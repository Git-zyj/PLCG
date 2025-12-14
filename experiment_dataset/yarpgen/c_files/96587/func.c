/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96587
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
    for (signed char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_15 ^= ((/* implicit */signed char) ((int) (+(arr_1 [i_0] [i_1]))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 4) 
                {
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
                    {
                        {
                            arr_12 [2] [(short)9] [i_2] [i_1] [i_0] = ((/* implicit */signed char) ((((arr_2 [i_3] [i_0] [i_0]) ? (((/* implicit */int) arr_2 [i_1] [i_2] [11])) : (((/* implicit */int) arr_2 [i_2] [i_2] [i_2])))) ^ ((~(((/* implicit */int) arr_2 [(_Bool)1] [i_2] [i_2]))))));
                            var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_2])) & (((/* implicit */int) arr_6 [i_2] [(_Bool)1] [i_2] [i_2]))))) ? (((((/* implicit */_Bool) arr_6 [i_0] [13LL] [i_2] [i_3])) ? (((/* implicit */int) arr_6 [i_3] [12] [15ULL] [i_0])) : (((/* implicit */int) arr_8 [i_0] [i_1] [i_3])))) : (((/* implicit */int) ((((/* implicit */int) arr_6 [i_0] [i_1] [14ULL] [i_3])) >= (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [10U])))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_4 = 2; i_4 < 22; i_4 += 4) 
    {
        var_17 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) arr_14 [i_4] [i_4])))) || ((((_Bool)1) || (((/* implicit */_Bool) arr_14 [i_4] [i_4 + 3])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2927036316U))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_4])))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(-1757519351)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_4 + 1])) ? (arr_13 [i_4 + 2]) : (arr_14 [i_4] [1ULL])))) : (((((/* implicit */unsigned int) arr_14 [i_4 - 1] [i_4 + 3])) | (var_8)))));
        var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_14 [i_4 + 2] [i_4 - 1]))) && (((/* implicit */_Bool) arr_14 [i_4 - 1] [i_4]))));
    }
    for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 14; i_6 += 3) 
        {
            for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_8 = 0; i_8 < 14; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_29 [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) arr_16 [i_7 - 1]);
                                arr_30 [i_9] [i_7 - 1] [i_7] [i_8] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) arr_28 [i_6] [i_7 + 2] [i_7] [i_7 + 1] [i_7] [i_7 - 1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_7] [i_7 + 1] [i_7] [i_7 - 3]))))) : (((((/* implicit */_Bool) arr_27 [i_6] [i_7 + 3] [i_7] [i_7 - 1])) ? (((/* implicit */int) arr_28 [i_6] [i_7 - 2] [i_7] [i_7 + 3] [i_7] [i_7 + 2])) : (((/* implicit */int) arr_28 [i_6] [i_7 - 1] [i_7] [i_7 + 3] [i_7] [i_7 + 3]))))));
                            }
                        } 
                    } 
                    var_20 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 524287LL)) || (((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) arr_24 [i_7] [i_7])) > (arr_1 [i_5] [i_6]))) ? (((arr_11 [i_7] [i_6] [(short)5] [i_5]) << (((arr_4 [i_5] [i_5]) + (1413971681))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_7])) ? (((/* implicit */int) arr_6 [(short)17] [(short)17] [(unsigned char)11] [(_Bool)1])) : (((/* implicit */int) var_9))))))))));
                    arr_31 [i_5] [i_6] = ((/* implicit */short) (((~(arr_23 [i_5] [i_6] [i_5]))) << (((/* implicit */int) min((var_13), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_5])) && (((/* implicit */_Bool) arr_28 [i_5] [i_5] [i_7] [i_7] [i_5] [(short)4]))))))))));
                }
            } 
        } 
        var_21 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_16 [i_5]))))));
        arr_32 [i_5] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) arr_4 [(unsigned short)1] [i_5])) ? (((((/* implicit */_Bool) arr_28 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_5] [i_5] [i_5])) ? (18446744073709551610ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5]))))) : (((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */unsigned long long int) arr_14 [i_5] [i_5])) : (arr_10 [i_5])))))));
        var_22 -= ((/* implicit */unsigned char) arr_19 [i_5] [i_5] [i_5]);
    }
    for (signed char i_10 = 1; i_10 < 8; i_10 += 4) 
    {
        var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((unsigned int) arr_14 [i_10 + 2] [i_10 + 1])) << (((((/* implicit */int) arr_27 [i_10] [i_10] [i_10] [i_10])) - (21432))))))));
        var_24 ^= ((/* implicit */unsigned char) (~(max((((/* implicit */int) arr_8 [i_10 + 2] [i_10 - 1] [i_10 - 1])), (var_4)))));
        arr_35 [i_10] [(_Bool)0] = ((/* implicit */short) arr_1 [i_10] [i_10]);
    }
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 21; i_11 += 4) 
    {
        for (signed char i_12 = 0; i_12 < 21; i_12 += 3) 
        {
            {
                var_25 += ((/* implicit */unsigned long long int) ((((/* implicit */int) ((arr_14 [i_12] [i_12]) <= (arr_40 [i_12])))) & (((arr_40 [i_12]) & (((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_42 [i_11] [20] [i_11])))))))));
                /* LoopSeq 1 */
                for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                {
                    arr_45 [i_12] [i_12] [i_12] = ((((((/* implicit */_Bool) arr_41 [i_11] [i_12])) ? (((/* implicit */int) arr_38 [i_11] [i_12])) : (((/* implicit */int) arr_38 [10] [i_12])))) << (((((/* implicit */int) var_9)) + (23890))));
                    arr_46 [i_12] [(unsigned short)3] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_38 [i_13] [i_11]))))) ? (((((/* implicit */_Bool) arr_14 [i_11] [i_12])) ? (arr_14 [i_11] [i_12]) : (((/* implicit */int) arr_38 [i_11] [i_11])))) : (((/* implicit */int) ((((/* implicit */long long int) arr_14 [i_11] [i_13])) >= (var_5))))));
                    var_26 = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [(short)15] [i_12])) ? (arr_44 [i_11]) : (var_5)))) ? ((+(arr_40 [i_11]))) : (arr_39 [i_11] [i_12]))) / (((/* implicit */int) ((((/* implicit */_Bool) arr_41 [i_11] [i_12])) && (((/* implicit */_Bool) arr_40 [i_12]))))));
                }
                var_27 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_40 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))))) || (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_36 [i_11])) ? (29ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_12])))))) && (((/* implicit */_Bool) var_4))))));
                var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_12])) ? (((((/* implicit */_Bool) arr_44 [i_11])) ? (arr_44 [i_11]) : (arr_44 [i_11]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_12])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_38 [i_12] [i_12])))))));
            }
        } 
    } 
}
