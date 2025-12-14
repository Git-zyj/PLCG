/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69122
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
    for (short i_0 = 0; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_19 = (_Bool)1;
        /* LoopNest 3 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned short i_2 = 4; i_2 < 21; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_20 += ((/* implicit */int) (_Bool)1);
                        var_21 = (-(((var_0) ? (var_4) : (((/* implicit */unsigned int) var_14)))));
                        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((3434928526124368904LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_17)) : (((/* implicit */int) (unsigned char)151))))))))) <= ((~((~(18446744073709551615ULL))))))))));
                    }
                } 
            } 
        } 
    }
    for (short i_4 = 0; i_4 < 23; i_4 += 2) /* same iter space */
    {
        arr_14 [i_4] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (int i_7 = 0; i_7 < 23; i_7 += 1) 
                {
                    {
                        var_23 = ((/* implicit */unsigned long long int) ((((_Bool) (_Bool)1)) ? ((-(((var_12) / (((/* implicit */long long int) var_15)))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                        var_24 = ((/* implicit */long long int) ((int) min((min(((_Bool)1), ((_Bool)1))), (((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) (_Bool)1)))))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_8 = 0; i_8 < 23; i_8 += 4) /* same iter space */
                        {
                            var_25 &= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-17))) - (7391259976044428346ULL)));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 23; i_9 += 4) /* same iter space */
                        {
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) 11055484097665123278ULL)) ? (-8063909241792668097LL) : (((/* implicit */long long int) var_13)))))))));
                            arr_28 [i_5] [i_6] [i_7] [i_6] = ((/* implicit */int) var_2);
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(var_5)))) + (((((/* implicit */_Bool) ((var_16) >> (((11055484097665123270ULL) - (11055484097665123242ULL)))))) ? (((/* implicit */unsigned long long int) ((var_4) >> (((var_18) + (2028461831)))))) : (max((((/* implicit */unsigned long long int) var_17)), (16239093004075457723ULL)))))));
            var_29 = ((/* implicit */int) max(((((+(-8063909241792668097LL))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_8) : (((/* implicit */unsigned int) var_15))))))), ((+((~(34355544064LL)))))));
            var_30 = ((/* implicit */signed char) max(((+(((((/* implicit */int) (unsigned char)2)) + (((/* implicit */int) var_1)))))), ((-(((/* implicit */int) var_0))))));
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            var_31 = ((/* implicit */_Bool) (~(((((/* implicit */int) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) (unsigned short)58403))))) >> (((((/* implicit */int) var_2)) + (26)))))));
            arr_31 [i_10] = ((/* implicit */unsigned int) (((~(11055484097665123270ULL))) >> (((11055484097665123270ULL) - (11055484097665123213ULL)))));
            arr_32 [i_10] [i_10] [i_4] = ((/* implicit */unsigned int) var_7);
        }
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1))))) >= (((4242685229U) * (((/* implicit */unsigned int) (-(((/* implicit */int) var_0)))))))));
        var_33 += ((/* implicit */unsigned int) var_11);
    }
    for (short i_11 = 0; i_11 < 23; i_11 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 1) 
        {
            var_34 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_13))))));
            /* LoopSeq 3 */
            for (int i_13 = 0; i_13 < 23; i_13 += 2) 
            {
                var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) ((_Bool) (signed char)82))) >> (((((unsigned int) var_16)) - (1220132268U))))) >> (((/* implicit */int) (_Bool)0))));
                var_36 = ((/* implicit */unsigned long long int) max((var_12), (((/* implicit */long long int) ((_Bool) ((7U) <= (535759486U)))))));
                var_37 = ((/* implicit */unsigned long long int) 3902743070U);
            }
            /* vectorizable */
            for (unsigned char i_14 = 3; i_14 < 19; i_14 += 3) 
            {
                /* LoopNest 2 */
                for (int i_15 = 1; i_15 < 21; i_15 += 3) 
                {
                    for (signed char i_16 = 0; i_16 < 23; i_16 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_8))))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_17))));
                            var_40 &= ((/* implicit */_Bool) ((((/* implicit */int) ((var_14) <= (var_16)))) * (((/* implicit */int) var_1))));
                            var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (unsigned short)13911))));
                            var_42 = ((/* implicit */unsigned long long int) var_15);
                        }
                    } 
                } 
                var_43 += ((/* implicit */_Bool) ((int) (_Bool)1));
                var_44 = ((/* implicit */unsigned long long int) var_1);
            }
            for (unsigned int i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                var_45 = ((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))) < (((((-721459590) + (2147483647))) >> (((/* implicit */int) var_0))))));
                var_46 = min((min(((~(((/* implicit */int) (unsigned char)18)))), (((/* implicit */int) var_17)))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (1599254678U))))))));
                var_47 += ((((/* implicit */_Bool) min((var_14), (((/* implicit */int) (_Bool)0))))) || (((/* implicit */_Bool) var_4)));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned char i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                var_48 = (+((~(((/* implicit */int) (unsigned char)1)))));
                /* LoopSeq 2 */
                for (short i_19 = 4; i_19 < 21; i_19 += 4) 
                {
                    arr_62 [i_12] [i_12] [i_12] [i_12] [i_19] &= ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)1)) != (((/* implicit */int) var_3))));
                    arr_63 [i_12] [i_12] = ((/* implicit */unsigned char) ((((/* implicit */int) (short)12298)) >> (((/* implicit */int) var_3))));
                }
                for (int i_20 = 2; i_20 < 22; i_20 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_21 = 0; i_21 < 23; i_21 += 4) /* same iter space */
                    {
                        var_49 += ((/* implicit */int) (!(((14748938416470144772ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)80)))))));
                        var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_2))));
                    }
                    for (int i_22 = 0; i_22 < 23; i_22 += 4) /* same iter space */
                    {
                        arr_74 [i_11] [i_12] [i_18] [3] [i_22] [i_22] [18ULL] = ((/* implicit */int) ((var_8) + (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (var_14))))));
                        arr_75 [i_12] [i_20] [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) + (var_4)));
                        arr_76 [i_12] [i_20 - 1] [i_18] [i_12] = ((/* implicit */long long int) ((((var_11) + (2147483647))) >> (((var_6) - (6608571316220505280LL)))));
                    }
                    for (int i_23 = 0; i_23 < 23; i_23 += 4) /* same iter space */
                    {
                        var_51 = ((/* implicit */int) (~(((((/* implicit */unsigned int) 0)) - (2959310934U)))));
                        var_52 += ((/* implicit */int) (-(-1LL)));
                        arr_80 [i_23] [i_23] [i_23] [i_23] [i_23] [i_12] = ((/* implicit */long long int) (_Bool)0);
                    }
                    var_53 = (~(var_13));
                    arr_81 [i_20] [i_12] [i_18] [i_12] [i_12] [i_11] = ((int) var_1);
                    arr_82 [i_11] [i_12] [i_12] [i_20] [i_20 - 2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_6)) / (18446744073709551615ULL)));
                }
            }
        }
        /* vectorizable */
        for (unsigned int i_24 = 0; i_24 < 23; i_24 += 3) 
        {
            var_54 += ((/* implicit */_Bool) ((unsigned short) var_17));
            var_55 = ((/* implicit */int) (~(7391259976044428342ULL)));
        }
        for (signed char i_25 = 2; i_25 < 19; i_25 += 4) /* same iter space */
        {
            var_56 = ((/* implicit */_Bool) ((((var_10) + (2312363718U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1)))))));
            arr_89 [i_11] = max(((((~(2113577519))) + (((/* implicit */int) (_Bool)1)))), (-841154124));
        }
        /* vectorizable */
        for (signed char i_26 = 2; i_26 < 19; i_26 += 4) /* same iter space */
        {
            var_57 = ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_0)))) : ((-(((/* implicit */int) (_Bool)0)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 4) 
            {
                var_58 = ((int) (_Bool)1);
                var_59 = ((/* implicit */int) (+(var_8)));
            }
            for (unsigned short i_28 = 0; i_28 < 23; i_28 += 1) 
            {
                var_60 = ((/* implicit */int) ((var_18) <= (((/* implicit */int) (_Bool)1))));
                var_61 += ((/* implicit */_Bool) ((short) ((((var_11) + (2147483647))) >> (((((/* implicit */int) var_1)) - (2892))))));
                /* LoopNest 2 */
                for (unsigned int i_29 = 0; i_29 < 23; i_29 += 1) 
                {
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        {
                            var_62 = ((/* implicit */unsigned int) ((((1920556287662743992ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) <= (((/* implicit */unsigned long long int) var_8))));
                            var_63 = ((/* implicit */unsigned int) (-(var_11)));
                            var_64 = ((/* implicit */_Bool) ((short) 11055484097665123278ULL));
                            var_65 = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_9))));
                            var_66 = ((/* implicit */int) 11055484097665123278ULL);
                        }
                    } 
                } 
            }
            /* LoopSeq 4 */
            for (unsigned int i_31 = 0; i_31 < 23; i_31 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_32 = 0; i_32 < 23; i_32 += 3) 
                {
                    var_67 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) * (-2113577505)));
                    arr_111 [i_11] [i_26] [i_31] [i_31] [i_32] [i_32] = ((/* implicit */unsigned long long int) var_4);
                    arr_112 [i_32] [i_31] [i_26] [i_26] [i_32] = ((/* implicit */int) ((var_15) >= ((+(((/* implicit */int) (_Bool)1))))));
                    var_68 = ((/* implicit */short) (((((-(((/* implicit */int) (_Bool)1)))) + (2147483647))) >> (((276209064429285428ULL) - (276209064429285422ULL)))));
                    var_69 = ((/* implicit */unsigned long long int) ((var_6) <= (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                }
                for (long long int i_33 = 0; i_33 < 23; i_33 += 1) 
                {
                    var_70 = ((/* implicit */_Bool) max((var_70), (((/* implicit */_Bool) (((-(1638886721))) / ((-(((/* implicit */int) (_Bool)1)))))))));
                    var_71 &= ((/* implicit */int) (!(((276209064429285428ULL) < (((/* implicit */unsigned long long int) var_8))))));
                    var_72 = ((/* implicit */unsigned int) ((_Bool) var_14));
                }
                var_73 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */int) var_3)) & (((/* implicit */int) var_7)))));
                var_74 = ((/* implicit */unsigned char) (~((-(1599254678U)))));
            }
            for (unsigned short i_34 = 0; i_34 < 23; i_34 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_35 = 2; i_35 < 19; i_35 += 2) 
                {
                    var_75 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))));
                    var_76 = ((/* implicit */short) var_6);
                }
                for (_Bool i_36 = 0; i_36 < 1; i_36 += 1) 
                {
                    var_77 = ((unsigned int) var_9);
                    var_78 += ((/* implicit */unsigned short) ((int) ((_Bool) var_7)));
                    var_79 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 16526187786046807646ULL)) ? (((/* implicit */int) (_Bool)1)) : (2113577519))) * (((/* implicit */int) (signed char)47))));
                }
                /* LoopSeq 2 */
                for (long long int i_37 = 0; i_37 < 23; i_37 += 3) 
                {
                    var_80 = ((/* implicit */short) (+(17501175646067929883ULL)));
                    arr_125 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_5)))) || (((/* implicit */_Bool) (-(var_6))))));
                    arr_126 [i_11] [i_26 - 1] [i_34] [4LL] = ((/* implicit */unsigned long long int) ((_Bool) 6379000490747303268ULL));
                }
                for (int i_38 = 0; i_38 < 23; i_38 += 1) 
                {
                    arr_130 [i_11] [i_26] [i_34] [i_38] = ((/* implicit */unsigned char) ((16526187786046807630ULL) + (((/* implicit */unsigned long long int) 268435455))));
                    var_81 = ((/* implicit */int) (unsigned char)3);
                    /* LoopSeq 1 */
                    for (short i_39 = 0; i_39 < 23; i_39 += 2) 
                    {
                        var_82 = ((/* implicit */unsigned short) var_18);
                        var_83 = ((((((var_18) / (((/* implicit */int) (unsigned short)29695)))) + (2147483647))) >> (((var_12) + (8138150917345815349LL))));
                    }
                }
                var_84 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 851811689))));
            }
            for (int i_40 = 0; i_40 < 23; i_40 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_41 = 1; i_41 < 21; i_41 += 2) 
                {
                    var_85 = ((/* implicit */unsigned int) ((((((var_11) + (2147483647))) >> (((/* implicit */int) var_0)))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_15)) : (var_13))) - (2090943835U)))));
                    arr_142 [i_11] = ((/* implicit */unsigned short) (-(1920556287662743985ULL)));
                    var_86 = ((/* implicit */unsigned int) min((var_86), (((/* implicit */unsigned int) ((var_16) >> (((17501175646067929883ULL) - (17501175646067929875ULL))))))));
                }
                var_87 += ((/* implicit */unsigned short) ((unsigned char) var_13));
                var_88 += ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) + (((long long int) 851811689))));
                var_89 = ((/* implicit */unsigned short) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) var_1))));
                arr_143 [i_40] [i_40] [i_26 + 3] [i_11] = ((/* implicit */_Bool) (~(var_15)));
            }
            for (unsigned long long int i_42 = 0; i_42 < 23; i_42 += 2) 
            {
                /* LoopNest 2 */
                for (unsigned long long int i_43 = 1; i_43 < 20; i_43 += 4) 
                {
                    for (unsigned char i_44 = 0; i_44 < 23; i_44 += 2) 
                    {
                        {
                            var_90 = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)56))));
                            var_91 = ((/* implicit */int) ((((/* implicit */_Bool) 3081767729U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (_Bool)1)))) : (var_13)));
                        }
                    } 
                } 
                arr_152 [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                var_92 = ((/* implicit */unsigned short) (~(((-4096) + (var_15)))));
            }
        }
        var_93 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((((var_5) + (2147483647))) >> (((-268435455) + (268435464))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1213199551U)))))));
    }
    /* LoopSeq 1 */
    for (_Bool i_45 = 0; i_45 < 1; i_45 += 1) 
    {
        arr_155 [i_45] = ((/* implicit */short) (-(((unsigned long long int) max((var_16), (var_5))))));
        var_94 = ((/* implicit */unsigned char) min((var_94), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_9))))) - (((((/* implicit */unsigned int) var_18)) | (var_4))))))));
    }
    var_95 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_6))))) << (((((((/* implicit */_Bool) (unsigned short)35972)) ? (var_18) : (var_18))) + (2028461839))))))));
    var_96 = (-(max((var_8), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)59521))))))));
}
