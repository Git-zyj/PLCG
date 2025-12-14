/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76442
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76442 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76442
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 16; i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (short i_2 = 2; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                {
                    {
                        arr_11 [i_0] [i_1] [i_2] [i_2 + 1] = ((/* implicit */unsigned long long int) ((max((((((/* implicit */_Bool) (short)612)) ? (((/* implicit */int) (short)5743)) : (((/* implicit */int) (unsigned short)4772)))), (((/* implicit */int) (short)-1)))) >> (((((/* implicit */int) var_4)) - (51116)))));
                        var_18 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_4))))) & (var_3))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [(signed char)2] [i_2])) : (((/* implicit */int) var_17)))) ^ (min((((/* implicit */int) arr_2 [i_1] [i_2 - 2])), (var_15))))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] = ((/* implicit */_Bool) var_14);
        arr_13 [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]);
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) var_3)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_12)))))) : (((/* implicit */unsigned long long int) ((arr_8 [i_0] [i_0] [i_0] [i_0]) - (((/* implicit */long long int) ((/* implicit */int) var_13)))))))))));
    }
    for (short i_4 = 0; i_4 < 16; i_4 += 1) /* same iter space */
    {
        var_20 += ((/* implicit */signed char) arr_2 [13ULL] [i_4]);
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) var_8))) || (((/* implicit */_Bool) ((((/* implicit */int) ((short) var_10))) * (((/* implicit */int) ((var_3) <= (arr_16 [i_4])))))))));
    }
    for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 1) /* same iter space */
    {
        arr_20 [i_5] = ((/* implicit */unsigned short) var_14);
        arr_21 [i_5] = ((/* implicit */_Bool) arr_18 [i_5] [(short)4]);
        var_22 = ((/* implicit */unsigned int) max((arr_18 [i_5] [i_5]), (((/* implicit */long long int) min((arr_19 [i_5 + 2]), (arr_19 [i_5 + 2]))))));
    }
    for (unsigned long long int i_6 = 2; i_6 < 17; i_6 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (long long int i_7 = 1; i_7 < 16; i_7 += 2) 
        {
            for (unsigned short i_8 = 1; i_8 < 17; i_8 += 3) 
            {
                for (unsigned long long int i_9 = 0; i_9 < 20; i_9 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) var_1);
                        var_24 = (+((+(arr_18 [i_7] [i_9]))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_10 = 2; i_10 < 18; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 2) 
            {
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                {
                    {
                        var_25 = ((/* implicit */unsigned short) max((var_25), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-18)) | (((/* implicit */int) (unsigned short)1023)))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (unsigned char i_13 = 4; i_13 < 18; i_13 += 2) 
                        {
                            arr_43 [i_6] [i_10 - 1] [i_12] [i_13] = ((/* implicit */_Bool) ((((/* implicit */int) arr_19 [i_6 + 1])) + (((/* implicit */int) arr_27 [i_13 + 1] [i_10 + 2] [i_10]))));
                            var_26 *= ((/* implicit */unsigned int) ((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_6 + 1] [i_6 - 2] [i_6 + 1])))));
                        }
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_23 [i_6 - 2] [i_6 - 1]) | (arr_23 [i_6 - 2] [i_6 - 1])))) ? (((arr_23 [i_6 - 2] [i_6]) - (arr_23 [i_6 - 2] [i_6]))) : (((/* implicit */int) ((arr_23 [i_6 - 2] [i_6 + 1]) < (arr_23 [i_6 - 2] [i_6]))))));
                        arr_44 [i_6] = ((/* implicit */unsigned char) (+(((int) arr_37 [i_10 + 2] [i_10 + 1] [i_6 + 1] [i_6 + 2]))));
                        arr_45 [i_6 + 1] [i_6] [i_6] = ((/* implicit */long long int) min((((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_17))) + (var_14))))))), (arr_36 [i_6 + 3] [i_6 + 1] [i_6 + 1])));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (signed char i_14 = 1; i_14 < 24; i_14 += 1) 
    {
        for (unsigned short i_15 = 2; i_15 < 23; i_15 += 3) 
        {
            {
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 25; i_16 += 2) 
                {
                    for (short i_17 = 4; i_17 < 24; i_17 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) arr_53 [i_14] [i_14] [i_14 - 1]);
                            arr_59 [i_14] [i_15] [i_15 - 1] [i_15 + 2] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)-616)))))));
                            arr_60 [i_17] [2LL] |= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_55 [i_16] [i_14 - 1] [i_16]))) * (arr_56 [i_14 + 1])))) == (min((arr_52 [i_17] [(short)10] [10LL]), (((/* implicit */unsigned long long int) arr_56 [i_14 - 1]))))))) ^ (((/* implicit */int) ((var_14) > (max((var_3), (var_3))))))));
                        }
                    } 
                } 
                arr_61 [i_14] [i_14] [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_58 [i_14] [i_15 + 1] [i_15 - 2] [i_15 - 2]))) ? ((-(((((/* implicit */_Bool) arr_51 [i_14])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_46 [i_14] [i_14])))))) : (((/* implicit */int) ((((/* implicit */int) arr_50 [i_14] [i_15 - 2])) == (((/* implicit */int) arr_47 [i_14 + 1])))))));
                var_29 = ((/* implicit */_Bool) var_17);
                /* LoopSeq 4 */
                for (unsigned short i_18 = 3; i_18 < 23; i_18 += 1) 
                {
                    var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) arr_58 [i_14] [i_14] [i_14] [i_14 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1469158617U)))) : (((((/* implicit */unsigned long long int) arr_58 [i_18 + 1] [i_15 + 1] [i_14 - 1] [i_14])) / (var_1)))));
                    arr_64 [i_14] [i_15 - 1] [i_15 + 2] [i_14] = ((/* implicit */signed char) ((unsigned int) (~(var_14))));
                    arr_65 [i_14] [i_15] = ((/* implicit */long long int) var_9);
                    arr_66 [i_14] [i_14 + 1] [i_14] = ((int) ((unsigned char) (+(((/* implicit */int) var_8)))));
                }
                /* vectorizable */
                for (signed char i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    var_31 *= ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_14 + 1])) && (var_10)));
                    /* LoopNest 2 */
                    for (signed char i_20 = 2; i_20 < 24; i_20 += 4) 
                    {
                        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */signed char) ((((/* implicit */int) var_10)) * (-707693044)));
                                var_33 = ((/* implicit */_Bool) ((unsigned char) arr_52 [i_14] [i_15 + 1] [i_20 - 1]));
                                var_34 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((((/* implicit */int) arr_69 [4] [i_15] [i_15] [i_15 - 2])) - (95))))))));
                            }
                        } 
                    } 
                    var_35 = ((/* implicit */short) ((((/* implicit */_Bool) arr_73 [4U] [(unsigned short)18] [i_14 + 1] [4U] [i_19] [i_14 + 1] [i_19])) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_68 [i_14] [i_15 - 1] [i_15 + 2])) : (((/* implicit */int) arr_50 [i_14] [i_15])))) : (((/* implicit */int) arr_68 [i_14 + 1] [i_14 + 1] [i_14 - 1]))));
                }
                /* vectorizable */
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    var_36 *= ((/* implicit */unsigned char) (+(((/* implicit */int) var_8))));
                    var_37 = ((/* implicit */short) ((((/* implicit */int) arr_55 [i_14] [i_15 - 1] [i_15 + 1])) >= (((/* implicit */int) var_12))));
                    /* LoopNest 2 */
                    for (short i_23 = 0; i_23 < 25; i_23 += 3) 
                    {
                        for (int i_24 = 1; i_24 < 23; i_24 += 4) 
                        {
                            {
                                var_38 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_80 [i_22 + 1] [i_24 + 1] [i_22] [6] [i_14 - 1]))) * (arr_74 [i_22 + 1] [i_22 + 1] [i_22 + 1] [i_23] [i_24] [i_14 - 1])));
                                var_39 = ((/* implicit */int) min((var_39), ((-(var_15)))));
                            }
                        } 
                    } 
                }
                for (unsigned short i_25 = 0; i_25 < 25; i_25 += 3) 
                {
                    /* LoopNest 2 */
                    for (short i_26 = 0; i_26 < 25; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 25; i_27 += 4) 
                        {
                            {
                                var_40 = ((/* implicit */_Bool) ((int) ((((/* implicit */int) arr_78 [i_15 - 1] [i_14 + 1] [16U] [i_14 + 1])) < (((/* implicit */int) arr_86 [i_14] [i_14 + 1])))));
                                arr_91 [i_14] [i_15] [i_14] [i_26] [i_15] = ((/* implicit */unsigned short) arr_74 [i_14] [i_14 - 1] [i_15 + 2] [i_14 + 1] [i_27] [i_14 + 1]);
                                arr_92 [i_14] = ((/* implicit */short) var_6);
                                var_41 += ((/* implicit */unsigned char) arr_69 [i_14 + 1] [i_14 - 1] [i_15 + 1] [i_15 - 1]);
                            }
                        } 
                    } 
                    var_42 ^= ((/* implicit */signed char) ((unsigned char) min((((((/* implicit */int) var_13)) | (((/* implicit */int) var_12)))), (((/* implicit */int) arr_77 [i_14 - 1] [i_15 - 1] [i_15] [i_25])))));
                    var_43 = ((/* implicit */short) var_5);
                }
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 25; i_28 += 2) 
                {
                    for (short i_29 = 2; i_29 < 23; i_29 += 1) 
                    {
                        {
                            arr_99 [i_14] = ((/* implicit */unsigned short) var_13);
                            var_44 = ((/* implicit */unsigned int) min((var_44), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) arr_76 [i_14 - 1] [i_15] [i_15] [i_15])) ? (((/* implicit */int) arr_76 [i_14 - 1] [i_29] [i_14 - 1] [i_28])) : (((/* implicit */int) arr_76 [i_14 + 1] [i_15] [i_28] [i_14]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_45 = ((/* implicit */unsigned long long int) var_15);
}
