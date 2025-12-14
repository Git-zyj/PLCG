/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59735
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
    var_10 = ((/* implicit */unsigned long long int) (unsigned short)45662);
    var_11 = ((/* implicit */unsigned int) var_1);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        var_12 *= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0 - 3]))))) >= (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0])))))));
        var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (((((/* implicit */int) var_2)) >> (((arr_1 [i_0 - 2] [6U]) - (3539309428U))))) : (((/* implicit */int) ((short) var_9)))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            var_14 = ((((/* implicit */_Bool) ((unsigned short) (unsigned short)13388))) ? (var_0) : (((arr_3 [i_0]) >> (((((/* implicit */int) (unsigned short)19852)) - (19812))))));
            arr_4 [i_1] = var_0;
        }
        for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
        {
            var_15 = ((/* implicit */signed char) ((unsigned long long int) 8630161934046976370ULL));
            arr_9 [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0 - 3]);
            /* LoopNest 3 */
            for (signed char i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 3) 
                {
                    for (unsigned int i_5 = 2; i_5 < 14; i_5 += 2) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_8))));
                            var_17 = ((/* implicit */unsigned long long int) arr_5 [i_5 + 1] [i_2 + 2] [i_0 - 3]);
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */unsigned long long int) 625795360U);
        }
        for (signed char i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                for (unsigned char i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_19 = ((/* implicit */signed char) ((380819681U) < (3663776342U)));
                        var_20 = ((/* implicit */unsigned short) max((var_20), ((unsigned short)40414)));
                    }
                } 
            } 
            arr_24 [i_6] &= ((/* implicit */int) (~(arr_5 [(signed char)6] [i_0 + 1] [i_0 + 1])));
            /* LoopSeq 1 */
            for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 4) 
            {
                var_21 &= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_27 [i_0 - 2]))));
                /* LoopSeq 1 */
                for (unsigned long long int i_10 = 3; i_10 < 11; i_10 += 4) 
                {
                    var_22 -= ((/* implicit */short) (((~(((/* implicit */int) var_5)))) ^ ((~(((/* implicit */int) var_9))))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        arr_33 [(signed char)11] [i_6] [i_6] [i_6] [i_10] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_30 [i_10 + 2] [i_0] [i_0 - 1])) << (((((/* implicit */int) arr_30 [i_10 + 3] [i_9] [i_0 - 1])) - (43079)))));
                        arr_34 [i_0 - 1] [i_6] [i_9] [i_10] [i_0 - 1] [i_6] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_4)) ? (18446744073709551596ULL) : (20ULL)))));
                        var_23 = ((/* implicit */unsigned long long int) min((var_23), ((~(arr_3 [i_0 - 2])))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 4) 
                    {
                        arr_37 [(unsigned short)9] [i_12] [i_10] [i_9] [i_10] [i_6] [i_0 - 2] = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) var_5)))));
                        var_24 = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)23243))));
                    }
                    for (unsigned char i_13 = 4; i_13 < 14; i_13 += 2) 
                    {
                        var_25 &= (((!(((/* implicit */_Bool) var_7)))) ? (18446744073709551596ULL) : (14979486206173393642ULL));
                        var_26 = (i_10 % 2 == zero) ? (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */int) (unsigned short)21354)) << (((arr_35 [i_10]) - (7564721207257470306LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_6] [i_6])) >= (((/* implicit */int) arr_28 [i_13] [i_13] [i_9] [i_9] [i_6] [i_0])))))))) : (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((((/* implicit */int) (unsigned short)21354)) << (((((((arr_35 [i_10]) - (7564721207257470306LL))) + (6348908660404909646LL))) - (7LL))))) : (((/* implicit */int) ((((/* implicit */int) arr_15 [i_6] [i_6])) >= (((/* implicit */int) arr_28 [i_13] [i_13] [i_9] [i_9] [i_6] [i_0]))))))));
                    }
                    for (unsigned long long int i_14 = 2; i_14 < 14; i_14 += 4) 
                    {
                        var_27 &= ((/* implicit */signed char) var_4);
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((+(var_0))) : (arr_20 [i_0])));
                    }
                    arr_43 [13ULL] [i_6] [i_9] [i_10] = ((/* implicit */unsigned short) ((var_4) >> (((((/* implicit */int) arr_21 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 - 1])) - (135)))));
                }
                arr_44 [i_0 + 1] [(signed char)12] [(signed char)12] [i_0 + 1] = ((/* implicit */unsigned int) (unsigned short)0);
                /* LoopSeq 1 */
                for (short i_15 = 0; i_15 < 15; i_15 += 2) 
                {
                    var_29 = (~(arr_18 [i_0 + 1]));
                    var_30 = ((/* implicit */int) (((-(arr_25 [3U] [i_6] [i_15]))) << (((/* implicit */int) ((((/* implicit */int) var_7)) < (((/* implicit */int) (short)16383)))))));
                    var_31 = ((/* implicit */unsigned long long int) (short)-19368);
                }
                var_32 = ((/* implicit */unsigned short) (-(78965469U)));
            }
            var_33 += ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_14 [i_0 - 2] [i_0 - 1] [i_0 + 1] [i_0 + 1])) : ((+(((/* implicit */int) var_9))))));
        }
    }
    /* vectorizable */
    for (unsigned long long int i_16 = 1; i_16 < 19; i_16 += 2) 
    {
        var_34 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_48 [i_16 + 3]))));
        arr_49 [(unsigned short)11] |= ((/* implicit */unsigned char) var_4);
        var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (-2147483644) : (((/* implicit */int) var_9))));
    }
    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 3) 
    {
        arr_52 [(unsigned char)10] = ((/* implicit */unsigned long long int) (((((-(((/* implicit */int) (unsigned short)32256)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_8))))) : ((-(9151314442816847872ULL))))) - (16535ULL)))));
        arr_53 [(short)12] [i_17] = ((/* implicit */unsigned char) (-(((min((arr_47 [i_17]), (arr_47 [i_17]))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
    }
    var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 9295429630892703746ULL)) ? (max((((((/* implicit */_Bool) var_9)) ? (3215487095650213801ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) var_8)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) var_2))))))))))));
}
