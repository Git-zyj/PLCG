/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99076
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
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned int) ((unsigned char) var_1));
                var_12 = ((/* implicit */signed char) min((2619445075U), (((/* implicit */unsigned int) (unsigned char)58))));
                /* LoopSeq 1 */
                for (signed char i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    var_13 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((var_5) << (((var_8) - (2885928822599765227ULL))))), (var_10)))) ? (max(((-(var_5))), (arr_3 [i_0 + 1]))) : (((/* implicit */unsigned long long int) arr_1 [i_0 + 1] [i_0]))));
                    arr_8 [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_2]))));
                    var_14 = ((/* implicit */signed char) var_3);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_3 = 4; i_3 < 19; i_3 += 2) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned short) min((var_5), (var_4)));
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned int i_4 = 2; i_4 < 22; i_4 += 2) 
        {
            arr_15 [i_3] [i_3] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_3 + 4]))));
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) var_7);
        }
        for (unsigned short i_5 = 1; i_5 < 21; i_5 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_6 = 3; i_6 < 21; i_6 += 3) 
            {
                for (long long int i_7 = 1; i_7 < 21; i_7 += 2) 
                {
                    for (int i_8 = 2; i_8 < 21; i_8 += 2) 
                    {
                        {
                            var_15 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((int) -1725076797))), (((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned long long int) 2147483647)) : (13885474790404950325ULL)))));
                            var_16 += ((/* implicit */unsigned int) var_10);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 23; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 4; i_10 < 20; i_10 += 3) 
                {
                    {
                        var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_21 [i_3 + 2] [i_5 + 1]), (arr_21 [i_3 - 2] [i_5 + 2])))) || (((((/* implicit */_Bool) arr_21 [i_3 + 3] [i_5 + 2])) && (((/* implicit */_Bool) arr_21 [i_3 + 3] [i_5 - 1]))))));
                        var_18 *= ((/* implicit */unsigned char) arr_28 [9]);
                        var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) min((arr_22 [i_3] [i_3 - 3] [i_3 - 1] [i_3] [4ULL] [i_3]), (var_6)))))));
                        var_20 = var_7;
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_11 = 1; i_11 < 1; i_11 += 1) 
            {
                var_21 |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(var_5))))));
                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) arr_21 [i_5] [i_3])) ? (4154460655U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3]))))))) : (arr_27 [i_5])));
                arr_34 [i_5] = ((/* implicit */unsigned long long int) min((-340111037), (-1752232698)));
            }
            /* vectorizable */
            for (signed char i_12 = 0; i_12 < 23; i_12 += 1) 
            {
                var_23 = ((/* implicit */unsigned short) (-(10189038336990372924ULL)));
                /* LoopSeq 2 */
                for (unsigned char i_13 = 0; i_13 < 23; i_13 += 2) 
                {
                    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1725076797)) ? (((/* implicit */int) (unsigned short)19568)) : (((/* implicit */int) (unsigned char)184))));
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 23; i_14 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned short) var_1);
                        var_26 = ((/* implicit */unsigned long long int) (-(arr_36 [i_3 - 2] [i_3 - 4] [i_5])));
                    }
                    for (unsigned char i_15 = 1; i_15 < 22; i_15 += 1) 
                    {
                        arr_47 [3U] [i_5 + 2] [i_12] [i_13] [i_5] = var_4;
                        var_27 = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned short) 15867447825085741217ULL)))));
                        arr_48 [i_3] [i_5] [i_13] [i_13] [i_15 - 1] [i_5] = ((/* implicit */unsigned int) (unsigned char)46);
                    }
                    for (unsigned int i_16 = 1; i_16 < 19; i_16 += 3) 
                    {
                        arr_51 [i_3] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_16] [i_3 + 2])) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) 0U)) : (arr_46 [i_3] [i_3 - 3] [i_5] [i_3 + 4] [i_3 + 2]))) : (((/* implicit */long long int) var_1))));
                        var_28 = ((/* implicit */unsigned long long int) ((var_1) * (((var_1) / (((/* implicit */unsigned int) var_6))))));
                        arr_52 [i_16] [i_5] [i_12] [i_5] [i_3 - 1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)162)) ? (((/* implicit */unsigned long long int) 2304744363U)) : (2407326551086099976ULL)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_3]))) % (var_5))) : (((/* implicit */unsigned long long int) arr_33 [i_16 + 1] [i_5 + 1] [i_3 + 4]))));
                    }
                    var_29 = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))));
                    var_30 -= (+(((/* implicit */int) var_0)));
                }
                for (unsigned char i_17 = 3; i_17 < 22; i_17 += 2) 
                {
                    var_31 += ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */int) arr_53 [i_3] [i_3 + 1] [i_12] [i_3 + 1])) : (((/* implicit */int) arr_53 [i_3] [i_3 + 2] [i_3 - 2] [i_17]))));
                    var_32 = ((/* implicit */signed char) (-(arr_25 [i_3] [i_3] [i_12] [i_17] [i_5 + 1] [i_17])));
                    var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_6))));
                }
                arr_57 [16U] [i_5] = ((/* implicit */unsigned char) var_2);
            }
            var_34 |= ((/* implicit */unsigned int) max((max((((((/* implicit */_Bool) 4006351292U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_10))), (((/* implicit */unsigned long long int) (signed char)-77)))), (((/* implicit */unsigned long long int) var_3))));
        }
        for (unsigned int i_18 = 0; i_18 < 23; i_18 += 2) 
        {
            var_35 = ((/* implicit */unsigned long long int) max((((/* implicit */int) min((arr_53 [i_18] [i_18] [i_3 + 3] [i_3 + 3]), (((/* implicit */unsigned short) arr_44 [18] [18] [i_18] [i_3 - 3] [i_3 + 2]))))), ((+(((/* implicit */int) (unsigned char)210))))));
            var_36 &= ((/* implicit */long long int) max((((/* implicit */unsigned int) (~(((int) 2523186226942069561ULL))))), (((((/* implicit */_Bool) 3312851285U)) ? (2482725603U) : (836980768U)))));
        }
        arr_60 [i_3] [i_3] = ((/* implicit */signed char) var_9);
        var_37 ^= ((/* implicit */int) ((((((/* implicit */_Bool) arr_33 [i_3 + 2] [i_3 - 3] [i_3 + 3])) || (((/* implicit */_Bool) arr_33 [i_3 - 4] [i_3 + 2] [i_3 + 3])))) ? ((-(arr_33 [i_3 - 1] [i_3 + 3] [i_3 + 3]))) : ((-(var_7)))));
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 23; i_19 += 1) 
        {
            var_38 -= ((/* implicit */unsigned char) (+(((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_9))) % ((~(var_5)))))));
            var_39 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)151))));
        }
        for (unsigned short i_20 = 0; i_20 < 23; i_20 += 3) 
        {
            var_40 = ((/* implicit */unsigned long long int) min((var_40), ((-(((unsigned long long int) 1956460262))))));
            var_41 -= ((((/* implicit */_Bool) ((unsigned short) (-(arr_67 [i_20]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (20U))))))) : (((/* implicit */int) arr_29 [i_3] [i_20] [i_20] [i_20] [i_20])));
            /* LoopSeq 2 */
            for (signed char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                var_42 = var_2;
                /* LoopSeq 3 */
                for (int i_22 = 0; i_22 < 23; i_22 += 1) 
                {
                    var_43 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) (+((-(var_1)))))) : ((-9223372036854775807LL - 1LL))));
                    var_44 += ((/* implicit */signed char) arr_42 [i_22] [i_3 - 2] [i_21] [i_20] [i_3 - 2]);
                    var_45 = ((/* implicit */unsigned short) var_7);
                }
                for (signed char i_23 = 0; i_23 < 23; i_23 += 2) 
                {
                    var_46 = ((/* implicit */unsigned long long int) min((var_46), (((((((/* implicit */_Bool) min((4286058064U), (((/* implicit */unsigned int) (unsigned char)205))))) ? (((11343045911157608498ULL) << (((((/* implicit */int) (signed char)-117)) + (143))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)81))))))) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_29 [i_3 - 2] [i_3 - 2] [i_21] [i_23] [i_3 + 4])) ? (((((/* implicit */_Bool) 11025582779017350048ULL)) ? (1000088613U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)177))))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))));
                    var_47 = ((((/* implicit */_Bool) arr_27 [i_20])) ? (((((/* implicit */_Bool) (~(var_9)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-98))))) : (min((var_4), (((/* implicit */unsigned long long int) arr_40 [i_3] [i_3] [i_20] [i_3] [i_20] [i_3])))))) : (((/* implicit */unsigned long long int) var_3)));
                }
                for (unsigned char i_24 = 0; i_24 < 23; i_24 += 3) 
                {
                    arr_77 [i_20] = ((/* implicit */signed char) arr_45 [i_3] [i_3]);
                    var_48 = ((/* implicit */unsigned long long int) ((unsigned short) ((unsigned long long int) min((var_9), (((/* implicit */unsigned long long int) arr_65 [(signed char)10]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_25 = 1; i_25 < 21; i_25 += 3) 
                    {
                        var_49 -= ((/* implicit */long long int) ((unsigned int) -64577221445155527LL));
                        arr_80 [i_20] [i_20] [i_21] [i_24] [i_24] = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (arr_12 [i_3] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_20])))));
                    }
                }
                arr_81 [i_21] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (arr_46 [i_21] [i_20] [i_21] [i_3 - 2] [i_3 - 2]) : (((/* implicit */long long int) var_7))))) ? (((/* implicit */unsigned long long int) min((arr_75 [i_3 + 1] [i_3 + 1] [i_21] [i_20] [16ULL]), (arr_75 [i_3] [i_3] [i_21] [i_3] [i_21])))) : (((((/* implicit */_Bool) (signed char)117)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64405))) : (14376509646162637056ULL)))));
                /* LoopNest 2 */
                for (unsigned short i_26 = 0; i_26 < 23; i_26 += 3) 
                {
                    for (int i_27 = 0; i_27 < 23; i_27 += 3) 
                    {
                        {
                            var_50 -= ((/* implicit */unsigned char) (+(min(((+(var_5))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) & (((/* implicit */int) arr_26 [i_3] [i_20])))))))));
                            var_51 ^= ((/* implicit */signed char) arr_19 [i_21]);
                            var_52 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) ((signed char) 18446744073709551613ULL)))))), (((((/* implicit */_Bool) arr_84 [i_21] [i_3 + 4] [i_21])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_84 [i_21] [i_3 - 3] [i_21]))) : (arr_35 [i_3 - 4] [i_3 - 1] [i_21])))));
                            var_53 += ((/* implicit */signed char) (+(min((6977646857556281454ULL), (9935768691629184741ULL)))));
                            arr_86 [i_27] [i_26] [i_20] [i_20] [i_3] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((min((arr_19 [i_20]), (((/* implicit */unsigned int) var_6)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)24588)))))))), (var_9)));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_28 = 3; i_28 < 20; i_28 += 1) 
            {
                /* LoopSeq 2 */
                for (long long int i_29 = 0; i_29 < 23; i_29 += 2) /* same iter space */
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_30 = 1; i_30 < 22; i_30 += 1) 
                    {
                        arr_95 [i_3 + 1] [i_20] [i_20] [i_29] [i_3 + 3] = ((/* implicit */signed char) (-(arr_19 [i_20])));
                        arr_96 [2ULL] [2ULL] [i_20] [2ULL] [i_29] [i_20] = ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-117))));
                        arr_97 [i_3] [i_20] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_3 + 4] [i_3 - 4] [i_3 - 3] [i_3 - 2] [i_20] [i_3 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_84 [i_20] [i_28 + 1] [i_30 + 1]))) : (((long long int) var_8))))), (((((/* implicit */_Bool) (((_Bool)1) ? (arr_20 [i_3] [i_3]) : (((/* implicit */unsigned int) var_6))))) ? (var_9) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)0)))))))));
                    }
                    for (unsigned char i_31 = 0; i_31 < 23; i_31 += 1) /* same iter space */
                    {
                        var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_28 - 3])) ? (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [i_3] [i_20] [i_20] [i_29]))))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((int) arr_14 [i_29]))), (max((((/* implicit */unsigned int) (unsigned short)40948)), (1556557543U))))))));
                        var_55 -= ((/* implicit */unsigned char) arr_33 [i_3] [i_20] [i_31]);
                        arr_101 [i_29] [i_20] [i_20] [8U] [i_20] &= ((/* implicit */unsigned long long int) (-(var_1)));
                    }
                    for (unsigned char i_32 = 0; i_32 < 23; i_32 += 1) /* same iter space */
                    {
                        arr_104 [i_3] [i_3] [i_28 - 3] [i_3 - 4] [i_3 - 4] [i_20] = ((/* implicit */signed char) 2147483647);
                        arr_105 [i_3] [i_20] [i_20] [i_29] [i_32] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2523186226942069560ULL)) ? (((/* implicit */int) (unsigned char)123)) : (((/* implicit */int) arr_84 [i_20] [i_32] [i_32]))));
                        var_56 = arr_66 [i_29] [i_20] [i_3 + 2];
                    }
                    /* vectorizable */
                    for (unsigned short i_33 = 0; i_33 < 23; i_33 += 3) 
                    {
                        var_57 = ((/* implicit */long long int) min((var_57), (((/* implicit */long long int) ((((/* implicit */_Bool) 15923557846767482056ULL)) ? (9935768691629184741ULL) : (11469097216153270161ULL))))));
                        var_58 -= ((((/* implicit */_Bool) 2109388009U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)40948))) : (arr_66 [i_3 - 3] [i_20] [i_28 - 1]));
                        var_59 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_94 [i_28 + 2] [i_20] [i_20] [i_3 - 1] [i_3 - 1])) ? ((~(((/* implicit */int) arr_94 [i_3] [i_3] [i_3 + 4] [i_3 - 1] [i_3])))) : ((~(((/* implicit */int) (_Bool)1))))));
                    }
                    var_60 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_35 [i_28 - 3] [i_3 + 3] [i_3 - 4])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0)))) : (arr_55 [i_20] [i_20] [i_28 - 1] [i_28 + 1])))) ? ((((!(((/* implicit */_Bool) 4096527279U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_29]))) : (((((/* implicit */_Bool) (signed char)-116)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19568))) : (11469097216153270182ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_58 [i_3 - 4] [i_3 - 1] [i_3 + 3])) << (((((((/* implicit */_Bool) 6977646857556281454ULL)) ? (4561269283304601291ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16593))))) - (4561269283304601286ULL))))))));
                }
                for (long long int i_34 = 0; i_34 < 23; i_34 += 2) /* same iter space */
                {
                    arr_111 [i_34] [i_20] [i_20] [i_3 - 2] = ((/* implicit */unsigned int) 1334470056);
                    var_61 = ((/* implicit */unsigned short) min((var_5), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_0)))))))));
                    arr_112 [i_3] [i_3 - 4] |= ((/* implicit */unsigned short) (~((((!(((/* implicit */_Bool) arr_50 [i_3 - 2] [i_3 + 1] [i_3 + 4] [i_3 + 2] [i_34])))) ? (((((/* implicit */unsigned long long int) var_7)) * (var_9))) : (((/* implicit */unsigned long long int) var_1))))));
                }
                var_62 = ((/* implicit */unsigned char) max((var_62), (((/* implicit */unsigned char) arr_74 [i_3 + 1] [i_3 - 2] [i_3 - 3] [i_3]))));
            }
        }
    }
    var_63 += ((/* implicit */unsigned int) (((-(max((var_4), (((/* implicit */unsigned long long int) var_0)))))) & (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_9)) ? (var_6) : (((/* implicit */int) var_0)))))))));
}
