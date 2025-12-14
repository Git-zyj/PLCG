/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 87583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=87583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/87583
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
    var_18 = ((/* implicit */_Bool) min(((signed char)81), (((/* implicit */signed char) ((_Bool) (_Bool)1)))));
    var_19 = ((/* implicit */_Bool) max((var_19), (max(((_Bool)1), (max((var_8), (var_2)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 1) /* same iter space */
    {
        var_20 = var_16;
        arr_3 [i_0] = ((/* implicit */long long int) var_9);
    }
    for (unsigned int i_1 = 0; i_1 < 20; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) min((min((var_0), (var_5))), (((/* implicit */short) var_4))))) : (((((/* implicit */_Bool) (signed char)81)) ? (((/* implicit */int) (unsigned char)9)) : (((/* implicit */int) (unsigned short)0))))));
            arr_10 [i_1] = ((/* implicit */signed char) max((((/* implicit */long long int) min((((/* implicit */unsigned int) var_0)), (var_9)))), (var_1)));
            arr_11 [(short)12] [i_2] &= ((/* implicit */_Bool) (unsigned short)18);
            arr_12 [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((unsigned short)8), (((/* implicit */unsigned short) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_10)))) : (min((((/* implicit */long long int) var_2)), (1954601286661733766LL)))));
        }
        for (signed char i_3 = 1; i_3 < 19; i_3 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) min((min((-3097231774585623727LL), (((/* implicit */long long int) var_5)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_2)))))));
            var_23 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_1)))), (min((((/* implicit */unsigned long long int) var_17)), (var_10)))));
            var_24 *= ((/* implicit */signed char) min((((/* implicit */int) var_12)), (((((/* implicit */int) (signed char)-104)) | (((/* implicit */int) (_Bool)1))))));
            arr_16 [i_1] [19ULL] [i_1] = ((/* implicit */unsigned short) max((7657232874261684689LL), (((/* implicit */long long int) var_14))));
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_5 = 2; i_5 < 18; i_5 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */_Bool) var_3);
                var_26 = ((/* implicit */unsigned long long int) var_1);
                arr_21 [i_1] [i_1] [(unsigned char)15] = ((/* implicit */unsigned char) max((((/* implicit */short) var_7)), (min((min((var_16), (((/* implicit */short) var_15)))), (((/* implicit */short) (_Bool)1))))));
            }
            for (unsigned short i_6 = 2; i_6 < 18; i_6 += 2) /* same iter space */
            {
                var_27 = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_16)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned long long int) var_0))));
                var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_9)), (-8352348907512119205LL)))), (var_11)))));
                arr_25 [i_1] [8U] [i_6] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)187))) : (max((((/* implicit */unsigned long long int) var_6)), (var_11))))), (((/* implicit */unsigned long long int) min((((/* implicit */short) var_2)), (var_0))))));
            }
            arr_26 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
            arr_27 [i_1] [i_4] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14))))), (max((((/* implicit */long long int) var_2)), (var_17)))));
            var_29 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) var_8)), ((short)-20813)))) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_16)))));
        }
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_7 = 0; i_7 < 20; i_7 += 4) 
        {
            arr_30 [i_1] [i_1] [i_1] = ((/* implicit */long long int) ((signed char) var_11));
            arr_31 [i_1] [i_1] = ((/* implicit */signed char) (unsigned short)65535);
        }
        for (unsigned short i_8 = 0; i_8 < 20; i_8 += 3) 
        {
            arr_34 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), ((unsigned char)142))))) : (((((/* implicit */_Bool) (unsigned short)11604)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_1))))) : (((/* implicit */long long int) ((/* implicit */int) var_13)))));
            var_30 = ((/* implicit */unsigned long long int) min((var_8), (var_2)));
            /* LoopSeq 4 */
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 20; i_11 += 4) 
                    {
                        {
                            var_31 *= ((/* implicit */_Bool) min((min((((/* implicit */long long int) var_8)), (var_1))), (((/* implicit */long long int) min((var_3), (((/* implicit */unsigned int) var_6)))))));
                            arr_42 [(unsigned char)12] [14LL] [i_9] [i_1] [i_11] = ((var_17) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                {
                    for (short i_13 = 2; i_13 < 17; i_13 += 3) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (unsigned short)57064)) ? (max((var_17), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) ((/* implicit */int) var_15))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) var_9))))) ? (((/* implicit */int) min((((/* implicit */short) var_7)), (var_13)))) : ((((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)2)))))))));
                            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1695893336)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_17)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_7)))))));
                            arr_47 [i_1] [i_1] = ((/* implicit */long long int) (unsigned short)35);
                            var_34 = ((/* implicit */unsigned char) min((-4358016576572522212LL), (var_1)));
                            arr_48 [i_1] [i_8] [i_1] [i_12] [i_13 + 1] = ((/* implicit */long long int) var_0);
                        }
                    } 
                } 
                var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) var_17))));
            }
            for (unsigned char i_14 = 0; i_14 < 20; i_14 += 4) 
            {
                arr_52 [i_1] = ((/* implicit */signed char) var_0);
                arr_53 [i_1] [i_14] = ((/* implicit */_Bool) (unsigned short)31);
            }
            /* vectorizable */
            for (unsigned int i_15 = 1; i_15 < 19; i_15 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_16 = 3; i_16 < 18; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        arr_60 [i_1] [i_8] [i_15] [i_16 + 2] [i_1] = ((/* implicit */signed char) var_17);
                        arr_61 [i_1] [i_8] [i_15] [i_8] [i_8] [i_1] = ((/* implicit */signed char) var_6);
                    }
                    for (unsigned short i_18 = 0; i_18 < 20; i_18 += 1) 
                    {
                        arr_64 [i_1] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */long long int) var_2);
                        var_36 += ((/* implicit */unsigned char) var_7);
                        arr_65 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (unsigned char)255))));
                    }
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) var_6))));
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((long long int) var_2)))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_69 [i_8] [i_15] [i_1] = ((/* implicit */unsigned char) ((var_15) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0))));
                        var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)255))));
                        var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (signed char)-57))));
                        arr_70 [i_1] [i_1] [i_1] [i_8] [i_15] [i_16] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) >> (((((/* implicit */int) var_0)) + (16885)))));
                    }
                    for (long long int i_20 = 1; i_20 < 19; i_20 += 1) 
                    {
                        var_41 = ((/* implicit */signed char) var_15);
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1060965578954091736LL)) ? (((((/* implicit */_Bool) (short)511)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) var_7)))) : (((/* implicit */int) ((short) var_14)))));
                        arr_73 [i_1] = ((/* implicit */unsigned int) var_14);
                    }
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_9))));
                }
                for (signed char i_21 = 4; i_21 < 19; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_22 = 1; i_22 < 17; i_22 += 2) 
                    {
                        arr_78 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) var_7);
                        arr_79 [(signed char)18] [i_1] [i_15] [i_1] [i_1] = ((/* implicit */unsigned long long int) (short)31166);
                    }
                    arr_80 [i_1] = ((((/* implicit */_Bool) var_1)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
                    var_44 = ((/* implicit */short) ((var_11) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)12714)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_1))))));
                }
                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) ((unsigned char) var_16)))));
                var_46 = ((/* implicit */long long int) min((var_46), (((/* implicit */long long int) (signed char)-122))));
            }
            for (short i_23 = 1; i_23 < 19; i_23 += 2) 
            {
                var_47 += ((/* implicit */long long int) min((((/* implicit */unsigned char) min((var_14), (((/* implicit */signed char) var_2))))), (min((((/* implicit */unsigned char) min((var_15), (var_8)))), (max((((/* implicit */unsigned char) (signed char)-122)), ((unsigned char)145)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_24 = 0; i_24 < 20; i_24 += 1) 
                {
                    arr_87 [2ULL] [2ULL] &= ((unsigned char) var_11);
                    var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) || (var_15)));
                }
                for (long long int i_25 = 0; i_25 < 20; i_25 += 4) 
                {
                    arr_90 [i_1] [i_23 - 1] [i_1] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */signed char) var_8)), (var_4)));
                    var_49 ^= ((/* implicit */unsigned long long int) ((signed char) (unsigned short)46107));
                    var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) var_8))));
                    var_51 = ((/* implicit */signed char) var_2);
                }
                /* vectorizable */
                for (short i_26 = 3; i_26 < 16; i_26 += 4) 
                {
                    arr_95 [i_8] [i_1] [i_23 + 1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_16)) ^ (((/* implicit */int) (unsigned char)31))));
                    var_52 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) (signed char)121)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_17))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        arr_100 [i_1] [i_8] [i_23 - 1] [i_23 - 1] [i_1] [i_23 - 1] = (_Bool)1;
                        arr_101 [i_1] [i_1] [i_1] [i_1] [0] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_14)))));
                    }
                    var_54 += ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_17)) : (var_11));
                }
                for (unsigned long long int i_28 = 0; i_28 < 20; i_28 += 3) 
                {
                    var_55 = ((/* implicit */signed char) max((var_55), (((/* implicit */signed char) (_Bool)1))));
                    var_56 = max((((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) var_3)), (var_1))))), (var_17));
                    arr_105 [i_1] [i_1] [(unsigned char)0] [i_1] [i_1] [7ULL] = ((/* implicit */_Bool) max((((/* implicit */long long int) min((var_16), (max((((/* implicit */short) (_Bool)1)), (var_12)))))), (min((var_1), (((/* implicit */long long int) var_5))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_29 = 0; i_29 < 20; i_29 += 1) /* same iter space */
                    {
                        var_57 -= ((/* implicit */signed char) min((((/* implicit */long long int) ((var_2) ? (((/* implicit */int) (signed char)-120)) : (((/* implicit */int) (signed char)-91))))), (max((((/* implicit */long long int) var_14)), (var_17)))));
                        arr_108 [i_29] [i_1] [0U] [i_1] [i_1] = ((/* implicit */unsigned char) var_4);
                        var_58 = var_16;
                    }
                    for (unsigned char i_30 = 0; i_30 < 20; i_30 += 1) /* same iter space */
                    {
                        arr_111 [i_1] [(unsigned short)16] [(unsigned short)16] [i_23] [(unsigned short)16] [i_1] [i_30] = ((/* implicit */unsigned short) var_2);
                        var_59 *= ((/* implicit */unsigned char) var_11);
                        var_60 ^= ((/* implicit */unsigned int) ((((/* implicit */int) var_4)) * (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (min(((short)0), (((/* implicit */short) (signed char)81)))))))));
                    }
                    var_61 += ((/* implicit */unsigned long long int) var_12);
                }
                arr_112 [i_1] [i_8] [i_8] [i_23 - 1] = ((/* implicit */_Bool) min((((/* implicit */long long int) min(((short)-6650), (((/* implicit */short) var_14))))), (min((var_17), (((/* implicit */long long int) var_15))))));
            }
        }
        for (unsigned long long int i_31 = 3; i_31 < 18; i_31 += 3) 
        {
            /* LoopSeq 4 */
            for (unsigned short i_32 = 2; i_32 < 19; i_32 += 2) /* same iter space */
            {
                arr_119 [i_31] [i_31] [i_1] [i_31] = ((/* implicit */unsigned short) ((long long int) min((var_1), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)35)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_14))))))));
                arr_120 [i_1] [14ULL] [(short)18] [i_32] = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) var_16)), (min((((/* implicit */unsigned int) (signed char)63)), (1688425141U))))), (((/* implicit */unsigned int) ((signed char) var_10)))));
            }
            for (unsigned short i_33 = 2; i_33 < 19; i_33 += 2) /* same iter space */
            {
                arr_123 [i_33 - 1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) var_6)), (var_17))), (((/* implicit */long long int) min((var_3), (((((/* implicit */_Bool) (unsigned char)10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (var_9))))))));
                arr_124 [i_1] [i_31] = ((/* implicit */_Bool) var_12);
                arr_125 [i_1] [i_1] = ((/* implicit */_Bool) 15);
            }
            for (unsigned short i_34 = 2; i_34 < 19; i_34 += 2) /* same iter space */
            {
                arr_129 [i_1] [i_1] [i_34] [i_1] = ((/* implicit */unsigned char) min((var_10), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) var_12)))))) : (var_17))))));
                /* LoopSeq 1 */
                for (short i_35 = 0; i_35 < 20; i_35 += 2) 
                {
                    arr_134 [i_1] [17LL] [i_1] [(short)8] [i_1] = ((/* implicit */unsigned char) var_16);
                    arr_135 [(_Bool)0] [i_1] [i_34 - 1] [(_Bool)0] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_4)) ? (max((((/* implicit */unsigned int) min(((signed char)-23), (var_14)))), (((((/* implicit */_Bool) 10682148165501270500ULL)) ? (536297593U) : (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (unsigned char)10))))));
                    var_62 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) min((var_6), (var_2)))), (var_5))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_3)))), (min((var_10), (((/* implicit */unsigned long long int) var_0))))))));
                    var_63 = ((/* implicit */signed char) min((var_63), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)5)) ? (var_10) : (((/* implicit */unsigned long long int) var_17))))) ? (((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_11))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))))) : (var_10))))));
                }
            }
            for (unsigned short i_36 = 2; i_36 < 19; i_36 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_37 = 0; i_37 < 20; i_37 += 4) /* same iter space */
                {
                    var_64 += ((/* implicit */_Bool) var_1);
                    /* LoopSeq 1 */
                    for (signed char i_38 = 0; i_38 < 20; i_38 += 4) 
                    {
                        arr_145 [i_1] [i_38] = ((/* implicit */short) (unsigned char)142);
                        arr_146 [i_1] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    arr_147 [i_1] [i_31] [i_36] [i_37] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned long long int) var_2)), (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (var_3))))));
                }
                for (unsigned long long int i_39 = 0; i_39 < 20; i_39 += 4) /* same iter space */
                {
                    arr_151 [i_36] [i_31] [i_36 - 1] [i_36] [i_39] &= ((/* implicit */_Bool) 3064549855U);
                    arr_152 [i_1] [i_31] [i_31] [i_31] = ((/* implicit */unsigned char) min((var_1), (((/* implicit */long long int) (unsigned char)117))));
                }
                arr_153 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) var_9))) ? (((/* implicit */int) (signed char)59)) : (((/* implicit */int) var_5))));
            }
            /* LoopNest 2 */
            for (_Bool i_40 = 0; i_40 < 1; i_40 += 1) 
            {
                for (unsigned char i_41 = 2; i_41 < 19; i_41 += 1) 
                {
                    {
                        arr_159 [i_1] [i_31] [i_1] [i_31] = ((/* implicit */short) min((((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (short)-32747))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (min((((/* implicit */long long int) var_6)), (var_17))))), (((/* implicit */long long int) min((((/* implicit */int) var_4)), (((var_6) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)59)))))))));
                        var_65 = ((/* implicit */long long int) var_7);
                    }
                } 
            } 
            var_66 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -269389028497676LL)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)117))))) ? (((((/* implicit */_Bool) min((((/* implicit */signed char) var_6)), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_0), ((short)-19873))))) : (var_17))) : (((/* implicit */long long int) min((((((/* implicit */int) var_5)) << (((var_10) - (340712064105578155ULL))))), (((/* implicit */int) var_5)))))));
        }
    }
    for (unsigned int i_42 = 0; i_42 < 20; i_42 += 1) /* same iter space */
    {
        arr_162 [i_42] = ((/* implicit */int) var_11);
        var_67 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (unsigned short)54590)) : (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_1)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) var_3))));
        var_68 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (min((((/* implicit */unsigned int) (signed char)16)), (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)223)))));
        arr_163 [i_42] = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_12)), (7176183914203649470LL))), (max((((/* implicit */long long int) min((var_6), (var_2)))), (var_17)))));
        arr_164 [i_42] = ((/* implicit */short) var_6);
    }
}
