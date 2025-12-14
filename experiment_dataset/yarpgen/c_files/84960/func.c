/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84960
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    var_18 += ((/* implicit */unsigned short) (unsigned char)7);
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (arr_12 [i_0] [i_2] [i_1] [i_2] [i_2 - 1] [20U]) : (arr_12 [i_1] [i_2] [i_4] [i_2] [i_2 - 1] [i_2])))) ? (((/* implicit */unsigned long long int) arr_12 [0U] [i_1] [i_4] [i_2] [i_2 - 1] [(_Bool)1])) : (((((/* implicit */unsigned long long int) arr_12 [i_0] [i_2] [i_1] [i_2] [i_2 - 1] [i_2 - 1])) & (18446744073709551612ULL))))))));
                                var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) max((((((-7240079499485841525LL) + (9223372036854775807LL))) << (((15940764454826914029ULL) - (15940764454826914029ULL))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_2)) < (arr_1 [i_0]))))))) > (min((((/* implicit */unsigned long long int) var_5)), ((-(2505979618882637586ULL)))))));
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) 2966346009U))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) 18446744073709551609ULL)))))));
                        var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) 4294967295U)) : (arr_10 [(signed char)15] [(signed char)21] [i_2] [(short)7] [i_5])))))))));
                        var_24 = ((/* implicit */unsigned long long int) (~(arr_15 [i_1] [i_0] [(_Bool)1] [11LL])));
                    }
                    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_2] [i_6] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_0])) ? (arr_13 [i_2 - 1] [i_2 - 1] [i_0] [i_2] [i_2 - 1]) : (arr_13 [i_2] [i_2 - 1] [i_0] [i_2] [i_2 - 1]))));
                        var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((arr_3 [i_1]) << (((4294967295U) - (4294967295U))))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((unsigned int) var_5)))));
                        var_27 ^= arr_3 [i_1];
                        var_28 = ((/* implicit */long long int) var_6);
                    }
                }
            } 
        } 
    } 
    var_29 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_14))));
    /* LoopSeq 3 */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_30 = ((/* implicit */_Bool) min((var_30), (arr_17 [i_7] [7] [2] [2] [i_7] [i_7])));
        var_31 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(18446744073709551612ULL))))));
    }
    for (unsigned int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
    {
        arr_24 [i_8] [i_8] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_3 [(_Bool)0])))) < (((((/* implicit */_Bool) var_16)) ? (arr_5 [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [(_Bool)1] [i_8] [9U] [16U] [i_8]))))))))) & (((unsigned long long int) min((var_7), (arr_0 [16] [i_8])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_9 = 2; i_9 < 11; i_9 += 2) 
        {
            var_32 = ((/* implicit */int) max((var_32), ((~((+(((/* implicit */int) var_17))))))));
            arr_29 [i_9] [i_8] = ((unsigned long long int) 459010947);
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (-(((/* implicit */int) ((signed char) arr_7 [i_8] [i_8] [i_8] [(signed char)2]))))))));
        }
    }
    for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) /* same iter space */
    {
        var_34 -= ((/* implicit */long long int) min((min((((/* implicit */unsigned int) arr_31 [i_10])), (var_16))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_11) : (min((-459010947), (((/* implicit */int) var_13)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 3) 
        {
            var_35 = arr_25 [0] [0];
            var_36 = ((/* implicit */unsigned long long int) var_1);
            arr_34 [i_10] = ((/* implicit */unsigned long long int) 1773438893);
            /* LoopSeq 1 */
            for (unsigned short i_12 = 0; i_12 < 13; i_12 += 2) 
            {
                var_37 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1871812605)) ? (459010947) : (((/* implicit */int) (_Bool)1))));
                var_38 += max((((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_23 [i_10]))))) ? (arr_9 [3ULL] [i_11] [i_11] [11LL] [9ULL] [i_12]) : (((/* implicit */int) (signed char)-75))))), (max((((arr_28 [(signed char)8] [i_10]) ? (((/* implicit */long long int) arr_3 [i_12])) : (arr_4 [i_10]))), (((/* implicit */long long int) var_10)))));
                var_39 = ((/* implicit */signed char) min((var_39), (((/* implicit */signed char) (unsigned short)26014))));
            }
        }
    }
}
