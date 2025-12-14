/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96449
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
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 18; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min(((+(var_3))), (-699701917)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0])))) : (arr_2 [i_0])))) : (min(((~(-11LL))), (((((/* implicit */_Bool) arr_3 [i_0])) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 22; i_2 += 2) 
            {
                {
                    var_16 = ((/* implicit */unsigned short) arr_6 [(short)12] [i_0] [i_0] [2]);
                    var_17 &= ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_2])) | (((/* implicit */int) ((short) var_14)))));
                    var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) 2057957611U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-7003))) : (2139318984U))))));
                }
            } 
        } 
        arr_8 [12LL] |= ((/* implicit */int) ((short) (short)-7022));
        arr_9 [i_0] = ((/* implicit */_Bool) min((min((((/* implicit */unsigned int) (short)7022)), (arr_2 [i_0]))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned char) var_12))))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 4) 
        {
            var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) 1374186046524982538LL)) ? (var_4) : (arr_6 [i_0] [i_0] [(short)11] [i_0 + 2])))) != (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) 907077196)) : (arr_5 [i_3 + 1] [i_0])))));
            var_20 = ((/* implicit */int) ((((((/* implicit */_Bool) 72057525318451200LL)) ? (9223372036854775805LL) : (((/* implicit */long long int) ((/* implicit */int) (short)6799))))) >= (((/* implicit */long long int) ((arr_2 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)7))))))));
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 22; i_4 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        }
        /* vectorizable */
        for (short i_5 = 2; i_5 < 21; i_5 += 4) 
        {
            var_23 += ((/* implicit */short) (~(((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) (unsigned char)228))))));
            var_24 = ((/* implicit */long long int) ((arr_12 [i_0]) | (arr_12 [i_0])));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 22; i_6 += 4) 
            {
                var_25 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_0 - 1] [i_5])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))));
                var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (-(0U)))) - (((arr_18 [i_0] [i_5] [i_6]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (short i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */short) ((signed char) var_10));
                            var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [(signed char)7] [i_0 - 2] [i_0])) ? (arr_6 [i_0 - 2] [i_0 - 2] [i_0 + 4] [i_0 - 1]) : (arr_6 [i_0] [i_0] [i_0 - 2] [i_0])));
                            var_29 = ((/* implicit */signed char) ((long long int) (signed char)-86));
                            arr_26 [i_8] [i_5] [i_6] [i_7] [i_7] [i_8] [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) var_14)) + (2147483647))) << (((((/* implicit */int) (unsigned short)28839)) - (28839)))));
                        }
                    } 
                } 
                var_30 = ((/* implicit */_Bool) (-(var_5)));
                var_31 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_19 [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0 - 2]))) : (705770509U)));
            }
            /* LoopSeq 2 */
            for (short i_9 = 1; i_9 < 21; i_9 += 2) 
            {
                arr_30 [i_5] [i_5] &= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)13))));
                arr_31 [i_0] [i_5] [i_0] = ((long long int) arr_12 [i_0]);
            }
            for (unsigned int i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                var_32 = ((/* implicit */long long int) ((short) arr_10 [i_0]));
                var_33 = ((/* implicit */_Bool) min((var_33), (((((/* implicit */_Bool) 1860316471U)) && (((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_5] [i_5])) % (((/* implicit */int) var_12)))))))));
                /* LoopSeq 1 */
                for (short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    arr_36 [i_0] = ((/* implicit */int) (-(((unsigned int) var_11))));
                    arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_0]))));
                    var_34 = ((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0] [i_0]))));
                    var_35 = ((/* implicit */short) ((arr_23 [i_0 + 2] [i_0] [i_11] [7LL]) <= (((/* implicit */unsigned int) (~(-1))))));
                }
            }
            /* LoopSeq 1 */
            for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
            {
                arr_40 [i_12] [i_0] [(_Bool)1] = ((/* implicit */unsigned int) (!(((((/* implicit */_Bool) arr_32 [6U])) && (((/* implicit */_Bool) var_1))))));
                /* LoopSeq 3 */
                for (unsigned int i_13 = 0; i_13 < 22; i_13 += 3) 
                {
                    var_36 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_42 [i_0] [i_12] [(short)11] [i_0]))))) % ((~(var_10)))));
                    arr_43 [i_12] &= ((/* implicit */unsigned char) -1855887676);
                    var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(unsigned short)12] [i_5 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned char)3))))) ? (((((/* implicit */_Bool) arr_38 [8LL] [i_5] [i_13])) ? (((/* implicit */long long int) -767277566)) : (var_11))) : (((/* implicit */long long int) arr_35 [i_0] [i_5] [i_13] [i_5 - 1])))))));
                    var_38 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (signed char)84)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_5]))) : (arr_41 [i_13] [i_5]))));
                }
                for (long long int i_14 = 1; i_14 < 20; i_14 += 2) 
                {
                    var_39 &= ((/* implicit */long long int) ((unsigned int) arr_22 [i_5] [i_5]));
                    arr_47 [i_0] [i_0] = (~(((/* implicit */int) (unsigned char)16)));
                }
                for (long long int i_15 = 0; i_15 < 22; i_15 += 3) 
                {
                    var_40 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-16633)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_0] [9]))))) : (arr_24 [i_0] [i_0 + 4] [i_0 + 4] [i_0 - 1] [i_0 + 4] [i_5 + 1] [16U])));
                    arr_51 [i_0] [i_0] [i_0] [19] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_15] [i_0])) ? (((/* implicit */int) arr_11 [i_0 + 4] [i_0])) : (((/* implicit */int) arr_0 [i_0 - 1]))));
                    arr_52 [i_0] [i_5] [i_0] [i_12] [i_15] = ((/* implicit */long long int) (short)-419);
                }
            }
        }
    }
    /* vectorizable */
    for (signed char i_16 = 3; i_16 < 21; i_16 += 2) 
    {
        /* LoopNest 2 */
        for (short i_17 = 4; i_17 < 20; i_17 += 2) 
        {
            for (int i_18 = 4; i_18 < 22; i_18 += 4) 
            {
                {
                    var_41 = ((((/* implicit */_Bool) arr_53 [i_17 - 4])) ? (((/* implicit */int) arr_53 [i_17 - 3])) : (((/* implicit */int) arr_53 [i_17 - 4])));
                    /* LoopNest 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        for (long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) ((unsigned short) arr_63 [i_16 - 3] [i_17] [i_18 - 2] [i_16 - 2]));
                                arr_68 [i_20] [i_20] = ((/* implicit */short) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) arr_53 [i_16])))) ? ((~(((/* implicit */int) var_14)))) : (((int) (signed char)-25))));
                                var_43 = arr_54 [i_16] [i_19];
                                var_44 = ((/* implicit */signed char) min((var_44), (((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) arr_54 [i_20] [(short)12])) != (arr_60 [i_16])))))))));
                            }
                        } 
                    } 
                    arr_69 [i_16] [i_17] [20U] = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) 13554154118814779659ULL))) != (arr_60 [i_18 - 4])));
                }
            } 
        } 
        var_45 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) var_5)) - (-8431543585720115733LL)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_61 [i_16 + 1] [i_16]))) : (-1366255416666532563LL)));
    }
    for (short i_21 = 1; i_21 < 23; i_21 += 4) 
    {
        var_46 = ((/* implicit */int) 818128402218745059LL);
        /* LoopNest 3 */
        for (signed char i_22 = 0; i_22 < 25; i_22 += 4) 
        {
            for (unsigned int i_23 = 2; i_23 < 24; i_23 += 2) 
            {
                for (unsigned int i_24 = 1; i_24 < 24; i_24 += 2) 
                {
                    {
                        var_47 = min((min((var_10), (arr_74 [i_24] [i_23 - 2] [i_21 + 1]))), (((/* implicit */long long int) min((((/* implicit */int) (signed char)24)), ((~(-2147483641)))))));
                        arr_82 [i_21] [(_Bool)1] [i_23 - 1] [i_24] = ((/* implicit */unsigned char) arr_70 [(short)10] [i_21]);
                        var_48 = (+(((long long int) arr_74 [i_21 + 1] [i_24 + 1] [(signed char)15])));
                    }
                } 
            } 
        } 
        var_49 = ((/* implicit */int) ((max((min((arr_79 [i_21] [i_21 + 1] [i_21] [i_21]), (-8412119099216329673LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 6078904029321923158LL)) ? (((/* implicit */int) (unsigned short)11518)) : (((/* implicit */int) (_Bool)1))))))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-28973)) && (((/* implicit */_Bool) arr_80 [i_21] [7] [(short)2] [i_21] [7] [i_21]))))))));
        var_50 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_70 [(signed char)15] [i_21]), ((~(((/* implicit */int) arr_78 [i_21]))))))) ? (((/* implicit */unsigned long long int) min((8044117595694686108LL), (((/* implicit */long long int) (-(var_4))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 102786890)) ? (((/* implicit */long long int) -6)) : (arr_79 [i_21] [i_21] [i_21] [i_21])))) ? (((((/* implicit */_Bool) arr_76 [i_21] [i_21 - 1] [i_21] [i_21 - 1])) ? (((/* implicit */unsigned long long int) 1386459211029748730LL)) : (var_13))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_77 [i_21] [i_21]))))))))));
    }
    var_51 = ((/* implicit */unsigned short) -1LL);
    var_52 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) ((((/* implicit */int) var_9)) / (-170212706)))))) ? (-9223372036854775785LL) : (((/* implicit */long long int) -1078202602))));
}
