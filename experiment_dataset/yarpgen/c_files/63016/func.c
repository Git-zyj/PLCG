/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63016
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
    var_10 = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 9223372036854775807LL)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) var_8))))))))));
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            /* LoopNest 2 */
            for (long long int i_2 = 1; i_2 < 21; i_2 += 1) 
            {
                for (unsigned short i_3 = 2; i_3 < 21; i_3 += 2) 
                {
                    {
                        var_11 = ((/* implicit */unsigned char) 576263381U);
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            var_12 = ((/* implicit */long long int) arr_3 [i_3 - 2] [i_4]);
                            arr_11 [i_0] [i_1] [i_1] [(unsigned short)8] [i_1] [i_2] [i_4] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) (signed char)89))))) : (((/* implicit */int) (signed char)-9)));
                        }
                        var_13 = ((var_4) & (((/* implicit */int) (unsigned short)19165)));
                        var_14 = ((/* implicit */unsigned char) ((short) min((((((/* implicit */_Bool) (unsigned char)131)) ? (576263381U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19947))))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)0)) | (var_0)))))));
                    }
                } 
            } 
            var_15 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((unsigned short) arr_2 [i_0]))) ? (max((-1946171307034849445LL), (((/* implicit */long long int) var_2)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-8260)) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_5))))))) % (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [(signed char)6] [i_0] [i_1])))));
            var_16 &= ((/* implicit */long long int) ((short) max((var_5), (((/* implicit */short) ((unsigned char) (unsigned short)43142))))));
        }
        for (unsigned char i_5 = 0; i_5 < 22; i_5 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 22; i_6 += 3) 
            {
                arr_17 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+((+(-8907440540024035623LL)))));
                arr_18 [i_0] = ((/* implicit */short) (-(((/* implicit */int) ((unsigned char) 3718703915U)))));
                /* LoopSeq 3 */
                for (unsigned char i_7 = 3; i_7 < 21; i_7 += 2) 
                {
                    arr_23 [i_0] [i_0] = ((/* implicit */long long int) arr_9 [i_6] [i_6] [i_6] [i_7 - 3] [i_7] [i_7 - 3] [i_7]);
                    arr_24 [i_0] [i_0] [i_0] [i_0] [(signed char)8] [i_7] = ((/* implicit */signed char) var_9);
                    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) ((signed char) arr_5 [i_7] [i_7 - 3] [i_6] [i_6]))) : ((-(((/* implicit */int) arr_5 [i_7] [i_7 - 2] [i_7] [i_0]))))));
                    arr_25 [i_0] [i_0] [(unsigned char)18] [i_6] [i_7] &= ((/* implicit */long long int) ((_Bool) var_4));
                }
                for (short i_8 = 4; i_8 < 21; i_8 += 2) /* same iter space */
                {
                    arr_30 [i_0] [i_5] [(unsigned short)17] [13U] = ((/* implicit */int) (+((-9223372036854775807LL - 1LL))));
                    /* LoopSeq 1 */
                    for (long long int i_9 = 1; i_9 < 21; i_9 += 1) 
                    {
                        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((((/* implicit */int) ((unsigned char) arr_32 [i_0] [i_0] [i_0] [i_5] [i_9] [i_0] [i_5]))) + ((-(((/* implicit */int) arr_10 [i_0] [i_5] [i_6] [i_8] [i_9])))))) ^ (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_9] [i_6] [i_5] [i_0])) || (((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-9)))))))))))));
                        var_19 += ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) (unsigned short)96))))))) >= (((/* implicit */int) ((unsigned short) (signed char)1)))));
                        arr_34 [i_0] = ((/* implicit */short) -1334362165);
                    }
                }
                for (short i_10 = 4; i_10 < 21; i_10 += 2) /* same iter space */
                {
                    arr_39 [(signed char)0] [(signed char)0] [(unsigned char)20] [i_10] = (unsigned char)0;
                    /* LoopSeq 3 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_20 = ((/* implicit */unsigned char) max((((var_4) / (((/* implicit */int) (signed char)8)))), (((((/* implicit */int) (signed char)117)) >> (((/* implicit */int) arr_21 [i_10 - 4]))))));
                        var_21 = ((/* implicit */short) var_7);
                    }
                    for (unsigned int i_12 = 4; i_12 < 21; i_12 += 2) /* same iter space */
                    {
                        arr_44 [i_12] [i_10] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_5 [i_12 - 4] [i_10 + 1] [i_10 + 1] [i_0]), (arr_5 [i_12 - 1] [i_10 - 4] [i_10 - 4] [i_10])))), (((((/* implicit */int) arr_5 [i_12 - 3] [i_10 - 1] [i_12] [i_10])) & (((/* implicit */int) arr_5 [i_12 - 4] [i_10 - 4] [i_6] [i_10]))))));
                        arr_45 [i_0] [i_0] [i_10 - 2] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned short)65535)), ((~(var_8)))));
                        arr_46 [i_0] [i_10 - 1] = max(((~(((/* implicit */int) (unsigned char)1)))), (((((/* implicit */_Bool) ((int) arr_6 [i_0]))) ? (var_4) : (min((((/* implicit */int) var_6)), (var_0))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_13 = 4; i_13 < 21; i_13 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) arr_26 [i_0] [i_0] [i_0] [i_0] [(unsigned char)0] [i_0]);
                        arr_51 [i_0] [i_0] [i_0] = (~(var_8));
                    }
                    arr_52 [i_0] [i_0] [i_6] [i_10] [i_6] [i_6] = ((/* implicit */short) ((unsigned int) arr_16 [i_0] [20LL] [i_0]));
                }
            }
            for (unsigned char i_14 = 2; i_14 < 21; i_14 += 2) 
            {
                arr_56 [i_14] [i_14] [i_14] = ((/* implicit */signed char) max((((((/* implicit */int) (_Bool)0)) * (1334362164))), (((/* implicit */int) (unsigned char)50))));
                var_23 = ((/* implicit */_Bool) max(((~(((/* implicit */int) (unsigned short)36575)))), (((((/* implicit */_Bool) arr_53 [i_14 - 1] [i_14 + 1] [i_14 + 1])) ? (-4) : (((/* implicit */int) arr_53 [i_14 - 2] [i_14 - 2] [i_14 - 1]))))));
                arr_57 [i_14] [i_5] [(short)20] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) (((+(var_4))) == ((~(((/* implicit */int) var_7)))))))));
            }
            arr_58 [i_0] [i_5] = (~(((((/* implicit */long long int) var_4)) - (arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]))));
            var_24 = ((/* implicit */signed char) ((long long int) min((((/* implicit */short) ((signed char) arr_27 [i_0] [i_5] [i_0] [i_0] [i_0]))), (var_6))));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            /* LoopSeq 3 */
            for (int i_16 = 0; i_16 < 22; i_16 += 4) 
            {
                arr_64 [i_0] [i_0] [i_0] [i_0] = (~(((((/* implicit */_Bool) arr_41 [i_0] [i_15] [i_15] [i_16] [i_16])) ? (((/* implicit */int) arr_5 [(short)15] [i_0] [(unsigned short)17] [i_16])) : (arr_41 [i_0] [i_0] [i_15] [i_15] [i_16]))));
                arr_65 [i_0] = ((short) ((signed char) (short)-9567));
                arr_66 [(unsigned char)10] [i_15] [i_15] [i_15] = ((/* implicit */long long int) (~(max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_16]))) <= (9223372036854775807LL)))), (var_8)))));
            }
            /* vectorizable */
            for (unsigned char i_17 = 0; i_17 < 22; i_17 += 2) 
            {
                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) (short)31011)) ? (arr_37 [i_0] [i_15] [i_15] [i_17]) : (((/* implicit */int) var_1)))))));
                var_26 &= ((/* implicit */long long int) ((((/* implicit */int) (signed char)99)) - (((/* implicit */int) arr_33 [i_0] [i_0] [i_15] [i_15] [i_17]))));
            }
            for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
            {
                arr_72 [i_15] [i_15] [i_15] [i_18] &= ((/* implicit */long long int) (unsigned char)182);
                arr_73 [i_18] [i_15] [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((((var_0) + (2147483647))) << (((((((/* implicit */int) (signed char)-9)) + (39))) - (30))))) - (((/* implicit */int) (signed char)53)))))));
                var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_1))))) ? (((/* implicit */int) arr_2 [i_15])) : ((+(((/* implicit */int) arr_2 [i_0]))))));
                var_28 = ((/* implicit */unsigned char) (-(((((/* implicit */int) arr_59 [i_0])) * (((/* implicit */int) arr_59 [i_0]))))));
            }
            var_29 = ((signed char) (~(((/* implicit */int) ((signed char) var_4)))));
        }
        var_30 = ((/* implicit */_Bool) min((var_5), (((/* implicit */short) var_7))));
        arr_74 [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned char) arr_2 [i_0])))))), ((~((+(var_4)))))));
    }
    for (short i_19 = 0; i_19 < 12; i_19 += 3) 
    {
        var_31 += ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_31 [i_19] [i_19])) ? (((/* implicit */int) var_6)) : (var_2))) < (((/* implicit */int) arr_36 [i_19] [i_19] [i_19] [i_19] [i_19]))));
        var_32 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((unsigned char) (unsigned char)199)), (((/* implicit */unsigned char) (signed char)-72)))))));
    }
    var_33 = ((/* implicit */signed char) (+((-(((((/* implicit */int) var_6)) + (((/* implicit */int) var_3))))))));
}
