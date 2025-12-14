/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 62106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=62106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/62106
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
    for (int i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        /* LoopSeq 4 */
        for (signed char i_1 = 3; i_1 < 20; i_1 += 3) 
        {
            var_16 += ((/* implicit */long long int) 3476141297U);
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((short) arr_1 [i_1])))) ? ((-(((/* implicit */int) max((var_1), (var_13)))))) : (((/* implicit */int) var_10))));
            arr_5 [i_0] [i_0] [i_1 + 1] = ((/* implicit */signed char) (+(min((((/* implicit */long long int) arr_2 [i_1 - 2] [i_1 - 3])), ((-9223372036854775807LL - 1LL))))));
            var_18 = ((/* implicit */_Bool) 18446744073709551615ULL);
        }
        /* vectorizable */
        for (int i_2 = 0; i_2 < 21; i_2 += 4) 
        {
            var_19 = var_1;
            /* LoopSeq 3 */
            for (long long int i_3 = 0; i_3 < 21; i_3 += 4) 
            {
                var_20 = ((/* implicit */short) max((var_20), (((short) (short)-30111))));
                var_21 = ((/* implicit */short) ((((/* implicit */int) (short)11104)) < (((/* implicit */int) (_Bool)0))));
                var_22 ^= ((/* implicit */unsigned long long int) (-(var_12)));
            }
            for (long long int i_4 = 1; i_4 < 20; i_4 += 3) /* same iter space */
            {
                var_23 ^= ((/* implicit */unsigned int) (((-(arr_4 [i_0] [i_0] [i_0]))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))));
                arr_12 [(unsigned char)10] [20ULL] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)65535)) - (((/* implicit */int) arr_9 [i_4 + 1] [i_4 - 1] [i_4 + 1]))));
                arr_13 [i_0] [i_0] [i_0] [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0] [i_0])))))));
            }
            for (long long int i_5 = 1; i_5 < 20; i_5 += 3) /* same iter space */
            {
                var_24 = ((((/* implicit */int) ((((/* implicit */unsigned long long int) -1)) >= (arr_6 [i_5] [i_5] [i_5 + 1])))) >> (((((/* implicit */int) arr_3 [i_5 - 1])) + (24582))));
                var_25 += ((/* implicit */unsigned int) arr_1 [i_2]);
            }
        }
        for (int i_6 = 0; i_6 < 21; i_6 += 3) 
        {
            var_26 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_9 [i_0] [i_6] [i_6]))));
            var_27 = ((/* implicit */signed char) var_3);
            /* LoopSeq 1 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 3) 
            {
                var_28 = ((/* implicit */long long int) ((((18446744073709551615ULL) > (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))))) ? (((/* implicit */int) min((var_1), ((unsigned short)65535)))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [i_0] [(unsigned char)18] [i_0])) >= (((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 2) 
                {
                    for (unsigned char i_9 = 0; i_9 < 21; i_9 += 3) 
                    {
                        {
                            arr_24 [i_9] [13LL] [13LL] [i_6] [(signed char)0] = var_9;
                            var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) (((~(((((/* implicit */_Bool) 130023424)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_9] [i_7] [i_0] [i_0]))))))) - (arr_4 [i_0] [i_6] [i_9]))))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_0 [i_0])), (((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_7] [(short)6])) ? (var_12) : (var_12)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) (unsigned short)35557))))) ^ ((((((((-9223372036854775807LL - 1LL)) + (9223372036854775807LL))) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)29978)) - (29978)))))))) : (((arr_21 [(short)9] [i_7] [i_0] [i_0]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)35557)) ? (-2471019386803462999LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))))));
                        }
                    } 
                } 
                arr_25 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((long long int) var_2)) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1))) % (1073741823LL))) <= (((/* implicit */long long int) (~(3289736840U))))))))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 21; i_10 += 2) 
                {
                    for (signed char i_11 = 2; i_11 < 18; i_11 += 4) 
                    {
                        {
                            var_31 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) arr_27 [i_11] [i_10] [13U] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-21537)) <= (((/* implicit */int) (unsigned char)192)))))) : (arr_29 [i_11 - 2] [i_11] [i_11 + 2] [i_11] [i_11 - 1]))), (((/* implicit */unsigned long long int) (((+(1729382256910270464LL))) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255))))))));
                            arr_30 [i_0] [i_0] [i_10] = ((/* implicit */unsigned int) arr_7 [i_6] [i_7] [i_7]);
                            arr_31 [i_0] [i_6] [i_7] [(unsigned short)6] [i_0] [i_11] = ((/* implicit */unsigned int) arr_2 [i_6] [i_6]);
                            var_32 += ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))));
                        }
                    } 
                } 
            }
            /* LoopSeq 3 */
            for (unsigned char i_12 = 0; i_12 < 21; i_12 += 2) 
            {
                arr_35 [i_0] [i_6] &= ((/* implicit */_Bool) (unsigned short)35557);
                var_33 += ((/* implicit */unsigned long long int) min((((arr_0 [i_0]) << (((/* implicit */int) ((((/* implicit */_Bool) 3699915326U)) || (((/* implicit */_Bool) (unsigned short)62278))))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0])))))));
                var_34 = ((/* implicit */short) ((long long int) ((((/* implicit */unsigned int) -1829173128)) | ((~(var_12))))));
                var_35 = ((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23286))))) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) var_10)), ((unsigned short)65535))))) : ((+(-6086004931253066833LL))))));
            }
            /* vectorizable */
            for (short i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                var_36 += ((/* implicit */short) ((((((/* implicit */int) arr_17 [i_13] [i_6] [i_0])) + (2147483647))) << (((arr_34 [i_0] [i_0] [i_0] [i_13]) - (14427579344981831664ULL)))));
                var_37 = ((/* implicit */signed char) min((var_37), (((/* implicit */signed char) ((0) << (((((/* implicit */int) (unsigned short)29978)) - (29952))))))));
            }
            for (unsigned short i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_38 = ((/* implicit */int) ((0) >= (((/* implicit */int) ((((5540425U) >> (((/* implicit */int) (unsigned short)0)))) > (var_3))))));
                var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)136)) ? (((((/* implicit */_Bool) 1950637098)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) : (var_8))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (short)-18230)))))))) ? (((((((/* implicit */int) (short)32767)) + (arr_0 [i_0]))) - (((/* implicit */int) ((signed char) 639076412U))))) : (((/* implicit */int) arr_1 [i_0]))));
            }
        }
        for (long long int i_15 = 0; i_15 < 21; i_15 += 3) 
        {
            var_40 = ((/* implicit */unsigned int) arr_33 [(signed char)4] [i_0]);
            arr_44 [i_0] [i_15] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) arr_36 [i_0])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136))) | (arr_34 [(unsigned char)5] [(unsigned char)5] [i_15] [i_0]))))))));
            var_41 = ((/* implicit */int) (-(((((/* implicit */_Bool) (unsigned short)35558)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-2471019386803462999LL)))));
            arr_45 [i_15] [i_15] [i_15] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (134152192ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))));
        }
        var_42 = ((/* implicit */short) ((unsigned int) (-(((8796093022200LL) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)11))))))));
    }
    /* vectorizable */
    for (unsigned char i_16 = 1; i_16 < 20; i_16 += 1) 
    {
        var_43 &= ((/* implicit */short) ((long long int) arr_46 [i_16 - 1]));
        arr_48 [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) arr_46 [i_16]))))) : (((((/* implicit */_Bool) 8796093022200LL)) ? (-2471019386803462999LL) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_16])))))));
        /* LoopNest 2 */
        for (unsigned int i_17 = 1; i_17 < 20; i_17 += 3) 
        {
            for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
            {
                {
                    var_44 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)41)))))));
                    var_45 = ((((/* implicit */_Bool) arr_53 [i_17 - 1] [i_17] [(unsigned short)0])) ? (((/* implicit */int) arr_53 [i_18] [i_17 - 1] [i_16 + 1])) : (((/* implicit */int) arr_53 [i_16] [i_16 - 1] [i_16])));
                }
            } 
        } 
    }
    for (unsigned int i_19 = 4; i_19 < 14; i_19 += 2) 
    {
        var_46 = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (6086004931253066833LL)))) & (((18446744073575399423ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_19] [i_19]))))))) >> ((((~(((/* implicit */int) ((18446744073575399423ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_19] [i_19] [i_19])))))))) + (31)))));
        var_47 += ((/* implicit */_Bool) ((short) (signed char)64));
        arr_57 [i_19] = ((/* implicit */unsigned int) var_10);
    }
    /* vectorizable */
    for (unsigned short i_20 = 0; i_20 < 13; i_20 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_21 = 1; i_21 < 10; i_21 += 4) 
        {
            var_48 *= ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_9 [i_21 - 1] [i_20] [i_20])))) >= (((/* implicit */int) (unsigned short)65535))));
            arr_65 [i_20] [i_21] = arr_61 [i_20] [i_20];
            var_49 = ((/* implicit */int) ((long long int) (short)-7015));
            arr_66 [i_21] [i_21] [i_21] = ((/* implicit */unsigned int) (~((-(arr_34 [i_20] [i_21] [i_20] [i_21])))));
        }
        arr_67 [i_20] = ((/* implicit */long long int) (~(var_11)));
        var_50 = ((((/* implicit */int) (signed char)11)) != (((/* implicit */int) (_Bool)0)));
        var_51 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_41 [i_20] [i_20] [i_20]))));
    }
    var_52 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))));
}
