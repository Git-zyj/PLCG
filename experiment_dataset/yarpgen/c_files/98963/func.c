/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98963
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
    var_12 = ((/* implicit */long long int) 476985726);
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 1) 
    {
        var_13 += ((/* implicit */unsigned int) ((unsigned long long int) (-(-476985726))));
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)74))) & (((unsigned int) max((var_10), (((/* implicit */int) (signed char)32))))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 7; i_1 += 2) 
        {
            /* LoopSeq 4 */
            for (signed char i_2 = 3; i_2 < 9; i_2 += 2) /* same iter space */
            {
                var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_0 - 2] [i_1 + 3])))))));
                var_16 = ((/* implicit */short) (unsigned char)182);
                arr_10 [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)62))) > (((arr_8 [i_0] [i_2] [i_1] [i_1]) - (((/* implicit */unsigned long long int) 879059797U))))));
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((/* implicit */_Bool) -1844539703)) || (((/* implicit */_Bool) (+(var_0)))))))));
                arr_11 [i_1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (var_10) : (((/* implicit */int) (unsigned char)179))));
            }
            for (signed char i_3 = 3; i_3 < 9; i_3 += 2) /* same iter space */
            {
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (var_4)));
                arr_15 [i_0] [i_1] [i_1] [i_3] = ((/* implicit */_Bool) ((var_5) % (var_5)));
                arr_16 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_1 + 1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_4)));
            }
            for (signed char i_4 = 3; i_4 < 9; i_4 += 2) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) >> (((var_11) - (7578350291682686703ULL)))));
                var_20 ^= (!(((/* implicit */_Bool) var_4)));
            }
            for (short i_5 = 1; i_5 < 9; i_5 += 3) 
            {
                var_21 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)14178)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)73))) : (8444249301319680ULL)));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_5] [i_5] [i_5] [i_0 + 1])) ? (arr_6 [i_0] [i_1 - 1]) : (((/* implicit */unsigned long long int) var_0))));
                arr_24 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((int) arr_2 [i_0 - 2] [i_0]));
                arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_9 [i_5 - 1])));
            }
            var_23 ^= ((/* implicit */unsigned char) ((_Bool) var_4));
            /* LoopNest 2 */
            for (unsigned char i_6 = 1; i_6 < 8; i_6 += 1) 
            {
                for (int i_7 = 2; i_7 < 8; i_7 += 2) 
                {
                    {
                        var_24 = ((/* implicit */_Bool) ((1453150086U) << (((arr_3 [i_0 - 2] [i_7 + 2]) - (1131515120U)))));
                        var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) var_4))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_8 = 1; i_8 < 8; i_8 += 4) 
            {
                /* LoopSeq 2 */
                for (int i_9 = 2; i_9 < 9; i_9 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0 - 2] [i_1 + 3] [i_8 + 2] [i_9 - 2])) & (((/* implicit */int) arr_20 [i_0 + 1] [i_1 - 1] [i_8 - 1] [i_9 - 1]))));
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_9)) ^ (var_8)));
                        arr_41 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-1)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)186)))))));
                        var_27 = -476985740;
                    }
                    for (unsigned long long int i_11 = 3; i_11 < 9; i_11 += 3) 
                    {
                        arr_45 [i_9] [i_1] [i_0] = ((/* implicit */signed char) 1769545159);
                        arr_46 [i_0] [i_1] [i_8] [i_9] [i_11] = ((/* implicit */unsigned long long int) arr_34 [i_0] [i_0] [i_8]);
                        arr_47 [i_0] [i_1] [i_1] [i_8] [i_9] [i_11] = ((((/* implicit */_Bool) arr_31 [i_1 + 2] [i_1] [i_1] [i_1 + 1] [i_1 + 3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)95))) : (var_6));
                    }
                    var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) (-(var_6))))));
                }
                for (signed char i_12 = 2; i_12 < 9; i_12 += 3) 
                {
                    var_29 = ((unsigned char) arr_31 [i_0] [i_1] [i_8 + 2] [i_0 - 4] [i_0]);
                    arr_50 [i_12] [i_12] [i_12] [i_12] [i_12] &= ((/* implicit */short) (-(var_1)));
                }
                /* LoopSeq 3 */
                for (int i_13 = 2; i_13 < 6; i_13 += 2) 
                {
                    var_30 ^= ((/* implicit */unsigned long long int) ((var_2) > (((/* implicit */long long int) arr_9 [i_8 + 2]))));
                    var_31 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_48 [i_13] [i_1] [i_8] [i_8 - 1] [i_13])) - (-476985726)));
                }
                for (unsigned char i_14 = 0; i_14 < 10; i_14 += 3) 
                {
                    arr_55 [i_14] [i_8] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)85)) <= (((/* implicit */int) arr_42 [i_0] [i_1] [i_8] [i_14] [i_0])))))) - (var_2)));
                    var_32 = ((/* implicit */unsigned char) (-(arr_23 [i_1] [i_1 - 1] [i_1] [i_1])));
                    arr_56 [i_8] [i_1] [i_8] [i_8] [i_0] [i_8] = ((/* implicit */int) ((unsigned char) var_10));
                    var_33 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)55))));
                }
                for (unsigned char i_15 = 0; i_15 < 10; i_15 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned char) 6886663U)))));
                    var_35 |= ((/* implicit */unsigned int) var_10);
                    arr_60 [i_0] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((var_0) / (((/* implicit */long long int) ((/* implicit */int) (short)14203)))));
                    var_36 = ((/* implicit */unsigned int) min((var_36), (((/* implicit */unsigned int) (+(var_0))))));
                }
                arr_61 [i_8] [i_8] [i_1] [i_8] = ((/* implicit */int) ((short) 2886853437U));
                var_37 = ((/* implicit */signed char) 7624032434898587ULL);
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_16 = 0; i_16 < 21; i_16 += 2) /* same iter space */
    {
        var_38 |= ((/* implicit */unsigned char) ((long long int) arr_64 [i_16]));
        arr_65 [i_16] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) var_4))));
        arr_66 [i_16] = ((((/* implicit */_Bool) 18438299824408231943ULL)) || (((/* implicit */_Bool) arr_64 [i_16])));
    }
    for (unsigned int i_17 = 0; i_17 < 21; i_17 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_18 = 4; i_18 < 20; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 1; i_19 < 18; i_19 += 4) 
            {
                {
                    var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (13886812733133983302ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111))))))) | (8234259019199384320ULL))))));
                    arr_74 [i_17] [i_18] [i_19] = ((/* implicit */short) (!(((((/* implicit */_Bool) var_0)) && ((_Bool)1)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_20 = 1; i_20 < 20; i_20 += 3) 
        {
            for (signed char i_21 = 1; i_21 < 20; i_21 += 4) 
            {
                {
                    var_40 = ((/* implicit */_Bool) ((signed char) (-(max((249118920U), (((/* implicit */unsigned int) (signed char)5)))))));
                    var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) var_8))));
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) 0U))));
                }
            } 
        } 
        var_43 ^= ((/* implicit */unsigned char) ((((min((((/* implicit */int) (short)-4402)), (1133341100))) + (2147483647))) << (((var_6) - (12543400435867382514ULL)))));
    }
    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 2) /* same iter space */
    {
        var_44 ^= ((((/* implicit */_Bool) (-(3384977116204787989ULL)))) ? (((/* implicit */unsigned long long int) (+(var_9)))) : (min((4989392567599254595ULL), (((/* implicit */unsigned long long int) var_2)))));
        var_45 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)111))));
        /* LoopSeq 2 */
        for (short i_23 = 1; i_23 < 20; i_23 += 1) 
        {
            /* LoopNest 3 */
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                for (signed char i_25 = 4; i_25 < 20; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 1; i_26 < 19; i_26 += 2) 
                    {
                        {
                            arr_92 [i_22] [i_26] [i_25] [i_22] [i_24] [i_23] = ((/* implicit */short) ((unsigned short) max((var_1), (var_11))));
                            var_46 ^= (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)7))) + (var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (2049144218U))));
                            arr_93 [i_22] [i_23] [i_24] [i_25] [i_26] [i_26] = ((/* implicit */int) var_1);
                            arr_94 [i_22] [i_22] [i_22] [i_22] [i_22] = ((/* implicit */long long int) (+(var_10)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_27 = 1; i_27 < 19; i_27 += 2) 
            {
                /* LoopNest 2 */
                for (int i_28 = 1; i_28 < 18; i_28 += 4) 
                {
                    for (unsigned long long int i_29 = 0; i_29 < 21; i_29 += 3) 
                    {
                        {
                            var_47 |= ((signed char) 694858940U);
                            arr_102 [i_28] [i_28] [i_28] [i_28] [i_28] [i_28] = ((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) (signed char)14)), (arr_77 [i_23 + 1] [i_27 + 1]))) * ((-(3384977116204787962ULL)))));
                            arr_103 [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] [i_23] &= ((/* implicit */short) arr_101 [i_28 + 3] [i_23 - 1]);
                            arr_104 [i_22] = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) 3600108361U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_30 = 2; i_30 < 20; i_30 += 1) 
                {
                    for (int i_31 = 0; i_31 < 21; i_31 += 4) 
                    {
                        {
                            arr_109 [i_31] [i_27] [i_27] [i_27] [i_23] [i_22] [i_30] = ((/* implicit */int) ((((((/* implicit */unsigned long long int) var_2)) >= (var_11))) ? (arr_100 [i_27] [i_27] [i_27] [i_27 - 1] [i_27] [i_27]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 11820883108804925246ULL))))))));
                            arr_110 [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] [i_31] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_67 [i_31] [i_30])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (4989392567599254595ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) var_3)))) : (max((3384977116204787962ULL), (((/* implicit */unsigned long long int) arr_67 [i_22] [i_23 - 1]))))));
                            arr_111 [i_22] [i_22] [i_23] [i_23] [i_27] [i_30] [i_31] = ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) 4294967291U)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65511))) : (15061766957504763653ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 15061766957504763649ULL))))));
                            arr_112 [i_22] [i_31] = max((((unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)19)))))), (((/* implicit */unsigned long long int) ((18446744073709551612ULL) == (((/* implicit */unsigned long long int) 2U))))));
                            arr_113 [i_22] [i_23] [i_23] [i_27] [i_30] [i_31] = ((/* implicit */signed char) ((_Bool) (!(((/* implicit */_Bool) var_11)))));
                        }
                    } 
                } 
            }
            var_48 = ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) -1522326052)) | (15061766957504763651ULL))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)1)))), (((int) 2U)))))));
            var_49 -= ((/* implicit */int) ((signed char) ((long long int) 694858934U)));
        }
        for (unsigned long long int i_32 = 1; i_32 < 20; i_32 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_33 = 0; i_33 < 21; i_33 += 3) 
            {
                arr_119 [i_32] [i_32] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-95))) : (24U))) + (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_99 [i_32 + 1] [i_32] [i_32 + 1])) ? (((/* implicit */int) arr_99 [i_32 - 1] [i_32] [i_32 - 1])) : (((/* implicit */int) arr_99 [i_32 - 1] [i_32] [i_32 + 1])))))));
                /* LoopNest 2 */
                for (signed char i_34 = 0; i_34 < 21; i_34 += 3) 
                {
                    for (int i_35 = 3; i_35 < 20; i_35 += 4) 
                    {
                        {
                            var_50 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((int) (_Bool)1))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_114 [i_32 - 1] [i_32 + 1]))))) : (max((((/* implicit */unsigned long long int) arr_95 [i_33])), (var_1)))));
                            var_51 = 19U;
                            var_52 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((int) (signed char)-13))))) && (((/* implicit */_Bool) ((unsigned long long int) 16776960U)))));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_36 = 0; i_36 < 21; i_36 += 3) 
            {
                var_53 = ((/* implicit */unsigned char) var_8);
                arr_126 [i_22] [i_32] [i_36] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 4294967264U)) ? (((/* implicit */long long int) 820947260)) : (arr_89 [i_32] [i_36] [i_22] [i_36])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) -820947258)) || (((/* implicit */_Bool) (signed char)2)))))) : (var_6)));
            }
            /* LoopNest 3 */
            for (long long int i_37 = 2; i_37 < 18; i_37 += 3) 
            {
                for (int i_38 = 1; i_38 < 20; i_38 += 4) 
                {
                    for (unsigned char i_39 = 0; i_39 < 21; i_39 += 4) 
                    {
                        {
                            arr_134 [i_22] [i_37] [i_32] [i_38] [i_39] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(min((4294967271U), (((/* implicit */unsigned int) (unsigned char)250))))))) ? ((-((+(var_0))))) : (((/* implicit */long long int) 13U))));
                            var_54 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) 4294967276U)) : (max((arr_75 [i_38 + 1]), (((/* implicit */long long int) var_3))))));
                            arr_135 [i_39] [i_38] [i_38] [i_37] [i_32] [i_32] [i_22] = ((/* implicit */long long int) arr_120 [i_37] [i_37] [i_37] [i_37]);
                        }
                    } 
                } 
            } 
            arr_136 [i_22] [i_32] [i_32] = ((/* implicit */long long int) ((short) max((var_1), (var_4))));
        }
    }
}
