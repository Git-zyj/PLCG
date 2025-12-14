/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60734
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
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        arr_4 [i_0] &= ((/* implicit */int) var_13);
        arr_5 [i_0 - 1] [i_0 - 1] = ((/* implicit */int) ((((min((-36954152361852287LL), (((/* implicit */long long int) arr_3 [i_0 + 3])))) != (arr_1 [i_0 - 2]))) ? ((+(min((((/* implicit */long long int) (short)-1808)), (arr_1 [i_0 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_0 + 3])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((arr_0 [i_0 + 3]) * (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))))))));
    }
    /* vectorizable */
    for (short i_1 = 0; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) ((var_9) - (((/* implicit */int) (unsigned char)11)))))));
        var_19 = ((/* implicit */unsigned char) arr_0 [i_1]);
        var_20 = ((((/* implicit */int) var_7)) + (((((((/* implicit */int) arr_2 [i_1] [i_1])) + (2147483647))) << (((((((/* implicit */int) arr_2 [i_1] [i_1])) + (15351))) - (3))))));
    }
    for (long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_21 = ((/* implicit */short) max((var_17), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)250)) ? (((/* implicit */int) var_0)) : (var_9)))) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_4)))))))));
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) || (((/* implicit */_Bool) var_3))));
        var_23 = ((/* implicit */unsigned char) ((signed char) (((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */int) arr_8 [i_2] [i_2])) : (((/* implicit */int) ((var_9) >= (((/* implicit */int) arr_10 [i_2]))))))));
        var_24 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [i_2])) ? (8716353499080768211LL) : (((/* implicit */long long int) var_14))))) < (((unsigned long long int) arr_2 [i_2] [i_2]))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)245)) ? (arr_1 [i_2]) : (var_1)))) ? (((((/* implicit */int) arr_7 [i_2])) + (arr_6 [i_2] [i_2]))) : (((((/* implicit */_Bool) (signed char)91)) ? (((/* implicit */int) (unsigned short)34162)) : (((/* implicit */int) var_3))))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_25 = var_1;
            arr_13 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_2])) ? (((/* implicit */long long int) max((((((/* implicit */_Bool) (short)17938)) ? (arr_11 [i_2] [i_2]) : (((/* implicit */int) arr_12 [i_2] [i_2] [i_3])))), (arr_9 [i_3])))) : (max(((+(var_17))), (((/* implicit */long long int) (signed char)-107))))));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 11; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 12; i_5 += 1) 
                {
                    {
                        var_26 = ((/* implicit */unsigned short) var_14);
                        arr_18 [i_2] [i_4] [i_4 + 1] [i_5 + 1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned char)225)), (arr_0 [i_5 + 1])));
                        /* LoopSeq 3 */
                        for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) /* same iter space */
                        {
                            arr_23 [i_2] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned short) arr_19 [i_4 + 3] [i_3] [i_3] [i_4 + 3] [i_6]);
                            arr_24 [i_4] [i_4] [i_2] = ((/* implicit */unsigned short) min((((arr_15 [i_2]) - (((/* implicit */unsigned int) ((/* implicit */int) (short)32756))))), (((((/* implicit */_Bool) arr_21 [i_4] [i_5 - 1] [i_4 + 2] [i_5 - 1] [i_6 - 1] [i_4 + 1] [i_4])) ? (((((/* implicit */unsigned int) 1907322907)) + (arr_15 [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31374)))))));
                            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_12 [i_2] [i_5] [i_2]))))) : (((unsigned int) (signed char)119))));
                            var_28 = ((/* implicit */int) -5788430184290262273LL);
                        }
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 2) /* same iter space */
                        {
                            var_29 = ((/* implicit */int) (_Bool)0);
                            var_30 -= ((/* implicit */long long int) var_5);
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_2] [i_4] = min((((/* implicit */long long int) (-(1216851871U)))), (((((/* implicit */_Bool) arr_26 [i_2] [i_5 + 2] [i_4] [i_4] [i_5 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_3]))) - (-4776656739391766333LL))) : (((/* implicit */long long int) min((arr_0 [i_5 - 1]), (((/* implicit */unsigned int) arr_21 [i_4] [i_8] [i_5 + 1] [i_4] [i_4 + 2] [i_4] [i_4]))))))));
                            var_31 = ((/* implicit */int) ((short) var_8));
                            var_32 *= ((/* implicit */short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_13))))))) ? (((((/* implicit */_Bool) ((unsigned int) var_6))) ? (((/* implicit */int) var_15)) : (((int) (signed char)-126)))) : (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned int) arr_8 [i_3] [i_3]))))) ? (((((/* implicit */int) var_4)) ^ (((/* implicit */int) arr_3 [i_5])))) : (((/* implicit */int) var_2))))));
                            var_33 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned short) arr_20 [i_4 - 1] [i_4 - 1] [i_4 - 2] [i_4 - 1] [i_5 + 1])))));
                        }
                    }
                } 
            } 
        }
        /* vectorizable */
        for (short i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            arr_32 [i_2] [i_9] = ((((/* implicit */_Bool) arr_30 [i_2] [i_9] [i_2])) ? (((/* implicit */int) var_7)) : (arr_19 [i_2] [i_9] [i_2] [i_2] [i_9]));
            /* LoopSeq 2 */
            for (unsigned int i_10 = 0; i_10 < 14; i_10 += 4) /* same iter space */
            {
                arr_35 [i_10] &= ((/* implicit */unsigned char) ((397681941U) + (((/* implicit */unsigned int) arr_22 [i_2] [i_2] [i_9] [i_9] [i_10]))));
                /* LoopSeq 3 */
                for (unsigned char i_11 = 0; i_11 < 14; i_11 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_34 = ((/* implicit */signed char) arr_15 [i_2]);
                        var_35 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)24576)) : (((/* implicit */int) var_2)))))));
                        var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) -5452226168206161228LL))));
                    }
                    arr_41 [i_9] [i_9] [i_11] [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [i_2] [i_2])) ? (arr_0 [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_16)) || (((/* implicit */_Bool) var_4))))))));
                }
                for (unsigned char i_13 = 0; i_13 < 14; i_13 += 2) /* same iter space */
                {
                    var_37 = ((/* implicit */short) arr_0 [i_10]);
                    var_38 += ((/* implicit */unsigned char) arr_19 [i_13] [i_2] [i_10] [i_9] [i_2]);
                }
                for (unsigned short i_14 = 0; i_14 < 14; i_14 += 4) 
                {
                    var_39 = ((/* implicit */unsigned long long int) var_17);
                    /* LoopSeq 4 */
                    for (short i_15 = 1; i_15 < 13; i_15 += 4) 
                    {
                        var_40 = ((/* implicit */int) var_1);
                        var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) arr_2 [i_15 + 1] [i_10]))));
                        arr_49 [i_2] [i_2] [i_9] [i_2] [i_2] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((var_5) ^ (((/* implicit */unsigned int) var_12)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_3)))))));
                        var_42 -= ((/* implicit */signed char) var_9);
                    }
                    for (unsigned char i_16 = 0; i_16 < 14; i_16 += 1) 
                    {
                        var_43 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) > (((((/* implicit */_Bool) arr_34 [i_2] [i_9] [i_14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (arr_15 [i_2])))));
                        arr_52 [i_2] [i_9] [i_9] [i_16] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned int) var_10))) && (((/* implicit */_Bool) ((int) var_13)))));
                        var_44 ^= ((/* implicit */short) 293994337729899803LL);
                    }
                    for (short i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_45 = ((/* implicit */long long int) ((var_1) > (((/* implicit */long long int) 498641765))));
                        var_46 -= ((/* implicit */unsigned char) ((((arr_1 [i_2]) - (((/* implicit */long long int) ((/* implicit */int) var_8))))) * (((/* implicit */long long int) ((((/* implicit */int) arr_10 [i_14])) / (((/* implicit */int) var_3)))))));
                    }
                    for (unsigned int i_18 = 0; i_18 < 14; i_18 += 2) 
                    {
                        var_47 = ((short) (unsigned char)118);
                        var_48 = ((/* implicit */unsigned short) var_10);
                    }
                }
            }
            for (unsigned int i_19 = 0; i_19 < 14; i_19 += 4) /* same iter space */
            {
                var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_59 [i_2] [i_2] [i_2] [i_19])) : (((/* implicit */int) var_6))));
                /* LoopNest 2 */
                for (unsigned short i_20 = 3; i_20 < 10; i_20 += 1) 
                {
                    for (int i_21 = 0; i_21 < 14; i_21 += 1) 
                    {
                        {
                            var_50 = ((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) var_11)))));
                            var_51 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_40 [i_20 - 1] [i_9] [i_19] [i_20 - 1] [i_9]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6))))) ? (((/* implicit */int) arr_26 [i_2] [i_2] [i_20] [i_20 + 4] [i_21])) : ((~(var_9)))));
                            var_52 *= ((((/* implicit */int) arr_58 [i_20 + 4] [i_21] [i_19] [i_20 + 4] [i_20 + 4] [i_20 + 3] [i_19])) & (((/* implicit */int) arr_58 [i_2] [i_9] [i_2] [i_20 + 1] [i_21] [i_19] [i_9])));
                        }
                    } 
                } 
                var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_2 [i_9] [i_19])))))));
            }
            var_54 = ((/* implicit */unsigned int) min((var_54), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)31962))))) && (((/* implicit */_Bool) arr_67 [i_2] [i_2])))))));
            var_55 = ((/* implicit */unsigned int) var_15);
        }
        for (int i_22 = 1; i_22 < 13; i_22 += 3) 
        {
            var_56 += ((/* implicit */long long int) min((((((/* implicit */_Bool) arr_42 [i_2] [i_22])) ? (((/* implicit */int) arr_42 [i_2] [i_2])) : (((/* implicit */int) var_16)))), (((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) var_8)))) == (((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_22] [i_22 + 1])), ((unsigned short)34162)))))))));
            var_57 = ((/* implicit */short) (unsigned char)167);
            var_58 = ((/* implicit */_Bool) ((((_Bool) ((343264303U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((((/* implicit */_Bool) min((((/* implicit */long long int) arr_11 [i_2] [i_22 + 1])), (var_1)))) ? (((unsigned int) (unsigned short)40960)) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_11))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_47 [i_2] [i_22] [i_2] [i_22 + 1] [i_2] [i_22 + 1]))))));
            var_59 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_22 - 1] [i_22] [i_2] [i_22 - 1] [i_2])) - (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) + (((/* implicit */int) var_8))))) ? (((/* implicit */int) arr_47 [i_2] [i_22 + 1] [i_2] [i_22] [i_2] [i_22])) : (((/* implicit */int) ((_Bool) -2135191617117017692LL)))))));
        }
    }
    var_60 = min((((/* implicit */long long int) var_13)), (max((((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)0)), (var_7)))), (var_1))));
}
