/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76443
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76443 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76443
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            var_18 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_0 [i_0] [i_0]) : (arr_0 [(signed char)3] [i_0]));
            /* LoopNest 2 */
            for (unsigned char i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        var_19 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) 9223372036720558080LL)) || (((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_2]))))) : (((((/* implicit */_Bool) 9223372036720558080LL)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(unsigned char)1])))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036720558080LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)126))) : (15671089358228545738ULL)));
                    }
                } 
            } 
        }
        /* LoopSeq 2 */
        for (long long int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
            {
                for (unsigned int i_6 = 4; i_6 < 13; i_6 += 3) 
                {
                    for (unsigned int i_7 = 3; i_7 < 14; i_7 += 4) 
                    {
                        {
                            var_21 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                            var_22 += ((/* implicit */signed char) ((arr_9 [i_7 - 1] [i_7 - 1] [i_6 - 3] [i_6 - 3]) & (950423140786937369LL)));
                            var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_0))))));
                            var_24 = ((/* implicit */signed char) var_8);
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (long long int i_8 = 3; i_8 < 14; i_8 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_9 = 1; i_9 < 12; i_9 += 2) 
                {
                    arr_27 [i_0] [i_0] [i_8] [i_9 + 3] = ((/* implicit */unsigned long long int) ((unsigned int) arr_11 [i_0] [i_9 + 1] [i_8] [(unsigned char)5] [i_8 - 2] [i_9 + 1]));
                    var_25 = ((((/* implicit */_Bool) ((long long int) arr_5 [12LL] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [5LL] [i_0]))) : (var_12));
                }
                /* LoopSeq 1 */
                for (unsigned short i_10 = 1; i_10 < 12; i_10 += 4) 
                {
                    var_26 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_8 - 1]))) & (1000806008U)));
                    var_27 = ((/* implicit */signed char) ((unsigned long long int) arr_7 [i_0] [i_0] [i_8 - 2]));
                    arr_30 [i_0] = ((/* implicit */unsigned int) ((long long int) arr_26 [i_8 - 3] [(unsigned char)4] [i_10 + 2] [(signed char)9]));
                }
            }
            for (signed char i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                var_28 = ((/* implicit */unsigned short) max((var_28), (((/* implicit */unsigned short) arr_33 [i_0] [10LL] [i_4]))));
                var_29 = var_17;
                var_30 += ((var_2) / (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_11]))));
            }
            var_31 = ((/* implicit */unsigned long long int) min((var_31), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [i_0] [i_0] [i_0] [(signed char)1] [i_4])))))));
            var_32 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) / (3294161287U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_4] [i_4] [i_4]))) : (arr_22 [i_0] [(unsigned short)8] [i_0])));
        }
        for (unsigned short i_12 = 3; i_12 < 14; i_12 += 2) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((arr_0 [i_12 - 3] [0LL]) / (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_12 - 3] [2LL]))))))));
            /* LoopNest 2 */
            for (unsigned char i_13 = 0; i_13 < 15; i_13 += 4) 
            {
                for (unsigned short i_14 = 0; i_14 < 15; i_14 += 3) 
                {
                    {
                        arr_40 [i_13] |= ((/* implicit */long long int) ((((/* implicit */long long int) var_6)) < (var_17)));
                        var_34 ^= (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16))))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_15 = 0; i_15 < 15; i_15 += 3) 
            {
                for (unsigned long long int i_16 = 1; i_16 < 14; i_16 += 4) 
                {
                    for (signed char i_17 = 4; i_17 < 12; i_17 += 2) 
                    {
                        {
                            arr_51 [i_0] [i_17] [i_16] |= ((/* implicit */unsigned char) ((unsigned short) var_17));
                            var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) arr_3 [i_0]))));
                        }
                    } 
                } 
            } 
            arr_52 [i_0] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_12 - 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8188))) : (1000806008U)));
        }
    }
    for (unsigned char i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        var_36 -= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)4518))));
        /* LoopSeq 2 */
        for (signed char i_19 = 0; i_19 < 10; i_19 += 3) 
        {
            arr_57 [i_18] [(short)1] [i_18] = ((/* implicit */unsigned char) arr_29 [i_18] [(signed char)6] [(unsigned char)10] [i_19]);
            var_37 += ((/* implicit */long long int) ((unsigned int) var_15));
            arr_58 [(short)4] &= var_1;
            /* LoopSeq 1 */
            for (short i_20 = 1; i_20 < 9; i_20 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((unsigned int) max((-9223372036720558080LL), (((/* implicit */long long int) (unsigned char)4)))))));
                    var_39 = ((/* implicit */signed char) (-(((arr_29 [i_18] [i_20] [(signed char)8] [13U]) + (((/* implicit */unsigned int) ((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_10))))))))));
                    var_40 &= ((/* implicit */signed char) min((var_3), (((/* implicit */long long int) min((arr_32 [i_21] [i_21]), (arr_32 [i_21] [i_19]))))));
                }
                /* LoopNest 2 */
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 2) 
                {
                    for (unsigned int i_23 = 1; i_23 < 9; i_23 += 3) 
                    {
                        {
                            arr_70 [i_18] [(unsigned short)2] [(unsigned char)2] [i_20] [(unsigned char)2] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) 8588886016LL))) ? (((unsigned int) var_15)) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                            arr_71 [i_20] [(unsigned char)8] [i_19] [(unsigned char)7] [(signed char)7] [(unsigned char)8] [i_19] = ((/* implicit */unsigned short) arr_35 [i_20]);
                            arr_72 [i_20] = ((/* implicit */unsigned short) ((long long int) max((arr_31 [i_20] [i_19] [i_19]), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -9223372036720558080LL))))))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */long long int) (signed char)-87);
                var_42 = ((((/* implicit */long long int) (-(((/* implicit */int) (signed char)-39))))) & ((-((-(-6738832175970521246LL))))));
            }
        }
        for (unsigned int i_24 = 4; i_24 < 9; i_24 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_25 = 0; i_25 < 10; i_25 += 4) 
            {
                for (unsigned short i_26 = 2; i_26 < 9; i_26 += 4) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) arr_49 [i_24 - 4] [i_26])) ? (arr_24 [i_18] [i_26 - 2] [i_25] [i_26]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_24 - 1]))))) / (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_73 [2LL])) && (((/* implicit */_Bool) (~(-3715658708461605045LL))))))))));
                        var_44 = ((/* implicit */unsigned int) max((var_44), (((/* implicit */unsigned int) arr_63 [i_18] [i_24 + 1] [i_24 + 1] [i_26] [i_26 - 2]))));
                        var_45 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) 9223372036720558079LL)) ? (((/* implicit */int) arr_50 [i_24 - 2] [i_24 - 2] [i_26 - 1])) : (((/* implicit */int) (unsigned short)60764)))) != (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)252))) <= (((-9223372036720558080LL) - (((/* implicit */long long int) 134217728U)))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_27 = 3; i_27 < 9; i_27 += 3) 
            {
                var_46 = ((/* implicit */unsigned int) max((((var_9) & (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11))))))), (((/* implicit */int) ((arr_48 [i_24] [i_24 - 3] [i_24 - 4]) == (arr_48 [(signed char)1] [i_24 + 1] [i_24 + 1]))))));
                var_47 -= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_7)))))))))));
            }
            for (unsigned int i_28 = 0; i_28 < 10; i_28 += 1) 
            {
                arr_83 [(signed char)8] [i_24] [(signed char)8] [i_28] = ((/* implicit */long long int) var_15);
                var_48 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (-((+(arr_24 [i_18] [i_24 - 1] [8] [10LL]))))))));
                var_49 = ((/* implicit */unsigned long long int) arr_59 [i_18] [2] [i_24 - 3] [i_24]);
            }
            var_50 |= var_14;
            /* LoopSeq 1 */
            for (signed char i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                var_51 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_37 [i_24 - 4])))) || (((/* implicit */_Bool) ((unsigned int) (unsigned short)5333)))));
                var_52 = (~(((/* implicit */int) ((((/* implicit */_Bool) arr_48 [i_24 - 1] [(unsigned char)13] [i_24 - 1])) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_62 [i_18] [i_29] [(short)2] [i_29])), (2444632067U))))))));
                arr_86 [(unsigned char)1] = ((/* implicit */long long int) ((((/* implicit */int) ((unsigned char) arr_82 [i_24 + 1] [i_24 - 1] [(unsigned short)0] [i_24 - 2]))) <= ((~(arr_82 [i_24 + 1] [i_24] [1U] [i_24 - 2])))));
                var_53 ^= ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
            }
            var_54 *= ((/* implicit */short) arr_60 [i_18] [i_24] [i_24 - 2] [(signed char)5]);
        }
    }
    var_55 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (~(6255497570481455729ULL))))) ? (((-9223372036720558080LL) | ((+(2267075957378724459LL))))) : ((-(max((((/* implicit */long long int) (unsigned char)227)), (9223372036720558080LL)))))));
    var_56 &= ((/* implicit */unsigned int) var_10);
    /* LoopSeq 1 */
    for (unsigned int i_30 = 0; i_30 < 23; i_30 += 2) 
    {
        var_57 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_89 [i_30] [i_30])))) && (((((/* implicit */_Bool) max((var_15), (((/* implicit */unsigned long long int) arr_87 [i_30]))))) || ((!(((/* implicit */_Bool) arr_88 [i_30]))))))));
        /* LoopSeq 1 */
        for (long long int i_31 = 4; i_31 < 22; i_31 += 4) 
        {
            var_58 = ((/* implicit */long long int) max((var_58), (((((((/* implicit */_Bool) arr_91 [i_31 - 4] [i_31 + 1] [i_31 - 4])) ? (arr_91 [i_31 - 4] [i_31 - 2] [i_31 - 1]) : (((/* implicit */long long int) arr_88 [i_31 + 1])))) ^ (var_13)))));
            var_59 ^= arr_91 [i_30] [(unsigned char)4] [i_31 - 1];
            var_60 = ((/* implicit */unsigned int) arr_91 [(signed char)18] [i_31 - 2] [i_31 - 3]);
            var_61 = ((/* implicit */int) var_4);
        }
    }
}
