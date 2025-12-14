/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 72721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=72721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/72721
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
    var_15 = ((/* implicit */long long int) ((unsigned long long int) var_5));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (+((-(arr_0 [i_0])))))), (((arr_1 [i_0]) << (((min((arr_1 [i_0]), (((/* implicit */unsigned long long int) arr_0 [i_0])))) - (1436049228530662175ULL)))))));
        var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(arr_0 [i_0]))))))), ((unsigned char)185)));
        /* LoopNest 3 */
        for (unsigned int i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (unsigned int i_2 = 2; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 1; i_3 < 23; i_3 += 3) 
                {
                    {
                        var_18 = ((/* implicit */int) ((unsigned long long int) min(((~(((/* implicit */int) (unsigned char)71)))), (((/* implicit */int) var_10)))));
                        var_19 = ((/* implicit */unsigned int) min((min((((/* implicit */long long int) (unsigned char)94)), (arr_0 [i_3]))), (((/* implicit */long long int) arr_8 [i_3] [i_3] [i_3 + 2] [i_3 - 1] [i_3 - 1]))));
                        var_20 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_3] [i_1] [22] [i_3 + 2])) ? (-8871216018657477532LL) : (((/* implicit */long long int) var_3))))), (arr_1 [i_0]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_5 = 4; i_5 < 10; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                {
                    arr_15 [9U] [9U] [i_5] [i_6] = ((/* implicit */unsigned char) 2021678357U);
                    var_21 = ((/* implicit */signed char) max((((/* implicit */long long int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (var_2))), (((/* implicit */int) (!(arr_13 [i_4] [i_4] [i_4]))))))), (min((min((8871216018657477532LL), (((/* implicit */long long int) (unsigned char)57)))), (((/* implicit */long long int) var_6))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
        {
            for (unsigned int i_8 = 1; i_8 < 11; i_8 += 3) 
            {
                {
                    arr_20 [i_4] [i_7] [i_8] = ((/* implicit */int) ((unsigned int) (!(((_Bool) arr_7 [i_4] [i_4] [i_4] [i_4])))));
                    var_22 = min(((+(arr_9 [i_8 + 1]))), (((/* implicit */unsigned int) arr_11 [i_8])));
                    arr_21 [i_7] [(_Bool)1] [i_8] [i_8] = ((/* implicit */unsigned int) (-(((/* implicit */int) min((arr_7 [i_4] [i_4] [i_8] [i_8]), (arr_7 [i_4] [i_4] [i_8 + 1] [i_7]))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            for (int i_10 = 0; i_10 < 12; i_10 += 1) 
            {
                {
                    var_23 ^= ((/* implicit */long long int) ((unsigned int) (((+(8871216018657477526LL))) == (max((((/* implicit */long long int) 1042897804U)), (-1787009227272250484LL))))));
                    var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) var_0)), ((unsigned char)181))))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4] [i_9] [i_9] [i_10]))) * (1930227841U))))))));
                    /* LoopNest 2 */
                    for (int i_11 = 1; i_11 < 10; i_11 += 1) 
                    {
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            {
                                arr_34 [i_12] [i_12] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)32768))) / (((((/* implicit */_Bool) var_9)) ? (8871216018657477535LL) : (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_4] [i_9] [i_10] [i_4] [i_12])))))))), (((((/* implicit */_Bool) max((arr_5 [i_4] [i_9] [i_10] [i_11 + 1]), (((/* implicit */unsigned int) arr_26 [i_9] [i_11] [i_12]))))) ? (max((((/* implicit */unsigned long long int) arr_10 [i_4])), (9732090881601968479ULL))) : (18446744073709551615ULL)))));
                                var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_19 [i_10] [i_4] [i_10] [i_11 + 2]) : (((/* implicit */long long int) arr_33 [i_4] [i_9] [i_10] [i_10] [i_11] [i_12]))))) && (((/* implicit */_Bool) min((var_12), (((/* implicit */long long int) (unsigned char)160))))))) ? (max((((/* implicit */unsigned long long int) arr_19 [i_11 - 1] [i_11 + 2] [i_11 + 2] [i_11 - 1])), ((-(var_11))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_19 [i_9] [i_9] [i_11 + 2] [i_11 + 2])) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4])))))) ? (arr_16 [i_11 - 1]) : (((/* implicit */long long int) max((586922513U), (((/* implicit */unsigned int) arr_10 [i_9])))))))))))));
                                arr_35 [2U] [i_11 - 1] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned short) ((unsigned int) ((unsigned char) arr_0 [i_4])));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned char i_13 = 1; i_13 < 8; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_15 = 0; i_15 < 11; i_15 += 3) 
                {
                    for (unsigned short i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            /* LoopSeq 4 */
                            for (unsigned char i_17 = 0; i_17 < 11; i_17 += 3) 
                            {
                                var_26 -= (-((-(254U))));
                                arr_48 [i_13] [i_14] [i_15] [i_16] [i_17] &= ((/* implicit */unsigned char) min((((((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_0 [i_14]) : (var_4))) / (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)118)) * (((/* implicit */int) var_7))))))), (((/* implicit */long long int) ((67104768U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_13 - 1] [i_13 + 3] [i_13] [(unsigned char)5]))))))));
                                var_27 *= ((/* implicit */unsigned long long int) (~(var_3)));
                            }
                            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                            {
                                var_28 = ((/* implicit */_Bool) ((unsigned char) var_12));
                                var_29 = ((/* implicit */long long int) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_13] [i_13] [i_13 - 1] [i_13 - 1]))))), (min((((/* implicit */unsigned int) max((arr_31 [i_13] [i_13 + 3] [i_13] [i_13] [i_13]), (((/* implicit */signed char) (_Bool)1))))), (min((2364739455U), (((/* implicit */unsigned int) (unsigned char)160))))))));
                                var_30 = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_51 [i_13] [i_13] [i_13 + 1] [i_13] [i_13 + 3] [i_18])))), (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_10))))))))));
                            }
                            for (_Bool i_19 = 1; i_19 < 1; i_19 += 1) 
                            {
                                var_31 = ((/* implicit */_Bool) var_4);
                                var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) (!(((/* implicit */_Bool) var_14)))))) ? (((/* implicit */unsigned long long int) max((arr_3 [i_13 + 1]), (((/* implicit */long long int) var_10))))) : (min((((/* implicit */unsigned long long int) 2364739460U)), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_13)))))));
                            }
                            /* vectorizable */
                            for (unsigned int i_20 = 0; i_20 < 11; i_20 += 3) 
                            {
                                arr_59 [i_15] = ((/* implicit */unsigned int) ((unsigned short) arr_26 [i_13 + 1] [i_13 + 3] [i_13 - 1]));
                                var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_20] [i_20] [i_20] [(_Bool)1])) ? (arr_55 [i_13 + 2] [i_13 + 2] [i_13] [i_13] [i_13 + 1]) : (((((/* implicit */_Bool) arr_44 [i_13] [i_14] [(signed char)9] [i_13])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)185))) : (arr_44 [i_20] [i_20] [i_20] [i_20])))));
                                arr_60 [i_15] = arr_33 [i_13] [i_15] [i_14] [i_15] [i_13] [i_14];
                                var_34 = ((/* implicit */unsigned int) var_1);
                                var_35 = ((/* implicit */signed char) ((1005787698U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_13 + 2] [i_13] [i_13 + 2] [i_13 + 2])))));
                            }
                            arr_61 [i_13] [i_13] [i_13] [9U] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) 8714653192107583130ULL))) << (((((/* implicit */int) (unsigned char)161)) - (144)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) arr_40 [i_16])), (var_3)))) ? (((/* implicit */int) ((var_7) && (var_0)))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) arr_7 [i_13] [i_14] [i_16] [3LL])))))))) : (min((((/* implicit */unsigned long long int) arr_30 [i_13] [i_13 + 1])), (arr_27 [i_13] [i_13 + 2] [i_13 + 2] [i_13 + 3] [i_13])))));
                            var_36 = ((/* implicit */unsigned char) arr_11 [i_16]);
                        }
                    } 
                } 
                var_37 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(arr_3 [i_13 + 1])))) ? (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (signed char)-99)), (arr_3 [i_13 + 1])))) : (var_13)));
                var_38 = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */int) max((((/* implicit */unsigned char) arr_31 [i_13 + 3] [7U] [i_13 + 3] [i_14] [i_14])), (arr_42 [i_13 + 3] [i_13] [i_13 + 3])))), ((~(((/* implicit */int) var_5)))))));
            }
        } 
    } 
    var_39 -= ((/* implicit */_Bool) var_6);
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_21 = 0; i_21 < 13; i_21 += 4) 
    {
        arr_64 [i_21] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4)))))));
        arr_65 [i_21] = ((/* implicit */unsigned char) ((((_Bool) (unsigned char)42)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)57429))) : (((var_12) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    }
    for (unsigned long long int i_22 = 0; i_22 < 13; i_22 += 1) 
    {
        /* LoopSeq 1 */
        for (long long int i_23 = 0; i_23 < 13; i_23 += 3) 
        {
            var_40 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_3 [i_23])) ? (arr_3 [i_23]) : (arr_3 [i_22]))) / (max((var_4), (arr_3 [i_22])))));
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_66 [10] [i_23])) ? (((/* implicit */long long int) ((var_6) ^ (arr_71 [i_22] [i_22])))) : (min((((/* implicit */long long int) var_10)), (arr_63 [i_22]))))), (((/* implicit */long long int) (unsigned char)160)))))));
            /* LoopNest 2 */
            for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
            {
                for (long long int i_25 = 0; i_25 < 13; i_25 += 1) 
                {
                    {
                        var_42 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 18005602416459776LL)) ? (arr_0 [i_24 + 1]) : (arr_66 [i_24 + 1] [i_24 + 1])))) ? (min((arr_63 [i_24 + 1]), (arr_0 [i_24 + 1]))) : (((((arr_66 [i_24 + 1] [i_24 + 1]) + (9223372036854775807LL))) << (((8714653192107583155ULL) - (8714653192107583155ULL))))));
                        arr_77 [i_22] = ((/* implicit */signed char) (+(((unsigned int) arr_1 [i_24 + 1]))));
                        arr_78 [i_25] [i_25] = ((/* implicit */int) 6333353157463548350LL);
                    }
                } 
            } 
        }
        var_43 -= ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) & (max(((-(arr_4 [i_22]))), (min((((/* implicit */unsigned int) arr_72 [i_22] [1LL] [i_22])), (2364739440U)))))));
        var_44 = 288230341791973376LL;
    }
}
