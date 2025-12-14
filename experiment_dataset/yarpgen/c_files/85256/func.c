/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85256
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_2 [i_0] = var_12;
        /* LoopSeq 2 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            var_18 += ((/* implicit */unsigned char) ((arr_4 [i_0]) * (((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_4 [(short)14])))));
            var_19 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_13)) ? (18446744073709551601ULL) : (var_10)));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_2] [i_1] [i_0] = ((/* implicit */short) (((~(var_5))) <= (((/* implicit */long long int) (~(var_8))))));
                arr_9 [i_0] [i_1] [i_2] [i_2] = -1883364473;
                arr_10 [i_1] [i_1] = ((/* implicit */unsigned short) (-(-1883364479)));
            }
            arr_11 [i_1] [i_0] = ((/* implicit */short) arr_6 [i_0] [i_0] [i_0]);
        }
        for (unsigned long long int i_3 = 4; i_3 < 24; i_3 += 2) 
        {
            arr_14 [14] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_0] [(short)17] [i_3]))));
            arr_15 [i_0] = ((/* implicit */unsigned char) var_15);
        }
        /* LoopNest 3 */
        for (short i_4 = 0; i_4 < 25; i_4 += 1) 
        {
            for (int i_5 = 1; i_5 < 24; i_5 += 3) 
            {
                for (unsigned char i_6 = 1; i_6 < 24; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */int) var_15);
                        arr_24 [23ULL] [i_4] [i_5 + 1] [23ULL] = ((/* implicit */short) ((((((/* implicit */int) arr_22 [i_0] [i_4] [i_5] [i_5])) - (((/* implicit */int) (signed char)2)))) <= (((/* implicit */int) arr_6 [i_5 - 1] [i_6 + 1] [i_6 - 1]))));
                        /* LoopSeq 4 */
                        for (int i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            arr_27 [i_0] [i_4] [i_5] [i_7] [i_7] = ((/* implicit */long long int) arr_0 [i_5 + 1]);
                            arr_28 [i_7] = ((/* implicit */short) (~(((/* implicit */int) ((signed char) 1130847032U)))));
                            arr_29 [i_4] [i_7] [i_4] [i_4] [i_4] = ((/* implicit */unsigned int) arr_17 [i_0] [i_0]);
                        }
                        for (signed char i_8 = 2; i_8 < 24; i_8 += 1) 
                        {
                            arr_33 [i_5] [i_4] [i_5] [i_6] [i_8 - 2] [i_6 + 1] [i_6] = ((/* implicit */int) ((unsigned char) (!(((/* implicit */_Bool) arr_20 [i_0] [i_0])))));
                            var_21 = ((/* implicit */short) ((((/* implicit */int) (short)31869)) ^ ((+(((/* implicit */int) (signed char)-3))))));
                            arr_34 [i_0] [16ULL] [i_0] [i_6] [i_0] = ((/* implicit */unsigned short) (signed char)-3);
                            var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_31 [i_8 - 1] [i_6] [24] [(short)2] [i_4] [i_0]))));
                        }
                        for (unsigned char i_9 = 0; i_9 < 25; i_9 += 2) 
                        {
                            arr_39 [i_0] [i_4] [i_4] [i_6] [i_6] [i_4] = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_19 [i_6 + 1] [(signed char)12] [i_0])) : (((/* implicit */int) arr_3 [i_5] [i_6 + 1] [i_9]))))) - (((arr_26 [i_5] [i_5] [i_0]) & (((/* implicit */unsigned int) arr_37 [i_0])))));
                            var_23 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) -1782320415352977869LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)254))));
                            arr_40 [i_0] [i_4] [i_5] [i_6] [4U] = ((/* implicit */unsigned int) var_4);
                            arr_41 [i_9] [i_4] [i_6] [i_6] [i_9] [i_4] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1782320415352977869LL)) ? (((((/* implicit */long long int) ((/* implicit */int) var_13))) % (-5279754477381406272LL))) : ((~(0LL)))));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned int) ((10808795841675225972ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)23)))));
                            arr_45 [(_Bool)1] [i_4] [i_5 - 1] [i_10] = ((/* implicit */short) (-(arr_37 [i_10])));
                            arr_46 [i_0] [i_4] [i_10] [(signed char)5] [i_10] = ((/* implicit */short) (+(((/* implicit */int) arr_42 [i_5 - 1] [i_10] [i_5 + 1] [i_5] [i_6 - 1]))));
                            arr_47 [i_10] [i_6] [i_5] [i_10] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1))));
                            var_25 -= ((/* implicit */int) ((((((/* implicit */_Bool) arr_37 [i_4])) ? (8191LL) : (((/* implicit */long long int) ((/* implicit */int) var_13))))) | (((/* implicit */long long int) (+(((/* implicit */int) var_17)))))));
                        }
                        arr_48 [i_6 + 1] [i_5 - 1] [i_5 + 1] [i_4] [i_0] = ((/* implicit */int) arr_20 [5] [i_0]);
                    }
                } 
            } 
        } 
        arr_49 [i_0] = ((/* implicit */unsigned char) arr_22 [i_0] [i_0] [i_0] [i_0]);
    }
    for (long long int i_11 = 2; i_11 < 8; i_11 += 1) 
    {
        /* LoopNest 3 */
        for (long long int i_12 = 1; i_12 < 10; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 11; i_13 += 4) 
            {
                for (long long int i_14 = 3; i_14 < 10; i_14 += 3) 
                {
                    {
                        arr_60 [i_14 + 1] [i_13] [i_12 - 1] [i_11] = ((/* implicit */int) min((min((var_6), (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (arr_32 [i_11 + 2] [i_11 - 1] [i_11] [i_11] [i_11 + 2])))))), (((/* implicit */long long int) ((((/* implicit */int) var_4)) / (arr_37 [i_12]))))));
                        /* LoopSeq 2 */
                        for (long long int i_15 = 1; i_15 < 10; i_15 += 1) 
                        {
                            arr_64 [i_11] [i_12] [i_13] [i_14] [i_15] |= ((/* implicit */_Bool) (-(((/* implicit */int) (short)5523))));
                            arr_65 [i_14] [i_14] [i_14 - 1] [i_14] [i_14] = ((/* implicit */unsigned short) 1715859143);
                            var_26 += ((/* implicit */unsigned short) var_16);
                        }
                        for (unsigned long long int i_16 = 3; i_16 < 8; i_16 += 1) 
                        {
                            arr_68 [i_16] [i_14] [i_11] [i_12] [i_12] [i_11] = ((/* implicit */unsigned char) arr_50 [i_11] [i_13]);
                            arr_69 [i_16] = ((/* implicit */unsigned long long int) var_14);
                        }
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (short i_17 = 2; i_17 < 9; i_17 += 4) 
        {
            var_27 = ((/* implicit */long long int) (~((~(((/* implicit */int) arr_12 [i_17] [i_17 - 2]))))));
            arr_72 [i_17] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -7)) ? (((((/* implicit */_Bool) ((var_6) / (var_6)))) ? (((((/* implicit */int) (unsigned char)0)) ^ (((/* implicit */int) (signed char)100)))) : (((((/* implicit */int) (short)16)) | (((/* implicit */int) var_12)))))) : ((~(((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))))))));
            var_28 = ((/* implicit */long long int) min((var_28), (((/* implicit */long long int) arr_43 [i_11] [i_11] [17] [(_Bool)1] [i_17 - 2] [i_17] [2LL]))));
        }
        /* LoopNest 2 */
        for (int i_18 = 3; i_18 < 7; i_18 += 1) 
        {
            for (signed char i_19 = 0; i_19 < 11; i_19 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_20 = 1; i_20 < 10; i_20 += 3) 
                    {
                        for (signed char i_21 = 0; i_21 < 11; i_21 += 1) 
                        {
                            {
                                arr_84 [i_21] [i_20] [i_11] [i_18 + 2] [i_11] = ((/* implicit */int) (_Bool)1);
                                arr_85 [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_44 [i_21] [i_20] [i_19] [i_18] [i_11])) || (var_11))) ? (((/* implicit */int) max(((_Bool)1), (var_11)))) : (((/* implicit */int) arr_61 [i_11 - 2] [i_11] [i_11 - 1] [i_18 - 2] [i_20 + 1] [i_11] [i_20]))))) ? (max((((/* implicit */long long int) (~(((/* implicit */int) arr_62 [i_20 + 1] [i_19] [i_18] [i_11]))))), (9223372036854775807LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)83)) >= (((/* implicit */int) (unsigned char)43))))))));
                                arr_86 [i_11] [i_11] [i_11] [i_11 - 1] [i_11] [i_11] [i_11] = ((/* implicit */_Bool) 2395449221U);
                                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) 8753045280865805666LL))));
                                arr_87 [i_21] [i_20 - 1] [i_18] [i_19] [i_18] [i_11 + 2] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)0))))) - (((/* implicit */int) arr_25 [i_11] [i_18] [i_19] [i_20] [24LL]))))), (var_1)));
                            }
                        } 
                    } 
                    arr_88 [i_11] [i_18 + 1] [i_11] [8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)104)) ? (((((/* implicit */_Bool) (-(arr_56 [i_11] [i_11] [i_19])))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)4)))) : (((/* implicit */int) ((((/* implicit */long long int) arr_26 [i_19] [i_18] [i_19])) <= (arr_81 [i_11] [i_18] [i_19])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_71 [i_11] [i_19])))))));
                    arr_89 [i_19] [8U] [i_11] [8U] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((unsigned int) arr_38 [i_18] [i_18] [i_18 - 3] [i_18] [i_18] [(_Bool)1] [i_11])))))));
                }
            } 
        } 
        arr_90 [i_11] = ((/* implicit */unsigned short) (+(1883364473)));
    }
    for (long long int i_22 = 0; i_22 < 14; i_22 += 2) 
    {
        var_30 -= ((/* implicit */_Bool) ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_25 [i_22] [i_22] [i_22] [i_22] [(short)2])) / (((/* implicit */int) (short)31884))))), (var_16))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((unsigned char) (unsigned char)165)), (((/* implicit */unsigned char) (signed char)-13))))))));
        var_31 *= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 1883364473)) >= (((((/* implicit */_Bool) (unsigned char)146)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_91 [(unsigned short)10]))) : (2535021188304623612ULL)))));
    }
    /* LoopNest 3 */
    for (unsigned short i_23 = 1; i_23 < 20; i_23 += 1) 
    {
        for (unsigned int i_24 = 0; i_24 < 21; i_24 += 2) 
        {
            for (unsigned long long int i_25 = 1; i_25 < 19; i_25 += 1) 
            {
                {
                    var_32 = ((/* implicit */int) var_5);
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 0; i_26 < 21; i_26 += 3) 
                    {
                        for (long long int i_27 = 1; i_27 < 20; i_27 += 1) 
                        {
                            {
                                arr_103 [i_26] = ((/* implicit */unsigned int) (signed char)13);
                                var_33 = ((/* implicit */int) ((((/* implicit */_Bool) 8388607U)) || (((/* implicit */_Bool) (~(((/* implicit */int) ((arr_35 [i_23 + 1] [i_23 + 1] [i_23 + 1] [11U] [(_Bool)1] [14ULL] [14ULL]) || (arr_97 [i_24] [i_26] [i_27])))))))));
                                var_34 = ((/* implicit */long long int) arr_3 [10U] [10U] [i_25]);
                            }
                        } 
                    } 
                    var_35 -= ((/* implicit */short) ((long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_23 + 1] [i_23 + 1] [i_25]))) != (arr_43 [i_23] [i_23] [(unsigned char)18] [i_25] [i_23] [i_23] [i_25])))))));
                }
            } 
        } 
    } 
    var_36 = ((/* implicit */unsigned char) var_16);
}
