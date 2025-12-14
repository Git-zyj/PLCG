/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86549
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) var_15);
                /* LoopSeq 2 */
                for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
                {
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(max((((/* implicit */int) (unsigned short)59616)), (var_16)))))) ? ((+((-(((/* implicit */int) arr_3 [i_0] [i_1] [i_2])))))) : (((/* implicit */int) arr_5 [i_0 + 1] [i_1]))));
                    /* LoopSeq 2 */
                    for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                    {
                        var_19 += ((/* implicit */unsigned char) max(((+(var_14))), (((/* implicit */unsigned long long int) 5022448717158228299LL))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_6 [i_0] [i_0]))));
                        var_21 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
                    }
                    for (unsigned int i_4 = 0; i_4 < 17; i_4 += 1) 
                    {
                        var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (max((((/* implicit */unsigned long long int) arr_7 [i_0] [0U] [0U] [i_0 + 1])), (var_2))) : ((-(arr_2 [i_0 + 1] [i_0 - 1])))));
                        var_23 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (var_2) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned short)36016)) : (2102901975))))))));
                    }
                }
                /* vectorizable */
                for (unsigned short i_5 = 0; i_5 < 17; i_5 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_5] [i_5])) ? (arr_15 [(short)15] [i_5] [i_0 - 1] [i_0 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? ((+(((/* implicit */int) arr_14 [i_0] [10LL] [10LL] [i_5] [i_6] [13U])))) : (((/* implicit */int) arr_8 [i_0 + 1] [i_0] [i_0] [i_0 + 1]))));
                        var_25 = ((((/* implicit */_Bool) (-(var_11)))) ? (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) 2047U)) : (arr_10 [i_0] [15ULL] [i_5]))) : (((/* implicit */unsigned long long int) arr_9 [i_0 - 1])));
                        var_26 = ((/* implicit */unsigned short) (~(-3094984920640989874LL)));
                    }
                    var_27 = ((((/* implicit */_Bool) var_16)) ? (arr_12 [i_0 + 1] [9ULL] [i_0 - 1] [i_0 + 1]) : (arr_12 [(_Bool)1] [(_Bool)1] [i_0 + 1] [i_0 - 1]));
                }
                arr_17 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 - 1] [i_0 + 1] [i_0 + 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1] [i_0 + 1]))))) ? ((+(((/* implicit */int) (unsigned short)13087)))) : ((-(((/* implicit */int) arr_3 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                var_28 = arr_10 [i_1] [i_1] [i_0];
                /* LoopSeq 2 */
                /* vectorizable */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_8 = 3; i_8 < 15; i_8 += 1) 
                    {
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_9)))) ? (((((/* implicit */_Bool) arr_21 [(_Bool)1] [6LL] [i_7] [12LL] [13ULL])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_14 [i_0] [i_1] [(unsigned short)8] [i_8] [i_9] [10LL])))) : (((/* implicit */int) (signed char)118)))))));
                                var_30 = ((((/* implicit */int) (unsigned short)6726)) < ((+(((/* implicit */int) var_12)))));
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */long long int) (+(var_14)));
                    /* LoopSeq 1 */
                    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 3) 
                    {
                        var_32 += ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [i_0] [(_Bool)1] [i_0 - 1] [i_10] [i_0] [i_10]))));
                        arr_27 [i_10] [i_0] [i_10] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (13567939830423127571ULL) : (var_10))));
                    }
                    arr_28 [i_0] [i_1] [i_1] = ((/* implicit */long long int) arr_10 [16LL] [16LL] [i_0]);
                    var_33 = ((/* implicit */signed char) var_6);
                }
                /* vectorizable */
                for (long long int i_11 = 1; i_11 < 16; i_11 += 2) 
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 17; i_12 += 4) 
                    {
                        for (long long int i_13 = 0; i_13 < 17; i_13 += 4) 
                        {
                            {
                                var_34 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_11)) ? (120177379U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))));
                                var_35 = (((!((_Bool)1))) ? (((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0 + 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))))) : (((((/* implicit */_Bool) 6465113804954292235ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (11681036091936295799ULL))));
                            }
                        } 
                    } 
                    var_36 = ((((/* implicit */_Bool) arr_29 [i_0 - 1] [i_1] [i_11 + 1])) ? (((/* implicit */unsigned long long int) arr_11 [i_11 - 1] [i_0 - 1] [i_0] [i_0])) : (var_8));
                    var_37 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)6742)) ? (((((/* implicit */_Bool) var_16)) ? (var_1) : (549755813887LL))) : ((+(var_11)))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_14 = 0; i_14 < 16; i_14 += 4) 
    {
        for (unsigned int i_15 = 0; i_15 < 16; i_15 += 3) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_17 = 0; i_17 < 16; i_17 += 4) 
                    {
                        for (unsigned long long int i_18 = 3; i_18 < 14; i_18 += 4) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned short) var_0);
                                var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) var_13))));
                                var_40 = ((/* implicit */unsigned int) 9223372036854775808ULL);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_19 = 2; i_19 < 15; i_19 += 4) 
                    {
                        arr_54 [i_14] [i_15] [(short)9] [i_19] = ((/* implicit */unsigned char) arr_36 [10ULL] [i_15] [i_15] [i_16] [i_16] [i_16] [i_16]);
                        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (~(9223372036854775807LL))))));
                        var_42 &= ((/* implicit */unsigned short) ((arr_48 [i_19 - 1] [i_19 - 2] [3ULL] [0ULL]) ? (((/* implicit */int) arr_32 [i_19 - 1] [i_19] [i_19 - 1] [i_19 - 1] [i_19] [10LL])) : (((/* implicit */int) arr_32 [i_19 - 2] [15U] [i_19] [i_19] [i_16] [7]))));
                    }
                }
            } 
        } 
    } 
    var_43 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((/* implicit */int) (short)21106))))) < (var_1)))), (((min((var_5), (((/* implicit */unsigned int) (signed char)-119)))) * (var_15)))));
    var_44 = ((/* implicit */unsigned short) var_9);
    var_45 = ((/* implicit */_Bool) var_10);
}
