/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8708
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    arr_9 [i_1] [14] = ((/* implicit */signed char) ((unsigned char) var_7));
                    var_12 = ((/* implicit */long long int) arr_2 [i_0]);
                }
            } 
        } 
        arr_10 [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
    }
    for (int i_3 = 1; i_3 < 16; i_3 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) arr_4 [i_3 - 1] [i_3 - 1]);
                    /* LoopNest 2 */
                    for (signed char i_6 = 3; i_6 < 16; i_6 += 1) 
                    {
                        for (int i_7 = 0; i_7 < 17; i_7 += 2) 
                        {
                            {
                                arr_26 [i_3] [i_4] = ((/* implicit */long long int) arr_6 [10] [i_4] [i_6]);
                                var_14 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [0] [i_3])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)113)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3] [(short)0] [9] [i_6])))))))) : (arr_5 [i_3] [i_4] [23U])));
                                arr_27 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_2)))) ? (((/* implicit */int) arr_7 [i_5])) : (((((/* implicit */int) (signed char)113)) + (((/* implicit */int) arr_6 [i_5] [i_4] [i_4]))))))) ? (arr_16 [i_3] [(unsigned char)12]) : (((/* implicit */int) (unsigned short)670))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */_Bool) ((((unsigned int) arr_8 [i_3 + 1] [(signed char)6] [(signed char)7])) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) -2147483634)) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (signed char)16)))))));
                    arr_28 [i_3] [i_4] [i_4] = (~(((unsigned long long int) (unsigned char)186)));
                    arr_29 [i_3] [i_4] [i_5] = ((/* implicit */int) var_4);
                }
            } 
        } 
        /* LoopSeq 3 */
        for (signed char i_8 = 2; i_8 < 16; i_8 += 2) /* same iter space */
        {
            arr_32 [i_3] [i_3] = ((/* implicit */short) (+(((((/* implicit */int) arr_6 [i_3 - 1] [i_8] [i_8 - 2])) / (((/* implicit */int) arr_6 [i_3 - 1] [i_8] [i_8 - 1]))))));
            var_16 = ((((/* implicit */_Bool) arr_14 [i_3] [i_8])) ? (arr_1 [i_3]) : (((/* implicit */unsigned long long int) ((((long long int) arr_5 [i_3] [12ULL] [12ULL])) * (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_8])) ? (((/* implicit */int) arr_2 [i_3])) : (var_9))))))));
            var_17 = ((/* implicit */unsigned long long int) arr_8 [i_3] [i_8] [i_8]);
        }
        for (signed char i_9 = 2; i_9 < 16; i_9 += 2) /* same iter space */
        {
            arr_35 [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) arr_20 [i_3]);
            var_18 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_11 [i_3 - 1]))))));
            /* LoopSeq 3 */
            for (signed char i_10 = 0; i_10 < 17; i_10 += 2) 
            {
                var_19 = (_Bool)1;
                var_20 = ((/* implicit */_Bool) (+(arr_1 [(signed char)17])));
                arr_38 [i_9 + 1] [i_9 + 1] [i_9] [i_3] = ((/* implicit */short) (-(((/* implicit */int) (signed char)95))));
                arr_39 [(signed char)9] [i_3] = ((/* implicit */short) arr_5 [4] [i_9] [i_10]);
                var_21 = ((/* implicit */short) arr_3 [i_10]);
            }
            for (unsigned int i_11 = 0; i_11 < 17; i_11 += 2) 
            {
                var_22 = ((/* implicit */signed char) arr_13 [i_11] [i_3]);
                arr_42 [11LL] [i_3] = ((/* implicit */long long int) arr_7 [i_3]);
            }
            for (signed char i_12 = 1; i_12 < 16; i_12 += 3) 
            {
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_23 [7] [i_3] [i_9] [i_3] [i_12]))))) && (((/* implicit */_Bool) arr_12 [i_12])))))));
                var_24 = ((/* implicit */unsigned char) (((~(((arr_36 [13U] [i_3] [i_9] [i_12]) + (((/* implicit */int) arr_6 [i_3] [i_9] [i_12 - 1])))))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3 + 1]))) >= (arr_3 [i_3]))))));
            }
            arr_47 [i_3] = ((/* implicit */short) ((unsigned int) ((short) arr_37 [i_3] [i_9 + 1] [i_3])));
        }
        for (long long int i_13 = 4; i_13 < 16; i_13 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 17; i_14 += 4) 
            {
                var_25 = ((/* implicit */_Bool) arr_24 [13U] [i_3] [i_3] [i_14] [i_14]);
                arr_55 [i_3 - 1] [(unsigned short)2] [i_3] [i_3] = arr_36 [i_3] [i_3] [i_13] [(_Bool)1];
            }
            for (unsigned char i_15 = 1; i_15 < 16; i_15 += 1) 
            {
                arr_59 [i_3] [i_13] = ((((/* implicit */int) ((arr_19 [i_3] [i_13] [i_15] [i_3]) != (((/* implicit */unsigned long long int) ((arr_37 [i_3] [i_13] [i_3]) / (2147483647))))))) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_3]))))));
                var_26 = ((/* implicit */unsigned long long int) ((((unsigned int) var_4)) | (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_3] [i_13 - 3])))));
            }
            arr_60 [i_3] = ((/* implicit */short) arr_36 [i_3] [i_3] [i_3] [i_13]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_16 = 0; i_16 < 17; i_16 += 4) 
            {
                arr_64 [i_3] = ((/* implicit */unsigned char) (-(arr_16 [i_3 - 1] [i_13 + 1])));
                var_27 = ((/* implicit */unsigned short) arr_54 [i_3] [(unsigned char)9]);
                var_28 = (short)-26711;
            }
            /* LoopNest 3 */
            for (unsigned char i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                for (int i_18 = 0; i_18 < 17; i_18 += 1) 
                {
                    for (unsigned short i_19 = 2; i_19 < 16; i_19 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned int) arr_16 [(signed char)13] [i_13]);
                            var_30 = ((/* implicit */unsigned short) arr_21 [i_3] [i_18] [4U] [i_3]);
                        }
                    } 
                } 
            } 
            arr_74 [i_3] [i_3] = ((/* implicit */int) arr_6 [1U] [i_13] [i_13]);
        }
        arr_75 [i_3] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_3]))))) || (((/* implicit */_Bool) arr_20 [i_3]))));
        var_31 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (arr_58 [i_3 + 1])))) + (69979077U))) - (((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_52 [i_3]))) / (((/* implicit */int) ((short) arr_57 [i_3]))))))));
    }
    var_32 = ((/* implicit */unsigned short) (~(65535U)));
}
