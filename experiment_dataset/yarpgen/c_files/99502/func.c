/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99502
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99502 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99502
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
    var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */long long int) var_12)) : ((-(var_1)))));
    var_14 -= ((/* implicit */_Bool) var_1);
    var_15 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))) ? (((((/* implicit */unsigned long long int) var_12)) + (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33761)))))) ? (max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) 4294967295U)) : (var_0))), (max((((/* implicit */long long int) var_11)), (var_9))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) var_4)) - (32273))))))))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_16 &= ((/* implicit */unsigned short) (-(((/* implicit */int) arr_2 [i_0] [i_0]))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 2; i_1 < 11; i_1 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_3 = 2; i_3 < 11; i_3 += 2) 
                {
                    arr_10 [i_3 + 1] [i_2] [i_2] [i_0] [i_0] = var_0;
                    arr_11 [i_0] [(short)1] [(short)1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_5 [i_1 - 1])) << (((((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_4 [(unsigned char)9])) : (((/* implicit */int) arr_2 [i_1] [i_2])))) - (51)))));
                }
                for (long long int i_4 = 4; i_4 < 11; i_4 += 3) 
                {
                    var_17 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_4 [i_1 + 1])) : (arr_9 [i_1] [i_1 + 1] [i_4 - 4] [i_4 - 2] [i_4 - 3])));
                    arr_14 [8] [8] [10ULL] [i_2] &= ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (4294967290U) : (4U)))) != (var_7)));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 2) 
                {
                    var_18 = ((/* implicit */unsigned long long int) var_6);
                    /* LoopSeq 1 */
                    for (int i_6 = 1; i_6 < 11; i_6 += 1) 
                    {
                        arr_19 [i_5] [i_5] [7ULL] [7ULL] [i_1 - 2] [5] = ((/* implicit */unsigned char) ((var_5) % (((/* implicit */long long int) (~(-12895890))))));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0] [i_1 + 1] [i_0] [i_1 + 1] [i_6 - 1] [i_1 - 2] [i_6 - 1]))) * (((20ULL) / (((/* implicit */unsigned long long int) 4294967290U))))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((var_10) > (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0] [(unsigned char)10] [i_2] [i_5] [i_5])))));
                }
                var_21 = ((/* implicit */signed char) arr_3 [1LL]);
                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1U)) ? (-1235158263) : (((/* implicit */int) (unsigned char)127))))) ? (((/* implicit */unsigned long long int) (+(var_3)))) : ((~(4ULL))))))));
                var_23 *= ((/* implicit */unsigned int) (~(var_12)));
            }
            var_24 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1 + 1] [i_1 - 2]))) / (var_9)));
            var_25 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_17 [(unsigned char)9] [(signed char)5] [i_0] [(unsigned char)9] [(unsigned char)9] [4ULL] [i_1 + 1])) | (var_0)));
        }
        /* LoopSeq 3 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((var_5) + (((/* implicit */long long int) arr_0 [i_0])))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 3) 
            {
                var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (arr_15 [(signed char)6] [(signed char)6] [i_0] [i_0] [i_0] [i_0]) : (arr_24 [0U] [i_7] [i_7] [i_7])));
                var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_0])) ? (13ULL) : (((/* implicit */unsigned long long int) arr_9 [(signed char)2] [i_7] [i_7] [i_7] [i_7]))));
            }
            for (unsigned short i_9 = 3; i_9 < 11; i_9 += 1) 
            {
                var_29 = ((/* implicit */unsigned long long int) ((int) (unsigned char)126));
                var_30 = (~(var_0));
                var_31 = ((/* implicit */long long int) arr_3 [i_9 - 2]);
                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) (+(var_5))))));
            }
            /* LoopSeq 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 3 */
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_10 - 1] [(_Bool)1] [i_10 - 1]))) : (2858579598456251448LL)));
                    /* LoopSeq 3 */
                    for (unsigned int i_12 = 3; i_12 < 8; i_12 += 3) 
                    {
                        var_34 = ((((/* implicit */_Bool) (unsigned char)129)) ? (var_3) : (((/* implicit */int) arr_1 [i_10 - 1] [i_0])));
                        var_35 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) 18446744073709551595ULL)))))));
                        var_36 = ((/* implicit */int) 5U);
                    }
                    for (short i_13 = 0; i_13 < 12; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */long long int) (((((-(((/* implicit */int) (short)25222)))) + (2147483647))) >> (((((((/* implicit */_Bool) (unsigned char)149)) ? (((/* implicit */int) (short)-25205)) : (((/* implicit */int) (unsigned short)40112)))) + (25222)))));
                        var_38 |= ((/* implicit */int) var_8);
                    }
                    for (long long int i_14 = 2; i_14 < 8; i_14 += 2) 
                    {
                        var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)4] [i_14] [i_14] [i_10 - 1]))) : (5U))))));
                        arr_42 [i_7] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) 966619253)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_10 - 1]))) : (4294967282U)));
                        var_40 = (~(4294967295U));
                        var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) arr_0 [i_10 - 1]))));
                        var_42 = ((/* implicit */unsigned short) ((var_12) + (((/* implicit */int) arr_13 [i_0] [i_7] [i_10 - 1] [i_7]))));
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_43 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_7]))));
                    var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10])) : (var_11)))))))));
                    /* LoopSeq 4 */
                    for (signed char i_16 = 0; i_16 < 12; i_16 += 4) 
                    {
                        arr_47 [i_0] [i_0] [i_0] [i_15] [i_7] = ((/* implicit */unsigned int) var_11);
                        var_45 = ((/* implicit */unsigned int) var_9);
                        var_46 = ((/* implicit */unsigned char) (~((~(((/* implicit */int) arr_29 [i_0] [i_0] [i_0] [i_0]))))));
                        arr_48 [i_16] [i_16] [10LL] [i_7] [(unsigned char)5] [i_7] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_40 [i_0] [i_7] [i_10 - 1] [i_10 - 1] [i_16] [i_16]))) | (arr_15 [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10 - 1])));
                    }
                    for (unsigned long long int i_17 = 2; i_17 < 11; i_17 += 2) 
                    {
                        var_47 = ((/* implicit */signed char) var_12);
                        arr_51 [i_15] [i_7] [i_7] [i_15] = ((/* implicit */unsigned int) ((int) ((_Bool) 3587676357U)));
                    }
                    for (signed char i_18 = 1; i_18 < 8; i_18 += 1) 
                    {
                        var_48 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_32 [i_18 + 4] [i_18] [i_18 + 2] [i_18 + 4] [(unsigned short)7] [i_18] [i_18]))));
                        var_49 = ((/* implicit */long long int) ((unsigned short) arr_37 [i_18 + 1] [i_7] [(unsigned char)8] [9LL] [i_18] [i_10 - 1] [i_15]));
                    }
                    for (int i_19 = 0; i_19 < 12; i_19 += 4) 
                    {
                        var_50 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)12))) | (3083471914725768559LL))));
                        arr_58 [i_0] [i_7] [i_10] [i_15] [i_19] [2U] = ((((((/* implicit */_Bool) 15752817213902089137ULL)) ? (((/* implicit */int) arr_7 [i_0])) : (((/* implicit */int) (short)32767)))) / (arr_9 [i_0] [i_7] [i_7] [i_15] [i_15]));
                        var_51 &= ((/* implicit */signed char) 768U);
                        var_52 = ((/* implicit */short) min((var_52), (((/* implicit */short) (+(2000339102U))))));
                        var_53 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_29 [i_19] [i_10] [i_10] [i_0])) / (arr_9 [(unsigned short)11] [i_10 - 1] [(unsigned short)11] [i_10 - 1] [i_19])));
                    }
                }
                for (unsigned char i_20 = 0; i_20 < 12; i_20 += 4) 
                {
                    var_54 = ((/* implicit */unsigned short) ((((var_8) % (224ULL))) | (((((/* implicit */unsigned long long int) 4294967294U)) / (20ULL)))));
                    var_55 = ((/* implicit */long long int) ((arr_6 [i_0] [i_7] [i_7]) / (((/* implicit */int) var_4))));
                }
                var_56 = ((/* implicit */long long int) (-(arr_21 [i_7] [i_10 - 1])));
                var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) var_0)) ? (arr_21 [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_52 [9LL] [(signed char)8] [(signed char)11]))))))));
                var_58 = ((/* implicit */unsigned short) min((var_58), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (arr_9 [4] [i_7] [i_10 - 1] [1ULL] [i_10 - 1]) : (arr_9 [3LL] [(unsigned char)9] [i_10] [i_10 - 1] [i_10 - 1]))))));
                arr_61 [i_0] [i_7] = (+(4294967290U));
            }
            for (unsigned long long int i_21 = 2; i_21 < 10; i_21 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_22 = 0; i_22 < 12; i_22 += 1) 
                {
                    var_59 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)27862))) == (41ULL)));
                    var_60 &= ((/* implicit */int) 2693926859807462503ULL);
                }
                var_61 = (+(((/* implicit */int) arr_5 [i_0])));
            }
            arr_67 [i_7] [i_7] = ((/* implicit */signed char) ((arr_38 [i_0] [i_7] [i_7] [(unsigned short)6] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_7])))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_62 -= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_53 [i_23] [i_23] [i_23] [i_23] [3ULL] [i_0] [(unsigned char)11]))));
            arr_70 [i_23] [i_23] = ((/* implicit */short) (~(var_2)));
        }
        for (signed char i_24 = 3; i_24 < 11; i_24 += 3) 
        {
            var_63 = ((/* implicit */_Bool) (~(18446744073709551574ULL)));
            var_64 = ((/* implicit */_Bool) arr_16 [i_24 - 2] [i_24 - 2] [1LL] [(_Bool)1]);
            var_65 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_53 [i_0] [i_0] [(unsigned char)4] [i_0] [i_0] [i_0] [i_0]))));
        }
    }
    for (unsigned long long int i_25 = 0; i_25 < 20; i_25 += 4) 
    {
        arr_75 [i_25] = ((/* implicit */int) ((((/* implicit */_Bool) (~(arr_73 [i_25] [i_25])))) ? (((((/* implicit */_Bool) arr_73 [i_25] [i_25])) ? (((/* implicit */unsigned long long int) var_12)) : (arr_74 [i_25]))) : (arr_74 [i_25])));
        var_66 = ((/* implicit */unsigned int) max((var_66), (((/* implicit */unsigned int) var_0))));
    }
    for (long long int i_26 = 0; i_26 < 19; i_26 += 4) 
    {
        arr_80 [i_26] = ((/* implicit */unsigned short) ((var_2) * (max((((((/* implicit */unsigned long long int) 648391049U)) + (var_7))), (((/* implicit */unsigned long long int) arr_78 [i_26]))))));
        var_67 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) arr_74 [(unsigned short)17])) ? (((/* implicit */unsigned long long int) var_5)) : (var_8))) : (((/* implicit */unsigned long long int) ((arr_77 [i_26] [i_26]) ^ (var_0)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_74 [i_26])) ? (((/* implicit */int) var_6)) : (((((/* implicit */int) (unsigned short)38768)) + (((/* implicit */int) arr_79 [i_26] [i_26])))))))));
    }
}
