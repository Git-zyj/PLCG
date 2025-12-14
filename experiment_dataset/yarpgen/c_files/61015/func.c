/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 61015
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=61015 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/61015
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
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) arr_0 [i_0]);
        /* LoopNest 3 */
        for (unsigned int i_1 = 4; i_1 < 15; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 3) 
                {
                    {
                        var_13 -= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [10ULL]))) / (18446744073709551615ULL)));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0] [i_0])))) || (arr_1 [(unsigned char)6]))))));
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [15U] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_0] [i_2]))))) ^ (18446744073709551602ULL)));
                            var_15 = arr_11 [i_1 + 4] [i_1 + 3];
                            arr_13 [i_0] [i_0] [(unsigned short)11] [i_3] [i_0] = ((/* implicit */_Bool) 8ULL);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [i_0] = ((/* implicit */unsigned short) (~(18446744073709551615ULL)));
                            arr_18 [i_0] [i_1] [i_0] [i_2] [i_3] [5U] = ((/* implicit */unsigned char) arr_0 [i_2]);
                            var_16 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_1 - 4] [i_1 + 3])) ? ((~(arr_7 [18ULL] [i_3] [i_5]))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [10U] [10U])))));
                            arr_19 [i_5] [i_3] [i_3] [i_0] [i_0] [i_1 - 2] [i_0] = var_7;
                            var_17 = ((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0]);
                        }
                        arr_20 [i_0] [i_0] [(short)2] [i_0] [i_3] &= var_5;
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (short i_7 = 3; i_7 < 15; i_7 += 3) 
            {
                for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                {
                    {
                        arr_28 [i_0] [i_6] [i_0] [(short)4] = ((/* implicit */unsigned char) arr_0 [i_8]);
                        var_18 = ((/* implicit */unsigned int) ((arr_3 [i_6] [i_6] [i_6]) % (arr_6 [i_7 - 3] [i_7 + 3] [(unsigned short)9])));
                    }
                } 
            } 
            arr_29 [i_0] [14U] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)0)) ? (401543874U) : (3744614267U)));
        }
        for (unsigned char i_9 = 1; i_9 < 15; i_9 += 2) /* same iter space */
        {
            arr_32 [i_0] = ((/* implicit */unsigned int) arr_3 [12ULL] [(unsigned short)18] [i_0]);
            arr_33 [i_0] = ((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_0] [i_0] [(unsigned char)10] [i_9 + 1])) ? (((var_7) % (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_9 + 1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))));
            var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0]))) | (arr_14 [i_0] [i_0] [(unsigned char)2] [i_0] [i_9 + 2])));
            arr_34 [i_0] = ((/* implicit */short) ((arr_9 [i_9 - 1] [i_9 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (218742375U)));
        }
        for (unsigned char i_10 = 1; i_10 < 15; i_10 += 2) /* same iter space */
        {
            arr_39 [i_0] = ((/* implicit */_Bool) ((var_0) ? (3744614251U) : (arr_37 [i_10 + 3] [(_Bool)1])));
            var_20 = (~(((/* implicit */int) arr_31 [(_Bool)1] [i_0] [i_0])));
        }
        /* LoopNest 2 */
        for (unsigned short i_11 = 3; i_11 < 18; i_11 += 4) 
        {
            for (signed char i_12 = 1; i_12 < 16; i_12 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_27 [i_13] [i_13] [i_13] [i_13] [i_12 - 1] [i_12 + 2])) : (arr_6 [i_13] [i_13] [i_12 + 3])));
                                var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */int) arr_40 [i_14 + 1] [i_14 + 1] [i_11 - 1])) % (((/* implicit */int) (short)-1308)))))));
                                var_23 += ((/* implicit */unsigned short) arr_6 [i_14 + 1] [i_12 + 3] [i_11 - 2]);
                                var_24 = ((/* implicit */int) 1515243678U);
                                var_25 &= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        var_26 = ((/* implicit */int) (unsigned short)2804);
                        arr_52 [i_0] [i_0] = ((/* implicit */unsigned char) arr_5 [i_0] [i_0] [i_12 - 1]);
                        var_27 = ((/* implicit */unsigned short) ((arr_30 [i_12 + 1]) ? (arr_7 [i_0] [i_11] [i_12 + 3]) : (((/* implicit */long long int) ((/* implicit */int) arr_15 [(_Bool)1])))));
                    }
                    arr_53 [i_0] [i_11 - 3] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [i_0] [i_11] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [(unsigned short)12]))) : (arr_45 [i_0] [i_11 + 1] [i_0] [10LL] [i_0])))) * (arr_16 [i_11 - 3] [i_12 + 2] [18ULL] [i_12 + 3])));
                }
            } 
        } 
    }
    var_28 = var_2;
    var_29 = ((((/* implicit */int) ((short) var_8))) * (((/* implicit */int) var_11)));
}
