/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84197
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
    var_12 = ((/* implicit */unsigned char) ((unsigned long long int) var_8));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        var_13 ^= arr_2 [i_0];
        arr_4 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : (max((-3088813696103580880LL), (((/* implicit */long long int) (_Bool)1))))));
        var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) min((arr_2 [i_0]), (((/* implicit */unsigned short) var_0)))))));
        arr_5 [i_0] = ((/* implicit */long long int) var_7);
    }
    for (unsigned short i_1 = 0; i_1 < 14; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 14; i_2 += 1) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_15 = ((((/* implicit */_Bool) 3088813696103580879LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1912))) : (-3088813696103580880LL));
                        var_16 = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) (signed char)-103)) ? (1775475881U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)15))))));
                    }
                } 
            } 
        } 
        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) ((281337537757184LL) < (((/* implicit */long long int) ((/* implicit */int) (signed char)-86)))))) << (((((((/* implicit */_Bool) (unsigned short)65533)) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) (signed char)81)))) + (93)))))) ? (((/* implicit */int) arr_12 [i_1])) : (((int) var_9))));
    }
    /* LoopSeq 3 */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_12 [i_5])) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_5]))))));
        /* LoopSeq 3 */
        for (signed char i_6 = 0; i_6 < 12; i_6 += 2) /* same iter space */
        {
            arr_23 [i_5] = ((/* implicit */long long int) ((_Bool) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5])) ? (((int) var_2)) : (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])))));
            var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (arr_16 [i_6]) : (((/* implicit */int) arr_1 [i_5]))))) : (((unsigned int) arr_14 [i_5] [i_5] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(var_7)))))) : (min((min((((/* implicit */unsigned long long int) var_9)), (var_3))), (max((var_7), (((/* implicit */unsigned long long int) arr_15 [i_5] [i_5]))))))));
            var_20 ^= ((((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (unsigned short)7388)))) ? (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_9 [i_5] [i_5])) : (((/* implicit */int) arr_6 [i_6] [i_6])))))) : (min((((/* implicit */int) arr_6 [i_6] [i_6])), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_19 [i_5] [i_5] [i_5])) : (((/* implicit */int) arr_10 [i_6])))))));
        }
        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) /* same iter space */
        {
            arr_27 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (~(((/* implicit */int) ((short) arr_9 [i_5] [i_5])))))), (((((/* implicit */_Bool) max((arr_19 [i_5] [i_5] [i_5]), (arr_9 [i_5] [i_5])))) ? (arr_22 [i_5]) : (((/* implicit */unsigned int) arr_16 [i_7]))))));
            var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7])) ? (var_11) : (var_8)))) ? (((/* implicit */int) ((unsigned char) var_8))) : (((/* implicit */int) ((var_8) == (((/* implicit */long long int) ((/* implicit */int) var_0)))))))), (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_7])))))))));
            arr_28 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) / (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_10))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) % (5830878872391954366ULL)))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 12; i_9 += 1) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) max((((/* implicit */long long int) (unsigned short)23737)), (((((/* implicit */_Bool) (unsigned short)7388)) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)32758), (((/* implicit */short) (signed char)38)))))) : ((-(9223372036854775802LL))))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 0; i_10 < 12; i_10 += 4) 
                        {
                            var_23 = ((/* implicit */int) (-(((unsigned long long int) var_4))));
                            arr_37 [i_5] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)28)) - (300039410))))));
                        }
                        for (long long int i_11 = 0; i_11 < 12; i_11 += 4) 
                        {
                            arr_42 [i_5] [i_5] [i_5] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_11] [i_9] [i_7] [i_7] [i_5])) ? (((/* implicit */int) (signed char)28)) : (((/* implicit */int) (signed char)-44))))) ? ((~(((/* implicit */int) var_2)))) : (((((/* implicit */_Bool) arr_8 [i_11] [i_5] [i_5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_1 [i_5])))));
                            arr_43 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((unsigned short) (+(min((arr_11 [i_5] [i_5] [i_5] [i_5]), (var_11)))));
                        }
                        for (unsigned int i_12 = 3; i_12 < 10; i_12 += 1) 
                        {
                            var_24 = (~(((((/* implicit */_Bool) ((unsigned long long int) var_5))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_39 [i_9] [i_9]))))) : (((/* implicit */int) arr_44 [i_5] [i_5] [i_5] [i_5] [i_5])))));
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)63622)) ? (((/* implicit */int) ((unsigned short) (unsigned char)0))) : (((/* implicit */int) (unsigned char)255)))))));
                        }
                        for (signed char i_13 = 0; i_13 < 12; i_13 += 2) 
                        {
                            var_26 = ((/* implicit */signed char) max(((+(min((((/* implicit */long long int) (signed char)81)), (9223372036854775794LL))))), (var_11)));
                            var_27 = ((/* implicit */signed char) max((((((/* implicit */_Bool) (unsigned short)1904)) ? (-3088813696103580880LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))), (((/* implicit */long long int) (_Bool)1))));
                            var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) min(((+(((/* implicit */int) arr_44 [i_5] [i_5] [i_8] [i_5] [i_5])))), ((+(((/* implicit */int) (short)32758)))))))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (signed char i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
        {
            arr_54 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_5] [i_5] [i_5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) arr_13 [i_5] [i_5] [i_5] [i_5] [i_5]))));
            var_29 += ((/* implicit */int) ((((((/* implicit */_Bool) arr_25 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_5] [i_5] [i_5]))) : (arr_24 [i_5]))) * (((/* implicit */long long int) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_5] [i_5])))))));
            arr_55 [i_14] [i_14] [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) var_9))) ? (((((/* implicit */unsigned long long int) arr_40 [i_5] [i_5] [i_5])) / (arr_45 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_14] [i_14])))));
        }
        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-26))) : (0U)));
    }
    for (int i_15 = 0; i_15 < 13; i_15 += 4) 
    {
        arr_58 [i_15] [i_15] = var_7;
        /* LoopSeq 1 */
        for (unsigned short i_16 = 0; i_16 < 13; i_16 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                for (signed char i_18 = 0; i_18 < 13; i_18 += 4) 
                {
                    {
                        /* LoopSeq 3 */
                        for (long long int i_19 = 1; i_19 < 10; i_19 += 2) 
                        {
                            var_31 = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) (short)-28833)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (205401780707721948ULL))));
                            var_32 += arr_66 [i_19] [i_19 - 1] [i_19 - 1] [i_19 - 1] [i_19 - 1];
                            arr_67 [i_19] [i_19] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((signed char) 992))) ? (((/* implicit */int) (unsigned short)1935)) : (((/* implicit */int) arr_1 [i_18])))) / (((/* implicit */int) ((signed char) 8694500959362179397LL)))));
                        }
                        /* vectorizable */
                        for (unsigned int i_20 = 0; i_20 < 13; i_20 += 2) 
                        {
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((signed char) -922109464)))));
                            arr_70 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] = ((signed char) arr_0 [i_20]);
                        }
                        for (signed char i_21 = 4; i_21 < 9; i_21 += 1) 
                        {
                            var_34 = ((/* implicit */unsigned long long int) var_8);
                            arr_74 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) (short)28833)) % (-922109464)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned int i_22 = 0; i_22 < 13; i_22 += 2) 
                        {
                            arr_78 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) ((var_11) / (((/* implicit */long long int) ((/* implicit */int) var_2)))));
                            var_35 *= ((/* implicit */unsigned int) arr_56 [i_22]);
                            arr_79 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */int) ((long long int) arr_2 [i_22]));
                        }
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39579)) ? (1662171335U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)28833)))));
                            var_37 = arr_71 [i_15] [i_15] [i_15] [i_15];
                            var_38 = ((/* implicit */short) arr_81 [i_17] [i_17] [i_17]);
                            var_39 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_23])) ? (((/* implicit */int) arr_10 [i_15])) : (((/* implicit */int) var_10)))) / (((/* implicit */int) arr_73 [i_15] [i_15] [i_17] [i_18] [i_15]))));
                            var_40 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)63601))));
                        }
                        /* LoopSeq 1 */
                        for (long long int i_24 = 0; i_24 < 13; i_24 += 2) 
                        {
                            arr_86 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */unsigned short) var_9);
                            var_41 = ((/* implicit */signed char) ((unsigned short) var_6));
                            var_42 = ((/* implicit */_Bool) (~(((/* implicit */int) max((var_2), (((/* implicit */unsigned short) ((_Bool) (unsigned short)63600))))))));
                            arr_87 [i_15] [i_15] [i_15] [i_15] [i_15] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((var_5) ? (((/* implicit */int) arr_10 [i_17])) : (((/* implicit */int) arr_14 [i_17] [i_17] [i_17]))))) ? (((/* implicit */unsigned long long int) (+(var_4)))) : (arr_69 [i_24] [i_18] [i_17] [i_16] [i_15]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_71 [i_24] [i_16] [i_16] [i_16])) == (((/* implicit */int) arr_71 [i_15] [i_15] [i_18] [i_15]))))))));
                        }
                    }
                } 
            } 
            arr_88 [i_15] [i_15] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned short)65535))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_25 = 0; i_25 < 13; i_25 += 2) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_26 = 0; i_26 < 13; i_26 += 2) 
                {
                    var_43 |= ((/* implicit */unsigned short) arr_13 [i_15] [i_15] [i_15] [i_15] [i_26]);
                    arr_93 [i_26] [i_26] [i_26] [i_26] = ((/* implicit */signed char) ((short) arr_62 [i_15]));
                    /* LoopSeq 2 */
                    for (signed char i_27 = 1; i_27 < 11; i_27 += 4) 
                    {
                        arr_96 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_27] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                        arr_97 [i_15] [i_15] [i_15] [i_15] [i_27] = ((/* implicit */signed char) (+((~(((/* implicit */int) var_2))))));
                        var_44 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_73 [i_27 + 2] [i_27 + 2] [i_27 - 1] [i_27 - 1] [i_27 - 1])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_75 [i_27 + 2] [i_27 + 2] [i_27 + 2] [i_27 + 2] [i_27 - 1] [i_27 - 1] [i_27 - 1])))));
                    }
                    for (unsigned int i_28 = 0; i_28 < 13; i_28 += 4) 
                    {
                        var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_69 [i_15] [i_15] [i_25] [i_15] [i_15])) ? (((/* implicit */int) arr_77 [i_15] [i_15] [i_15] [i_15] [i_15])) : (((/* implicit */int) arr_84 [i_28]))));
                        var_46 = ((/* implicit */unsigned short) var_3);
                    }
                }
                arr_100 [i_15] = ((/* implicit */unsigned int) arr_80 [i_15]);
                arr_101 [i_15] [i_15] [i_15] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_73 [i_25] [i_25] [i_25] [i_25] [i_25])) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))));
                var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_95 [i_15] [i_15] [i_15] [i_15] [i_15] [i_15] [i_15])) ? (var_4) : (arr_56 [i_25]))) - (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_25])))));
            }
        }
    }
    for (unsigned int i_29 = 0; i_29 < 10; i_29 += 4) 
    {
        arr_105 [i_29] = ((/* implicit */unsigned short) max((((/* implicit */int) arr_90 [i_29] [i_29])), (((((/* implicit */int) ((_Bool) arr_62 [i_29]))) % (arr_64 [i_29] [i_29] [i_29] [i_29])))));
        /* LoopNest 2 */
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            for (unsigned short i_31 = 1; i_31 < 7; i_31 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_32 = 2; i_32 < 9; i_32 += 4) 
                    {
                        arr_114 [i_30] [i_30] [i_30] = ((/* implicit */unsigned short) arr_103 [i_29] [i_29]);
                        var_48 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned short)65532))));
                    }
                    var_49 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_104 [i_29] [i_29])) << (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_30] [i_30] [i_30])) ? (((/* implicit */int) arr_84 [i_29])) : (((/* implicit */int) var_5))))) >= (((((/* implicit */_Bool) arr_10 [i_30])) ? (((/* implicit */long long int) ((/* implicit */int) arr_26 [i_29] [i_30]))) : (arr_11 [i_29] [i_29] [i_29] [i_29]))))))));
                }
            } 
        } 
    }
}
