/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9415
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9415 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9415
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
    for (unsigned char i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (short)-17043)) : (((/* implicit */int) (_Bool)0))))) ? ((-(arr_1 [i_0 + 2]))) : (((/* implicit */unsigned int) (~(2147483635))))));
        var_21 |= min(((signed char)39), (((/* implicit */signed char) (_Bool)1)));
        var_22 *= ((((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_0] [i_0 - 2])) & (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [9] [9]))) : (var_4)))) ? (arr_1 [i_0]) : (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_1 [i_0 - 2]) < (((/* implicit */unsigned int) arr_0 [i_0 + 1])))))));
        var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2147483635)) ? (((/* implicit */unsigned int) -2147483638)) : (((((/* implicit */_Bool) (~(2147483637)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))) : (3068425960U)))));
    }
    /* LoopSeq 3 */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_6) : (((/* implicit */int) (short)32765))))) ? (max((arr_3 [i_1]), (((/* implicit */unsigned long long int) var_14)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1])))));
        /* LoopSeq 2 */
        for (unsigned long long int i_2 = 3; i_2 < 19; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
            {
                for (int i_4 = 0; i_4 < 21; i_4 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) * (arr_10 [i_1] [i_1] [i_1] [i_1])))) || (((/* implicit */_Bool) var_13)))));
                        arr_12 [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */unsigned long long int) ((var_17) ? (((/* implicit */int) arr_4 [i_1])) : (arr_9 [i_4] [i_3] [i_3] [16] [16] [3])))) <= (min((arr_3 [i_1]), (((/* implicit */unsigned long long int) arr_5 [i_1] [i_3 + 1]))))))), (((((/* implicit */int) (!(((/* implicit */_Bool) 199417823U))))) % (((((/* implicit */int) (unsigned short)11442)) - (631411797)))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */unsigned int) min((((/* implicit */int) ((((var_16) < (((/* implicit */int) arr_7 [i_1] [i_1] [i_1] [14])))) || ((!(((/* implicit */_Bool) var_9))))))), (((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))) | (((/* implicit */int) arr_4 [i_2 - 1]))))));
        }
        for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
        {
            arr_15 [i_1] [10] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */int) (signed char)-125)), (var_8)))) ? (((/* implicit */int) arr_13 [i_1] [i_1] [i_1])) : (((((/* implicit */_Bool) arr_11 [i_1] [i_5] [i_1] [i_1] [i_1] [(short)15])) ? (((/* implicit */int) var_0)) : (arr_5 [i_1] [i_5]))))))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 1; i_6 < 20; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 20; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 3) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1976311213)) ? (((/* implicit */int) (signed char)-40)) : (-2147483635)))) || (((arr_9 [i_8 - 2] [i_8] [i_7] [i_8] [i_7] [i_7]) != (((/* implicit */int) arr_22 [i_1] [i_8 + 1] [i_7] [i_1] [i_7 - 2] [i_6 - 1] [i_1]))))));
                            arr_23 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_11 [16] [i_5] [i_1] [i_6] [i_7] [i_8]), (((/* implicit */unsigned long long int) arr_4 [20ULL]))))) ? (((/* implicit */int) min((var_7), (((/* implicit */short) (signed char)-60))))) : (((/* implicit */int) arr_16 [i_7 - 2] [i_7 - 1] [i_6 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((((/* implicit */int) var_14)) < (((/* implicit */int) (short)-32749)))))))) : (((arr_11 [i_6 + 1] [i_5] [i_1] [i_7 + 1] [i_1] [i_5]) >> (((((/* implicit */int) arr_4 [i_6 - 1])) & (((/* implicit */int) var_14))))))));
                            var_28 += ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_21 [i_1] [i_6 + 1] [i_7 - 2] [i_7 - 2] [i_8 + 2] [i_8] [i_8])))) != (min((min((((/* implicit */unsigned long long int) arr_9 [i_8 - 3] [i_8] [(_Bool)1] [i_6 - 1] [i_5] [i_1])), (arr_17 [i_1] [i_5] [i_6 - 1] [i_7]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)32)) > (((/* implicit */int) (unsigned char)247)))))))));
                            arr_24 [i_1] [i_5] = ((/* implicit */signed char) ((((-2024636159) / (((/* implicit */int) (unsigned short)63882)))) <= (((((/* implicit */_Bool) arr_13 [i_1] [i_5] [i_5])) ? (((/* implicit */int) arr_20 [i_1] [i_7 + 1] [i_7 + 1] [i_7 + 1])) : (((/* implicit */int) ((((/* implicit */int) var_17)) < (arr_5 [i_1] [i_5]))))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_5)) & ((((-(arr_17 [i_1] [i_1] [i_1] [i_1]))) & (((arr_22 [i_1] [i_5] [i_1] [i_5] [i_1] [i_1] [i_1]) ? (arr_17 [i_1] [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_1] [i_5] [i_5] [i_1])))))))));
            arr_25 [i_1] [i_1] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_1] [i_1] [i_5] [i_1])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_18 [i_5] [i_1] [(unsigned char)4])))))))));
        }
    }
    for (unsigned int i_9 = 0; i_9 < 12; i_9 += 1) /* same iter space */
    {
        arr_30 [i_9] [2] &= ((/* implicit */unsigned int) arr_27 [i_9]);
        arr_31 [i_9] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 479084724U)) || ((_Bool)1)));
    }
    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) /* same iter space */
    {
        var_30 = ((/* implicit */short) (((-(((/* implicit */int) min(((short)-8392), (((/* implicit */short) (signed char)124))))))) - (min((((((/* implicit */_Bool) (signed char)-112)) ? (((/* implicit */int) (unsigned short)16362)) : (((/* implicit */int) (signed char)1)))), (((((/* implicit */int) var_11)) - (((/* implicit */int) arr_6 [15U] [15U] [15U]))))))));
        arr_34 [i_10] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_10]))))) & (((max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_3 [6]))) >> (((((/* implicit */int) arr_14 [(_Bool)1])) - (47)))))));
        /* LoopNest 2 */
        for (int i_11 = 0; i_11 < 12; i_11 += 3) 
        {
            for (short i_12 = 0; i_12 < 12; i_12 += 4) 
            {
                {
                    arr_41 [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_33 [i_12]);
                    var_31 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_40 [i_10] [i_11] [i_12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : ((+(arr_3 [i_11])))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned short i_13 = 0; i_13 < 12; i_13 += 2) 
    {
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    arr_52 [i_15] [i_15] = max(((unsigned short)29), (((/* implicit */unsigned short) arr_7 [i_15 + 1] [i_15 + 1] [i_15 + 1] [i_15 + 1])));
                    var_32 ^= ((/* implicit */unsigned short) ((-1) <= (386340503)));
                }
                arr_53 [i_14] [i_13] = ((/* implicit */int) (((((!(((/* implicit */_Bool) (signed char)-52)))) ? (((/* implicit */unsigned int) 2147483644)) : (((((/* implicit */_Bool) -12)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)2))) : (2133701560U))))) % (((/* implicit */unsigned int) ((/* implicit */int) ((2147483644) > ((-2147483647 - 1))))))));
            }
        } 
    } 
}
