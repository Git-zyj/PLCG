/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91730
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
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 3; i_1 < 8; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 10; i_2 += 1) 
            {
                {
                    var_10 = ((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_1] [i_1 - 2])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [0U] [1])) ? (arr_3 [i_2] [i_1] [i_2]) : (((/* implicit */unsigned int) arr_0 [(short)1] [i_1]))))) ? (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)56370)))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_1 - 3])))) : (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) 2015820468)) ? (arr_1 [i_0]) : (((/* implicit */long long int) var_1)))))));
                    var_11 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (short)11387))) % (1024293424111006304LL)));
                    var_12 = ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-1787))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (int i_3 = 0; i_3 < 11; i_3 += 1) /* same iter space */
    {
        var_13 = ((/* implicit */short) min(((unsigned short)56370), (((/* implicit */unsigned short) (short)6144))));
        var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3] [i_3])) - (((/* implicit */int) arr_8 [i_3] [i_3]))))) ? (arr_6 [i_3]) : (((/* implicit */int) (!(((/* implicit */_Bool) ((short) var_0))))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_9 [i_3])) - (((/* implicit */int) var_4))))), (min((3717110601U), (((/* implicit */unsigned int) var_6))))))));
        var_16 = ((/* implicit */unsigned long long int) ((short) (_Bool)1));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 11; i_7 += 3) 
                {
                    {
                        arr_18 [i_4] [i_5] [i_7] [i_7] = ((/* implicit */int) ((unsigned short) arr_15 [10ULL] [i_6] [10ULL] [i_4]));
                        var_17 = ((((/* implicit */_Bool) arr_17 [i_7] [i_7] [i_6] [1ULL] [i_7] [i_4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_4] [i_5] [i_7] [i_5] [i_6] [i_7]))) : (arr_17 [i_4] [i_7] [i_5] [i_4] [i_7] [i_4]));
                        arr_19 [i_7] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_15 [i_4] [7LL] [i_7] [(short)2]))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_15 [(unsigned short)10] [i_5] [i_5] [i_5])) <= (((/* implicit */int) var_2))));
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((unsigned int) (short)127)))));
        var_20 = ((((var_6) | (((/* implicit */int) arr_8 [i_4] [5U])))) - (((((/* implicit */_Bool) 2015820448)) ? (((/* implicit */int) (unsigned short)43803)) : (((/* implicit */int) (unsigned char)252)))));
        /* LoopSeq 4 */
        for (unsigned short i_8 = 1; i_8 < 7; i_8 += 1) 
        {
            var_21 = (+(((/* implicit */int) ((unsigned char) var_4))));
            /* LoopSeq 1 */
            for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                arr_26 [i_4] [i_8] = ((/* implicit */unsigned char) ((_Bool) arr_24 [i_8] [i_8 + 4] [i_8] [i_8 - 1]));
                var_22 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62947))) > (2147483648U)));
                var_23 -= ((/* implicit */unsigned short) (_Bool)0);
            }
            var_24 = ((/* implicit */unsigned int) ((int) ((arr_6 [i_4]) | (var_7))));
        }
        for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned int) (unsigned short)13015);
            arr_30 [i_10] [i_4] [0] = ((/* implicit */unsigned short) ((unsigned int) 3586308216692845123LL));
        }
        for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
            {
                var_26 = ((/* implicit */int) arr_33 [i_4] [i_12] [i_12]);
                var_27 ^= ((/* implicit */int) ((_Bool) arr_12 [i_11] [i_11 - 3]));
            }
            var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_5))));
            /* LoopSeq 1 */
            for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
            {
                arr_38 [i_4] [i_13] [i_13] [i_11] = ((/* implicit */_Bool) (~(arr_11 [i_4])));
                arr_39 [i_13] [5LL] = ((/* implicit */short) ((int) var_6));
            }
            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-9822))) | (-5845014968957210894LL))) : (((/* implicit */long long int) -621803728))));
        }
        for (unsigned long long int i_14 = 3; i_14 < 10; i_14 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (int i_15 = 0; i_15 < 11; i_15 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned char i_16 = 2; i_16 < 9; i_16 += 4) 
                {
                    var_30 = ((/* implicit */unsigned long long int) (((~(var_7))) % (((-1603940751) - (((/* implicit */int) arr_25 [i_4] [i_4] [i_15] [i_16]))))));
                    arr_47 [9U] [i_14 + 1] [i_15] [i_16 + 2] = ((/* implicit */_Bool) var_4);
                    arr_48 [i_4] [i_15] = ((/* implicit */unsigned int) (!(arr_16 [i_14 + 1] [i_14] [i_16] [i_14 - 1] [(signed char)4] [i_16 + 1])));
                }
                arr_49 [i_14 + 1] [i_14 + 1] [4U] &= ((/* implicit */long long int) ((short) arr_15 [i_14 - 2] [i_14 - 3] [3ULL] [1ULL]));
                var_31 = ((/* implicit */int) ((unsigned short) ((var_0) <= (((/* implicit */long long int) ((/* implicit */int) var_2))))));
            }
            for (short i_17 = 1; i_17 < 9; i_17 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_29 [i_17 + 2] [i_14 + 1]))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_17] [i_14 + 1])) ? (203459102) : (arr_35 [i_17] [i_14 + 1])));
            }
            for (short i_18 = 1; i_18 < 9; i_18 += 1) /* same iter space */
            {
                var_34 |= ((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_14 - 1])) ? (arr_41 [i_4]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1024293424111006304LL)) ? (((/* implicit */int) arr_46 [i_18 + 1])) : (var_1))))));
                /* LoopSeq 4 */
                for (unsigned short i_19 = 0; i_19 < 11; i_19 += 1) 
                {
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_14] [i_19] [i_4])) & (((/* implicit */int) arr_15 [i_14 + 1] [i_14 - 2] [i_14] [i_18 + 2]))));
                    var_36 -= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_40 [i_14 + 1])) ? (((/* implicit */int) arr_34 [i_18 + 1] [i_18 + 1] [i_14 + 1] [i_19])) : (arr_40 [i_14 - 1])));
                }
                for (long long int i_20 = 3; i_20 < 7; i_20 += 3) 
                {
                    arr_59 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_7 [i_14 - 1] [i_14 - 1])) <= (((/* implicit */int) arr_13 [i_4] [i_14 + 1]))));
                    arr_60 [i_4] [(unsigned char)1] [i_20] [i_20 + 4] = ((/* implicit */unsigned short) ((arr_6 [i_20]) - (arr_6 [(short)4])));
                    /* LoopSeq 4 */
                    for (unsigned short i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_50 [i_4] [i_4] [i_18 - 1] [i_20 - 2])) ? (((/* implicit */int) arr_56 [i_20] [i_20 + 4] [i_18 - 1] [i_18] [i_14] [i_14])) : (((int) arr_51 [i_4] [i_14 - 2] [i_20]))));
                        var_38 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) (unsigned short)15)) ? (((/* implicit */int) (unsigned char)115)) : (((/* implicit */int) (unsigned short)9165)))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_52 [i_21] [i_14] [i_18 - 1])) ? (((((/* implicit */_Bool) (short)1023)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (33552384ULL))) : (((/* implicit */unsigned long long int) ((var_2) ? (((/* implicit */int) arr_51 [i_4] [i_20 - 2] [i_20])) : (arr_40 [i_4]))))));
                    }
                    for (int i_22 = 0; i_22 < 11; i_22 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_20 + 3])) ? (((((/* implicit */_Bool) arr_43 [i_14] [i_20] [i_14])) ? (arr_52 [i_4] [i_18] [i_20 + 2]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)43))))) : (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_14 - 1]))))))));
                        arr_65 [i_20] [i_20] [i_18 - 1] [i_18 + 2] [i_20] [i_22] = ((/* implicit */unsigned char) (~(((4294967295U) | (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_41 = ((/* implicit */unsigned long long int) ((369823481U) <= (((((/* implicit */_Bool) 16777200U)) ? (((/* implicit */unsigned int) -764946343)) : (1212531606U)))));
                        arr_66 [i_4] [i_14] [(unsigned char)1] [(unsigned char)7] [(unsigned char)1] [i_20] = (+(((/* implicit */int) arr_58 [i_20 - 1] [(short)9] [i_18 + 2] [(short)9])));
                    }
                    for (signed char i_23 = 0; i_23 < 11; i_23 += 3) 
                    {
                        var_42 &= ((/* implicit */short) ((signed char) arr_64 [6LL] [i_18 + 2] [i_20] [i_20 - 3] [8U] [i_23]));
                        var_43 &= ((/* implicit */int) (+(arr_17 [i_20 + 4] [i_20] [i_20] [i_20] [2] [i_20])));
                    }
                    for (unsigned int i_24 = 4; i_24 < 7; i_24 += 4) 
                    {
                        arr_73 [i_4] [i_18] [i_24] [i_4] [(unsigned char)6] |= (~(((/* implicit */int) arr_67 [i_24] [i_14] [i_18] [i_20] [i_24 - 1])));
                        var_44 = ((/* implicit */unsigned long long int) var_0);
                    }
                    var_45 = ((/* implicit */unsigned long long int) ((int) arr_24 [i_20 - 3] [i_4] [i_18] [i_20 + 4]));
                }
                for (short i_25 = 4; i_25 < 8; i_25 += 1) 
                {
                    var_46 = ((/* implicit */short) ((int) arr_21 [i_14 + 1] [i_25 + 2]));
                    var_47 = ((/* implicit */unsigned long long int) max((var_47), (((arr_12 [i_18 - 1] [i_25 + 1]) ? (arr_31 [i_4] [i_14 - 1]) : (arr_31 [i_4] [i_14 - 3])))));
                }
                for (unsigned char i_26 = 0; i_26 < 11; i_26 += 4) 
                {
                    var_48 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_13 [i_14 - 1] [i_26]))));
                    var_49 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_10 [i_4]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_8)));
                    var_50 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_77 [i_4] [i_4] [i_18])) : (11ULL))));
                }
            }
            for (short i_27 = 1; i_27 < 9; i_27 += 1) /* same iter space */
            {
                var_51 = ((/* implicit */unsigned short) (short)7);
                var_52 -= ((/* implicit */int) ((unsigned long long int) (_Bool)1));
            }
            var_53 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_4] [i_14 - 2] [i_14 - 1])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)50)) - (((/* implicit */int) (unsigned short)16451))))) : (((((/* implicit */_Bool) 3907589999U)) ? (3907589999U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)128)))))));
        }
        arr_82 [i_4] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (unsigned short)48390))))));
    }
    for (int i_28 = 0; i_28 < 11; i_28 += 1) /* same iter space */
    {
        var_54 *= ((/* implicit */_Bool) min((((unsigned long long int) arr_61 [i_28] [(unsigned short)0] [i_28])), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_61 [0] [10LL] [i_28])) - (((/* implicit */int) arr_61 [i_28] [(_Bool)0] [i_28])))))));
        var_55 += ((/* implicit */short) (signed char)-51);
    }
    var_56 ^= ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */_Bool) ((var_1) | (var_7)))) ? (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned long long int) var_0)))) : (((((/* implicit */_Bool) (signed char)-51)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (var_5));
}
