/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96535
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
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            var_19 *= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-75)) ? (max((((/* implicit */unsigned int) arr_0 [i_0] [i_1])), (3263293767U))) : (((/* implicit */unsigned int) ((/* implicit */int) min(((signed char)-72), ((signed char)18)))))));
            var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) max((((/* implicit */unsigned int) max((var_5), (((/* implicit */unsigned char) arr_1 [i_0]))))), (((((/* implicit */_Bool) (signed char)93)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-26149))) : (1031673519U))))))));
        }
        var_21 = ((/* implicit */signed char) ((unsigned int) (!(((/* implicit */_Bool) max((3263293767U), (((/* implicit */unsigned int) (unsigned char)73))))))));
        arr_6 [(signed char)9] &= ((/* implicit */unsigned short) var_4);
    }
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_0 [i_2] [i_2]), (arr_0 [i_2] [i_2]))))));
        arr_10 [i_2] |= ((/* implicit */unsigned long long int) ((min((4164045199U), (((/* implicit */unsigned int) arr_0 [i_2] [i_2])))) ^ (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) arr_3 [i_2])), (var_14)))))));
    }
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_23 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))))) <= (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))));
        arr_13 [i_3] [i_3] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_12 [i_3]))));
    }
    /* vectorizable */
    for (long long int i_4 = 0; i_4 < 18; i_4 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_2)) ? (805192764U) : ((+(3263293777U)))));
        var_25 = ((/* implicit */unsigned int) arr_11 [i_4]);
        var_26 = ((/* implicit */int) min((var_26), (((/* implicit */int) var_3))));
        /* LoopNest 3 */
        for (unsigned char i_5 = 1; i_5 < 16; i_5 += 2) 
        {
            for (int i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (unsigned int i_7 = 1; i_7 < 15; i_7 += 2) 
                {
                    {
                        arr_24 [0] [i_5] [i_5] [i_5 - 1] [(unsigned short)10] [i_5] = ((/* implicit */unsigned short) -2110564570);
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5 + 2] [i_5 + 2] [i_5 + 1] [i_5 + 1])) || (((/* implicit */_Bool) arr_20 [i_5 + 1] [i_5] [i_5 + 2] [i_5 + 2]))));
                        arr_25 [i_4] [i_4] = ((/* implicit */unsigned short) -1057506262);
                        var_28 += ((/* implicit */unsigned long long int) ((((1798273900U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_4] [i_5 + 1] [i_6] [15U]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)95))))))));
                        var_29 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
        } 
    }
    for (int i_8 = 1; i_8 < 15; i_8 += 3) 
    {
        var_30 |= ((/* implicit */long long int) max((var_6), (((/* implicit */unsigned int) (unsigned char)182))));
        var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_22 [i_8 + 1] [i_8 + 1] [i_8 + 1] [i_8 - 1])) : (((/* implicit */int) var_12)))) + ((+(((((/* implicit */_Bool) 2139265200U)) ? (-1882749584) : (((/* implicit */int) (unsigned short)32907)))))))))));
        var_32 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3489774548U)) ? (-1007392769) : (50740874)))) & (((((/* implicit */_Bool) (unsigned char)64)) ? (1897205088U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-21)))))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 2) 
    {
        var_33 = ((/* implicit */signed char) arr_30 [i_9]);
        var_34 = ((/* implicit */unsigned char) arr_27 [i_9]);
        /* LoopSeq 4 */
        for (int i_10 = 0; i_10 < 17; i_10 += 2) 
        {
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) arr_18 [i_9] [i_10] [i_10]))));
            var_36 = ((/* implicit */signed char) arr_28 [i_9]);
            var_37 = ((/* implicit */_Bool) ((int) arr_11 [i_10]));
            /* LoopSeq 1 */
            for (long long int i_11 = 2; i_11 < 16; i_11 += 2) 
            {
                arr_35 [(short)8] [i_11] = ((/* implicit */unsigned int) (short)18096);
                var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_11 - 1] [i_11 + 1] [i_11 - 2] [i_11 + 1])) ? (((/* implicit */unsigned long long int) 3037875373U)) : (4727245351819335938ULL))))));
            }
        }
        for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
        {
            /* LoopSeq 3 */
            for (signed char i_13 = 4; i_13 < 15; i_13 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 17; i_14 += 3) 
                {
                    for (unsigned short i_15 = 2; i_15 < 15; i_15 += 3) 
                    {
                        {
                            var_39 = (~(((/* implicit */int) arr_22 [1U] [i_15 - 2] [i_13 - 4] [i_14])));
                            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) (+(arr_19 [i_9] [i_14] [i_15 - 1]))))));
                            arr_47 [i_12] [i_12] [i_12] [i_14] [i_14] = (unsigned short)23529;
                            var_41 += ((/* implicit */signed char) ((4294967292U) | (((/* implicit */unsigned int) ((/* implicit */int) var_12)))));
                            var_42 = ((/* implicit */unsigned short) (signed char)127);
                        }
                    } 
                } 
                var_43 = -50740889;
                var_44 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_21 [i_12] [i_13] [i_13 + 2] [i_13 - 3] [(signed char)9] [(unsigned char)5])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((unsigned char) var_13)))));
                var_45 *= ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (50740896) : (-50740872)))) % (arr_46 [i_12] [i_13] [i_13 + 2] [i_13] [i_13 - 1] [i_9] [i_13]));
            }
            for (short i_16 = 0; i_16 < 17; i_16 += 3) 
            {
                var_46 = ((unsigned char) arr_44 [i_9] [i_9] [i_9] [(short)3]);
                var_47 -= var_14;
            }
            for (unsigned short i_17 = 0; i_17 < 17; i_17 += 2) 
            {
                var_48 = ((/* implicit */int) min((var_48), ((~(((/* implicit */int) arr_20 [i_9] [i_9] [i_9] [i_9]))))));
                arr_54 [i_9] [i_12] [6] = ((/* implicit */unsigned short) var_8);
            }
            /* LoopSeq 3 */
            for (signed char i_18 = 0; i_18 < 17; i_18 += 3) 
            {
                var_49 = ((/* implicit */int) (+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (4724702043333242218ULL)))));
                /* LoopSeq 4 */
                for (unsigned short i_19 = 0; i_19 < 17; i_19 += 2) 
                {
                    var_50 = ((/* implicit */unsigned int) arr_21 [i_9] [i_12] [i_18] [i_18] [(short)4] [i_19]);
                    var_51 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_53 [i_9] [i_9] [i_9] [i_9]))));
                }
                for (unsigned char i_20 = 0; i_20 < 17; i_20 += 3) /* same iter space */
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_21 = 2; i_21 < 14; i_21 += 2) 
                    {
                        var_52 = ((/* implicit */unsigned short) ((((3759514950U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_9]))))) << (((/* implicit */int) ((((/* implicit */int) arr_31 [i_9] [i_20] [i_21 + 3])) >= (((/* implicit */int) var_12)))))));
                        var_53 = ((/* implicit */signed char) 3971863405U);
                        arr_65 [i_9] [i_9] [(signed char)7] [i_18] [(unsigned short)3] [i_20] [i_20] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) 0ULL)))));
                        arr_66 [i_9] [i_20] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_39 [i_21 + 3])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) -483236526)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned short)2670))))) : (arr_40 [i_21 - 1] [i_21 - 1] [i_21 + 2])));
                        var_54 *= (unsigned short)5;
                    }
                    for (int i_22 = 0; i_22 < 17; i_22 += 2) 
                    {
                        var_55 -= ((/* implicit */unsigned long long int) (~((~(((/* implicit */int) (unsigned char)40))))));
                        var_56 = ((/* implicit */unsigned long long int) ((short) var_11));
                    }
                    for (int i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        arr_72 [i_18] [i_18] [i_9] [i_20] [i_9] [i_23] = ((/* implicit */unsigned short) (+(2348779052U)));
                        var_57 = ((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_12)) * (((/* implicit */int) arr_34 [(_Bool)1] [i_18] [i_20])))));
                    }
                    var_58 = ((/* implicit */unsigned long long int) min((var_58), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_32 [i_9] [i_12])))))))));
                }
                for (unsigned char i_24 = 0; i_24 < 17; i_24 += 3) /* same iter space */
                {
                    var_59 = ((/* implicit */signed char) (unsigned short)45844);
                    arr_77 [i_9] [i_12] [i_24] [(unsigned short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_75 [i_9] [(unsigned short)11] [i_9] [i_24] [i_9])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)165)))))) ? (((/* implicit */int) (short)6885)) : (((/* implicit */int) arr_60 [i_24] [i_24]))));
                    arr_78 [i_24] [(unsigned char)10] [i_18] [i_24] = ((/* implicit */long long int) ((unsigned short) arr_57 [i_24]));
                }
                for (unsigned char i_25 = 0; i_25 < 17; i_25 += 3) /* same iter space */
                {
                    arr_82 [i_25] [i_25] [i_25] [i_25] = ((/* implicit */short) (~(1690309034U)));
                    var_60 *= ((/* implicit */unsigned char) var_11);
                }
            }
            for (unsigned short i_26 = 1; i_26 < 16; i_26 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_27 = 1; i_27 < 15; i_27 += 2) 
                {
                    arr_88 [i_9] [i_9] [(_Bool)1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)90))) * (905407969U)));
                    var_61 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 50740880)) && (((/* implicit */_Bool) 1882749552)))))) == ((+(var_18)))));
                }
                for (unsigned int i_28 = 0; i_28 < 17; i_28 += 2) 
                {
                    var_62 = ((/* implicit */short) (-(((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) arr_89 [i_9])) : (((/* implicit */int) (unsigned char)110))))));
                    var_63 = (!(((/* implicit */_Bool) var_10)));
                }
                for (unsigned char i_29 = 3; i_29 < 16; i_29 += 2) 
                {
                    /* LoopSeq 1 */
                    for (short i_30 = 4; i_30 < 16; i_30 += 3) 
                    {
                        var_64 = var_9;
                        arr_97 [i_12] [i_29] = ((/* implicit */signed char) (short)27884);
                        var_65 = ((/* implicit */unsigned char) arr_53 [i_30] [i_30] [i_30 + 1] [i_30 - 4]);
                        var_66 = ((/* implicit */long long int) 1007392769);
                        arr_98 [i_29] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 4194303U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (arr_15 [(unsigned short)4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))) : ((+(arr_11 [(unsigned short)17])))));
                    }
                    var_67 *= ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_10))))));
                    var_68 = arr_48 [i_26] [i_29];
                }
                for (unsigned short i_31 = 2; i_31 < 16; i_31 += 2) 
                {
                    var_69 *= ((/* implicit */short) ((arr_81 [(unsigned char)10] [i_31 + 1] [i_9] [i_31 - 1] [i_31]) ? ((~(((/* implicit */int) var_4)))) : (((/* implicit */int) arr_67 [i_26 - 1] [i_31] [i_31] [i_31 + 1] [i_31 - 1] [8U] [i_12]))));
                    var_70 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) (unsigned char)130)))));
                }
                /* LoopSeq 1 */
                for (unsigned char i_32 = 0; i_32 < 17; i_32 += 2) 
                {
                    var_71 = ((/* implicit */signed char) ((unsigned short) arr_33 [i_26 + 1] [i_26 + 1] [(_Bool)1]));
                    arr_104 [(unsigned short)3] [i_26] [i_32] = ((/* implicit */int) ((unsigned int) arr_89 [i_26 - 1]));
                    var_72 = ((/* implicit */signed char) arr_70 [i_9]);
                }
            }
            for (unsigned int i_33 = 0; i_33 < 17; i_33 += 2) 
            {
                /* LoopSeq 1 */
                for (signed char i_34 = 2; i_34 < 15; i_34 += 2) 
                {
                    var_73 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)-121)) + (2147483647))) << ((((((-(((/* implicit */int) arr_70 [i_12])))) + (97))) - (16)))));
                    arr_111 [i_33] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_42 [5] [i_33] [i_34 + 2] [i_34])) ? (((/* implicit */unsigned int) ((arr_81 [i_9] [i_9] [i_9] [8U] [2ULL]) ? (((/* implicit */int) (signed char)15)) : (-50740875)))) : (((((/* implicit */_Bool) (signed char)17)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)54331)))))));
                    var_74 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_67 [i_34 + 2] [8U] [i_34] [i_34 - 1] [i_34] [i_34] [i_34])) ? (((/* implicit */int) arr_21 [i_34] [i_34 + 2] [i_34] [i_34 - 2] [i_34] [i_34])) : (((/* implicit */int) arr_21 [(unsigned char)11] [i_9] [i_12] [i_34 - 2] [i_34] [i_34]))));
                    arr_112 [i_9] [i_9] [i_12] [i_12] [i_33] [i_34] = var_1;
                    var_75 ^= ((/* implicit */unsigned long long int) var_11);
                }
                /* LoopNest 2 */
                for (unsigned int i_35 = 0; i_35 < 17; i_35 += 2) 
                {
                    for (unsigned int i_36 = 1; i_36 < 15; i_36 += 3) 
                    {
                        {
                            var_76 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_107 [i_9] [(signed char)3] [i_35] [i_36])) ? (var_7) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) (signed char)-67)) : ((+(((/* implicit */int) (unsigned char)75))))));
                            var_77 = ((/* implicit */signed char) -1882749571);
                        }
                    } 
                } 
            }
            var_78 = ((/* implicit */signed char) ((int) ((unsigned short) (short)-2710)));
            arr_119 [10] = ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-184))));
        }
        for (unsigned short i_37 = 0; i_37 < 17; i_37 += 2) 
        {
            arr_122 [i_9] [15LL] [6U] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_9])) * (((/* implicit */int) arr_27 [i_9]))));
            arr_123 [i_9] [i_37] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_48 [i_9] [i_37])) || (((/* implicit */_Bool) arr_48 [(unsigned short)1] [i_37]))));
            var_79 = ((/* implicit */signed char) -1714514738);
            var_80 = ((/* implicit */short) (~(((/* implicit */int) arr_20 [i_9] [i_9] [i_37] [i_37]))));
            var_81 = ((/* implicit */unsigned int) min((var_81), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (8638351625906305641ULL))))));
        }
        for (unsigned short i_38 = 0; i_38 < 17; i_38 += 2) 
        {
            var_82 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_61 [(unsigned short)15]))) / ((-(arr_71 [i_9] [i_9] [i_9] [(short)2] [i_9])))));
            arr_127 [i_9] = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_106 [i_9] [i_38])) : (((/* implicit */int) (unsigned short)25065)))));
        }
    }
    var_83 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_12)) ? (50740876) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)59655)) : (((/* implicit */int) (unsigned short)26))))) ? (((((/* implicit */int) var_16)) & (var_8))) : ((~(((/* implicit */int) var_0))))))));
    var_84 = ((signed char) (-(((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned short)64377))))));
    var_85 = ((/* implicit */signed char) (+(((((/* implicit */_Bool) (-(var_7)))) ? (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned short)1158)) : (((/* implicit */int) var_12)))) : (((((/* implicit */_Bool) (unsigned short)5881)) ? (var_1) : (1882749552)))))));
}
