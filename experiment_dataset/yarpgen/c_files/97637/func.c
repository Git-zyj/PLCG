/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 97637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=97637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/97637
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
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            arr_5 [i_1] = ((/* implicit */unsigned long long int) var_8);
            arr_6 [i_0] [0U] [i_1] &= ((/* implicit */long long int) (unsigned char)171);
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (var_6) : (arr_0 [(unsigned char)9] [(unsigned short)11]))))));
        }
        /* vectorizable */
        for (short i_2 = 0; i_2 < 13; i_2 += 3) 
        {
            var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_3 [i_0] [i_2] [10ULL]))));
            arr_10 [(unsigned char)3] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */short) 2938691434U);
            var_17 |= ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)88))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
            {
                var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_4] [i_4 + 2] [i_4])) ? (((/* implicit */unsigned int) (-(var_13)))) : (arr_3 [(short)6] [i_4 + 2] [(short)6]))))));
                arr_17 [i_3] [i_3] = ((/* implicit */int) ((((arr_3 [i_0] [i_3] [i_3]) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [(signed char)9] [i_4])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [(signed char)2])))))));
            }
            arr_18 [i_0] [i_3] = ((/* implicit */short) arr_0 [i_0] [4U]);
        }
        var_19 &= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_8 [i_0] [i_0])))) ? (max((2147483647), ((-2147483647 - 1)))) : (((((arr_8 [i_0] [(signed char)9]) + (2147483647))) << (((((arr_8 [i_0] [i_0]) + (962439243))) - (5)))))));
    }
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 12; i_5 += 1) 
    {
        arr_21 [i_5] [(_Bool)0] &= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned char)96)) ? (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_5] [(_Bool)1]))) : (arr_19 [i_5]))) | (((/* implicit */long long int) (-(353346831))))));
        var_20 = (signed char)17;
    }
    /* LoopSeq 2 */
    for (int i_6 = 2; i_6 < 17; i_6 += 3) 
    {
        var_21 ^= ((((/* implicit */_Bool) max(((-(arr_22 [15]))), (((/* implicit */unsigned long long int) arr_24 [i_6 - 2] [i_6 - 2]))))) ? (((min((((/* implicit */long long int) var_11)), (var_9))) | (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)168)))))))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_23 [i_6] [i_6 + 2]) >= (arr_23 [i_6 - 2] [i_6 - 2]))))));
        var_22 = ((((/* implicit */_Bool) ((arr_23 [i_6] [i_6 - 2]) ^ (arr_23 [i_6] [i_6 - 2])))) || (((/* implicit */_Bool) var_7)));
    }
    for (short i_7 = 3; i_7 < 13; i_7 += 1) 
    {
        arr_27 [i_7] = ((/* implicit */signed char) ((((((/* implicit */int) var_7)) + (2147483647))) << (((max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [6U]))) - (arr_22 [i_7]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_7]))))))) - (18446744073709551490ULL)))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_8 = 0; i_8 < 15; i_8 += 3) 
        {
            var_23 = ((/* implicit */long long int) var_13);
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) 1933933321))));
        }
        /* vectorizable */
        for (long long int i_9 = 0; i_9 < 15; i_9 += 1) 
        {
            var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_28 [(_Bool)0]))))) <= (var_5)));
            var_26 += ((/* implicit */signed char) (-(arr_24 [i_7 + 1] [i_7 - 1])));
            arr_33 [i_7] [i_7] [i_7] = ((/* implicit */int) (!(var_10)));
            arr_34 [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) ((arr_25 [i_9] [8ULL]) == (((/* implicit */unsigned int) -815216952)))))));
            var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_2))) ^ (arr_24 [i_7 + 2] [i_9])));
        }
        /* LoopSeq 3 */
        for (unsigned int i_10 = 3; i_10 < 14; i_10 += 4) 
        {
            arr_37 [9] [i_7 - 1] [i_7] &= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((arr_25 [(short)0] [i_10]), (((/* implicit */unsigned int) ((var_6) == (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))))), (min((arr_22 [i_7 - 3]), (arr_22 [i_7 + 1])))));
            arr_38 [i_7] [i_7] [i_7] = ((/* implicit */unsigned short) arr_30 [i_7]);
        }
        /* vectorizable */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((882752460U) + (1560826400U)));
            var_29 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_30 [i_7])) || (((/* implicit */_Bool) -815216952)))))) | (((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) -815216952)) : (arr_32 [14U])))));
            arr_41 [(short)5] = ((/* implicit */unsigned long long int) arr_30 [i_7]);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */unsigned char) min((var_30), (((/* implicit */unsigned char) arr_29 [i_12]))));
            arr_45 [i_7 - 2] [i_12] = ((/* implicit */unsigned short) max((max((((/* implicit */long long int) arr_42 [(signed char)14] [(signed char)14] [(signed char)14])), (arr_32 [i_12]))), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_30 [i_7])), (9626470586311018474ULL)))) ? ((~(2147483635))) : (((/* implicit */int) (!(((/* implicit */_Bool) 16930237459207759899ULL))))))))));
        }
    }
}
