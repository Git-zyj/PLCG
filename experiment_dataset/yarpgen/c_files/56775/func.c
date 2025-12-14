/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56775
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
    for (unsigned char i_0 = 4; i_0 < 15; i_0 += 3) 
    {
        for (int i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 17; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_0 + 4] [i_0])) : (((/* implicit */int) var_7)))), (((/* implicit */int) max((arr_5 [i_0] [i_0]), (((/* implicit */short) arr_0 [(short)8]))))))));
                    var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_6 [i_2 + 2] [i_0 + 3] [7] [7])) ? (((/* implicit */int) arr_7 [i_1] [i_2 + 1] [i_1])) : (((/* implicit */int) arr_7 [14LL] [i_0] [i_0])))) : (31457280)));
                    var_21 ^= (!(((/* implicit */_Bool) var_13)));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((max((8456950914230976082LL), (((/* implicit */long long int) (_Bool)1)))) >> (((var_10) + (803706688)))))) ? (((((/* implicit */_Bool) ((unsigned char) var_12))) ? (((((/* implicit */_Bool) var_3)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_16))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) var_4)))))) : (var_17)));
    /* LoopNest 2 */
    for (long long int i_3 = 4; i_3 < 23; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            {
                var_23 = ((/* implicit */unsigned int) min((((/* implicit */short) max((arr_13 [i_3 - 1]), (arr_13 [i_3 + 1])))), (max((var_8), (((/* implicit */short) arr_13 [i_3 - 3]))))));
                var_24 |= ((/* implicit */_Bool) -9223372036854775793LL);
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_5 = 1; i_5 < 10; i_5 += 4) 
    {
        arr_18 [i_5 + 2] [i_5] |= ((/* implicit */unsigned long long int) (_Bool)1);
        arr_19 [i_5] [i_5] = ((/* implicit */long long int) ((signed char) arr_1 [i_5 + 1]));
        var_25 |= ((((/* implicit */_Bool) arr_9 [i_5 + 3])) ? (((/* implicit */int) arr_12 [i_5 + 2] [i_5 + 1] [i_5])) : (arr_9 [i_5 + 2]));
        var_26 = ((/* implicit */_Bool) ((unsigned long long int) (-(((/* implicit */int) arr_13 [(_Bool)1])))));
    }
    for (unsigned int i_6 = 1; i_6 < 14; i_6 += 2) 
    {
        var_27 |= ((/* implicit */long long int) (_Bool)1);
        var_28 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1418569648U))));
    }
    for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
    {
        arr_25 [i_7] |= ((/* implicit */_Bool) ((((/* implicit */int) arr_12 [i_7] [i_7] [i_7])) ^ ((~(((/* implicit */int) arr_12 [i_7] [i_7] [i_7]))))));
        /* LoopSeq 1 */
        for (unsigned char i_8 = 1; i_8 < 12; i_8 += 4) 
        {
            arr_28 [i_8] = ((/* implicit */long long int) arr_3 [i_7] [i_8 - 1]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_9 = 0; i_9 < 14; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_10 = 0; i_10 < 14; i_10 += 1) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((17034925228099051806ULL) ^ (var_1)))) ? (arr_8 [i_8]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -567933496)) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [8] [8] [i_7]))) : (-5826912473143187191LL))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) 
                    {
                        var_30 += ((/* implicit */unsigned char) arr_38 [i_9]);
                        var_31 = ((/* implicit */long long int) arr_29 [i_8] [i_8] [6]);
                    }
                    for (long long int i_12 = 0; i_12 < 14; i_12 += 3) 
                    {
                        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_7])))))));
                        var_33 = ((/* implicit */unsigned short) var_13);
                    }
                    for (long long int i_13 = 3; i_13 < 13; i_13 += 4) 
                    {
                        arr_47 [i_8] [i_7] [i_7] [i_10] [i_8] [i_8] [i_13] = ((/* implicit */unsigned short) (((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((arr_24 [i_8]) ^ (arr_21 [i_10]))) - (2071820948)))));
                        var_34 = ((/* implicit */unsigned int) var_7);
                    }
                    for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_39 [i_8 + 1] [i_8 - 1] [i_7]))) : (var_2))))));
                        arr_51 [i_7] [i_7] [i_8 - 1] [1] [i_9] [i_10] [i_8] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8] [(unsigned short)3] [(unsigned short)3])) ? (((/* implicit */int) arr_7 [i_8] [i_8] [i_14])) : (((/* implicit */int) var_16)))))));
                    }
                }
                for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
                {
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */int) arr_5 [i_8] [i_8])) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_31 [i_7] [10U] [i_15])) : (((/* implicit */int) var_8))))));
                    /* LoopSeq 3 */
                    for (signed char i_16 = 1; i_16 < 13; i_16 += 4) 
                    {
                        arr_56 [i_7] [i_8] = ((/* implicit */unsigned char) (-(686887327)));
                        var_37 = ((var_14) < (((/* implicit */unsigned long long int) 9223372036854775788LL)));
                        var_38 = ((/* implicit */int) min((var_38), (((/* implicit */int) (-(arr_36 [i_9] [i_8] [i_9] [i_16 - 1] [i_16] [i_8 + 2]))))));
                        var_39 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_41 [i_8 + 1] [i_8] [i_15] [i_16 + 1] [i_16 + 1])) ? (arr_33 [i_7] [i_8] [i_7] [(unsigned short)6] [i_16 + 1] [i_9]) : (arr_11 [i_8 + 2] [i_8 + 1])));
                        var_40 = ((/* implicit */int) var_15);
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_41 *= ((/* implicit */unsigned char) ((_Bool) ((int) 18434273337294038473ULL)));
                        var_42 ^= ((/* implicit */unsigned char) (-((+(((/* implicit */int) arr_3 [i_7] [i_8]))))));
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (!(((var_14) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))))));
                        var_44 = ((/* implicit */_Bool) ((unsigned int) arr_55 [i_8 + 2] [i_8] [i_8] [i_8 - 1] [i_8 + 1]));
                        arr_60 [i_7] [i_7] [i_8] [i_9] [i_9] [i_15] [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (arr_37 [i_7] [i_9] [i_8] [i_17]) : (((/* implicit */int) arr_50 [i_7] [i_17] [i_9] [i_15] [i_7] [i_8]))))) ? (((/* implicit */int) ((short) arr_6 [i_7] [i_7] [i_9] [i_15]))) : (((/* implicit */int) var_18))));
                    }
                    for (short i_18 = 0; i_18 < 14; i_18 += 1) 
                    {
                        arr_63 [i_7] [7] [i_8] [i_9] [i_9] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) 0U)) : (16777215LL)))));
                        arr_64 [i_8] = arr_9 [i_8];
                        arr_65 [i_9] [i_9] [i_9] &= ((/* implicit */short) (+(((((/* implicit */_Bool) 554677575)) ? ((-2147483647 - 1)) : (((/* implicit */int) var_8))))));
                    }
                }
                /* LoopNest 2 */
                for (long long int i_19 = 3; i_19 < 11; i_19 += 2) 
                {
                    for (int i_20 = 2; i_20 < 13; i_20 += 2) 
                    {
                        {
                            arr_70 [i_8] [i_19] [(unsigned char)6] [i_8] [i_8] = ((/* implicit */short) ((int) arr_50 [i_8 + 2] [i_19] [i_19 + 2] [i_20 - 2] [i_20 - 2] [i_8]));
                            var_45 *= ((/* implicit */unsigned int) ((((/* implicit */int) arr_66 [i_7] [i_7] [i_9] [9U] [i_20])) % (((/* implicit */int) arr_3 [i_7] [i_8 + 2]))));
                        }
                    } 
                } 
                var_46 = ((/* implicit */_Bool) min((var_46), (((/* implicit */_Bool) var_11))));
                var_47 -= ((/* implicit */signed char) ((-550890968) ^ (arr_21 [i_9])));
                var_48 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
            }
        }
        var_49 ^= ((/* implicit */short) (_Bool)1);
        /* LoopSeq 1 */
        for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
        {
            var_50 *= ((/* implicit */long long int) ((unsigned long long int) min((arr_58 [(unsigned char)0] [i_21] [i_21 - 1] [(unsigned char)0] [i_21 - 1]), (arr_58 [(short)6] [(short)6] [i_21 - 1] [i_21] [i_21 - 1]))));
            var_51 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_36 [8ULL] [i_21] [i_21] [i_7] [i_21] [i_7])) ? (var_12) : (2147483633)))) <= (((((/* implicit */_Bool) arr_8 [(short)12])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26455))) : (var_14)))))) == (((/* implicit */int) max((((/* implicit */unsigned short) arr_40 [i_7] [i_21 - 1] [i_7])), (arr_55 [i_21 - 1] [i_7] [i_21 - 1] [i_21 - 1] [i_7]))))));
        }
    }
}
