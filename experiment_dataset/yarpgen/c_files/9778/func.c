/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9778
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9778 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9778
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
    var_16 = ((/* implicit */_Bool) ((max((var_13), (var_8))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
    /* LoopNest 2 */
    for (long long int i_0 = 2; i_0 < 15; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 2; i_3 < 17; i_3 += 1) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [(_Bool)1] [i_1] [0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_10 [i_0 + 3] [i_1] [i_2] [i_1] [i_0 + 3] [i_0 + 1])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_7 [(signed char)16] [3] [(_Bool)1])) * (((/* implicit */int) arr_5 [i_0] [(signed char)8] [(signed char)8] [i_3 - 2]))))))))));
                            var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) var_6))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1] [i_2]))) - (var_0))))))) - (((/* implicit */int) (unsigned short)65519))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (!(arr_7 [i_0 + 3] [16ULL] [i_2])))) : (((/* implicit */int) var_7))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                {
                    for (unsigned char i_5 = 3; i_5 < 16; i_5 += 4) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (+(arr_13 [i_1] [i_0 - 2] [(unsigned short)16]))))));
                            var_21 = ((/* implicit */signed char) (((~(arr_9 [i_0] [i_0 - 2] [i_5 - 2] [i_5] [i_5 - 2] [12LL]))) <= (((long long int) max((4294967294U), (var_13))))));
                            arr_17 [i_0] [(signed char)3] [i_4] [i_5] = ((/* implicit */long long int) arr_13 [i_0] [i_0] [0U]);
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */long long int) var_13);
    /* LoopNest 3 */
    for (short i_6 = 0; i_6 < 18; i_6 += 1) 
    {
        for (unsigned short i_7 = 0; i_7 < 18; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 18; i_8 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_9 = 0; i_9 < 18; i_9 += 4) 
                    {
                        for (unsigned int i_10 = 1; i_10 < 16; i_10 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_31 [(unsigned char)7] [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1])) ? (max((arr_9 [i_10] [i_10 + 2] [i_10 - 1] [(signed char)14] [i_10] [i_10 - 1]), (arr_9 [i_10] [i_10] [i_10 - 1] [i_10 + 1] [0LL] [i_10 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_31 [i_10] [i_10 - 1] [i_10 - 1] [i_10 + 2] [i_10 - 1]))))))));
                                arr_32 [i_6] [14U] [i_8] [i_9] [i_10] = ((/* implicit */unsigned long long int) 2267923208U);
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) 2027044092U))))), (((((/* implicit */_Bool) arr_9 [(unsigned short)16] [i_10] [i_10 + 2] [i_10] [i_10 + 1] [(_Bool)1])) ? (arr_9 [i_9] [(short)15] [i_9] [(short)15] [i_10 + 2] [i_10]) : (arr_9 [i_6] [i_8] [i_10 - 1] [8ULL] [i_10 + 2] [16]))))))));
                                arr_33 [14ULL] [10ULL] [i_8] [i_8] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((2267923217U) * (2027044109U))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        for (unsigned int i_12 = 1; i_12 < 16; i_12 += 1) 
                        {
                            {
                                arr_40 [i_12] [i_11] [i_8] [i_11] [1U] = ((/* implicit */unsigned short) (~((-(4294967292U)))));
                                arr_41 [i_6] [i_6] [i_11] [i_6] [i_6] [(signed char)2] [(signed char)2] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((/* implicit */int) var_7))) > (arr_9 [i_12] [i_12 - 1] [8] [i_12 + 1] [i_12 + 2] [(signed char)4]))) ? (((arr_38 [i_8] [i_12] [i_11] [i_12 + 1] [i_12]) ? (((/* implicit */long long int) ((/* implicit */int) arr_38 [i_11] [i_11] [i_11] [i_12 + 2] [i_12 + 1]))) : (arr_9 [i_11] [i_12] [i_12] [i_12 - 1] [i_12] [i_12]))) : (((arr_9 [i_8] [i_8] [i_11] [i_12 + 2] [i_8] [i_12]) + (arr_9 [(unsigned short)13] [i_8] [i_8] [i_12 + 1] [i_12 + 1] [i_12])))));
                                var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) (((!(arr_38 [i_12 + 1] [(unsigned char)14] [4LL] [i_11] [i_12 + 1]))) ? (arr_35 [(unsigned short)5] [(unsigned short)5] [4LL] [4LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_11), (arr_6 [i_12] [(short)13] [i_8]))) != (((/* implicit */long long int) arr_39 [i_12 + 2] [i_12] [i_12] [i_12 + 1] [(unsigned char)9])))))))))));
                                arr_42 [i_11] [i_7] [(unsigned char)7] [7ULL] [(signed char)11] = ((/* implicit */unsigned long long int) ((((4294967287U) <= (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-97))) <= (var_13))))))) ? (((/* implicit */int) (signed char)-98)) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741312U)) ? (2192694000U) : (1551069344U)))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (int i_14 = 1; i_14 < 16; i_14 += 4) 
                        {
                            {
                                var_26 = ((/* implicit */int) min((var_26), (((((/* implicit */int) ((arr_39 [i_14] [5U] [i_14] [i_14 + 2] [(unsigned char)9]) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_6] [i_7] [i_14 + 2] [(_Bool)1] [i_14])))))) >> (((/* implicit */int) arr_11 [i_14 + 2]))))));
                                var_27 = arr_25 [(_Bool)1] [i_8] [(unsigned short)6];
                            }
                        } 
                    } 
                    var_28 ^= ((/* implicit */unsigned char) max((((arr_11 [i_8]) ? (((/* implicit */int) arr_29 [i_6] [(unsigned char)13])) : (((/* implicit */int) arr_29 [i_6] [i_7])))), (((((/* implicit */_Bool) arr_31 [i_6] [11LL] [(short)12] [(short)1] [i_8])) ? (((/* implicit */int) arr_5 [i_7] [i_6] [i_8] [(short)6])) : (((/* implicit */int) arr_11 [i_6]))))));
                }
            } 
        } 
    } 
}
