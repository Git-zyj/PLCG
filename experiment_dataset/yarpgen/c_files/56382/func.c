/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56382
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
    var_20 = ((/* implicit */unsigned long long int) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (unsigned short)48358)) ? (((/* implicit */long long int) var_2)) : (-7480272699520719729LL))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 7; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_5 [i_3 + 2] [i_3 + 1] [i_3 - 2])))))));
                                var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_1))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_2] [i_5] = arr_10 [i_2] [i_5];
                        var_23 = ((/* implicit */unsigned short) max((var_23), (((unsigned short) arr_4 [i_0]))));
                        var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_18)) ? (2550648155580118123LL) : (-2550648155580118123LL))))))));
                    }
                    for (unsigned short i_6 = 2; i_6 < 9; i_6 += 1) 
                    {
                        var_25 = ((/* implicit */unsigned char) (-(arr_11 [i_2] [i_6 - 2])));
                        /* LoopSeq 2 */
                        for (short i_7 = 0; i_7 < 10; i_7 += 1) 
                        {
                            arr_20 [i_0] [i_1] [i_2] [i_2] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_7] [8LL] [i_2] [(unsigned char)7] [i_0]))))) ? ((-(((/* implicit */int) (unsigned short)49912)))) : (((/* implicit */int) (unsigned short)63424))));
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_8 [i_6 - 1])) : (((arr_4 [i_1]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))))));
                            arr_21 [i_0] [i_1] [i_2] [i_0] [i_7] = ((/* implicit */long long int) arr_6 [i_6 - 2] [i_6 - 2] [i_6] [i_6 + 1]);
                            arr_22 [i_0] [(unsigned short)5] [i_0] [i_2] [i_7] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_1 [i_6 + 1]))));
                            var_27 = arr_3 [i_1] [i_2];
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_25 [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */long long int) (_Bool)1);
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2] [i_8] [i_6 + 1] [i_2])) ? (((/* implicit */int) arr_16 [i_2] [i_8] [i_6 - 1] [i_2])) : (((/* implicit */int) arr_16 [i_2] [5LL] [i_6 + 1] [i_2]))));
                            var_29 = var_16;
                        }
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                        {
                            arr_28 [(signed char)3] [i_1] [i_2] [i_6] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_2] [i_1] [i_2]))))) : ((+(14757492484520117714ULL)))));
                            arr_29 [i_0] [i_0] [i_2] [i_6 - 2] [i_2] = ((/* implicit */unsigned char) arr_19 [i_2] [i_2]);
                        }
                        for (short i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) arr_30 [i_2] [1LL] [i_6 + 1] [i_6 + 1] [i_6 + 1] [(short)0])) ? (((/* implicit */int) arr_30 [i_2] [i_1] [i_6 - 1] [i_6] [i_6 - 1] [i_6])) : (((/* implicit */int) arr_18 [i_0] [(unsigned short)6] [i_6 - 1] [i_0] [i_1]))));
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) var_12))));
                        }
                        for (short i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [i_0] [i_11] [i_2])) + (((/* implicit */int) arr_1 [i_6 - 2]))));
                            var_33 = ((/* implicit */_Bool) max((var_33), (((/* implicit */_Bool) (-((+(((/* implicit */int) var_5)))))))));
                        }
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_34 -= ((/* implicit */short) var_1);
                        var_35 &= ((/* implicit */_Bool) arr_3 [i_0] [i_0]);
                    }
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned short) arr_33 [i_13] [i_13] [i_2] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (long long int i_14 = 2; i_14 < 8; i_14 += 4) 
                        {
                            arr_44 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_41 [i_14 + 1] [i_2])) % (((/* implicit */int) arr_41 [i_14 + 2] [i_2]))));
                            var_37 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) arr_13 [i_2] [i_2] [i_2])))));
                            arr_45 [i_0] [i_1] [i_2] [i_13] [i_14 - 2] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) arr_7 [(unsigned short)2] [(signed char)4] [(unsigned short)2])) != (arr_4 [i_0])));
                        }
                        arr_46 [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_18) : (((/* implicit */int) arr_38 [i_2] [i_1]))));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 3; i_15 < 7; i_15 += 1) 
                        {
                            arr_51 [i_15] [i_1] [i_1] [i_1] [i_1] [i_0] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(-1567684091)))) ? ((~(((/* implicit */int) var_1)))) : (((((/* implicit */_Bool) 1046528)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                            var_38 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)30425)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_39 [i_0] [i_0] [(unsigned short)6] [i_0] [i_1] [i_0]))));
                        }
                        for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) max((var_39), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) - (((var_16) / (arr_49 [i_0] [i_0] [i_0] [i_13] [i_16] [i_0] [i_1]))))))));
                            var_40 = ((/* implicit */int) var_7);
                            var_41 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_5 [(signed char)4] [(signed char)4] [(signed char)4])) : (((/* implicit */int) arr_0 [i_16])))) : (((/* implicit */int) var_6))));
                            var_42 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [i_0] [i_1] [i_0] [5] [i_2] [i_2]))));
                        }
                    }
                }
            } 
        } 
        var_43 = (~(((/* implicit */int) arr_43 [i_0] [i_0] [i_0] [i_0] [i_0])));
        arr_54 [i_0] = ((/* implicit */unsigned short) arr_24 [(unsigned short)0]);
    }
    for (long long int i_17 = 3; i_17 < 16; i_17 += 3) 
    {
        /* LoopNest 3 */
        for (long long int i_18 = 2; i_18 < 17; i_18 += 3) 
        {
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                for (short i_20 = 0; i_20 < 18; i_20 += 3) 
                {
                    {
                        arr_68 [i_17] [i_19] [i_20] = ((/* implicit */short) arr_55 [(_Bool)1]);
                        var_44 = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2550648155580118111LL)) ? (((/* implicit */int) (unsigned char)162)) : (((/* implicit */int) (unsigned short)55420))))) || (((/* implicit */_Bool) ((unsigned short) (_Bool)0))))), (((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_18)))) || (((/* implicit */_Bool) max(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)-93)))))))));
                        var_45 = ((/* implicit */_Bool) (short)-16688);
                        var_46 -= ((/* implicit */int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) (+(((/* implicit */int) (signed char)-21))))) : (min((((/* implicit */long long int) max((arr_61 [i_20] [i_18 - 1] [i_20] [(unsigned short)8]), (((/* implicit */unsigned short) arr_57 [i_18]))))), (((long long int) var_5))))));
                        var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (((+(((/* implicit */int) arr_65 [i_20])))) > ((~(((/* implicit */int) arr_63 [i_17] [i_17] [8LL] [i_18])))))))));
                    }
                } 
            } 
        } 
        var_48 = ((/* implicit */_Bool) ((var_0) * (((/* implicit */unsigned long long int) ((((long long int) var_13)) * (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)32152))))))))));
        var_49 = ((/* implicit */int) max((var_49), (((((/* implicit */_Bool) (unsigned short)42976)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_59 [i_17] [(unsigned short)14] [i_17]))))));
    }
    var_50 = ((/* implicit */unsigned short) max((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) ((unsigned short) var_10))))) : (((/* implicit */int) var_1)))))));
}
