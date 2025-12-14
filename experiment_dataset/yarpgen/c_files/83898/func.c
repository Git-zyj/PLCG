/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83898
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
    var_18 = var_1;
    var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) 1684270388U)), (min((var_2), (((/* implicit */long long int) var_3)))))), (((((/* implicit */long long int) (+((-2147483647 - 1))))) - (4679911025222430067LL)))));
    var_20 = ((/* implicit */unsigned char) ((short) (+((+(((/* implicit */int) var_12)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_5 [i_0] = ((/* implicit */unsigned short) (-(arr_1 [(unsigned char)4] [(unsigned char)4])));
            /* LoopNest 3 */
            for (unsigned char i_2 = 1; i_2 < 10; i_2 += 3) 
            {
                for (int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 3) 
                    {
                        {
                            arr_16 [8ULL] [i_1] [(unsigned short)4] [i_1] [2ULL] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (short)-26819)))));
                            var_21 ^= ((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1))));
                            var_22 = ((/* implicit */unsigned char) arr_3 [i_0] [i_0] [i_3]);
                            var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [(unsigned char)7]))) : (1684270397U)))) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (short)26830))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) ((unsigned char) var_8));
            /* LoopSeq 3 */
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) (+(arr_28 [(unsigned short)4] [(_Bool)1] [i_6] [i_7 + 1] [(signed char)10] [i_7 + 1]))))));
                        var_26 *= ((/* implicit */unsigned char) (-(var_17)));
                    }
                    for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_33 [i_0] [i_0] = ((/* implicit */_Bool) var_11);
                        var_27 = ((/* implicit */unsigned long long int) ((_Bool) arr_24 [i_0] [i_5] [i_6]));
                        arr_34 [i_0] [7U] [11] [11] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_2 [i_0])))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))));
                        arr_35 [i_5] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) arr_26 [8LL] [i_5] [i_6] [8LL] [i_9])) * (2835688761U)))) / (var_1)));
                    }
                    for (unsigned char i_10 = 3; i_10 < 10; i_10 += 4) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_11 [(unsigned char)7] [i_5] [i_5] [i_7])) - (((/* implicit */int) arr_36 [i_0] [i_5] [i_10]))))) ? (arr_0 [i_10 + 1]) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_0] [i_0] [8LL]))) : (arr_37 [i_10] [i_5] [i_6] [i_7] [(signed char)7] [i_7] [i_10])))));
                        var_29 = ((/* implicit */short) var_6);
                        arr_38 [i_7] [11U] [6LL] [i_10] [i_10 - 3] [i_5] [i_5] = ((/* implicit */int) arr_14 [i_6] [i_6] [i_10]);
                        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_5] [i_6] [i_5])) ? (var_7) : (var_17)));
                    }
                    arr_39 [i_7] &= ((/* implicit */short) -1291570829);
                    var_31 -= ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_28 [i_7] [i_7] [i_5] [i_0] [0ULL] [i_7])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) arr_10 [i_0] [i_5] [i_6]))));
                    var_32 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_28 [i_0] [i_0] [i_0] [5ULL] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_31 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] [(unsigned char)11])) ? (arr_29 [(short)10] [9LL] [(unsigned short)9] [(signed char)11]) : (arr_37 [i_5] [i_0] [i_0] [i_5] [i_6] [i_6] [(unsigned short)4]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_7 + 1] [i_7 + 1] [i_7 + 1] [i_7])))));
                }
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */unsigned char) (+((+(6)))));
                    var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) (+(((/* implicit */int) arr_31 [i_0] [i_11 + 1] [10LL] [i_11] [(short)7] [(unsigned char)8] [i_11 + 1])))))));
                    var_35 = ((/* implicit */unsigned long long int) ((1291570822) - ((+(((/* implicit */int) arr_27 [(signed char)8] [9ULL] [(signed char)8] [9ULL] [(unsigned short)3] [(signed char)2]))))));
                }
                var_36 += ((/* implicit */_Bool) 1319040168567019044LL);
                var_37 -= ((/* implicit */unsigned long long int) (+((-(arr_26 [i_0] [i_5] [i_5] [i_6] [i_6])))));
                /* LoopSeq 3 */
                for (unsigned long long int i_12 = 0; i_12 < 12; i_12 += 4) 
                {
                    var_38 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [10LL] [i_0] [i_0]))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 2; i_13 < 8; i_13 += 4) 
                    {
                        var_39 |= (+(((((/* implicit */_Bool) arr_8 [i_0])) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-10))))));
                        arr_49 [i_5] [i_5] [i_5] [i_5] [(unsigned short)4] = ((/* implicit */unsigned int) var_3);
                    }
                }
                for (long long int i_14 = 0; i_14 < 12; i_14 += 4) 
                {
                    var_40 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)0))));
                    var_41 = ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)24839)) ? (((/* implicit */unsigned long long int) arr_2 [i_0])) : (var_16))) * (((/* implicit */unsigned long long int) 2404324913U))));
                    var_42 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_22 [i_0] [i_5])) ? (((/* implicit */int) arr_45 [i_6] [i_5] [i_6])) : (((/* implicit */int) var_13))));
                    /* LoopSeq 2 */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned short) min((var_43), (((/* implicit */unsigned short) var_6))));
                        var_44 = ((/* implicit */unsigned int) (_Bool)1);
                    }
                    for (short i_16 = 0; i_16 < 12; i_16 += 1) 
                    {
                        var_45 *= ((/* implicit */signed char) ((((/* implicit */_Bool) -1)) ? (((/* implicit */long long int) 3062180958U)) : (4LL)));
                        var_46 = ((/* implicit */short) max((var_46), (((/* implicit */short) 18LL))));
                    }
                    var_47 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_50 [i_0] [i_5] [i_6] [i_14]))));
                }
                for (unsigned long long int i_17 = 3; i_17 < 11; i_17 += 4) 
                {
                    var_48 &= ((/* implicit */signed char) ((unsigned char) arr_51 [0] [i_17 - 2] [i_17 - 2] [i_17 - 3] [5] [i_17 - 3]));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_18 = 0; i_18 < 12; i_18 += 3) 
                    {
                        arr_60 [i_6] [i_5] [i_5] [i_17] [i_5] [i_6] = ((/* implicit */unsigned int) arr_41 [i_6] [i_6]);
                        arr_61 [i_5] [i_17] [(unsigned short)2] [i_5] [i_0] = ((/* implicit */unsigned short) (signed char)4);
                    }
                    var_49 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_17 - 3] [i_17])) ? (((/* implicit */int) arr_11 [i_0] [i_5] [i_17 - 2] [i_17])) : (arr_13 [i_17 - 3] [i_17 - 3] [i_0])));
                }
            }
            for (short i_19 = 0; i_19 < 12; i_19 += 1) 
            {
                var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) var_13))));
                var_51 |= (_Bool)1;
                arr_64 [i_0] [i_5] [i_19] [i_0] = ((/* implicit */unsigned short) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5]);
            }
            for (short i_20 = 1; i_20 < 11; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_21 = 0; i_21 < 12; i_21 += 1) 
                {
                    for (long long int i_22 = 2; i_22 < 10; i_22 += 4) 
                    {
                        {
                            var_52 &= ((/* implicit */unsigned char) ((int) arr_12 [i_20 - 1] [i_22 - 2] [i_22 - 2] [i_22 - 2] [i_22 - 2]));
                            var_53 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) (short)19036)) : (((/* implicit */int) arr_10 [i_20 - 1] [i_20 + 1] [i_20 + 1]))));
                        }
                    } 
                } 
                arr_73 [2] [(_Bool)1] [i_5] [2] = ((/* implicit */_Bool) 1232786320U);
                arr_74 [i_0] [i_5] [i_20] = ((/* implicit */signed char) (unsigned char)157);
                /* LoopSeq 2 */
                for (int i_23 = 4; i_23 < 11; i_23 += 3) 
                {
                    var_54 = arr_65 [i_23 + 1] [i_23 - 3] [i_23 - 3] [i_23];
                    arr_79 [(unsigned short)2] [2ULL] [i_20] [i_23] [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) arr_27 [i_23 + 1] [i_5] [i_20] [i_23] [i_23] [i_20 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)266))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)83))) - (3883010830U)))));
                }
                for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                {
                    arr_84 [i_0] [(unsigned short)1] [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_21 [8U] [i_24 + 1] [i_20 + 1]);
                    var_55 ^= ((/* implicit */_Bool) (unsigned short)52149);
                    var_56 = ((/* implicit */long long int) (short)0);
                    var_57 &= ((/* implicit */unsigned int) ((var_2) - (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_24] [10ULL] [i_20 + 1] [5LL] [i_24 + 1] [i_20 + 1] [i_20 - 1])))));
                    var_58 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [(unsigned short)2] [8ULL] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2] [(unsigned short)2]))))) : (-2772040886500160081LL)));
                }
            }
        }
        for (unsigned int i_25 = 4; i_25 < 11; i_25 += 4) 
        {
            var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) (-(((/* implicit */int) (signed char)-12)))))));
            var_60 = ((/* implicit */signed char) max((var_60), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_25 + 1] [i_0])) ? (1354938299U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) % (11682903185033165443ULL))))));
        }
        for (unsigned long long int i_26 = 1; i_26 < 10; i_26 += 4) 
        {
            var_61 -= ((/* implicit */signed char) (unsigned short)14872);
            arr_90 [i_26] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_0] [i_26])) ? (arr_0 [i_26 + 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_50 [i_0] [i_0] [i_26] [i_26 - 1]))))))));
        }
        var_62 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-2288)) / (((/* implicit */int) arr_36 [(short)8] [(short)8] [10]))));
        arr_91 [4ULL] [i_0] &= ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_12)));
        var_63 = ((/* implicit */unsigned char) var_0);
    }
    var_64 = ((/* implicit */unsigned long long int) var_17);
}
