/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79483
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79483 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79483
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
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    var_16 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) arr_1 [i_1] [i_0]))))) == (((/* implicit */int) arr_4 [i_0] [i_1]))));
                    arr_7 [i_0] [i_0] [(signed char)7] [i_0] = ((/* implicit */signed char) (-(((((/* implicit */int) (signed char)70)) * (((/* implicit */int) (signed char)84))))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 10; i_4 += 3) 
                        {
                            {
                                var_17 += ((/* implicit */short) min(((signed char)70), ((signed char)77)));
                                arr_14 [i_0] = max((((/* implicit */short) (!(((/* implicit */_Bool) var_12))))), (max((arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_4 - 1]), (arr_13 [i_0] [i_1] [i_2] [(signed char)8] [i_4 + 2] [i_4 - 1]))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_0] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (signed char)70))));
                }
            } 
        } 
    } 
    var_18 = ((signed char) max((((/* implicit */signed char) (!(((/* implicit */_Bool) var_7))))), (var_14)));
    /* LoopNest 2 */
    for (signed char i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        for (signed char i_6 = 4; i_6 < 16; i_6 += 1) 
        {
            {
                var_19 = ((/* implicit */signed char) arr_16 [i_6 + 3] [i_5]);
                arr_21 [i_6 - 1] [i_6] = ((/* implicit */short) var_14);
                var_20 = ((/* implicit */short) max(((+(((/* implicit */int) arr_19 [i_6 + 3] [i_6])))), ((~(((/* implicit */int) arr_19 [i_6 + 3] [i_6]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_7 = 0; i_7 < 17; i_7 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */short) arr_18 [(signed char)3] [i_7]);
        var_22 = (signed char)77;
        /* LoopSeq 1 */
        for (short i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            var_23 = ((/* implicit */short) (signed char)114);
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 17; i_9 += 1) 
            {
                for (signed char i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    {
                        var_24 &= var_3;
                        arr_31 [(signed char)14] [i_8] [i_8] [i_9] = ((/* implicit */short) (signed char)116);
                        var_25 = ((/* implicit */signed char) ((((/* implicit */int) arr_19 [i_9] [i_9])) <= (((/* implicit */int) (signed char)34))));
                    }
                } 
            } 
        }
        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) max(((signed char)-58), ((signed char)-115))))));
    }
    /* vectorizable */
    for (short i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            for (signed char i_13 = 0; i_13 < 17; i_13 += 3) 
            {
                {
                    var_27 = ((/* implicit */short) (~(((/* implicit */int) arr_37 [i_12]))));
                    var_28 ^= var_11;
                }
            } 
        } 
        var_29 &= ((/* implicit */signed char) ((((/* implicit */int) var_12)) + (((((/* implicit */int) (signed char)-22)) - (((/* implicit */int) arr_26 [i_11] [i_11] [i_11]))))));
    }
    for (signed char i_14 = 1; i_14 < 14; i_14 += 1) 
    {
        /* LoopNest 2 */
        for (short i_15 = 0; i_15 < 17; i_15 += 3) 
        {
            for (short i_16 = 2; i_16 < 15; i_16 += 4) 
            {
                {
                    arr_47 [i_14] [i_15] [i_15] [i_15] = ((/* implicit */short) max(((~(((/* implicit */int) arr_33 [i_14 + 2])))), ((-(((/* implicit */int) (signed char)8))))));
                    var_30 = arr_44 [i_15];
                    /* LoopNest 2 */
                    for (short i_17 = 1; i_17 < 16; i_17 += 1) 
                    {
                        for (short i_18 = 0; i_18 < 17; i_18 += 4) 
                        {
                            {
                                var_31 = var_6;
                                var_32 -= ((/* implicit */short) min((((/* implicit */int) min((((/* implicit */short) var_3)), (arr_32 [i_14 + 2])))), (((((/* implicit */int) (signed char)-127)) * ((~(((/* implicit */int) arr_51 [i_18] [i_18] [i_18] [i_18] [i_18]))))))));
                                var_33 = (signed char)77;
                            }
                        } 
                    } 
                    arr_55 [i_14] [i_14] [i_16] = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */int) arr_28 [i_15] [i_15] [i_16 + 1] [i_14])) ^ (((/* implicit */int) (signed char)-114)))) <= (((/* implicit */int) max((var_0), (arr_33 [i_16 - 1])))))))));
                    arr_56 [i_14 + 1] [i_14] [i_15] [i_15] = var_10;
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_19 = 1; i_19 < 15; i_19 += 2) 
        {
            for (signed char i_20 = 0; i_20 < 17; i_20 += 4) 
            {
                for (signed char i_21 = 1; i_21 < 15; i_21 += 3) 
                {
                    {
                        arr_64 [i_14] [i_14] [i_14] [i_14 + 1] [i_14] [i_14] = arr_22 [i_20] [i_21 - 1];
                        arr_65 [i_14] = ((/* implicit */short) min((((((/* implicit */int) arr_17 [i_19])) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))))), (((((/* implicit */int) (signed char)108)) ^ (((/* implicit */int) (signed char)67))))));
                    }
                } 
            } 
        } 
        arr_66 [(short)4] |= ((/* implicit */short) min((((/* implicit */int) (short)-20903)), ((-((-(((/* implicit */int) (signed char)-118))))))));
        arr_67 [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((short) arr_44 [i_14 - 1])))));
    }
    /* LoopNest 2 */
    for (signed char i_22 = 2; i_22 < 6; i_22 += 1) 
    {
        for (short i_23 = 1; i_23 < 8; i_23 += 4) 
        {
            {
                arr_74 [i_22 - 2] [i_22] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (signed char i_24 = 1; i_24 < 9; i_24 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_25 = 0; i_25 < 10; i_25 += 4) /* same iter space */
                    {
                        var_34 = var_2;
                        var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (+(((/* implicit */int) (signed char)-70)))))));
                    }
                    for (short i_26 = 0; i_26 < 10; i_26 += 4) /* same iter space */
                    {
                        var_36 = ((/* implicit */short) (+(((/* implicit */int) arr_32 [i_23 + 1]))));
                        arr_85 [i_26] [(signed char)2] [i_24] [i_24] |= ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_22 + 1])) <= (((/* implicit */int) var_3))));
                        var_37 = ((short) arr_75 [i_22 + 3] [i_23]);
                    }
                    for (signed char i_27 = 0; i_27 < 10; i_27 += 4) 
                    {
                        var_38 += ((/* implicit */short) (~(((/* implicit */int) (short)127))));
                        var_39 = ((/* implicit */signed char) ((((/* implicit */int) arr_22 [i_24 - 1] [i_24 + 1])) << (((((((/* implicit */int) var_0)) + (17211))) - (25)))));
                    }
                    for (short i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        arr_93 [i_22] [i_23] [i_23] [i_22] = var_14;
                        var_40 = (signed char)44;
                    }
                    var_41 = ((/* implicit */signed char) (((~(((/* implicit */int) arr_38 [i_23 - 1])))) >= (((/* implicit */int) arr_28 [i_24] [i_23] [i_22] [i_22]))));
                    /* LoopNest 2 */
                    for (short i_29 = 0; i_29 < 10; i_29 += 3) 
                    {
                        for (signed char i_30 = 0; i_30 < 10; i_30 += 4) 
                        {
                            {
                                arr_99 [i_22] [(short)9] [(short)7] [(short)9] [i_30] [i_23 - 1] [i_22] = ((/* implicit */short) (((~(((/* implicit */int) var_7)))) < (((/* implicit */int) arr_22 [i_22] [i_22]))));
                                var_42 += ((/* implicit */short) ((((/* implicit */int) arr_88 [i_30] [(signed char)4] [i_30] [i_24 - 1] [i_30])) & (((/* implicit */int) arr_88 [i_30] [i_30] [i_30] [i_24 - 1] [i_30]))));
                                var_43 += ((/* implicit */signed char) ((((/* implicit */int) arr_17 [i_22 - 1])) - (((/* implicit */int) arr_22 [i_22 + 1] [i_22 - 1]))));
                                var_44 = ((/* implicit */signed char) var_8);
                                var_45 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_48 [i_24 + 1] [i_24 - 1] [i_24 - 1]))));
                            }
                        } 
                    } 
                    var_46 = ((/* implicit */signed char) min((var_46), (((/* implicit */signed char) arr_57 [i_24]))));
                }
                var_47 = ((/* implicit */signed char) (~(((/* implicit */int) max((var_13), (((/* implicit */short) arr_39 [i_22])))))));
                /* LoopSeq 3 */
                for (short i_31 = 0; i_31 < 10; i_31 += 4) 
                {
                    arr_103 [(short)9] [i_22] [i_31] = ((/* implicit */signed char) ((((((/* implicit */int) var_2)) + (((/* implicit */int) arr_53 [i_22 - 1] [i_23 + 2] [i_22])))) & (max(((+(((/* implicit */int) (signed char)-116)))), (((/* implicit */int) (signed char)93))))));
                    var_48 += ((/* implicit */signed char) min((((((/* implicit */int) arr_28 [i_23 - 1] [i_23 + 2] [i_31] [i_31])) / (((/* implicit */int) var_7)))), ((-(((/* implicit */int) (signed char)34))))));
                    var_49 = var_12;
                }
                for (signed char i_32 = 0; i_32 < 10; i_32 += 3) /* same iter space */
                {
                    var_50 = ((/* implicit */short) min((var_50), (((/* implicit */short) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) << ((((-((+(((/* implicit */int) var_1)))))) - (9))))))));
                    /* LoopSeq 1 */
                    for (signed char i_33 = 0; i_33 < 10; i_33 += 4) 
                    {
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (short i_34 = 0; i_34 < 10; i_34 += 2) 
                        {
                            arr_111 [i_22] [i_22] [i_32] [i_33] [i_23] = ((/* implicit */signed char) (~(((/* implicit */int) arr_28 [i_23 + 2] [(short)14] [i_32] [i_33]))));
                            var_51 &= var_14;
                        }
                        /* vectorizable */
                        for (short i_35 = 3; i_35 < 8; i_35 += 2) 
                        {
                            var_52 = ((/* implicit */short) min((var_52), (arr_108 [i_33] [i_32] [(short)8] [i_32] [i_33] [i_33] [i_33])));
                            var_53 += ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-70))));
                        }
                        for (signed char i_36 = 0; i_36 < 10; i_36 += 2) /* same iter space */
                        {
                            var_54 |= max((max((((/* implicit */short) (signed char)-78)), (max((((/* implicit */short) (signed char)116)), ((short)14820))))), (((/* implicit */short) max(((!(((/* implicit */_Bool) (short)18242)))), (((((/* implicit */int) var_9)) == (((/* implicit */int) var_3))))))));
                            var_55 = max((((/* implicit */short) var_9)), (max((arr_49 [(short)9] [i_33] [i_23 + 2] [i_22]), (((/* implicit */short) (!(((/* implicit */_Bool) arr_25 [(signed char)2]))))))));
                            arr_117 [i_22] [i_33] [i_33] [i_33] [i_32] [i_23] [i_22] = ((/* implicit */short) arr_101 [i_22] [i_32] [i_36]);
                            var_56 += ((/* implicit */signed char) arr_30 [i_36] [i_33] [i_23] [i_23] [i_22]);
                            var_57 *= ((/* implicit */short) (~((~(((/* implicit */int) arr_81 [i_33] [i_33]))))));
                        }
                        for (signed char i_37 = 0; i_37 < 10; i_37 += 2) /* same iter space */
                        {
                            var_58 += ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */short) (signed char)125)), (min((arr_68 [(signed char)4]), ((short)-3077))))))));
                            arr_120 [i_23 - 1] [i_32] [i_33] [i_22] = min((max((arr_45 [i_23 + 2] [i_22]), (arr_45 [i_23 + 1] [i_22]))), (max((arr_52 [i_23 + 1] [i_23] [i_23 + 2] [i_23 + 2] [i_22]), (((/* implicit */short) arr_58 [i_23] [i_22] [i_22 - 2])))));
                            var_59 = ((/* implicit */signed char) max((var_59), (((/* implicit */signed char) (~(((/* implicit */int) arr_81 [i_33] [i_33])))))));
                            arr_121 [i_23] [i_23] [i_32] [i_22] [i_32] [i_32] [i_22 - 2] = ((short) min((((/* implicit */int) arr_28 [i_23 - 1] [i_23] [i_32] [i_22 + 2])), ((~(((/* implicit */int) (signed char)110))))));
                            arr_122 [i_37] [i_33] [i_32] [i_33] [i_22] &= ((/* implicit */signed char) arr_52 [i_22] [i_23] [(signed char)2] [i_33] [i_37]);
                        }
                        var_60 = ((/* implicit */short) max(((~(((/* implicit */int) (signed char)3)))), ((~(((/* implicit */int) arr_17 [i_22 + 2]))))));
                    }
                }
                for (signed char i_38 = 0; i_38 < 10; i_38 += 3) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (signed char i_39 = 1; i_39 < 6; i_39 += 3) /* same iter space */
                    {
                        var_61 = ((/* implicit */signed char) max((var_61), (((/* implicit */signed char) min((((/* implicit */int) max((((/* implicit */short) arr_84 [(signed char)4] [i_23] [i_38] [i_39 + 4] [i_39 + 1])), (arr_100 [i_22] [(short)6] [i_39 + 3])))), ((~(((/* implicit */int) ((signed char) var_2))))))))));
                        var_62 = ((/* implicit */signed char) min(((+(((/* implicit */int) ((((/* implicit */int) var_13)) > (((/* implicit */int) var_8))))))), (max((((/* implicit */int) arr_123 [i_22] [i_22] [i_38] [i_22])), (((((((/* implicit */int) (signed char)-109)) + (2147483647))) >> (((((/* implicit */int) (short)4282)) - (4271)))))))));
                    }
                    for (signed char i_40 = 1; i_40 < 6; i_40 += 3) /* same iter space */
                    {
                        var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) var_5))));
                        var_64 = ((/* implicit */short) (((~(((/* implicit */int) min((arr_98 [(signed char)1] [i_23] [i_23] [i_23] [i_23] [(short)6] [i_23]), (var_14)))))) % ((+(((/* implicit */int) max((var_13), (var_4))))))));
                        var_65 = var_10;
                        arr_133 [(signed char)4] [i_23] [i_22] [i_40] &= ((/* implicit */signed char) (~(((/* implicit */int) min((((/* implicit */short) (signed char)-19)), ((short)16530))))));
                    }
                    var_66 ^= ((/* implicit */signed char) (((~(((((/* implicit */int) var_4)) % (((/* implicit */int) arr_29 [i_22] [i_23 + 1] [i_38] [(signed char)12])))))) / (((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)32755))))));
                }
                arr_134 [i_23] [i_22] [i_22] = min(((signed char)108), ((signed char)-121));
            }
        } 
    } 
}
