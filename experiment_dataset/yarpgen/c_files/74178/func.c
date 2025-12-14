/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74178
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */unsigned short) max((2348086750U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */int) (short)24576)) : (((/* implicit */int) (short)24575)))))));
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (short)0)) ? ((+(((/* implicit */int) ((unsigned char) (_Bool)1))))) : (min((((/* implicit */int) (unsigned char)7)), (arr_0 [(signed char)16])))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 11; i_2 += 4) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            {
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(var_10))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (long long int i_4 = 0; i_4 < 12; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)83)) && ((_Bool)1)));
                    var_20 -= ((/* implicit */unsigned char) ((arr_0 [9ULL]) % (((/* implicit */int) ((var_7) != (((/* implicit */int) (_Bool)1)))))));
                }
                for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    arr_17 [i_2] [i_3] [i_5] = var_1;
                    /* LoopNest 2 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        for (int i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_1)) ? (arr_13 [i_3] [i_5] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_7]))))), (((/* implicit */unsigned int) (((_Bool)1) ? (-570498171) : (((/* implicit */int) (short)-10399)))))))) ? (var_9) : (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-65)))))));
                                var_22 = ((/* implicit */int) max((var_22), (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (unsigned short)16845)) : (max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_10 [4U])))), (((/* implicit */int) min((((/* implicit */short) arr_18 [i_2] [i_2] [i_2])), ((short)9889))))))))));
                            }
                        } 
                    } 
                    arr_24 [(_Bool)0] [i_5] |= ((/* implicit */short) min((max((arr_0 [i_3]), (((/* implicit */int) (!((_Bool)1)))))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)7))))));
                }
                for (short i_8 = 2; i_8 < 10; i_8 += 2) /* same iter space */
                {
                    var_23 = ((((/* implicit */int) (signed char)73)) / (((/* implicit */int) (unsigned char)13)));
                    arr_27 [i_8] [i_8] [i_8] [5] = ((/* implicit */long long int) 4294967293U);
                }
                for (short i_9 = 2; i_9 < 10; i_9 += 2) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
                    var_25 = ((/* implicit */unsigned char) ((((long long int) (short)-24575)) + (((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_11)))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        arr_35 [i_3] &= ((((/* implicit */int) (short)20371)) ^ (((((/* implicit */int) min((((/* implicit */unsigned short) (signed char)-75)), (arr_30 [i_2] [i_3] [i_9])))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [(short)11]))))))));
                        var_26 = (((-(((((/* implicit */int) (signed char)30)) + (((/* implicit */int) var_8)))))) - ((-(((/* implicit */int) ((_Bool) var_4))))));
                    }
                    var_27 = ((/* implicit */int) ((_Bool) (((!(((/* implicit */_Bool) arr_21 [i_2 + 1] [i_2] [i_9 - 1] [i_2])))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) : (-4165844480426540811LL))));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        var_28 = ((/* implicit */signed char) ((unsigned char) arr_22 [i_11] [i_11] [(unsigned char)0] [i_11] [i_11] [i_11]));
        var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_6 [9ULL])))));
        /* LoopSeq 4 */
        for (unsigned short i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(((/* implicit */int) (short)0)))))));
            /* LoopNest 2 */
            for (int i_13 = 3; i_13 < 10; i_13 += 2) 
            {
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            var_31 = ((/* implicit */int) (unsigned char)167);
                            var_32 |= ((/* implicit */int) ((((/* implicit */long long int) arr_32 [i_11] [i_12] [i_13] [i_13] [i_15])) - (4165844480426540811LL)));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_33 = ((/* implicit */short) ((long long int) arr_41 [i_16] [i_14 - 1] [i_12] [i_11]));
                            var_34 -= ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (3304157788U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_14] [i_14 - 1] [i_14] [i_14] [i_14] [i_11]))));
                            var_35 = ((/* implicit */long long int) min((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) -1039054370)))))));
                        }
                        for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                        {
                            var_36 *= ((/* implicit */unsigned int) arr_0 [22ULL]);
                            arr_51 [(_Bool)1] [i_12] [i_13 - 1] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)45)) : (1763230196)));
                            arr_52 [i_11] [i_14] [i_17] = ((/* implicit */_Bool) (~(var_6)));
                        }
                        var_37 += ((/* implicit */unsigned long long int) (_Bool)1);
                        var_38 = ((/* implicit */int) max((var_38), (((/* implicit */int) (~(var_9))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_18 = 1; i_18 < 9; i_18 += 1) 
                        {
                            var_39 = ((/* implicit */unsigned long long int) (short)-23503);
                            arr_55 [i_11] [i_12] [i_13] [i_14] [i_14 - 1] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_32 [3] [i_12] [i_12] [i_12] [i_12]) : (arr_32 [i_11] [i_12] [i_13] [i_14 - 1] [(short)4])));
                            arr_56 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) arr_31 [i_13 + 1] [i_13 - 3] [i_14 - 1] [i_18 + 2]);
                        }
                    }
                } 
            } 
        }
        for (int i_19 = 0; i_19 < 11; i_19 += 2) 
        {
            var_40 = ((/* implicit */long long int) (-(((((/* implicit */int) var_14)) / (1763230178)))));
            arr_60 [i_11] [i_19] = ((/* implicit */unsigned short) 2147483647);
            /* LoopNest 2 */
            for (int i_20 = 2; i_20 < 9; i_20 += 4) 
            {
                for (long long int i_21 = 0; i_21 < 11; i_21 += 1) 
                {
                    {
                        arr_69 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) ((((1785646008U) / (arr_66 [i_11] [i_19] [i_20] [(signed char)10]))) ^ (((/* implicit */unsigned int) var_15))));
                        var_41 -= ((/* implicit */unsigned long long int) var_7);
                    }
                } 
            } 
        }
        for (unsigned long long int i_22 = 1; i_22 < 9; i_22 += 2) /* same iter space */
        {
            var_42 = ((/* implicit */unsigned short) var_5);
            var_43 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)20371)) && (((/* implicit */_Bool) arr_54 [i_22 - 1] [i_22 - 1]))));
            var_44 = ((/* implicit */_Bool) ((int) arr_26 [i_22] [i_11] [i_22 - 1]));
        }
        for (unsigned long long int i_23 = 1; i_23 < 9; i_23 += 2) /* same iter space */
        {
            var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (((/* implicit */int) ((_Bool) arr_1 [i_23]))) : (((/* implicit */int) (((_Bool)1) && (arr_70 [i_11] [i_11] [i_11]))))));
            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        }
        var_47 = ((/* implicit */short) (~((+(((/* implicit */int) arr_40 [i_11] [i_11]))))));
        var_48 = ((/* implicit */int) ((((/* implicit */long long int) (-(3147985678U)))) != (arr_54 [i_11] [i_11])));
    }
    var_49 = ((/* implicit */int) var_4);
}
