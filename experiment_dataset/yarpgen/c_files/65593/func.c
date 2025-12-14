/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65593
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
    for (unsigned long long int i_0 = 1; i_0 < 17; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (_Bool)0))))), (((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (arr_0 [i_0 - 1]) : (arr_0 [i_0 - 1])))));
            var_20 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)0)))) << (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 1])) ? (((/* implicit */int) (_Bool)0)) : (var_14)))), (((((/* implicit */_Bool) (short)32758)) ? (21ULL) : (((/* implicit */unsigned long long int) var_4))))))));
        }
        for (unsigned char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 3) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_15 [i_0] [i_0] [i_0] [i_3 - 1] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_0 - 1] [i_2] [i_4] [i_2] [i_4] [i_3 + 1])) ? (min((((/* implicit */unsigned long long int) arr_3 [i_0 + 1] [i_0 + 1])), (4095ULL))) : (((/* implicit */unsigned long long int) (-(arr_6 [i_2]))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)-114)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (arr_1 [i_0 - 1]))), (((/* implicit */long long int) 1559184936)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                        {
                            arr_18 [i_0] [i_0] [i_0] [i_0] [i_4] = ((/* implicit */signed char) min((max(((unsigned char)3), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_0 + 1] [i_0 + 1] [i_4] [i_4] [i_5 + 1] [i_3]))))))), (((/* implicit */unsigned char) (signed char)56))));
                            var_21 = ((/* implicit */unsigned int) min((((/* implicit */short) ((_Bool) 14935232763295403285ULL))), (max((var_1), (((/* implicit */short) arr_13 [i_0 - 1]))))));
                        }
                        for (unsigned short i_6 = 2; i_6 < 15; i_6 += 2) 
                        {
                            arr_23 [i_4] [i_3 - 1] [i_3 + 1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) ((-8870074465382737092LL) & (min((var_9), (((/* implicit */long long int) var_5))))))) ? ((+(arr_0 [i_0 + 1]))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) ? (((/* implicit */long long int) var_11)) : (max((((/* implicit */long long int) var_1)), (arr_0 [i_3])))))));
                            var_22 ^= ((/* implicit */unsigned char) 1089115630);
                            var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 2722627272768049973LL)) ? (var_5) : (((/* implicit */int) (signed char)-4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)16352)) : (((/* implicit */int) (unsigned short)43582))))) : (max((((/* implicit */unsigned long long int) 9223372028264841216LL)), (5719503322229804282ULL))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) arr_2 [i_3] [i_3])) : (((/* implicit */int) var_19)))))))));
                            arr_24 [i_4] [i_4] [i_3] [i_3] [i_4] [i_0 + 1] [i_4] = ((/* implicit */long long int) ((((((/* implicit */long long int) min((((/* implicit */unsigned int) (_Bool)1)), (0U)))) > (min((((/* implicit */long long int) 532676608)), (2251799276814336LL))))) && (((/* implicit */_Bool) max((-1387547979), (min((var_12), (((/* implicit */int) (unsigned char)64)))))))));
                        }
                        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (((_Bool)1) ? (var_7) : (((unsigned int) arr_6 [i_4])))))));
                    }
                } 
            } 
            arr_25 [i_0] [i_2] [i_2] = ((/* implicit */signed char) max((((/* implicit */long long int) (-(((/* implicit */int) var_17))))), ((-(var_9)))));
        }
        var_25 = ((/* implicit */unsigned short) (-2147483647 - 1));
        var_26 -= ((/* implicit */signed char) (-((+(1725123830661428309LL)))));
        var_27 = ((/* implicit */int) (-(((((/* implicit */_Bool) arr_13 [i_0])) ? (271271986003582405ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)(-127 - 1))))))));
        /* LoopSeq 1 */
        for (int i_7 = 4; i_7 < 17; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 2) 
            {
                var_28 = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((1659926359013829113LL) > (-1085734406390990420LL)))), ((-(((/* implicit */int) (unsigned char)215))))));
                arr_33 [i_7] [i_8] [i_7] [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) max((arr_29 [i_0 - 1] [i_0 - 1] [i_7 + 1]), (arr_29 [i_0 - 1] [i_0 - 1] [i_7 + 1]))))));
                /* LoopNest 2 */
                for (unsigned short i_9 = 0; i_9 < 18; i_9 += 2) 
                {
                    for (unsigned short i_10 = 0; i_10 < 18; i_10 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */short) (~(var_8)));
                            arr_40 [i_10] [i_10] [i_8] [i_10] [i_0 + 1] = ((/* implicit */_Bool) ((long long int) ((var_12) + (((/* implicit */int) arr_22 [i_0 + 1] [i_7 + 1] [i_7 + 1] [i_7 - 3] [i_10])))));
                            var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2U)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            arr_41 [i_10] [i_10] [i_10] [i_9] [i_9] = min((((((/* implicit */_Bool) (signed char)77)) ? (arr_38 [i_0 - 1] [i_7] [i_7 - 1]) : (((/* implicit */long long int) 6)))), (min((((/* implicit */long long int) (-2147483647 - 1))), (((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (6330388158137804492LL))))));
                        }
                    } 
                } 
                arr_42 [i_0 - 1] [i_0 - 1] [i_8] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) arr_34 [i_0 + 1] [i_7] [i_7])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_10)))), (((/* implicit */int) arr_29 [i_0] [i_7 - 4] [i_8]))))));
                arr_43 [i_0 - 1] [i_7 - 2] [i_8] [i_8] = ((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((+(((((/* implicit */_Bool) arr_38 [i_7 - 3] [i_7] [i_8])) ? (-7684566924637117453LL) : (((/* implicit */long long int) ((/* implicit */int) (short)28079)))))))));
            }
            var_31 = ((/* implicit */unsigned int) ((arr_9 [i_7] [i_7] [i_7]) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) + (arr_37 [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0] [i_0] [i_0 - 1] [i_7]))) : (((((/* implicit */_Bool) arr_8 [i_7 - 4] [i_0 + 1])) ? (((/* implicit */unsigned long long int) ((long long int) 190400699))) : (((arr_9 [i_0] [i_0] [i_0]) ? (18207236527471613190ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1739)))))))));
        }
    }
    for (int i_11 = 0; i_11 < 25; i_11 += 3) 
    {
        var_32 = ((/* implicit */long long int) var_5);
        var_33 ^= ((/* implicit */unsigned short) (+((+(arr_46 [i_11] [i_11])))));
    }
    var_34 = ((short) ((var_12) & (((/* implicit */int) max((var_0), (var_18))))));
    /* LoopSeq 2 */
    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
    {
        var_35 = ((/* implicit */unsigned int) arr_45 [i_12]);
        /* LoopSeq 1 */
        for (int i_13 = 0; i_13 < 19; i_13 += 4) 
        {
            var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) (unsigned char)9))))));
            arr_52 [i_12] [i_12] = ((/* implicit */unsigned short) 5926552416862129044LL);
            /* LoopSeq 2 */
            for (signed char i_14 = 1; i_14 < 16; i_14 += 2) 
            {
                arr_55 [i_14 + 3] [i_12] [i_12] [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 786432LL)), (arr_47 [i_14 + 1])))) ? (((/* implicit */int) ((_Bool) (signed char)115))) : (((/* implicit */int) (_Bool)1))));
                var_37 = ((/* implicit */_Bool) ((unsigned short) ((long long int) 1632117631)));
                var_38 = arr_44 [i_12] [i_12];
            }
            for (signed char i_15 = 3; i_15 < 18; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_16 = 2; i_16 < 17; i_16 += 2) 
                {
                    var_39 = ((/* implicit */unsigned int) max((var_39), (((/* implicit */unsigned int) max((-333524166), (((/* implicit */int) (signed char)-26)))))));
                    arr_61 [i_12] [i_12] [i_16 - 2] = ((/* implicit */unsigned short) 0U);
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 19; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */long long int) (short)24899);
                        var_41 = ((/* implicit */long long int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((var_12) - (((/* implicit */int) var_0)))) : (0)))));
                        var_42 = ((/* implicit */int) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) max(((short)16380), (((/* implicit */short) (signed char)120))))))));
                    }
                    for (int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [i_12] [i_12] [i_12])) ? (((/* implicit */int) (unsigned char)1)) : (var_14)))) ? (240069810) : (arr_62 [i_18] [i_18] [i_12] [i_15] [i_12] [i_13] [i_12])))) - (min((min((9223372036854775804LL), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) arr_51 [i_12]))))));
                        arr_67 [i_12] [i_12] [i_15 - 2] = ((/* implicit */unsigned short) var_18);
                        var_44 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))) * (min((arr_66 [i_12] [i_12] [i_18] [i_12] [i_12] [i_18] [i_18]), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 24)) ? (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) max((var_15), (((/* implicit */unsigned short) (unsigned char)201)))))))))));
                    }
                }
                arr_68 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (signed char)40)), (23U)))));
                arr_69 [i_12] = ((/* implicit */long long int) max((var_14), (((((/* implicit */_Bool) (-(((/* implicit */int) var_15))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_12))))) : (((int) var_0))))));
            }
        }
        var_45 = ((/* implicit */_Bool) max((((unsigned int) arr_51 [i_12])), (((/* implicit */unsigned int) ((short) (unsigned short)32810)))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            var_46 = ((/* implicit */_Bool) var_10);
            arr_76 [i_19] = ((/* implicit */unsigned short) max((min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) 4294967295U)))), (((/* implicit */long long int) max((((/* implicit */int) (short)-23312)), (((((/* implicit */_Bool) arr_70 [i_19])) ? (((/* implicit */int) (short)-15996)) : (((/* implicit */int) (short)7857)))))))));
            var_47 = ((/* implicit */unsigned char) 2147483647);
            var_48 = ((/* implicit */unsigned char) 8796093022207LL);
            /* LoopNest 2 */
            for (unsigned char i_21 = 0; i_21 < 19; i_21 += 2) 
            {
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    {
                        /* LoopSeq 4 */
                        for (short i_23 = 1; i_23 < 17; i_23 += 4) /* same iter space */
                        {
                            var_49 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (((/* implicit */int) var_13)) : ((-(((/* implicit */int) ((short) arr_57 [i_21] [i_22] [i_22] [i_19])))))));
                            var_50 = ((/* implicit */_Bool) ((max((4431606047792823106LL), (((/* implicit */long long int) -872382566)))) * (((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1)))))));
                            var_51 = ((/* implicit */unsigned char) var_9);
                        }
                        for (short i_24 = 1; i_24 < 17; i_24 += 4) /* same iter space */
                        {
                            var_52 = ((long long int) var_10);
                            var_53 = ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (arr_63 [i_19] [i_20] [i_19] [i_19] [i_22] [i_19] [i_24]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 18446744073709551615ULL)))))));
                        }
                        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) /* same iter space */
                        {
                            var_54 = ((/* implicit */long long int) (+(max((((/* implicit */unsigned int) arr_88 [i_19] [i_20] [i_21] [i_20] [i_25])), (((((/* implicit */_Bool) var_6)) ? (4294967288U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_65 [i_19] [i_22] [i_21] [i_19] [i_25])))))))));
                            var_55 = ((/* implicit */unsigned short) (+(min((((((/* implicit */int) var_10)) - (((/* implicit */int) var_0)))), (arr_72 [i_19] [i_19])))));
                            arr_89 [i_19] [i_20 - 1] [i_21] [i_22] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */long long int) arr_72 [i_19] [i_19])) + ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) max((((/* implicit */int) var_18)), (var_5))))))));
                        }
                        for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) /* same iter space */
                        {
                            arr_92 [i_19] [i_19] [i_21] = ((/* implicit */short) var_0);
                            arr_93 [i_19] [i_20] [i_21] [i_20] [i_21] [i_20 - 1] = ((((/* implicit */long long int) ((/* implicit */int) min((arr_78 [i_19] [i_19] [i_19]), (((/* implicit */signed char) (_Bool)1)))))) < (8364545929094951726LL));
                        }
                        arr_94 [i_19] [i_19] [i_19] [i_19] [i_22] = ((/* implicit */unsigned char) ((arr_46 [i_20] [i_22]) <= (((/* implicit */int) (short)300))));
                        var_56 = ((/* implicit */unsigned short) var_2);
                    }
                } 
            } 
        }
        for (short i_27 = 0; i_27 < 19; i_27 += 4) 
        {
            var_57 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((long long int) arr_62 [i_27] [i_27] [i_19] [i_27] [i_19] [i_19] [i_19])), (((/* implicit */long long int) ((var_9) <= (((/* implicit */long long int) 0U)))))))) ? (arr_47 [i_19]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_65 [i_27] [i_27] [i_19] [i_19] [i_19])) & (arr_56 [i_19] [i_19] [i_19] [i_27]))))));
            var_58 = (+(((((/* implicit */_Bool) arr_63 [i_27] [i_19] [i_19] [i_27] [i_19] [i_19] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-3890))) : (234881024U))));
            var_59 = ((/* implicit */short) min((((/* implicit */long long int) (-(((unsigned int) 2113929216))))), ((-(var_16)))));
        }
        var_60 = ((/* implicit */long long int) min((((/* implicit */int) arr_44 [i_19] [i_19])), (((((/* implicit */_Bool) (unsigned short)65408)) ? (((/* implicit */int) var_18)) : ((+(((/* implicit */int) (_Bool)0))))))));
    }
    var_61 = ((/* implicit */unsigned char) var_0);
}
