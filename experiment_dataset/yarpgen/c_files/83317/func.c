/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83317
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
    var_19 = ((/* implicit */unsigned char) var_5);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        arr_11 [i_3] [i_3] [i_3] = ((/* implicit */short) (((!(((/* implicit */_Bool) var_12)))) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11037)))));
                        arr_12 [i_0] [i_0] [i_0] |= ((signed char) ((((((/* implicit */int) (short)-11053)) + (2147483647))) >> (((-1) + (17)))));
                        arr_13 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) arr_8 [i_0] [i_0] [i_0]);
                        var_20 = ((/* implicit */long long int) ((unsigned char) (-(-1LL))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_5 = 3; i_5 < 15; i_5 += 2) 
                        {
                            var_21 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (((/* implicit */int) arr_7 [i_0] [i_0])) : (((/* implicit */int) arr_7 [i_4] [i_4]))));
                            arr_19 [i_4] [i_1] = ((/* implicit */unsigned short) var_6);
                        }
                        for (short i_6 = 0; i_6 < 16; i_6 += 2) 
                        {
                            var_22 += ((/* implicit */signed char) ((int) arr_15 [i_1] [i_1] [i_1]));
                            var_23 = ((/* implicit */_Bool) ((8LL) | ((-(-16LL)))));
                            arr_23 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)54659)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1])))));
                            arr_24 [i_0] [i_4] [i_0] = ((((/* implicit */_Bool) 15LL)) ? (-16LL) : (((/* implicit */long long int) ((/* implicit */int) (short)11037))));
                        }
                        for (short i_7 = 0; i_7 < 16; i_7 += 2) 
                        {
                            var_24 *= ((/* implicit */unsigned short) ((short) ((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) 12U)) : (arr_2 [i_4]))));
                            arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)59937)) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0] [i_0] [i_0]))) : (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 3570576145U)) ? (((/* implicit */unsigned long long int) 4294967295U)) : (20ULL)));
                            var_26 = (+(((/* implicit */int) (short)11009)));
                            var_27 |= ((/* implicit */unsigned short) 3418175791U);
                        }
                        /* LoopSeq 3 */
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                        {
                            var_28 = ((/* implicit */int) 12LL);
                            var_29 = ((/* implicit */unsigned short) ((703782644) >> (((-6310491388158677998LL) + (6310491388158678029LL)))));
                            var_30 = ((/* implicit */unsigned long long int) ((int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]));
                            var_31 = ((/* implicit */unsigned short) (~(var_0)));
                            arr_30 [i_0] [i_4] = ((/* implicit */unsigned short) (!((_Bool)1)));
                        }
                        for (signed char i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_35 [i_2] [i_2] [i_4] [i_2] = ((int) (!(((/* implicit */_Bool) var_15))));
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) arr_10 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))));
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 14; i_10 += 2) 
                        {
                            arr_38 [i_0] [i_0] [i_4] = ((/* implicit */_Bool) (~(408003887U)));
                            var_33 = ((/* implicit */unsigned char) (((-(((/* implicit */int) (signed char)-27)))) / ((+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0]))))));
                            arr_39 [i_4] [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] [i_0]))))));
                        }
                    }
                    arr_40 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) -10LL)))) : (10025848457571424228ULL)));
                    var_34 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_1] [i_1])) ? (arr_15 [i_1] [i_2] [i_2]) : (arr_15 [i_2] [i_1] [i_1])));
                    arr_41 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])) && (((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((1U) > (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))))))));
        var_36 = ((/* implicit */int) (~(4294967283U)));
        arr_42 [i_0] = ((/* implicit */signed char) ((long long int) arr_3 [i_0]));
        var_37 = ((/* implicit */long long int) arr_15 [i_0] [i_0] [i_0]);
    }
    for (unsigned char i_11 = 0; i_11 < 19; i_11 += 2) 
    {
        var_38 = max((3886963426U), (0U));
        arr_47 [i_11] [i_11] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (short)-11725)) ? (4294967283U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)93))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-2777)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)86)))))))))));
    }
    /* LoopNest 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
    {
        for (signed char i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            {
                arr_52 [i_12] [i_12] [i_12] = ((/* implicit */int) 27ULL);
                /* LoopNest 2 */
                for (unsigned int i_14 = 2; i_14 < 21; i_14 += 2) 
                {
                    for (unsigned short i_15 = 3; i_15 < 21; i_15 += 2) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) ((((min((((/* implicit */long long int) (_Bool)1)), (((long long int) -703782661)))) + (9223372036854775807LL))) << (((((((/* implicit */int) max((arr_59 [i_14 + 3] [i_14 - 1] [i_14 - 1] [i_14 - 2] [i_14 + 1]), (arr_59 [i_14 - 1] [i_14 + 2] [i_14 - 1] [i_14] [i_14 - 1])))) + (9332))) - (43)))));
                            arr_60 [i_12] = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) 4LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_12] [i_12] [i_12]))) : (1U)))), (arr_48 [i_15 + 2] [i_15 - 3])))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_55 [i_14 - 1] [i_14 + 1] [i_14] [i_14 - 2]), (((/* implicit */unsigned short) (signed char)-64)))))) : (3886963433U));
                            arr_61 [i_12] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) -1908497277))));
                            arr_62 [i_14 + 2] [i_14 - 1] [i_14 + 1] [i_14 + 2] [i_14 - 1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) 703782662)) / (-5145058224104575684LL)));
                            var_40 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) 9354379274010553033ULL))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_55 [i_14 + 1] [i_14 + 2] [i_14] [i_14 - 2]))))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_48 [i_14 + 3] [i_14])) ? (1908497277) : (((/* implicit */int) (short)-11037))))), (9LL)))));
                        }
                    } 
                } 
                arr_63 [i_12] [i_12] [i_12] = ((/* implicit */unsigned char) var_12);
                arr_64 [i_12] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (((-(arr_58 [i_13] [i_13] [i_13] [i_13]))) >> (((((/* implicit */int) ((unsigned short) arr_56 [i_12] [i_12] [i_12]))) - (65382)))))) ? (((/* implicit */int) arr_56 [i_12] [i_12] [i_12])) : (((((/* implicit */int) (unsigned short)0)) ^ (((((/* implicit */_Bool) (short)11037)) ? (((/* implicit */int) (unsigned short)3515)) : (-703782661)))))));
            }
        } 
    } 
}
