/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 57261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=57261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/57261
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 10; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) ((((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1] [i_0]))) & (var_5)))) & (((/* implicit */int) (_Bool)0)))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) arr_4 [(_Bool)1]))));
                                arr_16 [i_0 + 2] [i_1] [i_2] [i_4] = ((((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) arr_7 [i_0] [i_1] [i_2] [i_0 + 1]))), ((-(((/* implicit */int) arr_5 [i_0 + 4] [i_0 + 4]))))))) >= (((((/* implicit */_Bool) (unsigned char)1)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) & (223256156558686937ULL))) : (arr_8 [i_3 - 1] [i_2]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_9)))))))) << (((/* implicit */int) var_4)))))));
    /* LoopSeq 3 */
    for (short i_5 = 0; i_5 < 21; i_5 += 3) 
    {
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((223256156558686955ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) ? (min((223256156558686937ULL), (((223256156558686943ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned long long int) ((min((((/* implicit */int) arr_18 [i_5])), (arr_20 [i_5] [i_6]))) >> (((((/* implicit */_Bool) (unsigned char)20)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3)))))))));
            arr_21 [i_5] [i_5] = arr_17 [i_5] [i_5];
        }
        for (unsigned char i_7 = 2; i_7 < 18; i_7 += 2) 
        {
            var_15 = var_9;
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 21; i_8 += 4) 
            {
                var_16 = ((/* implicit */unsigned char) (-(((/* implicit */int) (_Bool)1))));
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 0; i_9 < 21; i_9 += 1) 
                {
                    for (int i_10 = 2; i_10 < 19; i_10 += 4) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) var_1);
                            var_18 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -1917346203)) - (18223487917150864694ULL)));
                            var_19 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((_Bool) (+(((/* implicit */int) var_4))))))));
                            var_20 = ((/* implicit */_Bool) ((18446744073709551612ULL) * (2820658493163944402ULL)));
                        }
                    } 
                } 
            }
            var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_24 [i_7 + 3] [i_7 - 1] [i_7 + 1]))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (short)-20010))));
            var_22 = ((/* implicit */_Bool) max((min((arr_31 [i_7 - 1] [i_7 + 1] [i_7 + 1]), (arr_31 [i_7 - 2] [i_7 + 1] [i_7 + 1]))), (arr_31 [i_7 + 2] [i_7 + 3] [i_7 + 3])));
        }
        /* LoopNest 3 */
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (unsigned long long int i_12 = 1; i_12 < 17; i_12 += 4) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    {
                        var_23 = arr_30 [i_13] [i_12 + 1] [i_12 + 1] [i_11] [i_11] [i_5];
                        var_24 = ((/* implicit */_Bool) var_10);
                        arr_45 [i_11] [(short)12] [(short)12] [i_13] [i_12 + 2] [i_13] = ((/* implicit */unsigned long long int) ((min((arr_31 [i_12] [i_12 - 1] [i_12 + 2]), (((/* implicit */int) var_6)))) & (((/* implicit */int) arr_27 [i_5] [i_11] [i_5]))));
                        var_25 = ((/* implicit */_Bool) max((var_25), ((_Bool)1)));
                    }
                } 
            } 
        } 
    }
    for (short i_14 = 3; i_14 < 9; i_14 += 2) 
    {
        arr_49 [i_14] [i_14] = arr_32 [i_14] [i_14] [i_14 + 1] [i_14] [i_14 - 1] [i_14];
        var_26 = ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) arr_24 [i_14 + 1] [i_14] [i_14])))))))), (((int) arr_12 [i_14] [i_14 - 2] [i_14 - 1] [i_14] [i_14]))));
        var_27 ^= ((/* implicit */_Bool) ((((_Bool) arr_4 [i_14 - 1])) ? (max((((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) ((_Bool) arr_24 [i_14 + 1] [i_14 + 1] [8]))))) : (((/* implicit */int) var_3))));
        /* LoopNest 3 */
        for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                for (unsigned char i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_18 = 1; i_18 < 8; i_18 += 3) /* same iter space */
                        {
                            var_28 = ((/* implicit */_Bool) max((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) arr_53 [i_18] [i_15] [i_15])), (var_2)))) + (2147483647))) >> (((/* implicit */int) var_1))))) ? (((/* implicit */int) min((arr_13 [i_14] [i_17] [i_17]), (arr_1 [i_17] [i_18])))) : (((/* implicit */int) min((arr_13 [i_14] [i_15] [i_14 - 1]), (min((var_7), (arr_4 [i_15])))))))))));
                            var_29 = (+(((((/* implicit */int) arr_12 [i_18] [i_17] [i_16] [i_15] [(short)6])) - ((~(((/* implicit */int) (_Bool)1)))))));
                        }
                        for (unsigned char i_19 = 1; i_19 < 8; i_19 += 3) /* same iter space */
                        {
                            var_30 = ((/* implicit */short) (_Bool)0);
                            var_31 = min((max((((/* implicit */int) arr_17 [i_14 + 1] [i_14 - 1])), (arr_28 [i_17] [i_14 - 1]))), ((-(((/* implicit */int) arr_17 [i_19 - 1] [i_14 - 1])))));
                        }
                        for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                        {
                            var_32 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) >= (arr_43 [i_14 + 1] [i_16] [i_17] [i_20])))), (((arr_15 [i_15] [i_15] [i_15] [i_14 + 1] [i_14 + 1]) / (arr_3 [i_17])))));
                            var_33 = ((/* implicit */unsigned long long int) var_9);
                            arr_67 [i_20] [i_20] [i_17] [i_14 - 2] [i_20] [i_16] = ((/* implicit */_Bool) arr_59 [i_15] [i_16] [i_17] [i_20]);
                            arr_68 [i_20] = ((/* implicit */short) ((((((/* implicit */int) (short)12)) - (((((/* implicit */_Bool) 1881566876)) ? (((/* implicit */int) (_Bool)1)) : (-133670904))))) + (((/* implicit */int) ((short) arr_7 [i_14 + 1] [i_14 + 1] [i_14 - 2] [i_14 - 1])))));
                            var_34 = ((/* implicit */_Bool) arr_3 [i_14]);
                        }
                        var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) (((!(((_Bool) arr_14 [i_14] [i_15] [i_15] [i_15] [i_16] [i_17])))) ? (((((/* implicit */_Bool) arr_57 [i_14 - 2] [i_14 + 1] [i_14 - 3])) ? (min((arr_61 [i_14 - 2] [(_Bool)1] [i_17] [i_17] [i_15] [i_15] [i_17]), (((/* implicit */int) var_3)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_22 [i_14] [(_Bool)1] [i_17])) || (((/* implicit */_Bool) arr_29 [i_17] [i_16] [i_15] [i_14]))))))) : (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_58 [i_16] [i_16] [i_16] [i_17])), (arr_5 [i_15] [i_15])))) || (((((/* implicit */_Bool) arr_14 [i_14] [i_15] [i_15] [i_15] [i_16] [i_17])) || (((/* implicit */_Bool) (short)-9206))))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_21 = 1; i_21 < 20; i_21 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_22 = 0; i_22 < 22; i_22 += 4) 
        {
            var_36 = ((/* implicit */_Bool) ((((/* implicit */int) arr_71 [i_22] [i_21 - 1])) >> (((((/* implicit */int) arr_71 [i_22] [i_21 - 1])) - (49)))));
            var_37 = ((/* implicit */short) ((int) (((_Bool)1) ? (-1313754262) : (((/* implicit */int) (_Bool)1)))));
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_38 = arr_76 [i_21 + 2] [i_21 + 2] [i_21 - 1];
            var_39 = min((arr_70 [i_23] [i_21 + 2]), (min(((!(var_4))), (arr_76 [i_21 + 1] [i_23] [i_23]))));
            var_40 = ((1725822896) >> (min((((((/* implicit */int) arr_77 [i_23] [i_21])) & (((/* implicit */int) var_2)))), ((((_Bool)1) ? (((/* implicit */int) arr_70 [i_21 + 1] [i_21 + 1])) : (1917346203))))));
        }
        /* LoopNest 2 */
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            for (short i_25 = 0; i_25 < 22; i_25 += 3) 
            {
                {
                    arr_83 [i_21 + 2] [i_24] [i_25] [i_24] = ((/* implicit */unsigned long long int) arr_80 [i_21 + 1]);
                    var_41 = ((_Bool) ((((/* implicit */_Bool) arr_82 [i_24] [i_21 - 1] [i_25] [i_25])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_82 [i_21 - 1] [i_21 - 1] [i_24] [i_25]))));
                    arr_84 [i_21 + 1] [i_25] [i_25] = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) max(((_Bool)1), ((_Bool)0)))))) | (((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_75 [i_21] [i_24] [i_21])))) << (((var_9) ? (((/* implicit */int) arr_75 [i_21 + 2] [i_24] [i_25])) : (((/* implicit */int) (_Bool)0))))))));
                }
            } 
        } 
    }
    var_42 = ((/* implicit */_Bool) ((unsigned long long int) ((short) (_Bool)0)));
    var_43 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_1))))) ? (((/* implicit */int) min((var_6), ((_Bool)1)))) : (((((/* implicit */_Bool) -753205545)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_7)))) : (min((((/* implicit */unsigned long long int) max((var_1), (var_4)))), (min((var_10), (((/* implicit */unsigned long long int) var_9))))))));
}
