/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 81775
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=81775 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/81775
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
    for (signed char i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
        var_16 *= ((/* implicit */signed char) (_Bool)0);
        /* LoopSeq 2 */
        for (long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_17 &= ((/* implicit */_Bool) (short)7121);
            var_18 = ((/* implicit */_Bool) ((int) (-(((/* implicit */int) arr_5 [i_1] [i_1])))));
            arr_8 [i_1] [i_0 + 1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)209)) - (2147483647)))) ? (831675413057401325LL) : (((/* implicit */long long int) max((4218747651U), (((/* implicit */unsigned int) arr_4 [i_1 + 2] [i_1] [i_1])))))));
            /* LoopSeq 4 */
            for (int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned short)255)) ? (76219645U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11250))))))))));
                /* LoopNest 2 */
                for (unsigned short i_3 = 1; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) 
                    {
                        {
                            arr_16 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */signed char) (!((!((_Bool)0)))));
                            var_20 -= ((/* implicit */short) arr_2 [i_1 + 1]);
                            var_21 = ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
                arr_17 [(_Bool)1] &= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)61))));
                /* LoopSeq 1 */
                for (int i_5 = 3; i_5 < 8; i_5 += 3) 
                {
                    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_14 [(_Bool)0] [i_1] [i_2] [i_5 + 4] [i_5 + 1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_14 [(unsigned short)3] [i_0 - 2] [i_1] [i_2] [i_5 + 3]))) : (var_10)))) || (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) / (((/* implicit */int) arr_1 [6])))))));
                    var_23 = ((/* implicit */unsigned short) arr_19 [i_0 + 1] [i_5 - 1] [i_2 + 3] [i_1 - 1]);
                    var_24 = ((/* implicit */short) (-(4218747651U)));
                }
            }
            /* vectorizable */
            for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                arr_24 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (var_3)));
                var_25 ^= ((/* implicit */unsigned char) ((unsigned long long int) arr_5 [i_6] [i_0 + 2]));
                /* LoopSeq 2 */
                for (signed char i_7 = 2; i_7 < 11; i_7 += 3) 
                {
                    var_26 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                    var_27 = ((/* implicit */short) arr_23 [i_0] [i_1 + 2] [i_6]);
                    arr_28 [i_0] [i_1] = ((/* implicit */unsigned short) var_5);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                    {
                        arr_33 [i_0 + 2] [i_1] = (!(((/* implicit */_Bool) var_6)));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)61)))))));
                        var_29 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) arr_13 [i_6] [5] [i_6] [i_1] [i_9] [5ULL])) && (((/* implicit */_Bool) var_1))))));
                    }
                    for (long long int i_10 = 0; i_10 < 12; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */long long int) min((var_30), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (signed char)-103)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)0)))))))));
                        arr_36 [i_1] [i_8] [i_6] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_12)))))));
                        var_31 += ((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_0]);
                        var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) (~(((/* implicit */int) arr_22 [i_10] [i_6] [i_10])))))));
                        arr_37 [i_0] [i_0] [i_1] [i_0 + 2] [i_0] = ((/* implicit */long long int) (+((+(6U)))));
                    }
                    var_33 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)47781))));
                }
                arr_38 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -9223372036854775794LL)) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) 699767261)))) : (2197949513728LL)));
            }
            for (long long int i_11 = 0; i_11 < 12; i_11 += 2) 
            {
                var_34 += ((/* implicit */short) (((+(6U))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22907))))))));
                var_35 = ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_11] [i_1])))), ((!(((/* implicit */_Bool) (short)3))))));
            }
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                arr_44 [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((long long int) arr_29 [i_1] [i_1] [i_1]))) ? (((/* implicit */int) arr_1 [i_12])) : (((/* implicit */int) var_8)))), (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6))))))))));
                var_36 = ((/* implicit */int) (!(((/* implicit */_Bool) max(((+(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) var_15)) % (((/* implicit */int) (signed char)-49)))))))));
                arr_45 [i_1] [i_1] [i_1] = ((/* implicit */int) -1LL);
            }
        }
        for (signed char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */int) ((var_5) == (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) + (var_3))))));
            var_38 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(4034458959U)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (arr_9 [i_0] [6U] [i_13] [i_13])))) : (((var_5) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)11]))))))))));
            var_39 = ((/* implicit */short) min((var_1), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [(unsigned char)6] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)4] [i_0 + 1])))))));
        }
        var_40 -= ((/* implicit */signed char) ((((/* implicit */unsigned int) max((arr_12 [0] [i_0 - 2] [i_0]), (arr_12 [(signed char)2] [i_0 - 2] [i_0])))) + (((4294967295U) * (314682876U)))));
        var_41 = ((/* implicit */int) max((((/* implicit */long long int) arr_48 [i_0] [i_0 - 2])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4111950676U)) ? (((/* implicit */long long int) 267386880U)) : (-1LL)))) ? (((((/* implicit */long long int) 0U)) ^ (9223372036854775794LL))) : (min((-29LL), (((/* implicit */long long int) (_Bool)1))))))));
    }
    for (short i_14 = 0; i_14 < 22; i_14 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */unsigned char) arr_50 [i_14] [i_14]);
        arr_51 [i_14] = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)3))))) ? (max((max((((/* implicit */long long int) (signed char)0)), (4358108727731183585LL))), (((long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
    }
    for (short i_15 = 0; i_15 < 22; i_15 += 2) /* same iter space */
    {
        var_43 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_0)) : (max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) var_8)) & (((/* implicit */int) var_7))))))));
        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) arr_52 [i_15] [i_15]))) ? (((/* implicit */long long int) max((262140U), (262140U)))) : (arr_52 [i_15] [i_15]))))));
        arr_55 [i_15] &= ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62395))) & (4294967295U))) != (((/* implicit */unsigned int) ((((/* implicit */int) var_7)) << (((arr_53 [i_15]) + (1597478047))))))));
    }
    for (short i_16 = 0; i_16 < 22; i_16 += 2) /* same iter space */
    {
        arr_59 [i_16] = ((/* implicit */unsigned short) var_3);
        arr_60 [i_16] [i_16] = ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_9)))), ((+(((/* implicit */int) var_15))))));
        var_45 = ((/* implicit */int) var_6);
    }
    var_46 = var_13;
    /* LoopSeq 2 */
    for (int i_17 = 0; i_17 < 25; i_17 += 3) 
    {
        var_47 = ((/* implicit */unsigned long long int) var_7);
        var_48 -= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63626))) | (((((unsigned long long int) (_Bool)1)) << (((((((/* implicit */_Bool) var_11)) ? (7170313882136539083ULL) : (((/* implicit */unsigned long long int) 0LL)))) - (7170313882136539067ULL)))))));
        var_49 = ((/* implicit */unsigned char) (~(max((0LL), (((/* implicit */long long int) 2481815082U))))));
        var_50 = ((((((/* implicit */int) (unsigned short)13156)) >= (((/* implicit */int) (unsigned short)65463)))) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (6U)))) : (max((16760832LL), (((/* implicit */long long int) (unsigned char)184)))));
    }
    for (int i_18 = 0; i_18 < 14; i_18 += 3) 
    {
        arr_67 [i_18] [i_18] = ((/* implicit */signed char) (unsigned char)228);
        var_51 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_13)), ((+(arr_64 [(signed char)22])))))) ? (((long long int) (-(((/* implicit */int) (signed char)-42))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
        /* LoopNest 2 */
        for (unsigned short i_19 = 2; i_19 < 12; i_19 += 3) 
        {
            for (unsigned int i_20 = 2; i_20 < 11; i_20 += 2) 
            {
                {
                    var_52 *= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (((_Bool)1) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))));
                    var_53 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_64 [i_19])) ? ((((_Bool)1) ? (1155304275719194206LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) (unsigned short)57441)))))))))));
                    arr_75 [i_19] = ((/* implicit */signed char) (~((~(((/* implicit */int) max(((unsigned char)204), (var_9))))))));
                }
            } 
        } 
    }
    var_54 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (signed char)-1)), (var_15)))) < (((/* implicit */int) var_4)))))) : (4147555930670771337LL)));
    var_55 &= ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_14), (((/* implicit */unsigned long long int) var_0)))))));
}
