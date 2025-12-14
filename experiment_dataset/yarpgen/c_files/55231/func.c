/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 55231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=55231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/55231
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
    var_13 = ((/* implicit */_Bool) min((var_6), (((/* implicit */long long int) 2025867555U))));
    var_14 = ((/* implicit */short) (~(((/* implicit */int) (short)1229))));
    /* LoopSeq 4 */
    for (signed char i_0 = 1; i_0 < 8; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_9)) ? (2269099741U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)38006)))))))));
        var_16 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
    }
    for (signed char i_1 = 3; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) var_0))));
        /* LoopSeq 2 */
        for (unsigned short i_2 = 1; i_2 < 11; i_2 += 2) 
        {
            arr_10 [i_1 - 1] [i_1] [i_1 - 1] = ((/* implicit */short) (~(arr_8 [i_2])));
            var_18 = ((/* implicit */unsigned char) (~(min((4294967284U), (((/* implicit */unsigned int) min((arr_4 [i_1]), ((short)30666))))))));
            var_19 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [12ULL])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_7))))) ? ((~(18446744073709551615ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_1]))))), (((/* implicit */unsigned long long int) var_3))));
            var_20 ^= ((/* implicit */int) (_Bool)1);
        }
        for (signed char i_3 = 2; i_3 < 12; i_3 += 3) 
        {
            arr_14 [i_1] [i_3] = ((/* implicit */int) (~((~(min((((/* implicit */long long int) var_2)), (arr_12 [i_1 - 1] [i_1 - 1] [i_1])))))));
            arr_15 [i_1 - 2] [i_1] [i_1] = var_5;
            arr_16 [i_1] = ((/* implicit */_Bool) min((min((arr_12 [i_1 + 1] [i_3 - 2] [i_1]), (((/* implicit */long long int) arr_3 [i_1 - 1])))), (((/* implicit */long long int) min((var_0), (arr_3 [i_1 + 1]))))));
            var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (~(((/* implicit */int) var_0)))))));
        }
        /* LoopSeq 2 */
        for (unsigned int i_4 = 0; i_4 < 13; i_4 += 2) 
        {
            arr_19 [i_4] &= ((/* implicit */long long int) (+(((/* implicit */int) max((((/* implicit */short) arr_9 [i_4])), (min((arr_4 [i_4]), (((/* implicit */short) arr_5 [i_4])))))))));
            arr_20 [i_1 - 1] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_2))));
            /* LoopNest 3 */
            for (unsigned short i_5 = 0; i_5 < 13; i_5 += 4) 
            {
                for (short i_6 = 2; i_6 < 10; i_6 += 2) 
                {
                    for (long long int i_7 = 3; i_7 < 12; i_7 += 2) 
                    {
                        {
                            arr_29 [i_1] [i_4] [i_1] [i_4] [7] = ((/* implicit */_Bool) 11U);
                            arr_30 [i_7 - 1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3)))), (((var_1) ? (((/* implicit */int) arr_9 [8U])) : (var_12)))))) ? (((((/* implicit */_Bool) arr_7 [i_7] [1U] [(_Bool)1])) ? (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)85))))) : (((((/* implicit */_Bool) var_2)) ? (-18LL) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)12]))))))) : (((/* implicit */long long int) min((((/* implicit */int) arr_22 [i_7])), ((~(((/* implicit */int) (_Bool)1)))))))));
                            var_22 = ((/* implicit */unsigned char) (+((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)1581))) : (min((2025867555U), (((/* implicit */unsigned int) (unsigned char)75))))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_8 = 3; i_8 < 12; i_8 += 4) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_9 = 0; i_9 < 13; i_9 += 2) /* same iter space */
            {
                var_23 = ((/* implicit */unsigned long long int) (+(((((/* implicit */long long int) ((/* implicit */int) arr_32 [i_1] [i_1]))) ^ (arr_12 [i_1] [(unsigned char)8] [i_1])))));
                arr_36 [i_1] [i_8] [i_9] [(unsigned short)8] = (~((~(((/* implicit */int) arr_6 [i_9] [i_8] [i_1 - 1])))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)-95)) / (((/* implicit */int) (short)32757))));
                var_25 = ((/* implicit */signed char) var_5);
            }
            for (unsigned char i_10 = 0; i_10 < 13; i_10 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 4) /* same iter space */
                {
                    arr_42 [i_8 - 3] [i_8] [i_8 - 3] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
                    arr_43 [i_1] [i_1] = ((/* implicit */unsigned long long int) (+(min(((~(arr_12 [(unsigned char)1] [i_8 - 2] [i_1]))), (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_8 [i_10])), (2025867553U))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_12 = 4; i_12 < 12; i_12 += 2) /* same iter space */
                    {
                        arr_47 [i_11] [i_1] [i_1] [i_1] = ((/* implicit */long long int) 2025867555U);
                        arr_48 [i_1 - 2] [i_12] [i_10] [i_1 - 2] [i_10] [i_1] = ((/* implicit */short) var_10);
                        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) (short)32767))));
                    }
                    for (unsigned short i_13 = 4; i_13 < 12; i_13 += 2) /* same iter space */
                    {
                        var_27 = ((/* implicit */signed char) (~((-(((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) arr_13 [i_1] [i_1]))))))));
                        var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((var_2), (((/* implicit */short) var_3)))), (((/* implicit */short) arr_7 [4LL] [i_8 - 3] [i_8 - 3]))))) ? (((((/* implicit */_Bool) arr_32 [i_13] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_38 [i_1 - 1] [i_8] [i_13])))) : ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967295U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))))));
                        var_29 += ((/* implicit */unsigned char) (((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)10179))) : (6197702316457581189LL)));
                    }
                    arr_52 [i_1] [i_8] [i_10] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) var_7))));
                    var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_1) ? (arr_12 [7] [i_8] [i_1]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)19110)) : (((/* implicit */int) var_8)))))))) ? (var_6) : (var_4)));
                }
                for (unsigned long long int i_14 = 2; i_14 < 12; i_14 += 4) /* same iter space */
                {
                    var_31 ^= ((/* implicit */long long int) arr_53 [i_10] [i_10] [i_10] [(unsigned short)12] [i_10] [i_10]);
                    var_32 = ((/* implicit */unsigned short) ((short) max((((/* implicit */int) min(((unsigned short)10827), (((/* implicit */unsigned short) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) var_5)))))));
                    var_33 = ((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)34857))));
                    var_34 *= ((/* implicit */signed char) var_6);
                    arr_55 [i_14] [i_1] [i_1] [i_1 - 3] = ((/* implicit */signed char) arr_22 [i_10]);
                }
                var_35 &= ((/* implicit */unsigned char) var_8);
            }
            var_36 = ((/* implicit */short) (_Bool)0);
        }
        var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)16748)) ? (((/* implicit */int) (unsigned char)75)) : (((/* implicit */int) (short)-32315))));
    }
    /* vectorizable */
    for (signed char i_15 = 3; i_15 < 12; i_15 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_16 = 3; i_16 < 12; i_16 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_17 = 2; i_17 < 11; i_17 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_18 = 2; i_18 < 12; i_18 += 4) 
                {
                    var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) (-(((var_11) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_54 [i_15] [i_15] [i_17] [i_18]))))))))));
                    arr_67 [i_15] [i_15] [i_15 - 1] [12] [8] [i_15] = ((/* implicit */short) ((var_12) ^ (((/* implicit */int) (_Bool)0))));
                    arr_68 [i_15 + 1] [(unsigned short)11] [i_15] = ((/* implicit */signed char) 4294967281U);
                }
                arr_69 [i_15 - 1] [i_15] [4] [(_Bool)1] = ((/* implicit */short) var_8);
                var_39 = arr_63 [(_Bool)1] [i_15] [i_15] [i_15];
                var_40 = (+(((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_15 - 2] [i_15] [(unsigned short)4] [i_16 - 1] [i_17]))))));
            }
            for (long long int i_19 = 2; i_19 < 12; i_19 += 2) 
            {
                /* LoopNest 2 */
                for (short i_20 = 1; i_20 < 11; i_20 += 4) 
                {
                    for (short i_21 = 2; i_21 < 10; i_21 += 2) 
                    {
                        {
                            arr_78 [i_15] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_51 [i_21 - 2] [i_20] [(_Bool)1] [(short)2] [(short)2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)))) ? (562949953421311LL) : (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)54)) ^ (((/* implicit */int) var_5)))))));
                            var_41 = ((/* implicit */unsigned char) ((arr_31 [(unsigned char)9] [(_Bool)1] [i_21]) ? (((/* implicit */int) (signed char)95)) : ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)91))))));
                        }
                    } 
                } 
                arr_79 [i_19] [i_19] [i_19] [(_Bool)1] |= ((/* implicit */_Bool) (unsigned short)60999);
                var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_23 [i_15 + 1] [i_15] [i_15 - 2] [(short)4] [(short)2])) ? (((/* implicit */int) arr_50 [i_15] [i_15 - 2] [i_15] [i_15 - 2] [(unsigned char)9])) : (((/* implicit */int) arr_50 [i_15] [i_15 + 1] [i_15] [i_15] [(signed char)10]))));
            }
            /* LoopNest 2 */
            for (unsigned char i_22 = 2; i_22 < 12; i_22 += 3) 
            {
                for (signed char i_23 = 1; i_23 < 12; i_23 += 3) 
                {
                    {
                        var_43 = ((/* implicit */unsigned short) var_7);
                        arr_84 [i_15] [(short)9] [(unsigned char)4] [i_23 - 1] = ((/* implicit */short) (-(((/* implicit */int) var_5))));
                        var_44 = var_1;
                    }
                } 
            } 
            var_45 = ((/* implicit */unsigned char) ((short) ((unsigned int) arr_50 [i_16] [(signed char)8] [i_15] [7LL] [i_15 - 1])));
            /* LoopSeq 1 */
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_88 [i_15 - 2] [i_15 - 3] [i_15] [i_24] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_70 [i_15 - 1] [5ULL] [i_24]))) : (arr_56 [i_15])));
                var_46 = ((/* implicit */_Bool) (~(4174792483757485889LL)));
            }
        }
        var_47 = ((/* implicit */_Bool) max((var_47), (((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_15 + 1] [i_15 - 3] [i_15 - 2] [i_15 + 1] [(unsigned short)6])))))));
    }
    for (signed char i_25 = 3; i_25 < 12; i_25 += 4) /* same iter space */
    {
        var_48 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_77 [i_25 - 3] [i_25 - 1]))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))), (((/* implicit */unsigned long long int) (_Bool)0))));
        var_49 = ((/* implicit */long long int) max((var_49), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (arr_64 [i_25] [i_25] [i_25] [i_25 + 1]))))));
    }
    var_50 = ((/* implicit */int) min((((/* implicit */unsigned long long int) min((var_2), (((/* implicit */short) min((var_5), (var_7))))))), ((~((~(var_11)))))));
    var_51 = ((/* implicit */_Bool) (~(min((((/* implicit */long long int) ((_Bool) (short)-24772))), (max((((/* implicit */long long int) var_9)), (var_6)))))));
}
