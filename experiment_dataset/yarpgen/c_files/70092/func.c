/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70092
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(13ULL)))) ? ((~(((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1)))))) : (((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((short) var_6)))))));
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 18446744073709551594ULL)) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_10))))) : (((var_12) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (max((((/* implicit */long long int) var_1)), (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (signed char)44)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            arr_6 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (~(arr_5 [i_0] [i_0] [i_0]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)2))))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (max((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (14ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) var_3)))))))));
            arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_1])) * ((-(((/* implicit */int) var_0))))));
            var_15 *= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))));
        }
        for (unsigned short i_2 = 1; i_2 < 15; i_2 += 4) 
        {
            arr_11 [i_2] [i_2 + 2] = ((/* implicit */unsigned long long int) 1073741696);
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                var_16 *= ((/* implicit */signed char) ((unsigned int) var_6));
                arr_15 [i_0] [i_2] = ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_2] [i_2 - 1] [i_2] [i_2])) : (((var_0) ? (((/* implicit */int) (unsigned char)6)) : (((/* implicit */int) var_3)))));
            }
            for (unsigned long long int i_4 = 1; i_4 < 17; i_4 += 4) 
            {
                arr_19 [i_0] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) arr_2 [i_2] [i_2])) : (((/* implicit */int) min(((unsigned char)237), (arr_9 [i_4]))))))) / (((((/* implicit */_Bool) var_4)) ? (-415082853439496041LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6)))))));
                /* LoopSeq 1 */
                for (unsigned char i_5 = 0; i_5 < 18; i_5 += 3) 
                {
                    var_17 = ((/* implicit */int) max((var_17), (((((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), ((signed char)0)))) ? ((~(1196263848))) : (((/* implicit */int) (unsigned char)0)))) * (((/* implicit */int) (signed char)34))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_6 = 2; i_6 < 17; i_6 += 2) 
                    {
                        arr_25 [i_0] [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((min((((/* implicit */int) var_11)), (arr_21 [i_5]))) / (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_2 [i_0] [i_6])) : (((/* implicit */int) (unsigned char)2)))))) * ((~(((/* implicit */int) var_2))))));
                        arr_26 [i_0] [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) (signed char)-119)) ? (((/* implicit */int) (short)19)) : (((/* implicit */int) (unsigned char)19)))) : (((/* implicit */int) (signed char)31)))) * (((var_5) / (((/* implicit */int) ((signed char) var_8)))))));
                    }
                    for (long long int i_7 = 0; i_7 < 18; i_7 += 4) 
                    {
                        arr_29 [i_2] [i_2] [i_2] [i_5] [i_2] = ((/* implicit */unsigned short) var_0);
                        var_18 = max((((signed char) (signed char)19)), ((signed char)118));
                        var_19 += ((/* implicit */unsigned int) ((18446744073709551603ULL) * (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) var_4)))))))));
                    }
                    arr_30 [i_5] [i_2] [i_2] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_2))))) ? (((int) ((((/* implicit */int) arr_4 [i_0] [i_5])) * (((/* implicit */int) var_1))))) : (((/* implicit */int) arr_20 [i_0]))));
                    arr_31 [i_2] [i_5] [i_0] [i_2 + 1] [i_0] [i_2] = (signed char)119;
                    arr_32 [i_0] [i_0] [i_2] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) * (arr_13 [i_5] [i_4] [i_2 + 1] [i_0]))))) * (((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)64)))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_0])))))))));
                }
                var_20 += ((/* implicit */unsigned char) ((var_1) ? (min((((/* implicit */long long int) arr_23 [i_4] [i_2] [i_4] [i_0] [i_2 - 1] [i_0] [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_2 + 3] [i_0]))) / (var_9))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)210)) * (((/* implicit */int) var_8))))) ? (((((/* implicit */int) (signed char)-115)) * (((/* implicit */int) var_0)))) : (((/* implicit */int) ((unsigned short) var_9))))))));
                var_21 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
            }
        }
    }
    for (signed char i_8 = 0; i_8 < 18; i_8 += 2) /* same iter space */
    {
        arr_36 [i_8] [i_8] = ((/* implicit */unsigned char) (~(((((/* implicit */long long int) ((/* implicit */int) (unsigned char)219))) / (var_9)))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_9 = 1; i_9 < 17; i_9 += 3) 
        {
            var_22 *= ((/* implicit */unsigned short) (~(arr_18 [i_9] [i_9] [i_9 - 1] [i_9])));
            arr_39 [i_8] = ((/* implicit */unsigned char) ((arr_34 [i_9 - 1] [i_9 + 1]) * (((/* implicit */unsigned int) var_5))));
            arr_40 [i_9 + 1] [i_8] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_8] [i_8] [i_8])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) | (((/* implicit */int) var_6))))) : (18446744073709551610ULL)));
            var_23 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) var_1)) * (((/* implicit */int) (unsigned char)17))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (int i_10 = 0; i_10 < 18; i_10 += 4) 
        {
            arr_44 [i_8] = ((/* implicit */unsigned short) 13ULL);
            /* LoopSeq 1 */
            for (long long int i_11 = 4; i_11 < 16; i_11 += 3) 
            {
                var_24 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (arr_47 [i_8] [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_46 [i_8] [i_10] [i_11 - 1])))));
                arr_48 [i_8] [i_10] [i_10] [i_8] |= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) var_4))))) / (var_9)));
                arr_49 [i_8] [i_8] [i_10] [i_11] = ((/* implicit */signed char) var_1);
            }
            arr_50 [i_8] [i_8] [i_10] = ((/* implicit */int) ((short) arr_4 [i_8] [i_10]));
        }
        for (unsigned char i_12 = 3; i_12 < 15; i_12 += 3) 
        {
            arr_54 [i_8] = ((/* implicit */unsigned int) var_9);
            arr_55 [i_8] [i_8] [i_12] = ((/* implicit */unsigned short) (~(((/* implicit */int) min(((signed char)-118), (((/* implicit */signed char) (_Bool)1)))))));
            /* LoopSeq 1 */
            for (int i_13 = 1; i_13 < 16; i_13 += 3) 
            {
                var_25 = ((/* implicit */int) ((max((18ULL), (((/* implicit */unsigned long long int) arr_56 [i_13 - 1] [i_13] [i_13 + 1])))) * (((((unsigned long long int) arr_52 [i_8])) * (((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) arr_35 [i_8])) : (((/* implicit */int) arr_46 [i_8] [i_8] [i_8])))))))));
                arr_58 [i_13] [i_12] [i_8] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((-73596180) / (((/* implicit */int) (unsigned short)54385))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) ((((/* implicit */int) var_0)) * (((/* implicit */int) arr_53 [i_8] [i_8] [i_13]))))))) : (var_9)));
                /* LoopSeq 2 */
                /* vectorizable */
                for (signed char i_14 = 2; i_14 < 16; i_14 += 3) /* same iter space */
                {
                    arr_62 [i_13] [i_12 + 1] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 2785801214U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (13ULL)))));
                    arr_63 [i_13] [i_12] = ((/* implicit */unsigned char) arr_34 [i_8] [i_12 + 3]);
                    arr_64 [i_13] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_34 [i_14 + 2] [i_14 + 1]))));
                    /* LoopSeq 4 */
                    for (int i_15 = 1; i_15 < 14; i_15 += 3) /* same iter space */
                    {
                        arr_68 [i_8] [i_13] [i_15] = ((unsigned char) ((((/* implicit */int) var_4)) * (((/* implicit */int) var_8))));
                        arr_69 [i_8] [i_13] [i_12] [i_12] [i_15] = ((/* implicit */unsigned int) var_6);
                        arr_70 [i_8] [i_8] [i_8] [i_8] [i_13] [i_13] = arr_45 [i_12 + 3] [i_12] [i_8];
                    }
                    for (int i_16 = 1; i_16 < 14; i_16 += 3) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned short) 6ULL);
                        arr_74 [i_8] [i_12 - 2] [i_13] [i_13] [i_16] = ((/* implicit */signed char) ((int) ((-504066800) / (((/* implicit */int) var_11)))));
                    }
                    for (unsigned short i_17 = 0; i_17 < 18; i_17 += 4) 
                    {
                        arr_77 [i_8] [i_13] [i_14] [i_17] = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_72 [i_8] [i_12 + 2] [i_8] [i_14] [i_12 + 2])) ? (((/* implicit */int) arr_46 [i_12] [i_13] [i_14 - 1])) : (((/* implicit */int) var_7)))));
                        arr_78 [i_17] [i_12] [i_13] [i_13] [i_17] = ((/* implicit */unsigned char) ((int) (unsigned short)50602));
                        arr_79 [i_8] [i_12] [i_13] [i_8] [i_17] [i_17] |= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_22 [i_13 + 1] [i_13 + 1] [i_14 - 2] [i_14] [i_14]))) / ((~(var_9)))));
                        var_27 *= ((/* implicit */unsigned int) ((unsigned short) arr_51 [i_13 - 1]));
                        arr_80 [i_12 - 2] [i_13] [i_13] [i_13] [i_12 - 2] [i_12 - 2] [i_8] = ((arr_65 [i_8] [i_12] [i_13] [i_14 + 1] [i_17]) ? (((/* implicit */int) arr_71 [i_8] [i_12 - 3] [i_12 - 3] [i_14] [i_14])) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned char)2)) : (((/* implicit */int) var_10)))));
                    }
                    for (signed char i_18 = 0; i_18 < 18; i_18 += 3) 
                    {
                        arr_84 [i_8] [i_13] [i_13] [i_14] [i_14] [i_18] [i_12 - 3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_33 [i_12 + 3]))));
                        var_28 = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                        arr_85 [i_8] [i_8] [i_8] [i_13] [i_18] = arr_14 [i_13 + 2] [i_14 - 2];
                        arr_86 [i_13] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_82 [i_8] [i_8] [i_8])) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) arr_14 [i_13 + 1] [i_14 - 2]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 4; i_19 < 17; i_19 += 3) 
                    {
                        arr_89 [i_8] [i_13] [i_13] [i_13] [i_14] [i_19] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_81 [i_19 - 1] [i_13 - 1] [i_13] [i_13 - 1] [i_8] [i_8])) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_14]))) : (arr_18 [i_8] [i_8] [i_12] [i_14]))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) / (((/* implicit */int) var_11)))))));
                        arr_90 [i_8] [i_12] [i_13] [i_13] [i_13] [i_14] [i_19] = ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_11)));
                        arr_91 [i_13] [i_13] [i_13] [i_13] [i_8] = ((/* implicit */unsigned char) var_5);
                        var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_8] [i_12 + 1] [i_13 + 1])) ? (((long long int) arr_88 [i_8] [i_12] [i_13] [i_14] [i_19])) : (((/* implicit */long long int) (~(2634664335U))))));
                    }
                    for (signed char i_20 = 3; i_20 < 16; i_20 += 3) 
                    {
                        arr_94 [i_8] [i_13] [i_13] [i_13] [i_20 - 1] = ((/* implicit */short) (signed char)127);
                        arr_95 [i_8] [i_8] [i_13] [i_13] [i_14] [i_20] = (~(arr_60 [i_12 - 3] [i_13]));
                    }
                }
                /* vectorizable */
                for (signed char i_21 = 2; i_21 < 16; i_21 += 3) /* same iter space */
                {
                    arr_99 [i_8] [i_8] [i_8] [i_13] = (~(((((/* implicit */_Bool) arr_21 [i_8])) ? (((/* implicit */int) arr_46 [i_8] [i_13] [i_13])) : (((/* implicit */int) arr_61 [i_13 + 2] [i_12 + 1] [i_13] [i_21] [i_13])))));
                    arr_100 [i_13] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)2)) * (((/* implicit */int) var_10))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) : (((((/* implicit */_Bool) (short)32767)) ? (4069223502039733819ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))));
                    arr_101 [i_8] [i_12] [i_13] = ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)59353)))) * ((~(((/* implicit */int) var_8)))));
                }
            }
        }
    }
    for (signed char i_22 = 0; i_22 < 18; i_22 += 2) /* same iter space */
    {
        var_30 *= ((((/* implicit */_Bool) (unsigned char)235)) ? (((unsigned int) ((-2142563843) / (((/* implicit */int) (short)5697))))) : (((((/* implicit */_Bool) ((unsigned int) arr_43 [i_22]))) ? (max((var_12), (((/* implicit */unsigned int) arr_4 [i_22] [i_22])))) : (((/* implicit */unsigned int) arr_21 [i_22])))));
        arr_106 [i_22] = ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_38 [i_22] [i_22]))))) * (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_12))));
        var_31 += (~(((unsigned int) arr_41 [i_22] [i_22])));
    }
    /* vectorizable */
    for (signed char i_23 = 0; i_23 < 18; i_23 += 2) /* same iter space */
    {
        arr_110 [i_23] [i_23] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_41 [i_23] [i_23]))));
        var_32 += ((/* implicit */unsigned short) (~(((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (signed char)(-127 - 1)))))));
        arr_111 [i_23] = ((/* implicit */unsigned char) ((short) (~(((/* implicit */int) var_4)))));
    }
}
