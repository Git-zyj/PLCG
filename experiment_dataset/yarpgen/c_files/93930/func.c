/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93930
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */_Bool) min((var_18), ((!((_Bool)1)))));
        var_19 = (!(arr_1 [i_0 - 1]));
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)116)) >> (((/* implicit */int) arr_5 [i_0 - 1]))));
            var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */int) var_4)) - (((/* implicit */int) arr_2 [i_0] [i_1])))))))));
        }
        for (unsigned int i_2 = 0; i_2 < 11; i_2 += 2) /* same iter space */
        {
            var_22 &= ((/* implicit */int) -1584671477023916866LL);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
                {
                    {
                        arr_16 [i_4] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_14 [i_0] [i_3] [i_2] [i_0])) ? (1378419550U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                        arr_17 [i_3] [i_4] = ((/* implicit */long long int) (_Bool)1);
                        var_23 = ((/* implicit */long long int) (!(arr_6 [i_0 - 1] [(short)0])));
                        arr_18 [i_0 - 1] [i_0 - 1] [i_3] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)27456))));
                        arr_19 [i_0] [i_2] [i_0] [i_4] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned short)44808))));
                    }
                } 
            } 
            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (_Bool)1))));
            var_25 = ((/* implicit */int) var_6);
        }
    }
    /* vectorizable */
    for (unsigned short i_5 = 1; i_5 < 13; i_5 += 2) 
    {
        var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4186811642495336900ULL)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_17)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))) : (var_14));
        arr_23 [i_5] [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) var_8))));
        var_27 *= ((/* implicit */long long int) (_Bool)1);
        arr_24 [i_5] = ((/* implicit */int) 2147467264ULL);
    }
    /* LoopSeq 4 */
    for (short i_6 = 0; i_6 < 16; i_6 += 2) 
    {
        var_28 = ((/* implicit */_Bool) (short)25936);
        arr_27 [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) 4196627399U)) ? (((/* implicit */int) arr_25 [i_6])) : (((/* implicit */int) arr_25 [i_6])))), ((-(((/* implicit */int) arr_26 [i_6] [i_6]))))))) ? (((((/* implicit */_Bool) max((var_14), (((/* implicit */unsigned int) (unsigned char)179))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) + (-6430625803095805912LL))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)0))))))) : (((/* implicit */long long int) ((((/* implicit */int) max((arr_25 [i_6]), ((signed char)102)))) + (((/* implicit */int) min(((short)-32753), (((/* implicit */short) arr_26 [i_6] [(signed char)3]))))))))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((4196627402U), (((/* implicit */unsigned int) (_Bool)0)))), (((/* implicit */unsigned int) arr_22 [i_6] [i_6]))))) ? (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_20 [i_6]))))))) : ((+(min((-140746589), (((/* implicit */int) (unsigned char)132))))))));
        arr_28 [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) min((var_15), (((/* implicit */int) (unsigned char)109))))) ? (min((arr_20 [i_6]), (((/* implicit */unsigned long long int) arr_25 [i_6])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) arr_26 [i_6] [i_6])))) > (((/* implicit */int) var_16))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 2; i_7 < 13; i_7 += 3) 
        {
            arr_31 [i_6] [i_7] [i_6] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_6] [i_6])) ? (((/* implicit */int) arr_26 [i_6] [i_7 + 2])) : (((/* implicit */int) var_7))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_6] [i_7 - 1]))) : (4196627402U)))));
            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (unsigned char)30)) : (((/* implicit */int) (signed char)-126)))), (((/* implicit */int) (_Bool)1))))) ? (max((((/* implicit */int) ((((/* implicit */int) var_0)) == (((/* implicit */int) arr_26 [i_6] [i_6]))))), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-238)) : (((/* implicit */int) (unsigned char)24)))))) : (((((/* implicit */_Bool) (+(((/* implicit */int) var_7))))) ? (((/* implicit */int) arr_22 [i_6] [i_6])) : (((/* implicit */int) (unsigned char)0))))));
            /* LoopNest 2 */
            for (signed char i_8 = 0; i_8 < 16; i_8 += 1) 
            {
                for (unsigned long long int i_9 = 2; i_9 < 14; i_9 += 4) 
                {
                    {
                        arr_37 [i_9] [i_9] [i_9] |= ((/* implicit */short) max((((((/* implicit */_Bool) max((arr_20 [i_9]), (((/* implicit */unsigned long long int) var_1))))) ? (((/* implicit */int) min((var_5), ((unsigned char)255)))) : ((+(((/* implicit */int) arr_35 [i_9])))))), (arr_34 [i_9])));
                        var_31 = ((/* implicit */short) max((((/* implicit */unsigned long long int) (-(max((((/* implicit */unsigned int) (short)1291)), (var_12)))))), (max((((((/* implicit */_Bool) 4196627402U)) ? (18446744071562084346ULL) : (arr_20 [i_8]))), (((((/* implicit */_Bool) arr_30 [i_6] [i_8])) ? (5708550475974098668ULL) : (((/* implicit */unsigned long long int) arr_34 [i_8]))))))));
                    }
                } 
            } 
            arr_38 [i_6] [i_6] [i_7] = ((/* implicit */unsigned long long int) 369897503);
        }
    }
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
    {
        var_32 = ((/* implicit */short) (((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4))))))) ? ((+(max((arr_30 [i_10] [i_10]), (((/* implicit */int) arr_7 [i_10] [i_10] [(unsigned char)2])))))) : (((/* implicit */int) var_2))));
        var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) min((max((((/* implicit */int) var_7)), (((((/* implicit */_Bool) 204476317)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_29 [i_10])))))), (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_10] [i_10] [i_10])) ? (((/* implicit */int) arr_9 [(unsigned char)10] [(unsigned char)10] [i_10])) : (((/* implicit */int) var_6)))))))))))));
        arr_41 [i_10] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_10])) ? (var_12) : (((/* implicit */unsigned int) 631781161))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) / (var_13)))) : (((((/* implicit */_Bool) -2062622921)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (5708550475974098668ULL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) : (((((/* implicit */_Bool) (+(1944979372)))) ? (((((/* implicit */_Bool) arr_12 [i_10])) ? (11904618533615589522ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_10]))))) : (((/* implicit */unsigned long long int) ((arr_8 [i_10] [i_10] [i_10]) | (((/* implicit */int) (unsigned char)68)))))))));
    }
    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) /* same iter space */
    {
        arr_46 [i_11] [i_11] = ((/* implicit */_Bool) max(((((!(((/* implicit */_Bool) arr_14 [i_11] [i_11] [i_11] [i_11])))) ? (max((((/* implicit */unsigned long long int) var_0)), (arr_40 [i_11]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */int) arr_44 [i_11])) : (var_13)))))), (((((/* implicit */_Bool) 1570664529)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) (unsigned short)37838))))) : (arr_20 [i_11])))));
        arr_47 [i_11] [i_11] = ((/* implicit */_Bool) (unsigned char)24);
        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) max(((~(min((2147467257ULL), (((/* implicit */unsigned long long int) (unsigned short)27698)))))), (((/* implicit */unsigned long long int) var_16)))))));
        var_35 = ((/* implicit */signed char) (+(((max((((/* implicit */int) var_0)), (1267752742))) / (min((((/* implicit */int) var_2)), (arr_30 [i_11] [i_11])))))));
        var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) max(((unsigned short)37859), (((/* implicit */unsigned short) var_4))))) ? (((((/* implicit */_Bool) 1006632960U)) ? (var_13) : (arr_30 [i_11] [i_11]))) : (((((/* implicit */_Bool) arr_43 [6U] [i_11])) ? (((/* implicit */int) var_11)) : (var_15))))), (((((/* implicit */_Bool) arr_25 [i_11])) ? (((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_11])) : (((/* implicit */int) arr_14 [i_11] [i_11] [i_11] [i_11])))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            arr_55 [i_13] [i_12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 536870784))));
            /* LoopNest 3 */
            for (signed char i_14 = 2; i_14 < 9; i_14 += 3) 
            {
                for (unsigned char i_15 = 1; i_15 < 10; i_15 += 3) 
                {
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        {
                            var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) ((((/* implicit */_Bool) 2147483647)) ? (((arr_48 [i_16]) ? (((/* implicit */long long int) var_15)) : (var_17))) : (((/* implicit */long long int) (~(-2062622921)))))))));
                            var_38 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_16]))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned long long int i_17 = 4; i_17 < 7; i_17 += 2) 
        {
            var_39 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_5 [i_12])) == (((/* implicit */int) arr_7 [i_12] [i_17] [i_17 + 2]))));
            var_40 = ((/* implicit */signed char) arr_59 [i_12] [i_12]);
            arr_70 [i_12] [i_17 + 4] [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_12 [i_12])) + (((/* implicit */int) var_7))));
            var_41 ^= ((/* implicit */unsigned char) arr_61 [i_12] [i_12] [i_12] [i_17]);
            /* LoopSeq 1 */
            for (signed char i_18 = 0; i_18 < 11; i_18 += 1) 
            {
                var_42 = ((/* implicit */_Bool) var_5);
                arr_74 [i_12] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_9 [i_12] [i_12] [i_17 - 4]))));
                /* LoopSeq 2 */
                for (int i_19 = 2; i_19 < 9; i_19 += 1) 
                {
                    /* LoopSeq 3 */
                    for (short i_20 = 0; i_20 < 11; i_20 += 1) 
                    {
                        var_43 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)78)) ? (((/* implicit */long long int) var_14)) : (((((/* implicit */_Bool) var_1)) ? (9223372036854775799LL) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
                        arr_79 [i_12] [i_12] [(unsigned char)6] [i_12] [i_12] = ((/* implicit */long long int) arr_0 [i_18]);
                        arr_80 [i_17 - 4] [i_17 - 4] [i_17 - 4] = (short)5119;
                    }
                    for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                    {
                        var_44 = ((/* implicit */signed char) arr_21 [i_19 + 2]);
                        var_45 = arr_75 [i_12] [i_17] [i_17] [i_18] [i_19] [i_21];
                        var_46 = ((/* implicit */signed char) var_2);
                        arr_84 [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (658955490) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) 1944979398)) ? (arr_64 [i_12] [i_17 - 4] [i_18] [i_19]) : (((/* implicit */int) var_16)))) : ((-(arr_66 [i_12] [i_17] [i_18] [i_19] [i_12] [i_21] [i_12]))));
                        var_47 = ((((/* implicit */int) arr_65 [i_21] [6LL] [6LL] [i_12] [i_18] [i_12] [i_12])) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_59 [(signed char)3] [i_21])))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 11; i_22 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (short)-5502))))));
                        var_49 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -2007298723)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-65))));
                        var_50 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_17 + 2]))) > ((((_Bool)1) ? (var_14) : (((/* implicit */unsigned int) ((/* implicit */int) arr_54 [i_12])))))));
                        var_51 ^= ((/* implicit */_Bool) arr_87 [i_12] [i_12] [(unsigned char)3] [i_18] [i_19 + 1] [i_22]);
                        var_52 = ((/* implicit */signed char) min((var_52), (arr_2 [i_12] [i_12])));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_23 = 0; i_23 < 11; i_23 += 4) 
                    {
                        var_53 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_39 [i_19 + 2]))));
                        var_54 = ((/* implicit */_Bool) max((var_54), (((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (((/* implicit */int) arr_26 [i_17 - 4] [i_19 + 2])))))));
                        arr_91 [i_12] = ((/* implicit */unsigned short) arr_50 [i_19]);
                        var_55 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)20751))))));
                    }
                    for (unsigned char i_24 = 1; i_24 < 10; i_24 += 1) 
                    {
                        var_56 = ((/* implicit */signed char) max((var_56), (((/* implicit */signed char) (~(((/* implicit */int) (!(arr_5 [i_24])))))))));
                        var_57 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_12] [i_17] [i_18] [i_17] [i_12])) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) (signed char)-81)) : (490547274))) : ((((_Bool)1) ? (((/* implicit */int) (signed char)64)) : (2147483647)))));
                    }
                }
                for (long long int i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    arr_99 [i_25] [i_18] [i_17] [i_12] = ((/* implicit */short) (!(((2062622893) > (((/* implicit */int) var_8))))));
                    var_58 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) -490547274)) ? (((/* implicit */int) var_8)) : (2062622893))));
                }
                /* LoopSeq 4 */
                for (int i_26 = 2; i_26 < 10; i_26 += 2) /* same iter space */
                {
                    arr_102 [i_12] [i_12] [i_12] [i_18] [i_18] [i_26] = ((/* implicit */long long int) arr_3 [i_12]);
                    arr_103 [i_12] [i_12] [i_17] [i_18] [i_12] [i_26 + 1] = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_2 [i_18] [i_26]))))));
                    var_59 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_3 [i_17 - 3]))));
                }
                for (int i_27 = 2; i_27 < 10; i_27 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_28 = 0; i_28 < 11; i_28 += 3) 
                    {
                        var_60 = ((/* implicit */_Bool) ((signed char) 2062622893));
                        var_61 = ((/* implicit */long long int) (((-(var_14))) - (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_12] [i_12] [i_17 - 2] [i_18] [i_18] [i_27] [i_28])))));
                        var_62 = ((/* implicit */signed char) (+(9223372036854775807LL)));
                        var_63 ^= ((/* implicit */long long int) arr_11 [i_17] [i_17 + 1] [i_17]);
                        var_64 = ((/* implicit */signed char) ((arr_53 [i_17 + 2] [i_17 - 2]) ? (((((/* implicit */_Bool) var_6)) ? (1124800395214848LL) : (((/* implicit */long long int) 490547287)))) : (((/* implicit */long long int) (+(arr_34 [i_17]))))));
                    }
                    arr_111 [i_12] [i_17] [i_18] [i_18] [i_27] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_33 [i_17] [i_17] [i_27 + 1])) ? (arr_33 [i_17] [4ULL] [i_27 + 1]) : (((/* implicit */int) var_9))));
                    var_65 = var_8;
                    var_66 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((-490547274) ^ (((/* implicit */int) var_16)))) : ((-(arr_30 [i_12] [i_18]))));
                }
                for (int i_29 = 2; i_29 < 10; i_29 += 2) /* same iter space */
                {
                    var_67 = (+(((/* implicit */int) arr_49 [i_12] [i_12])));
                    arr_116 [i_12] [i_17 + 2] [i_12] [i_29] [i_29] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)252)) ? (var_10) : (var_10)))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_0 [i_29])) : (((/* implicit */int) arr_54 [i_29])))) : (((/* implicit */int) (signed char)21))));
                }
                for (unsigned long long int i_30 = 0; i_30 < 11; i_30 += 3) 
                {
                    arr_119 [i_12] [i_17 - 3] = arr_72 [i_18];
                    var_68 *= ((/* implicit */signed char) (+((~(var_14)))));
                }
            }
        }
        arr_120 [i_12] = ((/* implicit */_Bool) 6668308337697029395ULL);
    }
    var_69 -= ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))) > (var_17)));
}
