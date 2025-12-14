/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7101
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0 + 1])) + (((/* implicit */int) var_0))));
        var_18 = ((/* implicit */_Bool) arr_1 [i_0 + 3]);
        var_19 += ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */_Bool) arr_1 [13LL]);
                    arr_8 [i_0] [i_0] [i_2 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_2 - 1])) != (((/* implicit */int) arr_1 [i_2 - 1]))));
                    var_21 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 1]);
                    var_22 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_1])) <= (((/* implicit */int) arr_1 [i_1]))));
                    arr_9 [i_0] [i_1] [i_1] = ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
        var_23 += ((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0 + 1]);
    }
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] = ((/* implicit */signed char) ((arr_11 [i_3]) <= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)111)))));
        /* LoopSeq 4 */
        for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_5 = 2; i_5 < 11; i_5 += 3) 
            {
                for (signed char i_6 = 1; i_6 < 10; i_6 += 2) 
                {
                    {
                        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) var_5))));
                        arr_23 [i_3] [i_4] [i_3] [i_6] = var_2;
                        var_25 = ((/* implicit */unsigned int) var_8);
                        var_26 = ((/* implicit */long long int) arr_5 [i_5] [i_5] [i_5 + 1] [i_5 - 1]);
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned char) arr_7 [i_3] [i_4] [i_4]);
            var_28 = ((/* implicit */_Bool) arr_0 [14LL]);
            /* LoopNest 2 */
            for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
            {
                for (unsigned int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    {
                        arr_28 [i_3] [i_3] [i_7] = ((/* implicit */unsigned short) arr_16 [i_3]);
                        arr_29 [10U] [i_7 - 1] &= ((/* implicit */_Bool) var_6);
                    }
                } 
            } 
            var_29 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) var_3))) - (var_7)));
        }
        for (unsigned int i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            var_30 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3] [i_3] [i_3]))) == (var_12)));
            var_31 = ((/* implicit */unsigned int) var_3);
            /* LoopSeq 3 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                var_32 ^= ((/* implicit */unsigned short) (unsigned char)175);
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    var_33 = var_6;
                    arr_36 [i_3] [i_10] [i_3] = ((/* implicit */unsigned short) ((var_2) == (var_15)));
                }
            }
            for (unsigned int i_12 = 1; i_12 < 11; i_12 += 3) 
            {
                var_34 = ((/* implicit */unsigned int) ((arr_21 [i_12 + 1] [i_12 - 1] [i_12 + 1] [i_12 + 1]) | (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_12] [i_12 - 1] [i_12 - 1])))));
                var_35 = ((arr_25 [i_3] [i_9] [i_3] [i_9]) != (arr_25 [i_3] [i_3] [i_9] [i_12]));
                var_36 = ((/* implicit */unsigned char) max((var_36), (((/* implicit */unsigned char) ((var_4) / (var_4))))));
                /* LoopSeq 1 */
                for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                {
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) var_15))));
                    var_38 = ((/* implicit */long long int) arr_5 [i_12 + 1] [i_13] [i_13] [i_13]);
                    var_39 = ((/* implicit */unsigned short) arr_7 [i_12 + 1] [i_9] [i_9]);
                    var_40 = ((/* implicit */unsigned char) ((arr_21 [i_12 - 1] [i_9] [i_12] [i_13]) > (arr_21 [i_12 - 1] [i_9] [i_12 - 1] [i_13])));
                }
            }
            for (unsigned char i_14 = 3; i_14 < 11; i_14 += 1) 
            {
                var_41 = ((/* implicit */signed char) arr_6 [i_14] [i_14] [i_14] [i_14 - 2]);
                /* LoopNest 2 */
                for (unsigned char i_15 = 2; i_15 < 9; i_15 += 3) 
                {
                    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) max((var_42), (((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_15] [i_9] [i_14 - 1] [i_15 + 3])) + (((/* implicit */int) arr_5 [i_3] [i_3] [i_14 + 1] [i_15 - 1])))))));
                            var_43 = ((/* implicit */unsigned int) max((var_43), (((/* implicit */unsigned int) ((arr_0 [i_14 + 1]) & (arr_0 [i_14 + 1]))))));
                        }
                    } 
                } 
            }
            var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) arr_32 [(_Bool)1] [i_9]))));
            arr_51 [i_3] = arr_21 [i_9] [i_9] [i_9] [i_9];
        }
        for (unsigned int i_17 = 1; i_17 < 11; i_17 += 3) 
        {
            arr_54 [i_3] = ((/* implicit */_Bool) var_4);
            var_45 = arr_42 [i_3] [i_17 + 1] [i_3];
            var_46 = ((/* implicit */unsigned short) var_8);
            var_47 = ((/* implicit */long long int) var_12);
        }
        for (unsigned int i_18 = 4; i_18 < 9; i_18 += 2) 
        {
            var_48 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_31 [i_18] [i_18 + 1]))) <= (arr_35 [i_3] [i_3])));
            arr_59 [i_3] = ((/* implicit */unsigned short) arr_53 [i_18 + 2] [i_3] [i_18 - 2]);
        }
    }
    for (unsigned char i_19 = 0; i_19 < 25; i_19 += 3) 
    {
        var_49 = ((/* implicit */_Bool) max((var_49), (((/* implicit */_Bool) arr_60 [i_19]))));
        var_50 = ((/* implicit */_Bool) arr_60 [i_19]);
        var_51 += ((/* implicit */_Bool) max((((((var_2) + (9223372036854775807LL))) << (((((/* implicit */int) arr_60 [i_19])) - (66))))), (((/* implicit */long long int) min((arr_60 [i_19]), (arr_60 [i_19]))))));
    }
    /* LoopSeq 1 */
    for (long long int i_20 = 0; i_20 < 13; i_20 += 1) 
    {
        arr_64 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */int) min((((/* implicit */unsigned short) var_3)), (max((((/* implicit */unsigned short) arr_4 [i_20] [i_20] [i_20])), (var_16)))))) == (((/* implicit */int) arr_63 [i_20]))));
        arr_65 [i_20] = ((/* implicit */unsigned int) var_1);
    }
    var_52 |= var_0;
    /* LoopNest 3 */
    for (unsigned short i_21 = 0; i_21 < 23; i_21 += 3) 
    {
        for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
        {
            for (unsigned short i_23 = 0; i_23 < 23; i_23 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_24 = 0; i_24 < 23; i_24 += 2) 
                    {
                        arr_74 [i_24] [i_22] [i_21] [i_23] [i_23] = ((/* implicit */unsigned int) arr_69 [i_21] [i_21]);
                        var_53 *= ((/* implicit */unsigned char) var_9);
                    }
                    for (unsigned int i_25 = 0; i_25 < 23; i_25 += 2) 
                    {
                        var_54 = ((/* implicit */unsigned char) max((arr_67 [i_22] [i_23]), (((var_9) << (((((/* implicit */int) arr_76 [i_21])) - (26722)))))));
                        var_55 = ((/* implicit */unsigned int) min((var_55), (max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_21]))) != (var_12)))), (435588534U)))));
                    }
                    var_56 = ((/* implicit */_Bool) min((var_56), (((/* implicit */_Bool) var_9))));
                    /* LoopNest 2 */
                    for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                    {
                        for (unsigned short i_27 = 2; i_27 < 21; i_27 += 3) 
                        {
                            {
                                var_57 ^= ((/* implicit */unsigned short) arr_61 [i_21] [i_21]);
                                arr_84 [i_27] [i_26] [i_21] [i_22] [i_21] = min((((/* implicit */long long int) arr_76 [i_21])), (var_2));
                                arr_85 [i_27] [i_21] [i_21] [i_21] [i_22] [i_21] = ((/* implicit */unsigned char) max((((/* implicit */signed char) var_5)), (arr_75 [i_22] [4U] [i_26])));
                                var_58 += arr_66 [i_26] [i_22];
                                var_59 *= ((/* implicit */unsigned short) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_28 = 4; i_28 < 10; i_28 += 2) 
    {
        for (unsigned char i_29 = 1; i_29 < 9; i_29 += 4) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_30 = 2; i_30 < 11; i_30 += 3) 
                {
                    for (unsigned int i_31 = 0; i_31 < 12; i_31 += 2) 
                    {
                        for (unsigned short i_32 = 1; i_32 < 11; i_32 += 2) 
                        {
                            {
                                var_60 += ((/* implicit */_Bool) arr_25 [i_28] [i_29 + 3] [i_30] [i_29 + 3]);
                                var_61 = ((/* implicit */unsigned short) var_6);
                                var_62 = ((/* implicit */unsigned char) min((var_62), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_27 [i_32 + 1] [i_31] [i_30] [i_29]), (var_4)))) || (((/* implicit */_Bool) min((arr_27 [i_28 + 2] [i_29] [i_30 - 2] [i_31]), (((/* implicit */long long int) var_5))))))))));
                                arr_99 [i_30] [i_29 + 1] [i_29 + 1] [i_30] [i_32] = max((((arr_58 [i_28 + 1] [i_29 + 2]) << (((4294967293U) - (4294967277U))))), (((/* implicit */unsigned int) ((arr_58 [i_28 - 3] [i_29 + 3]) != (arr_58 [i_28 + 2] [i_29 + 1])))));
                                var_63 &= ((/* implicit */unsigned short) ((((/* implicit */int) min((var_10), (arr_97 [i_29] [i_29] [i_30 - 2] [3LL])))) == (((/* implicit */int) arr_97 [i_29 + 2] [i_30] [i_30 - 2] [i_32 - 1]))));
                            }
                        } 
                    } 
                } 
                arr_100 [i_28] = ((/* implicit */unsigned short) ((((/* implicit */long long int) max((var_12), (((/* implicit */unsigned int) arr_91 [i_28]))))) == (var_15)));
            }
        } 
    } 
}
