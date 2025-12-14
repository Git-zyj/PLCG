/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 92587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=92587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/92587
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
    var_11 = ((/* implicit */short) var_4);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 3 */
        for (short i_1 = 3; i_1 < 23; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_1] [i_0] = ((unsigned char) arr_6 [i_1 - 1] [i_1 - 1]);
                        var_12 = ((/* implicit */short) var_3);
                    }
                } 
            } 
            var_13 = ((/* implicit */signed char) 2099567483U);
        }
        for (unsigned char i_4 = 0; i_4 < 24; i_4 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 1) /* same iter space */
            {
                var_14 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35448)) && ((_Bool)1))))) | (((((/* implicit */_Bool) arr_7 [i_5] [i_4] [i_4] [i_0])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                var_15 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) 2195399809U)) ? (1218104504U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_20 [i_0] [i_0] [i_5] [i_4] = ((/* implicit */long long int) var_8);
                    var_16 = ((/* implicit */short) min((var_16), (((/* implicit */short) ((((/* implicit */long long int) 2099567483U)) + (var_1))))));
                    arr_21 [i_0] = ((/* implicit */unsigned long long int) arr_19 [i_0] [i_4] [i_5] [i_6] [i_0] [i_5]);
                    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_10 [i_0] [i_4] [i_5] [i_6])) || (((/* implicit */_Bool) arr_13 [i_4]))));
                }
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) var_10))));
                    var_19 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 2099567512U)) ? (0) : (((/* implicit */int) arr_0 [i_0]))))));
                    arr_25 [i_7] [i_0] [i_5] [(signed char)17] [i_4] [i_0] = ((/* implicit */unsigned long long int) var_7);
                    arr_26 [i_0] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) (unsigned char)231);
                }
            }
            for (unsigned char i_8 = 0; i_8 < 24; i_8 += 1) /* same iter space */
            {
                var_20 += ((/* implicit */short) (!(((/* implicit */_Bool) ((var_8) + (((/* implicit */int) var_9)))))));
                arr_30 [i_8] = ((/* implicit */long long int) ((var_3) + (((/* implicit */unsigned long long int) 134201344))));
                var_21 = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) (unsigned char)133)) && (((/* implicit */_Bool) 2195399813U))))));
                var_22 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) 2195399807U)) ? (((/* implicit */unsigned int) var_6)) : (2099567483U)))));
            }
            var_23 = ((/* implicit */unsigned char) arr_6 [i_0] [i_4]);
            var_24 *= ((/* implicit */short) (~(67092480)));
        }
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            /* LoopNest 2 */
            for (short i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (short i_11 = 3; i_11 < 22; i_11 += 4) 
                {
                    {
                        var_25 = ((/* implicit */short) ((arr_28 [i_9] [i_9] [i_10] [i_11 - 2]) - (-8589934592LL)));
                        var_26 = ((/* implicit */unsigned short) arr_7 [(short)19] [i_9] [i_10] [i_11]);
                    }
                } 
            } 
            arr_39 [i_9] [i_9] [i_9] = ((/* implicit */unsigned int) (((-(arr_31 [i_9]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_17 [i_0] [i_9] [i_9] [i_9])) * (((/* implicit */int) var_0)))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_29 [(signed char)6] [i_0] [i_9] [i_9])) + (((/* implicit */int) (unsigned short)72))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!(((/* implicit */_Bool) 2195399828U)))))));
            arr_40 [i_9] [i_9] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
        }
        arr_41 [i_0] = ((/* implicit */int) var_4);
        /* LoopSeq 2 */
        for (unsigned int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            arr_44 [i_12] = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_3 [i_0] [i_12])))) + (((/* implicit */int) (short)0))));
            var_28 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
        }
        for (short i_13 = 3; i_13 < 20; i_13 += 2) 
        {
            var_29 = ((/* implicit */_Bool) var_0);
            /* LoopSeq 2 */
            for (unsigned short i_14 = 1; i_14 < 20; i_14 += 3) 
            {
                /* LoopSeq 4 */
                for (long long int i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    var_30 = ((/* implicit */long long int) (_Bool)1);
                    var_31 = ((/* implicit */long long int) -67092480);
                    var_32 = ((/* implicit */long long int) ((((/* implicit */int) arr_42 [i_13] [i_13 - 1])) <= (((/* implicit */int) var_2))));
                }
                for (unsigned long long int i_16 = 4; i_16 < 20; i_16 += 3) 
                {
                    var_33 *= ((/* implicit */unsigned char) ((2099567490U) <= (arr_18 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16 + 4])));
                    var_34 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-16399))))) >= (((/* implicit */int) var_0))));
                    /* LoopSeq 1 */
                    for (long long int i_17 = 0; i_17 < 24; i_17 += 3) 
                    {
                        arr_60 [i_13] = ((/* implicit */short) var_5);
                        arr_61 [i_13] = ((/* implicit */int) 8589934592LL);
                        arr_62 [i_0] [i_13] [i_13] [i_16] [i_17] = (((+(8589934585LL))) * (((8589934579LL) / (((/* implicit */long long int) var_8)))));
                        arr_63 [i_17] [i_16 - 1] [i_13] [i_13] [i_0] [i_0] = ((/* implicit */_Bool) ((2099567475U) >> (((((/* implicit */int) (signed char)12)) & (((/* implicit */int) var_0))))));
                        var_35 = ((/* implicit */long long int) var_6);
                    }
                    var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)113))))))))));
                }
                for (long long int i_18 = 0; i_18 < 24; i_18 += 2) 
                {
                    var_37 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_2))));
                    var_38 = ((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)240))));
                    var_39 = ((/* implicit */short) 5149739665235340727ULL);
                    /* LoopSeq 3 */
                    for (short i_19 = 4; i_19 < 21; i_19 += 4) /* same iter space */
                    {
                        var_40 = ((/* implicit */long long int) arr_0 [i_14 - 1]);
                        var_41 = ((/* implicit */short) (-(((((/* implicit */int) var_2)) >> (((1559125960) - (1559125944)))))));
                    }
                    for (short i_20 = 4; i_20 < 21; i_20 += 4) /* same iter space */
                    {
                        arr_72 [i_13] [i_18] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((_Bool) var_1)) ? (((/* implicit */int) (unsigned short)58448)) : ((~(((/* implicit */int) arr_10 [i_20] [i_14] [i_13] [i_0]))))));
                        arr_73 [i_0] [20] [i_14 + 1] [i_13] [i_14] = ((/* implicit */unsigned short) -67092480);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) & (((/* implicit */int) arr_7 [i_20 - 1] [i_14 - 1] [i_13 + 3] [i_13]))));
                        var_43 = ((/* implicit */short) (~(((/* implicit */int) (unsigned short)27134))));
                        arr_74 [i_13] [(_Bool)1] [i_18] [i_14] [i_14] [i_13] [i_13] = ((/* implicit */signed char) var_7);
                    }
                    for (short i_21 = 4; i_21 < 21; i_21 += 4) /* same iter space */
                    {
                        var_44 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2128922100U)) + (var_3)));
                        var_45 = ((/* implicit */unsigned short) var_6);
                    }
                    var_46 = ((((/* implicit */int) arr_50 [i_0] [i_13 - 1] [i_13 + 4] [i_14])) & (-1406954622));
                }
                for (unsigned int i_22 = 1; i_22 < 23; i_22 += 2) 
                {
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_4))));
                    var_48 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_59 [i_22] [i_13] [i_22] [i_13] [i_13]))));
                }
                var_49 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((8589934592LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)240)))))) ? (var_8) : ((+(((/* implicit */int) (unsigned char)243))))));
                var_50 *= ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_4))))) <= (65534U)));
            }
            for (int i_23 = 0; i_23 < 24; i_23 += 2) 
            {
                arr_83 [i_13] [i_13 + 4] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_0] [i_13 + 4]))) ^ ((~(var_3)))));
                var_51 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_38 [i_13 - 3] [i_13 + 1])) ? (((/* implicit */int) (signed char)-109)) : (var_6)));
                arr_84 [i_13] [i_13] [i_13] = ((/* implicit */unsigned short) ((var_6) <= (((/* implicit */int) (unsigned char)44))));
            }
            /* LoopSeq 3 */
            for (int i_24 = 0; i_24 < 24; i_24 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_25 = 0; i_25 < 24; i_25 += 2) 
                {
                    for (unsigned long long int i_26 = 4; i_26 < 22; i_26 += 1) 
                    {
                        {
                            arr_92 [i_26] [i_25] [i_13] [i_13] [i_0] [i_0] = ((/* implicit */int) 9840694370260483438ULL);
                            var_52 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_79 [i_26] [i_26 - 4] [i_26] [i_26 - 2] [i_13]))));
                            var_53 = ((/* implicit */short) ((((/* implicit */_Bool) arr_58 [i_13 + 4] [i_13] [i_0] [i_26 - 1])) ? (((/* implicit */int) arr_17 [i_0] [i_13] [i_24] [i_25])) : (((var_6) | (((/* implicit */int) var_2))))));
                            arr_93 [i_0] [(signed char)11] [i_26] [i_24] [i_26] [i_13] = ((/* implicit */unsigned short) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
                        }
                    } 
                } 
                var_54 = ((/* implicit */_Bool) var_10);
                var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) (unsigned char)8)) >> (((var_1) - (4137586728681530451LL))))) : ((+(((/* implicit */int) (unsigned char)245))))));
            }
            for (int i_27 = 0; i_27 < 24; i_27 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_28 = 0; i_28 < 24; i_28 += 1) 
                {
                    for (unsigned long long int i_29 = 2; i_29 < 21; i_29 += 1) 
                    {
                        {
                            arr_103 [i_0] [i_28] [i_13] = ((/* implicit */int) (unsigned short)65464);
                            arr_104 [i_13] [i_27] [i_29] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -67092485))));
                            var_56 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) var_2))))) * (((/* implicit */int) (unsigned short)53987))));
                        }
                    } 
                } 
                var_57 = ((/* implicit */unsigned char) (+(arr_89 [i_27] [i_13] [i_13] [i_0])));
                arr_105 [i_13] [i_13] [i_0] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_13])) ? (arr_8 [i_13]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                var_58 = ((/* implicit */long long int) (_Bool)1);
                arr_106 [i_13] [i_13] [i_13] = (unsigned char)240;
            }
            for (long long int i_30 = 0; i_30 < 24; i_30 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_31 = 4; i_31 < 21; i_31 += 1) 
                {
                    var_59 = ((/* implicit */unsigned int) (+((-(((/* implicit */int) var_5))))));
                    arr_112 [i_0] [i_0] [i_30] [i_31] [i_30] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                    var_60 = ((/* implicit */long long int) min((var_60), (((/* implicit */long long int) (~(((var_8) / (67092480))))))));
                    var_61 = ((/* implicit */long long int) 70931694131085312ULL);
                    var_62 = ((/* implicit */int) var_9);
                }
                for (short i_32 = 3; i_32 < 22; i_32 += 3) 
                {
                    arr_117 [i_32 - 3] [i_13] [i_30] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_115 [i_0] [i_13] [i_30]))));
                    var_63 = 2099567490U;
                    /* LoopSeq 3 */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        var_64 = ((/* implicit */unsigned int) (-((+(var_1)))));
                        arr_120 [i_33] [i_13] [i_13] [i_0] = (+(((((/* implicit */int) (unsigned short)52452)) / (((/* implicit */int) arr_47 [i_0] [i_13] [(short)10] [(unsigned char)23])))));
                    }
                    for (unsigned int i_34 = 0; i_34 < 24; i_34 += 2) /* same iter space */
                    {
                        var_65 = ((/* implicit */int) ((var_1) | (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_66 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)24690)))))));
                    }
                    for (unsigned int i_35 = 0; i_35 < 24; i_35 += 2) /* same iter space */
                    {
                        var_67 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_98 [i_0] [i_13] [i_35] [i_32] [20ULL] [i_32 - 1])) ? (((/* implicit */int) var_9)) : ((-(var_6)))));
                        var_68 = ((/* implicit */unsigned int) (short)7);
                        var_69 = ((/* implicit */unsigned char) min((var_69), ((unsigned char)16)));
                        var_70 = ((/* implicit */unsigned long long int) var_5);
                    }
                }
                var_71 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_56 [i_0] [i_0] [i_13] [i_13 - 3] [i_0] [i_13])) / (var_8))) << (((((/* implicit */int) var_2)) - (113)))));
            }
        }
    }
}
