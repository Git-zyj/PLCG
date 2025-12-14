/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60336
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60336 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60336
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
    var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) var_5))));
    var_12 = ((/* implicit */unsigned char) var_4);
    var_13 = ((/* implicit */short) ((max((min((((/* implicit */long long int) (signed char)-91)), (var_6))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-91)) + (2147483647))) << (((((((/* implicit */int) (signed char)-91)) + (121))) - (30)))))))) - (((/* implicit */long long int) ((/* implicit */int) var_10)))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 3) /* same iter space */
    {
        var_14 = ((/* implicit */long long int) (+(((unsigned long long int) 792566016413235696ULL))));
        arr_3 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_0 [i_0])));
    }
    /* vectorizable */
    for (unsigned int i_1 = 4; i_1 < 8; i_1 += 3) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            for (signed char i_3 = 1; i_3 < 8; i_3 += 2) 
            {
                for (short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) var_3))));
                        var_16 = ((/* implicit */unsigned char) ((17654178057296315918ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-29)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)44))))) * (((unsigned long long int) arr_2 [i_5]))));
            /* LoopSeq 3 */
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                arr_21 [i_1] [i_5] [i_1] [i_1 + 1] = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || ((_Bool)1)))) + (((/* implicit */int) ((unsigned short) 9223372036854775805LL)))));
                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (signed char)97)) - (((/* implicit */int) (_Bool)1))));
            }
            for (int i_7 = 3; i_7 < 8; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 3) 
                {
                    for (unsigned int i_9 = 0; i_9 < 10; i_9 += 4) 
                    {
                        {
                            arr_30 [i_5] [i_8] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)79)) ? (((/* implicit */int) arr_18 [i_9] [i_7] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                            var_19 &= ((/* implicit */long long int) arr_7 [i_1 - 2]);
                            var_20 = ((/* implicit */long long int) (!((_Bool)1)));
                            arr_31 [(unsigned char)2] [i_9] [i_9] [i_8] [i_8] &= ((/* implicit */short) ((((/* implicit */_Bool) 1155110159)) ? (4294967280U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
                        }
                    } 
                } 
                var_21 = ((/* implicit */short) var_4);
            }
            for (int i_10 = 3; i_10 < 8; i_10 += 4) /* same iter space */
            {
                /* LoopSeq 3 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_22 ^= ((/* implicit */unsigned int) (((((~(((/* implicit */int) arr_17 [(_Bool)1] [i_10] [(_Bool)1])))) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [5U] [i_1])) && (((/* implicit */_Bool) arr_5 [i_5]))))) - (1)))));
                    arr_38 [i_1 - 4] [i_5] [(unsigned short)8] [i_5] = ((/* implicit */long long int) arr_35 [i_1 + 1] [i_1 + 1] [i_10] [7U]);
                    arr_39 [i_5] = ((/* implicit */unsigned char) var_9);
                }
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                {
                    arr_43 [i_1] [(short)9] [i_1 - 4] [i_5] [i_1] [i_1 + 1] = ((/* implicit */long long int) (!((!((_Bool)1)))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) (-((+(485539091))))))));
                    /* LoopSeq 2 */
                    for (long long int i_13 = 0; i_13 < 10; i_13 += 4) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned int) var_4);
                        var_25 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned short)1023)) : (((/* implicit */int) arr_1 [i_12])))))));
                        var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned short)61202)) : (((/* implicit */int) var_3))))) ? (((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)70))) : (65535LL))) : (((/* implicit */long long int) arr_25 [i_1 - 4] [i_1 + 1] [i_1] [i_1 + 1]))));
                    }
                    for (long long int i_14 = 0; i_14 < 10; i_14 += 4) /* same iter space */
                    {
                        arr_48 [i_1] [i_5] [i_10] [i_5] [i_12] [i_14] = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_2 [i_5])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_28 [i_1] [i_5] [i_1] [i_14] [i_14])))) : (((/* implicit */int) arr_28 [i_12] [i_5] [i_10 + 2] [i_5] [i_5]))));
                        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) (signed char)32))));
                        var_28 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3413646527U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)83))) : (1383930745U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1 + 2])))));
                        var_29 = ((/* implicit */signed char) max((var_29), (((/* implicit */signed char) ((((((/* implicit */_Bool) 9223372036854775803LL)) || (((/* implicit */_Bool) var_8)))) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_1])) > (((/* implicit */int) var_0))))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) arr_33 [i_5] [i_14]))))))))));
                        arr_49 [i_5] = ((/* implicit */short) arr_20 [i_1 - 3] [i_1 - 4]);
                    }
                }
                for (unsigned short i_15 = 0; i_15 < 10; i_15 += 4) /* same iter space */
                {
                    var_30 *= ((/* implicit */unsigned char) ((846676001) | (((/* implicit */int) (short)-32759))));
                    var_31 = ((/* implicit */unsigned short) ((long long int) arr_12 [i_1 + 1] [i_1] [i_1 - 3] [i_1 - 3]));
                    var_32 = ((/* implicit */_Bool) ((((var_2) + (9223372036854775807LL))) << (((((((((/* implicit */_Bool) arr_34 [i_10] [i_10] [i_5] [i_1 - 2])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_7))))) + (154651564502218165LL))) - (5LL)))));
                }
                var_33 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_5])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_1 - 3]))));
            }
        }
        for (unsigned long long int i_16 = 0; i_16 < 10; i_16 += 1) 
        {
            arr_55 [i_1] [i_1] = ((/* implicit */signed char) arr_32 [i_1]);
            var_34 |= ((/* implicit */unsigned long long int) ((signed char) arr_37 [i_1] [i_1] [i_1 - 3] [(unsigned char)6] [i_1]));
            /* LoopNest 2 */
            for (unsigned char i_17 = 2; i_17 < 8; i_17 += 3) 
            {
                for (signed char i_18 = 0; i_18 < 10; i_18 += 1) 
                {
                    {
                        var_35 = ((/* implicit */long long int) (short)23430);
                        var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) var_9))));
                        arr_60 [i_17] [i_18] = ((/* implicit */short) ((((((/* implicit */_Bool) (short)-30614)) ? (((/* implicit */int) (unsigned short)65530)) : (((/* implicit */int) (short)23456)))) >= (((/* implicit */int) (_Bool)1))));
                        arr_61 [i_1] [i_16] [i_17] [i_17] [i_18] [i_18] = ((/* implicit */_Bool) (~(((/* implicit */int) ((var_4) <= (((/* implicit */long long int) ((/* implicit */int) (short)-32759))))))));
                    }
                } 
            } 
            var_37 = ((/* implicit */short) ((0LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_16])))));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-24748)) ? (598546089U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (arr_11 [i_1] [i_1] [i_1 + 2] [i_1]) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_41 [i_16] [i_16] [i_1] [i_1])) << (((arr_34 [7LL] [7LL] [i_16] [i_16]) - (6748684985105845628LL))))))))));
        }
    }
    for (unsigned int i_19 = 4; i_19 < 8; i_19 += 3) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_20 = 0; i_20 < 10; i_20 += 4) 
        {
            var_39 |= (!(((/* implicit */_Bool) (((-(-1155110144))) | (((/* implicit */int) min((var_8), (arr_42 [i_20] [i_20] [i_20] [i_20] [i_20]))))))));
            var_40 ^= ((/* implicit */long long int) ((min((((/* implicit */unsigned int) arr_4 [i_19 - 1])), (var_5))) < (((/* implicit */unsigned int) (-(((/* implicit */int) var_10)))))));
        }
        for (unsigned int i_21 = 0; i_21 < 10; i_21 += 1) /* same iter space */
        {
            var_41 *= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((short) var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)10))) + ((-(3678034558U)))))));
            /* LoopNest 2 */
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
                {
                    {
                        var_42 = ((/* implicit */short) min((var_42), (((/* implicit */short) max(((((_Bool)1) ? (((/* implicit */int) (short)5)) : (min((-1717673271), (1155110157))))), (((/* implicit */int) (unsigned char)150)))))));
                        var_43 = ((/* implicit */unsigned short) (_Bool)0);
                        arr_75 [i_19] [2U] [i_22] [i_22] |= ((/* implicit */signed char) -1155110163);
                        var_44 = ((/* implicit */unsigned int) (~(min((((/* implicit */int) ((((/* implicit */_Bool) 16367257604069701346ULL)) && ((_Bool)1)))), ((~(((/* implicit */int) var_1))))))));
                    }
                } 
            } 
            arr_76 [i_21] [i_21] = ((/* implicit */unsigned short) max((((((((/* implicit */_Bool) arr_17 [i_19] [i_21] [8LL])) ? (arr_45 [i_19 + 1] [i_19] [i_19] [i_21] [i_21]) : (((/* implicit */unsigned long long int) 1155110179)))) / (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)140))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) arr_22 [i_19])) > (((/* implicit */int) arr_50 [i_19]))))))))));
            arr_77 [i_19] [i_19 + 1] [i_21] &= ((/* implicit */long long int) max((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_19])) ? (((/* implicit */int) var_0)) : (1155110159)))), (min((((/* implicit */unsigned int) arr_28 [i_19] [(signed char)8] [i_21] [i_21] [i_21])), (arr_0 [(_Bool)1]))))), (((/* implicit */unsigned int) max((var_1), (((/* implicit */signed char) arr_47 [i_19] [8ULL])))))));
        }
        for (unsigned int i_24 = 0; i_24 < 10; i_24 += 1) /* same iter space */
        {
            arr_82 [i_19] = (!(((_Bool) max((1286368863U), (((/* implicit */unsigned int) (_Bool)1))))));
            arr_83 [i_19] [i_24] [i_24] = (~((+(((/* implicit */int) arr_8 [i_19 - 3])))));
        }
        for (unsigned char i_25 = 0; i_25 < 10; i_25 += 4) 
        {
            var_45 = ((/* implicit */unsigned char) var_10);
            var_46 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_28 [i_19] [i_25] [i_25] [i_25] [i_25])))) << (((((((/* implicit */_Bool) arr_4 [i_25])) ? (((/* implicit */int) arr_57 [i_19])) : (((/* implicit */int) var_8)))) - (11)))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((9223372036854775807LL) << (((((((/* implicit */int) arr_85 [i_19] [i_19])) + (153))) - (39)))))))))) : (arr_67 [i_25] [i_19] [i_19])));
            var_47 &= ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)251))))) ? (((/* implicit */int) ((arr_34 [i_19] [i_19] [i_19] [i_19]) >= (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_25])))))) : (((/* implicit */int) (short)32750)))));
        }
        var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) arr_11 [i_19] [i_19] [i_19] [i_19])), (arr_74 [(signed char)8] [i_19] [i_19]))), (((/* implicit */long long int) (unsigned char)232))))) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) ((_Bool) arr_51 [(short)8] [i_19] [i_19] [i_19 + 2]))))) : (((((/* implicit */_Bool) var_4)) ? ((-(var_2))) : (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */signed char) arr_23 [i_19] [i_19] [i_19] [i_19])), (arr_33 [i_19] [i_19])))))))));
    }
}
