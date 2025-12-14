/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62336
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
    var_10 = ((/* implicit */int) ((((((unsigned long long int) var_0)) | (((/* implicit */unsigned long long int) var_1)))) / (((/* implicit */unsigned long long int) var_9))));
    var_11 = ((/* implicit */unsigned long long int) var_6);
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 18; i_0 += 4) /* same iter space */
    {
        var_12 = ((/* implicit */unsigned long long int) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (arr_0 [i_0 - 2] [i_0])))));
        var_13 ^= ((/* implicit */short) 18446744073709551614ULL);
        var_14 ^= ((/* implicit */short) (signed char)-34);
    }
    /* vectorizable */
    for (unsigned int i_1 = 2; i_1 < 18; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            var_15 = ((/* implicit */unsigned long long int) ((unsigned int) arr_5 [i_1 + 3]));
            var_16 = ((/* implicit */_Bool) (signed char)-50);
            arr_6 [i_1 + 4] [i_2] = ((/* implicit */short) (-(((/* implicit */int) var_6))));
        }
        for (int i_3 = 0; i_3 < 22; i_3 += 3) 
        {
            arr_10 [i_1] |= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_1 + 4] [i_1 + 4]))));
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_5 = 0; i_5 < 22; i_5 += 1) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        {
                            arr_21 [i_1 + 3] [i_3] [i_4] [i_5] [i_4] |= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_18 [i_1] [i_1] [i_1 + 4] [i_1 + 1] [i_4] [i_4]))));
                            arr_22 [i_5] [i_5] [i_3] [13] [i_5] [i_6] [i_6] = ((/* implicit */int) ((((/* implicit */_Bool) (-(-4787318389206571491LL)))) ? (-1652471534167941241LL) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1])))));
                        }
                    } 
                } 
                var_17 = ((/* implicit */long long int) max((var_17), (((long long int) (unsigned char)176))));
            }
            arr_23 [i_1 + 3] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_8 [i_1 + 4] [i_3])) ? (4787318389206571498LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11153)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 4; i_7 < 19; i_7 += 4) 
            {
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2377286705U)) ? (((/* implicit */long long int) ((int) 1338600293U))) : (-568555655457699269LL)));
                var_19 = ((16447379412268384658ULL) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)74))))));
                arr_27 [i_1] [i_3] [i_7] = ((/* implicit */unsigned int) (~(((long long int) var_1))));
                arr_28 [i_3] [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(((var_7) / (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_3] [i_3] [i_7])))))));
            }
            for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                /* LoopSeq 1 */
                for (long long int i_9 = 0; i_9 < 22; i_9 += 2) 
                {
                    var_20 = ((/* implicit */unsigned long long int) 2580196536U);
                    arr_35 [i_1] [i_3] [i_9] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (signed char)108))) ? (((/* implicit */long long int) -1451721856)) : (((((/* implicit */_Bool) arr_29 [i_3] [i_3] [i_8] [(unsigned char)16])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_1] [i_3] [(short)10]))) : (-1652471534167941241LL)))));
                    arr_36 [i_3] [i_9] = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned char) (short)16698)))));
                    /* LoopSeq 2 */
                    for (long long int i_10 = 2; i_10 < 20; i_10 += 2) 
                    {
                        arr_39 [i_1] [i_1] [i_1] [i_9] [i_10] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1U)))))) <= (9223372036854775807LL)));
                        arr_40 [i_9] [(short)16] [0LL] [i_9] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) 1721914660U)) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) (signed char)47))))));
                        arr_41 [i_1] [i_3] [i_8] [i_3] [i_10] = ((/* implicit */unsigned long long int) var_8);
                        var_21 = ((/* implicit */unsigned long long int) arr_29 [i_1] [i_3] [i_8] [i_10]);
                        arr_42 [i_1] [i_3] [i_1] [i_9] [i_10 - 2] = ((/* implicit */unsigned int) arr_9 [i_10]);
                    }
                    for (unsigned int i_11 = 1; i_11 < 20; i_11 += 3) 
                    {
                        arr_45 [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) arr_26 [i_1] [i_3] [i_11] [i_9]))));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)108)) ? (((/* implicit */int) arr_30 [i_1] [i_3] [i_1] [i_9])) : (((/* implicit */int) arr_19 [i_1] [i_3] [i_8] [i_8] [(unsigned char)14]))))) / (arr_32 [i_1] [i_3] [i_9] [i_11])));
                        arr_46 [i_1] [i_1] [i_8] [i_8] [11ULL] [i_11] [i_11] = 625961377U;
                        arr_47 [i_11] [i_9] [10U] [i_3] [i_1] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */_Bool) (signed char)-55)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (2377286709U))));
                    }
                }
                arr_48 [i_1 + 1] [i_3] [i_8] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_1] [i_1 + 4] [i_1 + 1]))));
                var_23 -= ((((/* implicit */_Bool) arr_33 [i_1 + 1] [i_1] [i_1 + 1] [i_1 + 2])) ? (arr_33 [i_1 - 2] [i_1] [i_1 - 1] [i_1 + 3]) : (arr_33 [i_1 + 4] [i_1] [i_1 + 3] [i_1 + 1]));
                /* LoopNest 2 */
                for (long long int i_12 = 3; i_12 < 21; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 0; i_13 < 22; i_13 += 2) 
                    {
                        {
                            var_24 ^= ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_4)) : (16447379412268384631ULL));
                            var_25 ^= ((/* implicit */unsigned int) ((long long int) arr_30 [i_12 - 2] [i_3] [i_1 + 2] [i_12]));
                            arr_54 [i_3] [i_3] [i_8] [i_12] [i_13] [i_3] [i_12 - 3] = ((/* implicit */unsigned short) (-(((long long int) 1917680598U))));
                            arr_55 [20U] [20U] [i_3] [20U] [i_12] [i_12] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_1] [i_1 + 4] [i_1] [i_3] [i_12 - 3]))));
                            var_26 ^= ((/* implicit */signed char) var_9);
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) (-(1917680574U)));
            }
        }
        var_28 = ((/* implicit */unsigned int) min((var_28), (((/* implicit */unsigned int) (unsigned short)65533))));
        arr_56 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(277308438U)))) ? (arr_44 [i_1 + 1] [i_1 + 1] [i_1] [i_1]) : (((unsigned int) (short)-21612))));
    }
    for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
    {
        var_29 = ((/* implicit */unsigned long long int) (+(((((((/* implicit */int) arr_18 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14])) + (2147483647))) << (((((((/* implicit */int) arr_18 [i_14] [i_14] [i_14] [i_14] [(signed char)21] [i_14])) + (75))) - (28)))))));
        arr_60 [i_14] = var_1;
    }
}
