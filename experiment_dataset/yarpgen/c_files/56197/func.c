/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56197
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56197 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56197
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
    for (signed char i_0 = 3; i_0 < 9; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((((/* implicit */_Bool) ((max(((_Bool)1), (var_8))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((long long int) -1LL))))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (var_10)))))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (signed char i_2 = 1; i_2 < 8; i_2 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) var_4);
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) (-((+(var_9)))));
                        var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((3932160) - (3932152))))))));
                    }
                    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
                    {
                        var_23 *= ((/* implicit */unsigned char) 671505487U);
                        var_24 = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_2 + 2])) <= (((/* implicit */int) arr_0 [i_1] [i_2 - 1]))));
                    }
                }
                for (short i_5 = 1; i_5 < 10; i_5 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
                    {
                        for (long long int i_7 = 0; i_7 < 11; i_7 += 3) 
                        {
                            {
                                var_25 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]))))) : (((/* implicit */int) (!(arr_18 [i_0]))))));
                                var_26 = ((/* implicit */_Bool) arr_3 [i_5] [i_5] [i_5]);
                                var_27 = ((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0]);
                                var_28 = ((/* implicit */unsigned int) var_5);
                                var_29 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) : (((/* implicit */int) (unsigned char)86))))) ? (((long long int) (short)790)) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */long long int) (+(((var_4) ? (((/* implicit */int) (signed char)-42)) : (((/* implicit */int) arr_14 [i_6] [i_6] [i_6] [i_6])))))))));
                            }
                        } 
                    } 
                    var_30 = ((/* implicit */int) min((max((((/* implicit */long long int) var_1)), ((~(var_9))))), (((/* implicit */long long int) (+(((((/* implicit */_Bool) -7586869247246243581LL)) ? (((/* implicit */int) arr_17 [i_5] [i_1] [i_1] [i_0] [i_0])) : (((/* implicit */int) var_8)))))))));
                    var_31 -= ((/* implicit */_Bool) var_10);
                    var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_3 [i_5] [i_5 - 1] [i_0 - 2]), (((/* implicit */long long int) 4007007798U))))) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_2 [i_1] [i_5]))));
                }
                for (short i_8 = 1; i_8 < 10; i_8 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                    {
                        for (unsigned short i_10 = 0; i_10 < 11; i_10 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)127)) ? (((/* implicit */int) arr_2 [i_9 + 1] [i_10])) : (((/* implicit */int) var_2))))) + (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (max((var_16), (4007007798U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_7)) == (((/* implicit */int) var_13))))))))));
                                var_34 |= ((/* implicit */long long int) (-(((((/* implicit */int) arr_20 [i_1] [i_1])) | (((((/* implicit */int) (_Bool)1)) << (((1103091526320731296LL) - (1103091526320731287LL)))))))));
                            }
                        } 
                    } 
                    arr_27 [i_0] [i_1] [i_0] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) (unsigned short)25872)) ? (((/* implicit */int) (unsigned char)28)) : (((/* implicit */int) (short)32767)))) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_8]))));
                    var_35 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (+(7378379479927942238LL)))) ? (((long long int) 3804503337U)) : (((/* implicit */long long int) var_10)))) - ((((+(1837918012339846728LL))) | (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_8] [i_8] [i_8 - 1] [i_8 - 1] [i_8] [i_8])))))));
                }
            }
        } 
    } 
    var_36 -= ((/* implicit */long long int) max((((((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 490463958U))))) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
    /* LoopNest 2 */
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        for (int i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (long long int i_13 = 1; i_13 < 20; i_13 += 4) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 22; i_14 += 4) 
                    {
                        for (int i_15 = 0; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_30 [i_15])))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned short) (!((_Bool)1))))))))));
                                var_38 = (((_Bool)1) ? (arr_40 [i_12] [i_11]) : (((/* implicit */long long int) var_14)));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_28 [i_12 + 2])) | (((/* implicit */int) arr_28 [i_13 - 1]))))));
                }
                for (long long int i_16 = 1; i_16 < 20; i_16 += 4) /* same iter space */
                {
                    var_40 |= ((/* implicit */long long int) min((min((var_7), (((/* implicit */unsigned short) var_12)))), (((/* implicit */unsigned short) min((arr_33 [i_16 - 1] [i_12 + 2] [i_12 - 1] [i_12 - 1]), (((/* implicit */signed char) (_Bool)1)))))));
                    var_41 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_40 [i_12 + 2] [i_11])) ? (arr_40 [i_12 + 2] [i_11]) : (arr_40 [i_12 + 1] [i_11])))));
                    arr_44 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (arr_30 [i_12 + 1])));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned int i_18 = 0; i_18 < 22; i_18 += 1) 
                        {
                            {
                                var_42 *= ((/* implicit */short) var_13);
                                var_43 = ((/* implicit */long long int) min((var_43), (((((/* implicit */_Bool) (-(((/* implicit */int) max((arr_34 [i_11] [i_11]), (((/* implicit */unsigned char) var_4)))))))) ? (((7378379479927942238LL) / (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (var_9)))));
                                var_44 = ((/* implicit */signed char) arr_42 [i_17] [i_17] [i_17]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (signed char i_19 = 2; i_19 < 19; i_19 += 3) 
                    {
                        var_45 ^= ((/* implicit */short) arr_50 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]);
                        var_46 = ((/* implicit */signed char) ((int) var_3));
                    }
                }
                arr_55 [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)39667)))) ^ (((arr_28 [i_12 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))));
                var_47 = ((/* implicit */_Bool) ((min((arr_35 [i_11] [i_12 + 2] [i_11]), (arr_35 [i_11] [i_12 + 2] [i_11]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)7148)))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_20 = 1; i_20 < 13; i_20 += 4) 
    {
        /* LoopNest 2 */
        for (signed char i_21 = 3; i_21 < 10; i_21 += 1) 
        {
            for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
            {
                {
                    var_48 = ((/* implicit */_Bool) arr_41 [i_20] [i_20] [i_20]);
                    arr_62 [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_20 + 1]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_23 = 0; i_23 < 14; i_23 += 2) 
                    {
                        var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_47 [i_23] [i_20 + 1] [i_23] [i_20 + 1] [i_23] [i_23])) ? (arr_47 [i_23] [i_20] [i_21 - 1] [i_22] [i_22] [i_23]) : (arr_47 [i_23] [i_22] [i_21] [i_21 - 1] [i_20] [i_23])));
                        var_50 += arr_46 [i_20] [i_20] [i_20] [i_20 - 1];
                        var_51 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
                        var_52 = ((/* implicit */int) var_8);
                    }
                    for (long long int i_24 = 0; i_24 < 14; i_24 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_25 = 2; i_25 < 12; i_25 += 4) 
                        {
                            var_53 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (unsigned char)84)) : (((/* implicit */int) (_Bool)1))));
                            var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_20] [i_22] [i_24] [i_25])) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) var_4))));
                            var_55 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_42 [i_25 + 1] [i_25 + 1] [i_21 - 3]))));
                            var_56 += ((/* implicit */unsigned short) (!((_Bool)0)));
                        }
                        /* LoopSeq 2 */
                        for (unsigned char i_26 = 2; i_26 < 12; i_26 += 2) /* same iter space */
                        {
                            var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) var_16))));
                            var_58 = ((/* implicit */unsigned short) arr_41 [i_21] [i_21] [i_24]);
                        }
                        for (unsigned char i_27 = 2; i_27 < 12; i_27 += 2) /* same iter space */
                        {
                            var_59 = ((/* implicit */_Bool) (~(arr_40 [i_20 - 1] [i_27])));
                            arr_74 [i_24] [i_24] = ((/* implicit */int) arr_37 [i_20]);
                        }
                        arr_75 [i_24] [i_22] [i_22] [i_21] [i_20] = ((/* implicit */signed char) 6052153434394726783LL);
                        /* LoopSeq 2 */
                        for (signed char i_28 = 1; i_28 < 13; i_28 += 1) /* same iter space */
                        {
                            var_60 = ((/* implicit */unsigned int) (_Bool)1);
                            var_61 = ((/* implicit */signed char) arr_49 [i_28 - 1] [i_21 + 3] [i_28] [i_20] [i_20 - 1]);
                            arr_80 [i_20] [i_20] [i_28] [i_20] [i_20] = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_47 [i_28] [i_21] [i_21] [i_21] [i_21] [i_21 + 3])) <= (arr_51 [i_20 + 1] [i_20] [i_20] [i_21 + 2])));
                            var_62 = ((/* implicit */signed char) ((((((/* implicit */int) (short)-29696)) + (2147483647))) >> (((/* implicit */int) (_Bool)1))));
                        }
                        for (signed char i_29 = 1; i_29 < 13; i_29 += 1) /* same iter space */
                        {
                            var_63 = ((/* implicit */unsigned char) max((var_63), (((/* implicit */unsigned char) (_Bool)1))));
                            var_64 = (~(var_14));
                        }
                        arr_84 [i_20] [i_22] [i_20] = ((/* implicit */_Bool) ((arr_69 [i_22] [i_24] [i_22] [i_20] [i_20] [i_20]) ? (((/* implicit */long long int) ((/* implicit */int) arr_69 [i_24] [i_24] [i_22] [i_21 - 1] [i_20] [i_20]))) : (7317816413767909835LL)));
                    }
                    for (long long int i_30 = 0; i_30 < 14; i_30 += 1) 
                    {
                        var_65 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)7136)))))));
                        var_66 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_85 [i_20 - 1])))));
                        var_67 = (unsigned char)128;
                        var_68 = (!(((/* implicit */_Bool) arr_50 [i_20 - 1] [i_20] [i_20 - 1] [i_20 - 1] [i_20 - 1] [i_20 + 1] [i_20])));
                    }
                }
            } 
        } 
        /* LoopSeq 2 */
        for (int i_31 = 0; i_31 < 14; i_31 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_32 = 0; i_32 < 0; i_32 += 1) 
            {
                var_69 = ((/* implicit */unsigned short) (-(var_10)));
                var_70 = var_12;
            }
            var_71 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_33 = 0; i_33 < 14; i_33 += 3) 
        {
            var_72 = ((/* implicit */long long int) var_1);
            var_73 = ((/* implicit */unsigned int) max((var_73), (((/* implicit */unsigned int) (!(arr_65 [i_20] [i_20 + 1] [i_33] [i_33] [i_33]))))));
            /* LoopSeq 2 */
            for (signed char i_34 = 3; i_34 < 12; i_34 += 3) 
            {
                var_74 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_94 [i_20 - 1] [i_20]))));
                arr_100 [i_20] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (((((/* implicit */_Bool) arr_77 [i_20] [i_20] [i_33] [i_33] [i_33] [i_34])) ? (arr_48 [i_34] [i_34] [i_33] [i_33] [i_20] [i_20]) : (((/* implicit */int) var_15)))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_20] [i_34])) || ((_Bool)1))))));
            }
            for (long long int i_35 = 0; i_35 < 14; i_35 += 3) 
            {
                var_75 = ((_Bool) var_17);
                var_76 = ((/* implicit */unsigned char) min((var_76), (((/* implicit */unsigned char) ((_Bool) var_2)))));
                /* LoopSeq 1 */
                for (unsigned int i_36 = 0; i_36 < 14; i_36 += 2) 
                {
                    var_77 = ((/* implicit */_Bool) min((var_77), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)1)) ? (7317816413767909835LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-7137)))))) ? (var_6) : (((/* implicit */long long int) (-(var_14)))))))));
                    var_78 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_5)) + (2147483647))) >> (((((/* implicit */int) arr_104 [i_20 - 1] [i_33] [i_20 - 1])) - (34509)))));
                    var_79 += ((/* implicit */int) ((_Bool) arr_65 [i_20 - 1] [i_20] [i_20 + 1] [i_20 - 1] [i_20]));
                }
            }
        }
    }
}
