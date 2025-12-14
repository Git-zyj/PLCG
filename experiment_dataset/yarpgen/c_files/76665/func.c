/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76665
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
    for (short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */short) (((!(((/* implicit */_Bool) ((long long int) arr_0 [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_0)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [11ULL]))) : (4771596368654290696ULL)))));
        var_18 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (min((4294967265U), (((/* implicit */unsigned int) arr_1 [i_0])))))) ? ((~(((/* implicit */int) (unsigned char)111)))) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) /* same iter space */
        {
            arr_5 [8LL] [8LL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0] [i_1]))) ^ (10076659083995945512ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [i_0]))))))));
            var_19 = ((/* implicit */int) var_10);
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 3; i_4 < 18; i_4 += 4) 
                        {
                            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (+(arr_11 [i_4 - 3] [i_4 - 3] [i_4] [i_4 - 3] [i_4 + 1]))))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) var_0)) / (((/* implicit */int) arr_10 [i_1] [i_4 - 2] [1ULL] [i_4] [i_4 + 2] [2LL])))))));
                        }
                        arr_13 [i_0] [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [i_2]))))) : (3559862929U)))));
                    }
                } 
            } 
        }
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 4) /* same iter space */
        {
            arr_17 [i_0] [i_0] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5] [i_0]))) : ((~(var_9))))), (((/* implicit */long long int) ((unsigned short) arr_15 [i_5])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_6 = 2; i_6 < 17; i_6 += 3) 
            {
                var_22 |= ((/* implicit */short) ((signed char) (!(((/* implicit */_Bool) arr_16 [i_6] [5] [i_0])))));
                var_23 &= arr_18 [i_0] [i_0] [(unsigned char)0] [i_0];
                /* LoopSeq 2 */
                for (long long int i_7 = 3; i_7 < 19; i_7 += 4) 
                {
                    var_24 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) var_8)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_5] [i_7 - 3]))) : (((((/* implicit */_Bool) arr_15 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_9)))));
                    var_25 = var_15;
                    arr_23 [i_6] [19] [i_5] [i_5] [i_5] [i_7 - 1] = arr_0 [i_0] [i_0];
                    var_26 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((4771596368654290696ULL) / (((/* implicit */unsigned long long int) var_8))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_5]))) < (4771596368654290696ULL)))) : (((((/* implicit */int) arr_19 [i_0] [i_0] [i_6])) | (((/* implicit */int) (short)-32765))))));
                }
                for (unsigned int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    arr_26 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_7 [i_8] [i_0] [i_5] [i_0]);
                    var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_19 [(unsigned char)3] [i_6 + 2] [i_0])))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? ((+(((/* implicit */int) (unsigned short)12589)))) : (((/* implicit */int) arr_18 [i_0] [i_5] [i_6] [i_8]))));
                }
            }
            /* vectorizable */
            for (short i_9 = 1; i_9 < 16; i_9 += 2) 
            {
                var_29 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(var_2))))));
                arr_31 [i_9] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_9 - 1] [i_9 + 3] [(unsigned short)11] [i_9 + 3] [i_9] [i_9 + 3]))));
                var_30 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) arr_19 [3ULL] [i_5] [i_9 + 2]))) : (((((/* implicit */_Bool) var_12)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32039)))))));
                /* LoopSeq 2 */
                for (int i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    var_31 += (+(((/* implicit */int) arr_14 [i_5] [i_9 + 1] [i_9])));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_5] [i_5] [i_9 - 1] [i_10])) / (((/* implicit */int) (short)32151))))) ? (((/* implicit */int) ((((/* implicit */int) var_11)) > (((/* implicit */int) arr_0 [i_0] [i_5]))))) : (((/* implicit */int) arr_6 [i_0]))));
                    arr_36 [(signed char)2] [(unsigned short)16] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_34 [i_9 + 1] [i_9 - 1] [i_9 - 1] [(unsigned char)0])) ? (((/* implicit */int) arr_14 [i_9 - 1] [i_9 + 2] [0U])) : (((/* implicit */int) arr_21 [i_9 + 1] [i_9 + 2] [(unsigned char)18] [i_9 + 1]))));
                }
                for (unsigned short i_11 = 0; i_11 < 20; i_11 += 3) 
                {
                    arr_40 [(unsigned short)10] [i_5] [i_9] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_16))));
                    arr_41 [i_9] [i_9] [11U] [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_37 [i_0] [i_0] [i_0] [(unsigned char)8])) + (((/* implicit */int) arr_37 [i_0] [i_5] [i_9 + 2] [i_11]))));
                    var_33 = ((((/* implicit */_Bool) 3559862929U)) ? (((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_9 + 4] [i_11] [i_11])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_1 [4U])))) : (var_2));
                    var_34 = ((/* implicit */unsigned short) var_7);
                }
            }
            var_35 *= ((/* implicit */unsigned short) min(((((!(((/* implicit */_Bool) arr_25 [i_0] [i_5] [i_5] [i_5])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((9361118007886452968ULL) != (((/* implicit */unsigned long long int) -3583590125433187594LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) / (9085626065823098647ULL))))), (((/* implicit */unsigned long long int) var_5))));
        }
        for (unsigned char i_12 = 0; i_12 < 20; i_12 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned int i_13 = 2; i_13 < 18; i_13 += 3) 
            {
                arr_47 [i_0] [i_12] [i_13] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_13])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_45 [i_12] [(short)16]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_45 [i_13] [i_12])) <= (((/* implicit */int) arr_24 [i_0] [i_12] [i_0] [i_0] [(unsigned char)19] [i_0]))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned short)0))))))) ? (min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_20 [i_0] [i_0])) : (((/* implicit */int) arr_15 [i_13])))), (((((/* implicit */_Bool) arr_19 [i_0] [i_12] [(unsigned short)17])) ? (((/* implicit */int) var_17)) : (((/* implicit */int) arr_24 [i_13] [i_13] [i_12] [i_12] [13LL] [i_0])))))) : (((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) var_15)) : (var_13))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_42 [i_12])) ? (arr_12 [i_0] [i_12]) : (((/* implicit */int) arr_29 [i_0] [i_12] [i_13]))))))))));
                /* LoopSeq 1 */
                for (unsigned char i_14 = 0; i_14 < 20; i_14 += 3) 
                {
                    arr_50 [i_14] [i_13] [i_12] [i_14] = ((/* implicit */unsigned short) ((min((arr_11 [i_13] [i_13 - 1] [18] [i_13 - 1] [i_12]), (arr_11 [i_13] [i_13 + 2] [(unsigned char)10] [i_13 - 2] [i_12]))) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_0] [i_12] [i_0])) ? (((/* implicit */int) min((arr_49 [i_14] [2]), (arr_9 [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_16))))))))));
                    var_36 = ((/* implicit */long long int) arr_34 [i_0] [i_0] [10ULL] [i_0]);
                }
            }
            /* LoopSeq 1 */
            for (unsigned short i_15 = 0; i_15 < 20; i_15 += 3) 
            {
                arr_55 [i_0] [(signed char)6] [i_12] &= ((/* implicit */unsigned short) var_4);
                arr_56 [i_0] [i_15] = ((((/* implicit */_Bool) (~(((/* implicit */int) arr_14 [i_15] [i_12] [i_12]))))) ? (((/* implicit */int) arr_37 [i_0] [i_12] [i_12] [i_12])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_12] [i_15] [i_15] [i_15])));
            }
        }
        for (unsigned char i_16 = 0; i_16 < 20; i_16 += 4) /* same iter space */
        {
            var_37 &= ((/* implicit */unsigned short) var_7);
            arr_61 [i_0] [i_16] [i_16] = min(((~((-(((/* implicit */int) arr_51 [i_0] [i_16])))))), (((((/* implicit */_Bool) (~(arr_25 [i_16] [i_16] [i_0] [i_0])))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [(unsigned char)19])) : (((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((var_15) >= (((/* implicit */long long int) ((/* implicit */int) arr_54 [(short)3] [i_16] [i_16])))))))));
        }
    }
    var_38 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned char) var_3))))) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_4)))))))));
    var_39 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_1)))))))));
    var_40 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((~(((/* implicit */int) var_1)))) << (((((((/* implicit */_Bool) 2332960000349214727LL)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_11)))) - (61115)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (-(((/* implicit */int) var_10))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6))))), (((var_5) % (var_9)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_17 = 2; i_17 < 9; i_17 += 4) 
    {
        var_41 = ((/* implicit */unsigned int) arr_8 [i_17 + 1]);
        var_42 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_17 - 1] [(signed char)5] [i_17] [i_17] [i_17 - 2] [i_17]))));
    }
}
