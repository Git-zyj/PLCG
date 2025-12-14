/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70184
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) var_11);
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) max((1066344867739363603LL), (68719468544LL)))) ? (max((((/* implicit */unsigned int) (unsigned short)21174)), (arr_1 [i_0] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_13)) == (((/* implicit */int) arr_0 [i_0]))))))));
    }
    for (long long int i_1 = 2; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_1])))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            var_15 = ((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1]);
            arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) (-9223372036854775807LL - 1LL)))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_4))))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (arr_9 [i_2] [i_2] [i_2]) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (_Bool)1))));
        }
    }
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) /* same iter space */
    {
        arr_14 [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (+(((((/* implicit */int) (_Bool)1)) * (arr_9 [i_3] [i_3] [i_3])))))) + (max((((/* implicit */unsigned int) arr_8 [i_3])), ((-(var_6)))))));
        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) (unsigned char)4))));
    }
    for (signed char i_4 = 0; i_4 < 17; i_4 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
        {
            for (unsigned short i_6 = 3; i_6 < 16; i_6 += 2) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
                {
                    {
                        arr_25 [i_4] [0U] [i_6] [i_4] = ((/* implicit */unsigned short) var_7);
                        arr_26 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_18 [i_6 - 3] [i_6 - 1] [i_4])) - (arr_24 [i_6 - 2] [i_4] [i_6 - 3] [i_6 - 2])))) ? (((/* implicit */int) (!((_Bool)1)))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)70)) ? (((/* implicit */int) (unsigned short)21081)) : (((/* implicit */int) (unsigned short)31370))))) ? (var_9) : (((/* implicit */int) max(((unsigned char)190), ((unsigned char)251))))))));
                        arr_27 [i_4] [i_4] [i_5] [i_7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) 1U))) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) ((unsigned short) arr_7 [i_4] [i_4]))) ? (arr_9 [i_6 - 3] [i_6 + 1] [i_6 - 3]) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_12 [i_6] [i_6]))))))));
                        var_17 = ((/* implicit */unsigned short) min((arr_21 [i_4] [i_6 + 1] [i_6 - 2] [i_4]), (((/* implicit */signed char) (!(((/* implicit */_Bool) arr_19 [i_4] [i_4] [(unsigned char)7])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_30 [i_4] = ((((/* implicit */_Bool) (unsigned char)236)) ? (arr_20 [i_4] [i_8] [i_4]) : (((/* implicit */int) arr_3 [i_4])));
            /* LoopSeq 3 */
            for (unsigned int i_9 = 0; i_9 < 17; i_9 += 2) 
            {
                var_18 = ((/* implicit */unsigned char) var_5);
                var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_9] [i_9] [i_8] [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_9] [i_4]))) : (arr_28 [i_8] [i_8] [i_8])));
            }
            for (signed char i_10 = 1; i_10 < 14; i_10 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned short i_11 = 0; i_11 < 17; i_11 += 2) 
                {
                    for (short i_12 = 0; i_12 < 17; i_12 += 2) 
                    {
                        {
                            arr_40 [i_12] [i_8] [i_4] [i_12] [i_12] = ((/* implicit */signed char) ((((((/* implicit */int) var_1)) * (((/* implicit */int) (_Bool)1)))) * (((/* implicit */int) var_8))));
                            var_20 ^= ((/* implicit */unsigned int) (unsigned short)5);
                        }
                    } 
                } 
                arr_41 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)17)) >= (((/* implicit */int) (unsigned short)3465)))))));
                var_21 &= ((/* implicit */_Bool) var_0);
                /* LoopSeq 4 */
                for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
                {
                    var_22 = ((/* implicit */long long int) (~(arr_23 [i_10 + 1] [i_8] [i_10 - 1] [i_13])));
                    var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)34170))) ^ (arr_5 [i_8]))))));
                }
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    var_24 &= ((/* implicit */unsigned int) (+(((long long int) (short)-12954))));
                    arr_48 [i_4] [i_10] [i_4] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_42 [i_4] [i_4] [i_8] [i_10] [i_10 + 1] [i_14]))));
                    var_25 ^= ((/* implicit */unsigned short) ((((arr_5 [i_8]) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)251)) - (251)))));
                    arr_49 [i_4] = (((-2147483647 - 1)) / (((/* implicit */int) arr_8 [i_10 + 2])));
                }
                for (unsigned short i_15 = 0; i_15 < 17; i_15 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_23 [i_4] [i_10 + 1] [i_10] [i_15])) ? (((/* implicit */int) (_Bool)1)) : (-81859264))))));
                    var_27 = ((/* implicit */int) (unsigned short)31390);
                    var_28 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4] [i_4])) || (((/* implicit */_Bool) (signed char)-42)))) ? (((/* implicit */int) (signed char)7)) : (((((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_4])) ? (((/* implicit */int) (unsigned short)34630)) : (arr_32 [i_4] [i_4])))));
                }
                for (unsigned short i_16 = 0; i_16 < 17; i_16 += 1) 
                {
                    var_29 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_54 [i_4] [i_8] [i_10 + 1] [(signed char)5] [i_8] [1U]))));
                    var_30 = ((/* implicit */int) (_Bool)1);
                    var_31 = ((/* implicit */unsigned short) arr_53 [i_8] [i_10] [i_4]);
                    var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_37 [i_10 + 2] [i_4] [i_10 - 1] [i_4])) || (((/* implicit */_Bool) var_5))));
                    var_33 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_4] [i_10 - 1] [i_4])) && (((/* implicit */_Bool) arr_20 [i_10] [i_10 + 1] [i_10 + 1]))));
                }
            }
            for (short i_17 = 0; i_17 < 17; i_17 += 4) 
            {
                arr_61 [i_4] [i_8] [i_17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)34164)) ? (((/* implicit */int) (unsigned short)21081)) : (((/* implicit */int) (unsigned short)15091))));
                /* LoopNest 2 */
                for (signed char i_18 = 2; i_18 < 16; i_18 += 2) 
                {
                    for (unsigned int i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        {
                            var_34 += ((/* implicit */unsigned short) var_8);
                            var_35 = (i_4 % 2 == zero) ? (((/* implicit */signed char) ((((((/* implicit */int) arr_37 [i_8] [i_17] [i_18 - 1] [i_4])) + (2147483647))) >> (((arr_36 [i_4] [i_8] [(unsigned short)14] [i_18 - 2] [i_19]) - (1075422954)))))) : (((/* implicit */signed char) ((((((((/* implicit */int) arr_37 [i_8] [i_17] [i_18 - 1] [i_4])) - (2147483647))) + (2147483647))) >> (((arr_36 [i_4] [i_8] [(unsigned short)14] [i_18 - 2] [i_19]) - (1075422954))))));
                        }
                    } 
                } 
            }
            var_36 = ((/* implicit */unsigned short) max((var_36), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((/* implicit */int) (short)12637))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_37 [i_4] [i_4] [i_8] [i_8])))))));
        }
        /* vectorizable */
        for (int i_20 = 0; i_20 < 17; i_20 += 3) 
        {
            var_37 *= ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (14U)));
            var_38 ^= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_4] [(signed char)0]))));
        }
        var_39 = ((((/* implicit */int) ((unsigned char) arr_58 [i_4] [i_4] [i_4] [i_4]))) - ((~(((/* implicit */int) (short)4698)))));
        var_40 -= ((/* implicit */signed char) (~(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)25830)))))));
    }
    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)1920))) : (7419407825895713373LL)));
    /* LoopSeq 1 */
    for (signed char i_21 = 0; i_21 < 13; i_21 += 3) 
    {
        /* LoopNest 3 */
        for (int i_22 = 2; i_22 < 10; i_22 += 3) 
        {
            for (signed char i_23 = 0; i_23 < 13; i_23 += 2) 
            {
                for (unsigned char i_24 = 0; i_24 < 13; i_24 += 2) 
                {
                    {
                        arr_84 [i_21] [i_22] [i_23] [i_24] = ((/* implicit */unsigned int) (short)32767);
                        var_42 = ((/* implicit */short) min((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) ^ (arr_58 [i_21] [i_22 + 2] [i_23] [i_22 + 2]))), (((/* implicit */unsigned int) (-(((((/* implicit */int) (short)4662)) >> (((((/* implicit */int) (unsigned short)25835)) - (25835))))))))));
                    }
                } 
            } 
        } 
        var_43 = ((/* implicit */unsigned short) max((var_43), (((/* implicit */unsigned short) (+(((/* implicit */int) var_4)))))));
        /* LoopSeq 1 */
        for (signed char i_25 = 0; i_25 < 13; i_25 += 4) 
        {
            arr_87 [i_25] [i_25] = ((/* implicit */_Bool) min((max((((short) (signed char)14)), (((/* implicit */short) var_10)))), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_21]))) != (((7419407825895713357LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34161))))))))));
            arr_88 [i_21] [i_25] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) > (7419407825895713358LL)));
        }
        var_44 |= ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)32768)) >> (((((/* implicit */int) arr_8 [i_21])) - (23939))))), ((~(((((/* implicit */_Bool) (signed char)-110)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned short)9047))))))));
    }
    var_45 = ((/* implicit */_Bool) min((var_3), (((signed char) ((((/* implicit */int) (short)-13092)) - (((/* implicit */int) (unsigned short)4251)))))));
}
