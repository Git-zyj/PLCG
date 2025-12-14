/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94230
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
    for (int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        var_11 = ((/* implicit */signed char) arr_2 [i_0]);
        arr_3 [i_0] [i_0] = ((/* implicit */int) (unsigned short)6);
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 14; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
                {
                    {
                        var_12 *= ((/* implicit */signed char) (unsigned char)128);
                        arr_12 [i_0] [i_1 - 1] [i_1] [5] = min((((/* implicit */signed char) var_7)), (((signed char) (-(((/* implicit */int) (short)-11497))))));
                        arr_13 [i_1] [(unsigned short)10] [i_1] [i_2] [i_1] [(unsigned short)10] = ((/* implicit */signed char) (-(((/* implicit */int) ((_Bool) arr_1 [i_1 + 1] [i_1 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 13; i_6 += 1) 
                {
                    {
                        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [5] [5] [i_6 + 1])) && (((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1479624022))))), (max((((/* implicit */unsigned int) (unsigned char)255)), (var_2))))))));
                        arr_20 [(unsigned short)12] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) && (((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_5] [i_6 + 1]))))) * (((((/* implicit */int) var_5)) * (((/* implicit */int) var_4))))))), ((-(((long long int) var_1))))));
                    }
                } 
            } 
        } 
    }
    /* LoopSeq 2 */
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
    {
        arr_23 [i_7] [i_7] = ((/* implicit */_Bool) max((((int) ((6863059825419598987ULL) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))), ((-(((/* implicit */int) arr_21 [i_7] [i_7]))))));
        /* LoopSeq 2 */
        for (short i_8 = 0; i_8 < 17; i_8 += 1) 
        {
            arr_27 [i_7] [i_8] = ((/* implicit */short) (-(((/* implicit */int) var_4))));
            var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) ((int) arr_21 [i_8] [i_7]))), (max((11583684248289952629ULL), (((/* implicit */unsigned long long int) arr_21 [i_7] [i_7]))))));
        }
        for (unsigned short i_9 = 4; i_9 < 13; i_9 += 3) 
        {
            var_15 = ((/* implicit */int) min((var_15), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_29 [i_9] [(short)14])) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_26 [i_9])))) : (((var_8) ? (((/* implicit */int) arr_25 [i_7] [14] [i_9 - 1])) : (((/* implicit */int) (unsigned char)106))))))) ? (((/* implicit */int) (unsigned char)168)) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_7)) & (((/* implicit */int) (_Bool)0))))))))));
            arr_30 [i_7] [(signed char)2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((-(18446744073709551600ULL))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)37)))))))) ? ((-(((/* implicit */int) ((signed char) (unsigned char)3))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)135)))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_10 = 0; i_10 < 19; i_10 += 4) 
    {
        arr_35 [i_10] &= ((signed char) arr_33 [i_10]);
        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) arr_32 [i_10] [i_10]))));
    }
    var_17 = ((/* implicit */_Bool) ((((/* implicit */int) ((short) (signed char)115))) / (((/* implicit */int) (unsigned char)245))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_36 [(unsigned char)16] [i_11]))));
        var_19 = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)40)) ^ (((/* implicit */int) arr_37 [i_11])))) != (((/* implicit */int) arr_37 [i_11]))));
        /* LoopNest 2 */
        for (signed char i_12 = 0; i_12 < 23; i_12 += 4) 
        {
            for (unsigned char i_13 = 1; i_13 < 22; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        for (short i_15 = 1; i_15 < 19; i_15 += 1) 
                        {
                            {
                                arr_49 [i_11] [i_12] [i_13] [16] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_45 [12] [(unsigned short)21] [i_12] [i_11])) ? (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (signed char)-115))))) : (((/* implicit */int) ((_Bool) var_9)))));
                                arr_50 [i_11] [i_15] [i_13] [i_14] [i_13] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)16256)) ? (((/* implicit */int) arr_39 [i_14])) : (((/* implicit */int) arr_45 [i_15] [i_14] [i_13] [i_11])))))));
                                var_20 = ((/* implicit */int) ((long long int) ((((/* implicit */int) arr_43 [(unsigned short)15] [(_Bool)1] [(unsigned short)13] [(signed char)10])) / (((/* implicit */int) (short)-16645)))));
                                arr_51 [i_11] [i_13 - 1] [i_15] [i_15 + 2] = ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_40 [(signed char)7] [i_12] [i_13 + 1])) ? (((/* implicit */int) (unsigned short)16775)) : (((/* implicit */int) (short)28311)))));
                            }
                        } 
                    } 
                    arr_52 [i_11] [i_12] [i_12] [i_13 - 1] = ((/* implicit */int) (unsigned short)511);
                    arr_53 [i_13] [i_12] [i_11] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 11583684248289952638ULL)) ? (arr_47 [i_13 + 1] [i_12] [i_13 + 1] [i_13 + 1] [i_12] [i_13]) : (((/* implicit */int) (signed char)-27))));
                    var_21 = ((/* implicit */signed char) arr_47 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
                }
            } 
        } 
    }
}
