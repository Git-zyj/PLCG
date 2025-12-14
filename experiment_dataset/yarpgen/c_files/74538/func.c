/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74538
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
    for (short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_1 = 1; i_1 < 8; i_1 += 2) 
        {
            arr_4 [i_1] [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)48)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)140)))))) && (((/* implicit */_Bool) arr_3 [i_1 + 1] [i_0 - 2])));
            var_10 += ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)26420)) ? (((/* implicit */int) (signed char)-54)) : (((/* implicit */int) (unsigned short)5478))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
        {
            var_11 -= ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)155)) == (((/* implicit */int) (signed char)-50))))) << (((((/* implicit */int) (short)-28990)) + (29014)))));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 10; i_3 += 3) 
            {
                /* LoopSeq 1 */
                for (int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    arr_11 [i_4] [i_2] [8U] [i_2] [i_4] = ((/* implicit */unsigned int) max((arr_8 [i_0] [i_0]), (((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) >= (var_0))))))));
                    var_12 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)5478)) && (((/* implicit */_Bool) 15478746073517956626ULL))));
                }
                var_13 = ((/* implicit */short) ((_Bool) var_5));
            }
            for (int i_5 = 3; i_5 < 8; i_5 += 2) 
            {
                var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)48)) << (((3830652949159923891ULL) - (3830652949159923888ULL))))))));
                var_15 = ((/* implicit */unsigned char) ((unsigned long long int) (~(((/* implicit */int) ((unsigned short) arr_8 [i_0] [0U]))))));
                var_16 = ((/* implicit */unsigned int) ((unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
            }
            arr_15 [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((_Bool) (-(var_3)))))));
            var_17 = ((/* implicit */short) min((((/* implicit */unsigned int) (signed char)127)), (((((/* implicit */_Bool) (signed char)-48)) ? (4218060311U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)26420)))))));
            var_18 |= ((((/* implicit */_Bool) ((unsigned char) ((unsigned int) arr_13 [(unsigned char)6] [i_0] [i_0] [i_0 + 1])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)28647))))) : ((~(((/* implicit */int) arr_0 [i_2] [i_0])))));
        }
        for (short i_6 = 0; i_6 < 10; i_6 += 2) /* same iter space */
        {
            arr_20 [i_0] &= ((/* implicit */signed char) 3750678342U);
            arr_21 [i_0] [i_0] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */int) ((var_3) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0])))))) >= (((/* implicit */int) arr_9 [i_0])))), (((((/* implicit */int) ((_Bool) (signed char)-50))) >= (((/* implicit */int) ((((/* implicit */_Bool) -320078607)) && (((/* implicit */_Bool) var_0)))))))));
        }
        /* LoopSeq 1 */
        for (signed char i_7 = 4; i_7 < 7; i_7 += 1) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)127)))))));
            arr_24 [i_7] [i_7 - 3] [(unsigned char)4] = ((/* implicit */_Bool) ((((/* implicit */int) arr_2 [i_7 + 3] [i_7 - 2] [i_0 - 2])) & (((/* implicit */int) ((unsigned short) 11479772817098146430ULL)))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_8 = 3; i_8 < 9; i_8 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_9 = 4; i_9 < 9; i_9 += 3) 
            {
                var_20 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_1))) - (((long long int) arr_25 [i_9] [i_8] [i_0]))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)60058)))))));
                arr_30 [i_0] [i_8] [i_9] [i_8] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 + 1] [i_8 - 2] [i_9 + 1]))));
                var_22 *= ((/* implicit */unsigned short) (-(((var_7) | (((/* implicit */long long int) var_0))))));
            }
            for (int i_10 = 3; i_10 < 9; i_10 += 3) 
            {
                arr_34 [9] [0LL] [i_10] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_5 [i_10] [i_10 + 1])) % ((-(((/* implicit */int) arr_5 [i_0] [i_8]))))));
                /* LoopSeq 1 */
                for (long long int i_11 = 0; i_11 < 10; i_11 += 2) 
                {
                    var_23 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((unsigned int) (unsigned short)3586)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 2) 
                    {
                        var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_17 [i_0])))))))));
                        arr_42 [i_0 - 2] [i_11] [i_8] [i_8] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((unsigned short) var_4))) : (((/* implicit */int) ((unsigned short) (unsigned short)32768)))));
                        var_25 = ((/* implicit */unsigned char) ((unsigned int) arr_19 [i_0 - 2]));
                        arr_43 [i_0] [i_8] = ((/* implicit */int) var_5);
                    }
                }
                var_26 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_2 [i_10 + 1] [i_8 - 2] [i_8 + 1]))));
                var_27 += ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_9))))));
                /* LoopSeq 2 */
                for (unsigned short i_13 = 0; i_13 < 10; i_13 += 2) 
                {
                    var_28 -= ((/* implicit */signed char) ((((int) 1029440268U)) >= (((/* implicit */int) var_4))));
                    /* LoopSeq 3 */
                    for (signed char i_14 = 3; i_14 < 7; i_14 += 2) 
                    {
                        arr_52 [i_0] [i_10 - 3] [i_13] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) arr_31 [i_8]))))));
                        arr_53 [i_0] [i_8 - 2] [(_Bool)1] [i_8] [i_10] = (~(((/* implicit */int) var_8)));
                        arr_54 [i_0] [i_0] [i_8] [i_0] [i_14] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4095)) ? (4294967295U) : (1586938742U)))) || (((/* implicit */_Bool) -4092)));
                    }
                    for (unsigned int i_15 = 0; i_15 < 10; i_15 += 3) 
                    {
                        var_29 *= ((/* implicit */long long int) (_Bool)0);
                        var_30 &= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) -4095)) + (4294967295U)));
                    }
                    for (unsigned short i_16 = 1; i_16 < 9; i_16 += 4) 
                    {
                        var_31 = ((/* implicit */signed char) (+(((/* implicit */int) var_2))));
                        var_32 |= var_2;
                    }
                    var_33 |= ((4294967289U) >= (4294967295U));
                }
                for (unsigned short i_17 = 0; i_17 < 10; i_17 += 2) 
                {
                    var_34 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [3U] [i_8] [i_10] [i_8 - 2]))));
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) arr_0 [i_17] [i_8]);
                        var_36 = ((/* implicit */_Bool) var_5);
                        var_37 = ((/* implicit */_Bool) ((unsigned char) arr_49 [i_0] [i_10 - 3] [i_8 - 3] [i_17] [i_10 - 3] [i_8 - 3]));
                        var_38 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_57 [i_0] [i_8] [i_10] [i_17] [i_18])) & (var_3)))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)127))))) : ((+(4203962587U)))));
                    }
                    for (unsigned char i_19 = 1; i_19 < 8; i_19 += 4) 
                    {
                        var_39 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_19] [i_17] [i_10 - 3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))) && (((/* implicit */_Bool) ((signed char) var_5)))));
                        var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_19 + 1] [i_10])) ? (((/* implicit */long long int) -1796970857)) : (var_9)));
                        var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_8] [i_17] [i_10] [i_8]))) >= (6566258704737619565ULL)))) != (var_6)));
                    }
                    for (long long int i_20 = 1; i_20 < 7; i_20 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned int) (!((!((_Bool)1)))));
                        var_43 *= ((/* implicit */long long int) ((1971299866U) != (4294967289U)));
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((signed char) (_Bool)0))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : ((-(((/* implicit */int) var_1))))));
                        var_45 = ((/* implicit */_Bool) (~((~(((/* implicit */int) (unsigned char)255))))));
                    }
                    var_46 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_44 [i_10] [i_10] [i_10 - 1] [i_8] [i_8] [i_0]))))));
                }
            }
            /* LoopNest 2 */
            for (signed char i_21 = 2; i_21 < 6; i_21 += 3) 
            {
                for (long long int i_22 = 0; i_22 < 10; i_22 += 3) 
                {
                    {
                        arr_75 [i_0 + 1] [8ULL] [i_21 - 1] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_21]))));
                        arr_76 [i_0] [i_8 - 2] [i_21 + 1] [i_21] [i_21] [i_0] &= ((/* implicit */signed char) (-(arr_58 [i_0] [i_8 - 1] [i_8] [i_0])));
                    }
                } 
            } 
            var_47 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_8] [i_8 - 1] [i_0] [i_8])) ? (((/* implicit */int) ((var_0) != (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (((/* implicit */int) var_1))));
            var_48 = ((/* implicit */signed char) ((unsigned int) arr_74 [i_8] [i_8 - 1] [i_8 - 1] [i_8]));
        }
        for (signed char i_23 = 0; i_23 < 10; i_23 += 3) 
        {
            var_49 -= ((/* implicit */int) arr_23 [i_23] [i_0]);
            /* LoopSeq 1 */
            for (signed char i_24 = 0; i_24 < 10; i_24 += 4) 
            {
                arr_82 [i_24] [i_23] [i_0 + 1] = ((((/* implicit */_Bool) (signed char)76)) ? (1966569914404487692LL) : (((/* implicit */long long int) 15U)));
                var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */int) (short)-1638)) == (2147483647))))));
            }
            var_51 = ((/* implicit */signed char) (((-(((/* implicit */int) var_5)))) - (((((/* implicit */_Bool) arr_47 [i_23] [i_0 + 1] [i_0 - 1] [i_23])) ? (((/* implicit */int) arr_64 [i_0 - 2])) : (((/* implicit */int) var_5))))));
            var_52 += ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0 - 1] [i_0 - 2])) ? (((/* implicit */int) arr_18 [i_0 - 1] [i_0 + 1])) : (((/* implicit */int) arr_18 [i_0 + 1] [i_0 - 2])))))));
        }
        var_53 = ((/* implicit */signed char) max((var_53), (((/* implicit */signed char) ((int) -818757066506617721LL)))));
    }
    /* vectorizable */
    for (long long int i_25 = 1; i_25 < 19; i_25 += 2) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_26 = 2; i_26 < 19; i_26 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_27 = 0; i_27 < 21; i_27 += 3) 
            {
                var_54 |= ((/* implicit */short) (~(((/* implicit */int) ((unsigned short) (unsigned char)219)))));
                arr_89 [i_27] [i_26] [i_25 - 1] &= ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_83 [i_25])) && (((/* implicit */_Bool) var_0))))) > (((/* implicit */int) arr_86 [i_26 - 2] [i_25 + 1]))));
            }
            arr_90 [i_25] [i_25] = ((/* implicit */_Bool) ((signed char) (-(((/* implicit */int) var_4)))));
        }
        for (unsigned int i_28 = 2; i_28 < 19; i_28 += 4) /* same iter space */
        {
            var_55 = ((/* implicit */int) ((18446744073709551615ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_3))))));
            /* LoopSeq 2 */
            for (signed char i_29 = 2; i_29 < 19; i_29 += 3) /* same iter space */
            {
                var_56 = (~(var_0));
                arr_96 [i_25 + 2] [i_28] [i_25] [i_25] = ((/* implicit */unsigned char) var_0);
                arr_97 [i_29] [i_25] [i_25] [i_25] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)127))))) & (((/* implicit */int) (unsigned char)202))));
            }
            for (signed char i_30 = 2; i_30 < 19; i_30 += 3) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_31 = 2; i_31 < 20; i_31 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_32 = 1; i_32 < 19; i_32 += 2) 
                    {
                        arr_105 [i_25] [i_28] [i_28] [i_31 - 1] [i_25] [(unsigned short)5] [i_32 - 1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_88 [i_28 - 2] [i_25]))));
                        var_57 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (short)26595))))) ? ((~(var_9))) : (((/* implicit */long long int) (~(((/* implicit */int) var_8)))))));
                    }
                    arr_106 [i_25] [i_30] [i_28] [i_25] = ((/* implicit */unsigned short) arr_83 [i_25]);
                    var_58 = arr_104 [i_31] [i_25] [i_25] [i_25 - 1];
                }
                var_59 += ((/* implicit */unsigned int) ((((-1460642886) > (((/* implicit */int) var_8)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)18928))))) : (((/* implicit */int) ((-1978854062) == (((/* implicit */int) (signed char)104)))))));
                var_60 |= ((/* implicit */int) var_2);
                /* LoopSeq 2 */
                for (unsigned short i_33 = 0; i_33 < 21; i_33 += 3) 
                {
                    var_61 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_101 [i_30]))));
                    var_62 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(arr_84 [i_25]))))));
                    /* LoopSeq 1 */
                    for (unsigned short i_34 = 1; i_34 < 20; i_34 += 3) 
                    {
                        arr_111 [i_34] [i_33] [i_28] [(unsigned short)12] [(unsigned short)12] &= ((/* implicit */unsigned short) (!((!(arr_91 [i_28] [i_28] [i_28])))));
                        var_63 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) < (((((/* implicit */_Bool) arr_110 [i_34] [i_34] [i_25] [i_33] [i_25] [i_25] [i_25])) ? (var_3) : (var_3)))));
                        var_64 = ((/* implicit */int) arr_108 [i_25 + 1] [i_28] [i_28 + 2] [i_25] [i_30 + 2]);
                    }
                }
                for (unsigned short i_35 = 1; i_35 < 18; i_35 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_36 = 1; i_36 < 17; i_36 += 3) 
                    {
                        arr_119 [i_28] [i_28] [i_30 - 1] [i_35] [i_36] |= ((/* implicit */long long int) ((((unsigned int) var_8)) != (((/* implicit */unsigned int) ((/* implicit */int) ((var_7) == (((/* implicit */long long int) -1460642872))))))));
                        var_65 = ((/* implicit */unsigned short) ((18446744073709551615ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        var_66 = ((/* implicit */long long int) (-(var_0)));
                    }
                    /* LoopSeq 1 */
                    for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
                    {
                        var_67 |= ((/* implicit */unsigned char) var_2);
                        arr_122 [i_37] [i_25] [i_35] [i_30 + 2] [i_25] [i_25] = ((/* implicit */signed char) ((short) ((((/* implicit */_Bool) 3830652949159923891ULL)) ? (((/* implicit */int) arr_98 [i_25] [i_28] [i_25])) : (var_6))));
                        arr_123 [i_25] [i_28 + 2] [i_30] [i_35] [i_37] [i_37] [18] = ((/* implicit */unsigned char) ((signed char) arr_120 [i_35 - 1] [i_35 + 1] [i_30 + 2] [i_28] [i_28 + 1]));
                        var_68 = ((/* implicit */_Bool) arr_108 [i_25] [i_28] [(unsigned short)5] [i_25] [i_37]);
                    }
                }
            }
        }
        for (int i_38 = 0; i_38 < 21; i_38 += 2) 
        {
            arr_126 [i_25] [i_25] = ((/* implicit */long long int) arr_94 [i_38] [(unsigned char)6] [i_25] [i_25]);
            var_69 = ((/* implicit */signed char) min((var_69), (((/* implicit */signed char) ((((var_7) == (((/* implicit */long long int) arr_109 [i_25] [i_38])))) ? (((/* implicit */unsigned long long int) ((var_1) ? (arr_93 [10U] [i_25] [i_25] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1))))))) : (arr_92 [i_38] [i_25 - 1] [i_25 + 1]))))));
        }
        var_70 = ((/* implicit */unsigned char) max((var_70), (((/* implicit */unsigned char) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) -2147483647)) >= (215823930295907348ULL)))))))));
        arr_127 [i_25] = ((/* implicit */signed char) var_6);
    }
    var_71 = ((/* implicit */unsigned long long int) var_1);
}
