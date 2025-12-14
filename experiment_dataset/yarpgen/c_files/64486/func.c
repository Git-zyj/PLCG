/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64486
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
    var_20 += ((/* implicit */unsigned int) var_7);
    /* LoopSeq 4 */
    for (long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (((+(arr_0 [i_0]))) | (max((arr_0 [i_0]), (arr_0 [i_0])))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_4 [i_0 - 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_1 [i_1])))))))));
            arr_5 [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_4 [i_0] [i_0 - 3] [(unsigned short)4])) : (((/* implicit */int) arr_4 [i_0] [i_0 - 2] [i_0 + 1]))));
            arr_6 [i_0] = (i_0 % 2 == 0) ? (((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0])) + (2147483647))) >> (((((/* implicit */int) arr_1 [i_0])) - (57172))))) : (((((((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0])) + (2147483647))) >> (((((((/* implicit */int) arr_1 [i_0])) - (57172))) + (1224)))));
        }
    }
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned short) (-(arr_7 [i_2])));
        arr_10 [i_2] [(unsigned char)5] = ((/* implicit */int) ((arr_8 [i_2]) + (((/* implicit */unsigned int) 475213909))));
        /* LoopSeq 3 */
        for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            arr_15 [i_3] = ((/* implicit */short) arr_8 [i_3]);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_14 [i_3] [i_2])) >> (((var_8) + (1241362993)))));
            arr_16 [i_3] [i_2] [i_2] = ((/* implicit */short) (+(arr_12 [i_2])));
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 2) 
            {
                arr_21 [i_2] = ((/* implicit */long long int) ((arr_8 [i_2]) + (arr_8 [i_2])));
                arr_22 [i_2] [(unsigned char)18] [(unsigned char)18] = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-15967))));
                arr_23 [i_2] [(unsigned short)20] [i_2] [i_2] &= ((/* implicit */short) (-(arr_12 [i_3])));
            }
            arr_24 [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_2] [i_3])) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)55419))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
        }
        for (int i_5 = 3; i_5 < 19; i_5 += 2) 
        {
            arr_27 [i_2] [21U] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_5 + 4] [i_5 + 2] [i_5 + 3])) ? (((/* implicit */int) arr_26 [i_2] [i_5 + 3] [i_5])) : (((/* implicit */int) arr_19 [i_5 + 4] [i_5 + 3] [(unsigned short)7] [i_2]))));
            var_23 ^= arr_26 [i_5 + 3] [i_5 - 2] [i_5];
        }
        for (signed char i_6 = 0; i_6 < 23; i_6 += 2) 
        {
            var_24 ^= ((/* implicit */unsigned short) (unsigned char)240);
            arr_32 [i_6] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) + (-1760684735)));
            var_25 += ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)-3281))));
            arr_33 [i_2] [21U] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) var_7))));
            var_26 += ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) (unsigned char)240))) ? (arr_28 [i_2] [2U] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6))))))));
        }
        var_27 = ((/* implicit */signed char) max((var_27), (((/* implicit */signed char) ((long long int) arr_26 [i_2] [i_2] [i_2])))));
    }
    /* vectorizable */
    for (unsigned char i_7 = 0; i_7 < 23; i_7 += 1) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)65)) && (((/* implicit */_Bool) (signed char)-61))));
        var_29 -= ((/* implicit */_Bool) (((_Bool)1) ? (arr_12 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_7] [i_7] [i_7])))));
    }
    /* vectorizable */
    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 1) /* same iter space */
    {
        var_30 -= ((/* implicit */unsigned char) ((169468078) << (((((-1995318034) + (1995318045))) - (10)))));
        arr_39 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) 5547555516931262397ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_37 [i_8]))));
        /* LoopNest 3 */
        for (unsigned short i_9 = 1; i_9 < 22; i_9 += 2) 
        {
            for (int i_10 = 0; i_10 < 23; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 23; i_11 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_12 = 0; i_12 < 23; i_12 += 1) 
                        {
                            arr_49 [7] [(_Bool)1] [i_11] [i_8] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) -107179164)) ? (((/* implicit */int) arr_17 [i_9 + 1] [i_9 + 1] [(unsigned char)16] [i_9 + 1])) : (((/* implicit */int) (signed char)-65))));
                            var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) var_17))));
                            var_32 &= ((/* implicit */unsigned int) arr_35 [i_8]);
                        }
                        /* LoopSeq 1 */
                        for (unsigned short i_13 = 0; i_13 < 23; i_13 += 2) 
                        {
                            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((unsigned int) arr_26 [i_8] [i_9] [i_10])) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) arr_25 [i_10]))))))));
                            var_34 = ((/* implicit */long long int) ((_Bool) var_11));
                            var_35 ^= ((/* implicit */unsigned int) arr_25 [i_8]);
                        }
                        var_36 = ((/* implicit */unsigned int) max((var_36), (((/* implicit */unsigned int) arr_35 [i_8]))));
                    }
                } 
            } 
        } 
        arr_53 [i_8] = ((/* implicit */signed char) (+(((((/* implicit */long long int) ((/* implicit */int) arr_43 [i_8] [i_8] [i_8]))) / (arr_29 [i_8] [22U])))));
    }
}
