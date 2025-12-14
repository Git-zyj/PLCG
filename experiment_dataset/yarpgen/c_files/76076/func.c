/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76076
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76076 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76076
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
    for (signed char i_0 = 3; i_0 < 23; i_0 += 4) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967293U))))) < (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (short)7)), (arr_2 [i_0] [i_0 - 1])))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0 - 2])))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            var_12 = ((/* implicit */signed char) ((unsigned int) (!(arr_3 [i_0] [i_0]))));
            var_13 = (!(((/* implicit */_Bool) max((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))));
            var_14 = ((/* implicit */short) arr_6 [i_0] [i_0]);
            arr_7 [i_0] [i_1] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_3))))) ? (min((var_6), (((/* implicit */unsigned int) arr_6 [i_0] [i_0 - 1])))) : (max((((/* implicit */unsigned int) var_0)), (var_5))))));
        }
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) (signed char)-13);
        var_16 = ((/* implicit */unsigned short) ((long long int) arr_9 [i_2]));
    }
    for (unsigned long long int i_3 = 0; i_3 < 23; i_3 += 4) 
    {
        arr_12 [i_3] = ((/* implicit */long long int) (signed char)24);
        var_17 = ((((/* implicit */_Bool) ((((((((/* implicit */_Bool) arr_10 [i_3])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_3 [i_3] [i_3])))) + (2147483647))) >> (((max((arr_2 [8ULL] [i_3]), (((/* implicit */unsigned long long int) (short)7)))) - (9963938120688118208ULL)))))) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) min((var_0), (var_10)))));
        var_18 = min((arr_4 [i_3]), (arr_4 [i_3]));
        /* LoopSeq 2 */
        for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
        {
            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_15 [i_3] [i_4]), (((/* implicit */unsigned short) (short)-7))))) ? (((unsigned long long int) var_7)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)248)))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_5 = 0; i_5 < 23; i_5 += 2) 
            {
                var_20 = ((((/* implicit */_Bool) var_10)) ? (arr_16 [1U] [i_4 + 1] [i_4 + 1]) : (arr_16 [i_3] [i_4 + 1] [i_4 + 1]));
                var_21 = ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)43588)) : (-1))));
                arr_18 [i_4] [i_4] = ((/* implicit */unsigned int) 4918095122308891604LL);
            }
            for (long long int i_6 = 1; i_6 < 20; i_6 += 1) 
            {
                arr_22 [i_4] [i_4] [i_4] [i_3] = ((/* implicit */signed char) (!(((var_8) < (((/* implicit */int) ((var_1) == (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-31))))))))));
                arr_23 [i_4] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_8 [i_4 + 1] [i_6]))));
            }
            var_22 = ((/* implicit */int) min((((short) arr_2 [i_3] [i_4 + 1])), (((/* implicit */short) ((8ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))));
        }
        for (unsigned char i_7 = 0; i_7 < 23; i_7 += 3) 
        {
            var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) max((arr_6 [i_3] [20]), (((/* implicit */unsigned char) (signed char)-40)))))));
            arr_27 [i_3] [i_7] = ((/* implicit */unsigned char) ((((arr_17 [i_3] [i_3] [i_3] [i_3]) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)248))))) ? (((((/* implicit */_Bool) -1023451563)) ? (7833716526154984474ULL) : (10099449647507473704ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)40))))))));
        }
    }
    /* LoopSeq 2 */
    for (signed char i_8 = 0; i_8 < 10; i_8 += 1) 
    {
        var_24 = ((/* implicit */unsigned char) (signed char)24);
        arr_30 [i_8] [i_8] = ((/* implicit */int) arr_6 [i_8] [i_8]);
    }
    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 1) 
    {
        arr_33 [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((unsigned short) arr_31 [i_9]))) : (((/* implicit */int) arr_32 [i_9]))));
        /* LoopSeq 2 */
        for (unsigned int i_10 = 2; i_10 < 23; i_10 += 4) 
        {
            var_25 = ((/* implicit */unsigned int) (_Bool)1);
            arr_36 [(_Bool)1] = ((/* implicit */signed char) -9223372036854775805LL);
        }
        for (unsigned long long int i_11 = 2; i_11 < 24; i_11 += 4) 
        {
            arr_39 [i_9] [i_9] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_0)), (max((((/* implicit */unsigned long long int) 4294967273U)), (var_1)))))) ? (((((/* implicit */_Bool) (unsigned short)61958)) ? ((~(((/* implicit */int) (unsigned short)2202)))) : (((((/* implicit */_Bool) 8347294426202077911ULL)) ? (((/* implicit */int) (_Bool)1)) : (-1240929609))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)12))) <= (arr_38 [i_11 + 1] [i_11 - 2] [i_11]))))));
            /* LoopSeq 2 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_26 = ((/* implicit */unsigned char) (+(((((((/* implicit */int) (signed char)11)) | (((/* implicit */int) arr_8 [i_9] [i_9])))) ^ (((/* implicit */int) arr_31 [i_11]))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_13 = 0; i_13 < 25; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 2; i_14 < 24; i_14 += 4) 
                    {
                        var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */unsigned long long int) arr_34 [i_9] [i_11])) == (var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_9] [i_9]))) : (((((arr_40 [i_12]) - (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_12] [i_14]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned short)2202)) == (((/* implicit */int) (unsigned short)65520))))))))));
                        arr_49 [i_9] [i_11 - 2] [i_12] [(unsigned char)24] [i_11 - 2] [i_9] [i_12] = ((/* implicit */signed char) 6220326822708356626ULL);
                        arr_50 [i_12] [i_12] = ((/* implicit */unsigned char) var_0);
                        var_28 = ((/* implicit */unsigned char) max((max((((/* implicit */int) (short)-8)), (((((/* implicit */_Bool) arr_8 [i_9] [i_9])) ? (((/* implicit */int) arr_48 [i_12])) : (var_8))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_12]))) == (var_1))))) != ((~(arr_38 [i_14] [i_9] [i_9]))))))));
                    }
                    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) var_6)) >= (18014398509481983ULL)));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (signed char i_15 = 0; i_15 < 25; i_15 += 4) /* same iter space */
                    {
                        arr_55 [i_12] [i_11] [i_12] = ((/* implicit */unsigned long long int) arr_40 [i_12]);
                        arr_56 [i_9] [i_11] [i_12] [i_13] [i_12] = ((/* implicit */signed char) var_1);
                        var_30 = ((/* implicit */unsigned int) (unsigned short)2218);
                    }
                    for (signed char i_16 = 0; i_16 < 25; i_16 += 4) /* same iter space */
                    {
                        var_31 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 134217727U)), (((18446744073709551606ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1)))))));
                        arr_60 [i_9] [i_11] [(unsigned char)10] [i_12] [i_13] [i_9] [i_16] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)76)) && (((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) | (var_5)))));
                    }
                    var_32 = ((/* implicit */unsigned int) (!(arr_46 [i_12] [i_11 + 1] [i_12] [(_Bool)1] [i_11 + 1])));
                }
            }
            /* vectorizable */
            for (_Bool i_17 = 0; i_17 < 0; i_17 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned short i_18 = 4; i_18 < 22; i_18 += 1) 
                {
                    var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)249))));
                    /* LoopSeq 4 */
                    for (signed char i_19 = 1; i_19 < 23; i_19 += 1) 
                    {
                        arr_68 [i_9] [i_18] [1U] [i_18] [1U] = ((/* implicit */signed char) var_5);
                        var_34 = (unsigned char)198;
                        var_35 = ((/* implicit */int) ((unsigned long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_9)) : (var_1))));
                        arr_69 [i_9] [i_18] [10U] [i_17] [i_18 - 3] [i_17] [i_19 + 1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 15943685998236198971ULL)) ? (arr_51 [i_11 - 1] [i_17 + 1] [i_18 + 2] [i_19 + 1]) : (((/* implicit */long long int) var_8))));
                        arr_70 [i_19] [i_11 + 1] [i_18] [i_17 + 1] [i_18] [i_11 + 1] [i_9] = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                    }
                    for (unsigned int i_20 = 1; i_20 < 23; i_20 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) 18446744073709551615ULL);
                        var_37 = ((/* implicit */_Bool) 4294967290U);
                        arr_74 [i_9] [i_18] [i_17 + 1] [i_18] [8U] [i_18] [0U] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_45 [i_9] [i_11] [i_17] [i_20]))));
                        arr_75 [i_18] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_17 + 1] [i_11 - 2])) ? (((/* implicit */int) ((unsigned short) 847280002U))) : (((((/* implicit */int) var_7)) * (((/* implicit */int) (signed char)-33))))));
                        arr_76 [i_18] [i_18] [i_18] [i_18] [i_20] = 2750891118U;
                    }
                    for (short i_21 = 0; i_21 < 25; i_21 += 3) 
                    {
                        arr_81 [i_9] [i_18] [i_18] [i_18] [i_18] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) 2128162632U))) ? (((((/* implicit */_Bool) 445985692672366636LL)) ? (var_8) : (((/* implicit */int) (unsigned short)9495)))) : (((/* implicit */int) (_Bool)0))));
                        var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((3656678883U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)32))))))));
                        arr_82 [i_21] [i_18] [i_17 + 1] [i_18] [i_17 + 1] [i_11 + 1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_10))))) : (1641262907U)));
                    }
                    for (unsigned char i_22 = 0; i_22 < 25; i_22 += 2) 
                    {
                        var_39 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (+(var_6))))));
                        arr_85 [16ULL] [16ULL] [i_9] [i_9] [i_18] = ((/* implicit */unsigned char) (+(var_2)));
                        var_40 = 638288409U;
                        var_41 = ((/* implicit */unsigned int) ((arr_72 [i_18 + 2] [i_9]) >= (arr_59 [i_22] [i_17 + 1] [i_18] [i_17 + 1] [i_9] [i_9])));
                    }
                    arr_86 [i_9] [i_11 + 1] [i_11 + 1] [i_18] [i_18] = ((/* implicit */int) ((((/* implicit */_Bool) ((4294967295U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_9] [13LL] [i_9])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))))))) : (((((/* implicit */_Bool) var_4)) ? (1641262906U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_83 [i_9] [i_11 + 1])))))));
                }
                for (signed char i_23 = 3; i_23 < 24; i_23 += 3) 
                {
                    var_42 = ((/* implicit */int) arr_79 [i_9] [24U] [i_17] [i_17] [i_17]);
                    /* LoopSeq 2 */
                    for (short i_24 = 3; i_24 < 24; i_24 += 1) /* same iter space */
                    {
                        arr_92 [i_9] [i_11] [i_23] [i_23 - 3] [(unsigned char)18] [i_23 - 3] = ((/* implicit */unsigned int) arr_47 [i_9] [i_11] [i_23 - 2] [i_23] [i_24] [i_23 + 1] [i_23 + 1]);
                        arr_93 [i_9] [i_11 + 1] [i_17 + 1] [i_23] [i_23] [i_24] = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */unsigned long long int) var_6)) % (2569871014667377261ULL))));
                    }
                    for (short i_25 = 3; i_25 < 24; i_25 += 1) /* same iter space */
                    {
                        arr_96 [i_17 + 1] [i_17] [i_23] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_8 [i_9] [i_11 - 2]))));
                        var_43 = ((/* implicit */unsigned char) var_6);
                    }
                    arr_97 [i_9] [i_9] [i_23] [(signed char)19] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)20)) && (((/* implicit */_Bool) arr_64 [i_11 - 1] [i_11 + 1] [i_17] [i_23 - 1]))));
                }
                for (unsigned int i_26 = 3; i_26 < 22; i_26 += 4) 
                {
                    var_44 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 4U))));
                    arr_101 [i_9] [i_11] [4ULL] [i_26 - 1] = ((/* implicit */unsigned short) (unsigned char)27);
                    arr_102 [i_26 + 2] [i_17] [i_11 + 1] [i_9] [15ULL] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_61 [i_26 - 1] [i_11] [i_26 - 1] [i_17 + 1]))));
                }
                arr_103 [i_17] = (((~(var_1))) << (((/* implicit */int) ((1982982265U) > (((/* implicit */unsigned int) 1309010718))))));
                var_45 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2824938838U)) ? (arr_90 [i_11] [i_11] [i_11 + 1] [i_11] [i_17]) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_99 [i_9]))) : (var_6)));
                var_46 = ((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) var_8))))));
            }
            var_47 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_59 [i_11] [i_11] [i_11 + 1] [i_11 - 2] [i_11] [i_11]))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_27 = 3; i_27 < 24; i_27 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_28 = 0; i_28 < 25; i_28 += 4) 
            {
                arr_109 [19U] = ((/* implicit */unsigned char) ((unsigned short) 1295087442U));
                arr_110 [i_9] [(_Bool)1] [i_9] [i_27 - 2] = (_Bool)1;
                arr_111 [i_9] [i_27 + 1] = ((/* implicit */unsigned int) ((var_1) << (((-549558623) + (549558624)))));
            }
            for (signed char i_29 = 0; i_29 < 25; i_29 += 4) /* same iter space */
            {
                arr_114 [i_9] = ((/* implicit */long long int) var_4);
                var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)32762))))) ? (((((/* implicit */int) arr_47 [i_29] [i_27 + 1] [i_27] [i_29] [i_9] [i_9] [i_9])) & (((/* implicit */int) (short)-32763)))) : (var_9)));
            }
            for (signed char i_30 = 0; i_30 < 25; i_30 += 4) /* same iter space */
            {
                arr_117 [i_27] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) arr_61 [i_9] [i_27] [i_9] [i_30])))));
                /* LoopSeq 3 */
                for (unsigned int i_31 = 0; i_31 < 25; i_31 += 2) 
                {
                    var_49 = ((/* implicit */unsigned char) 3278764990U);
                    var_50 = ((/* implicit */unsigned long long int) (unsigned char)7);
                    arr_120 [i_9] [i_9] [i_30] [i_31] = ((unsigned int) arr_87 [i_27 + 1] [i_27 - 3] [i_27 - 1]);
                }
                for (unsigned long long int i_32 = 0; i_32 < 25; i_32 += 1) 
                {
                    arr_124 [i_32] = ((/* implicit */unsigned long long int) (unsigned char)143);
                    arr_125 [i_32] [i_27] [i_30] = ((/* implicit */unsigned int) var_9);
                    var_51 = ((/* implicit */unsigned short) arr_104 [i_27 - 3] [i_27 - 2] [i_27 - 3]);
                }
                for (signed char i_33 = 3; i_33 < 24; i_33 += 4) 
                {
                    var_52 = ((/* implicit */unsigned int) arr_89 [i_9] [i_9] [i_9] [i_9] [i_9]);
                    arr_129 [i_30] [i_30] [i_9] [i_9] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_1))))));
                    arr_130 [i_30] = ((/* implicit */_Bool) 2480166074U);
                }
            }
            var_53 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((var_2) * (var_2))))));
        }
        /* LoopSeq 2 */
        for (unsigned long long int i_34 = 0; i_34 < 25; i_34 += 1) 
        {
            var_54 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-120)) ? (((((/* implicit */int) arr_61 [i_9] [i_34] [i_9] [i_34])) / ((-(var_9))))) : (((((/* implicit */int) arr_99 [i_9])) >> (((var_4) - (2508718643U)))))));
            var_55 = ((/* implicit */long long int) 15943685998236198986ULL);
            var_56 = ((((arr_66 [i_9] [i_34] [i_9] [i_9] [i_9]) ? (var_6) : (((/* implicit */unsigned int) arr_53 [i_9] [i_34] [i_34] [i_34] [20U] [i_34])))) & (((/* implicit */unsigned int) ((/* implicit */int) arr_122 [i_9]))));
        }
        for (unsigned long long int i_35 = 3; i_35 < 23; i_35 += 4) 
        {
            arr_135 [i_35] = ((/* implicit */unsigned long long int) arr_89 [i_9] [i_9] [i_35] [8LL] [i_35]);
            var_57 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_64 [i_9] [i_9] [i_9] [i_9])) % (((/* implicit */int) var_10))))) ? ((+(max((((/* implicit */unsigned long long int) var_7)), (arr_72 [i_9] [i_9]))))) : (((((/* implicit */_Bool) max((15943685998236198971ULL), (((/* implicit */unsigned long long int) 2653704372U))))) ? (((unsigned long long int) (signed char)109)) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
            var_58 = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_51 [i_35 + 1] [i_35] [i_35 - 2] [i_35 + 1])) && ((_Bool)0))));
        }
    }
    var_59 = ((/* implicit */unsigned long long int) (~(var_8)));
}
