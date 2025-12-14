/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 64284
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=64284 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/64284
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
    var_11 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
                {
                    {
                        var_12 = ((/* implicit */unsigned long long int) (~((-(((((/* implicit */_Bool) arr_1 [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_2] [i_3])))))))));
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_0 [i_2])))) ? (((/* implicit */long long int) arr_4 [i_2] [i_1])) : (arr_9 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)4088))) : ((((!(((/* implicit */_Bool) var_2)))) ? (((/* implicit */unsigned long long int) var_2)) : (max((144097595889811456ULL), (((/* implicit */unsigned long long int) (unsigned char)10))))))));
                        var_13 -= ((/* implicit */unsigned long long int) var_1);
                    }
                } 
            } 
        } 
        var_14 = ((((/* implicit */_Bool) arr_10 [i_0] [i_0] [(unsigned short)13] [(unsigned short)18] [13LL])) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_4)))));
    }
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -1663441390)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0)))));
    var_16 *= ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
    /* LoopNest 2 */
    for (unsigned short i_4 = 4; i_4 < 11; i_4 += 2) 
    {
        for (unsigned short i_5 = 3; i_5 < 11; i_5 += 2) 
        {
            {
                /* LoopSeq 4 */
                for (short i_6 = 0; i_6 < 13; i_6 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */signed char) arr_17 [(unsigned short)8] [i_5 - 2]);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_7 = 0; i_7 < 13; i_7 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 13; i_8 += 3) 
                        {
                            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_10 [i_7] [i_7] [i_6] [(short)2] [(short)2])) ? (var_9) : (((/* implicit */long long int) (-(((/* implicit */int) var_4))))))))));
                            var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */int) min((arr_1 [i_4 - 2]), (arr_1 [i_4 + 2])))) >= (((/* implicit */int) var_6)))))));
                        }
                        for (unsigned short i_9 = 0; i_9 < 13; i_9 += 3) 
                        {
                            arr_29 [10ULL] [8LL] [i_4] [8LL] [i_9] [i_9] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_14 [i_7])) : (((/* implicit */int) var_3))))))));
                            arr_30 [i_5] [i_6] [i_7] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [2LL])), (arr_8 [i_4] [15U] [i_4 - 1] [i_4 - 1])))) ? (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))))), (min((((/* implicit */unsigned long long int) arr_12 [i_9])), (var_10))))) : (((/* implicit */unsigned long long int) (~((+(((/* implicit */int) var_7)))))))));
                        }
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_20 -= (+((~(arr_8 [i_5 - 3] [i_5] [i_5 + 2] [i_5 + 2]))));
                            var_21 = ((/* implicit */long long int) (-((+((~(((/* implicit */int) arr_21 [i_4] [i_5] [i_5] [i_5] [i_10]))))))));
                            var_22 *= ((/* implicit */unsigned short) var_0);
                            arr_34 [i_4] [i_5] [i_5] [i_6] [i_7] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_27 [i_10] [i_5])) ? ((~(-3608457213906083160LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_4] [i_5] [i_6] [i_6] [6ULL] [i_10] [i_10]))))))));
                        }
                        var_23 = ((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), (arr_7 [i_4] [i_5] [i_6] [i_7])));
                    }
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 13; i_11 += 3) 
                    {
                        for (int i_12 = 0; i_12 < 13; i_12 += 3) 
                        {
                            {
                                arr_40 [i_12] [i_5] [i_6] [i_5] [i_4] = ((/* implicit */signed char) arr_12 [i_6]);
                                arr_41 [i_4] [i_5] [1ULL] = ((/* implicit */unsigned short) var_1);
                                arr_42 [i_11] [i_11] [i_5] [i_5] = max((min((((/* implicit */int) var_8)), ((+(arr_16 [2]))))), ((+(-1311030200))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)12))));
                    arr_43 [i_6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)7))))) ? ((+(arr_10 [i_4 - 1] [i_5] [i_5 - 1] [i_6] [9LL]))) : ((+(((/* implicit */int) arr_14 [i_4]))))));
                }
                for (short i_13 = 0; i_13 < 13; i_13 += 2) /* same iter space */
                {
                    var_25 = ((/* implicit */unsigned short) min((max((((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) var_9)))), (((((/* implicit */_Bool) 17644111324375289761ULL)) ? (((/* implicit */unsigned long long int) 1099511627768LL)) : (536870911ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_17 [i_4] [i_5])) ? (-1099511627768LL) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4]))))) : (((/* implicit */long long int) (-(((/* implicit */int) var_3))))))))));
                    var_26 = min((max((((/* implicit */unsigned long long int) 1099511627790LL)), ((~(7848846398240846692ULL))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) ((unsigned char) arr_18 [i_5] [i_13]))), (((((/* implicit */int) (unsigned char)35)) << (0U)))))));
                    var_27 = ((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) max((1147643276U), (((/* implicit */unsigned int) arr_15 [i_4])))))))), (min((arr_35 [i_5] [i_5 + 1]), (((/* implicit */long long int) (-(arr_10 [i_4] [i_4] [i_4] [i_4] [11ULL]))))))));
                    var_28 = ((/* implicit */long long int) max((var_28), ((((((+(arr_5 [i_4 + 2]))) + (9223372036854775807LL))) << (((((min((var_9), (arr_5 [i_4 - 3]))) + (4331568248818997854LL))) - (48LL)))))));
                }
                /* vectorizable */
                for (short i_14 = 0; i_14 < 13; i_14 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned int) arr_12 [i_4]);
                    var_30 -= ((/* implicit */long long int) ((short) (signed char)127));
                    var_31 *= ((/* implicit */unsigned short) -1099511627774LL);
                    arr_50 [i_4] [4] [(_Bool)1] [i_4] = var_7;
                }
                for (long long int i_15 = 1; i_15 < 12; i_15 += 2) 
                {
                    var_32 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) max((arr_20 [6ULL] [i_5] [(unsigned char)7] [i_5]), (arr_7 [i_4] [i_5] [i_15] [i_15]))))));
                    var_33 = ((/* implicit */unsigned char) max(((_Bool)0), ((!(((/* implicit */_Bool) (signed char)127))))));
                    /* LoopNest 2 */
                    for (unsigned int i_16 = 0; i_16 < 13; i_16 += 2) 
                    {
                        for (int i_17 = 2; i_17 < 10; i_17 += 3) 
                        {
                            {
                                arr_57 [i_15] [7] [i_15] [i_17] [(short)2] = ((/* implicit */_Bool) arr_7 [i_5] [i_5 + 1] [i_15] [(unsigned short)15]);
                                arr_58 [i_4] [11ULL] = (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_25 [i_5] [i_5] [i_15]))))) ? (((/* implicit */int) max((arr_56 [i_4] [i_5] [i_15] [i_16] [2LL]), (((/* implicit */unsigned short) var_7))))) : (((/* implicit */int) ((unsigned char) var_8))))));
                            }
                        } 
                    } 
                    var_34 ^= ((/* implicit */short) (+(((long long int) arr_51 [i_15]))));
                }
                var_35 = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)253))));
                arr_59 [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) arr_22 [i_4] [i_4] [i_4 - 3])) ? ((-(((/* implicit */int) var_8)))) : (((int) var_3))))));
                /* LoopSeq 2 */
                for (signed char i_18 = 4; i_18 < 11; i_18 += 2) /* same iter space */
                {
                    var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) var_4))));
                    /* LoopNest 2 */
                    for (long long int i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 2) 
                        {
                            {
                                arr_67 [i_4] [i_5] [i_18] [(unsigned short)5] [(short)8] [(signed char)3] [(signed char)3] = ((/* implicit */int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                                var_37 = ((/* implicit */long long int) min((var_37), (((/* implicit */long long int) (-(((((/* implicit */_Bool) (unsigned short)47889)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_13 [(unsigned short)6])))))))));
                                var_38 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_25 [i_4] [i_19] [i_20])) : (max((1027633876), (((/* implicit */int) (unsigned short)46324)))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_21 = 4; i_21 < 11; i_21 += 2) /* same iter space */
                {
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_18 [i_4] [i_4 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) 4231119291U)) ? (((/* implicit */int) (short)-11191)) : (((/* implicit */int) (unsigned char)0))))) : ((~(arr_18 [i_4] [i_4 - 2])))));
                    /* LoopNest 2 */
                    for (short i_22 = 1; i_22 < 11; i_22 += 3) 
                    {
                        for (int i_23 = 4; i_23 < 10; i_23 += 2) 
                        {
                            {
                                var_40 = ((/* implicit */short) var_4);
                                var_41 = ((/* implicit */signed char) max((var_41), (((/* implicit */signed char) arr_75 [(signed char)9] [i_21] [(_Bool)1] [i_22] [4LL]))));
                                var_42 ^= ((/* implicit */short) var_8);
                            }
                        } 
                    } 
                }
                var_43 = ((/* implicit */unsigned char) (-(4095LL)));
            }
        } 
    } 
}
