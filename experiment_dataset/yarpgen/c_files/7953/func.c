/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 7953
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=7953 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/7953
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
    var_14 += ((/* implicit */unsigned short) var_0);
    /* LoopSeq 4 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 4) 
    {
        var_15 &= ((/* implicit */int) ((long long int) min((arr_0 [i_0 + 1]), (((/* implicit */long long int) arr_1 [i_0 + 1])))));
        var_16 &= ((/* implicit */short) (+((+((+(arr_0 [i_0])))))));
    }
    for (unsigned int i_1 = 0; i_1 < 16; i_1 += 1) 
    {
        var_17 |= ((/* implicit */unsigned short) min((((long long int) min((((/* implicit */int) (short)32767)), (-938765470)))), ((+(max((arr_0 [i_1]), (((/* implicit */long long int) arr_2 [10LL]))))))));
        arr_4 [i_1] = ((/* implicit */long long int) 3144255948U);
        var_18 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_3 [i_1])), (min((12466491320129312312ULL), (12466491320129312312ULL)))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_3 = 2; i_3 < 19; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 21; i_4 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 21; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) var_8);
                                var_20 &= ((/* implicit */_Bool) (+(var_7)));
                            }
                        } 
                    } 
                    arr_18 [i_4] [i_3] [i_4] = ((/* implicit */unsigned int) (+(arr_12 [i_2] [i_2] [i_2])));
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 21; i_7 += 1) 
                    {
                        arr_22 [i_4] [i_7] [i_4] [i_7] = ((/* implicit */unsigned short) arr_6 [i_2]);
                        var_21 = ((signed char) arr_7 [i_3 - 2]);
                    }
                    arr_23 [i_2] [i_4] [i_4] = ((/* implicit */_Bool) var_2);
                }
            } 
        } 
        arr_24 [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]))));
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
        {
            var_22 = ((/* implicit */short) arr_19 [i_8] [i_8] [i_2] [i_2] [i_2]);
            var_23 &= ((/* implicit */long long int) (+((+(arr_26 [i_2] [i_2] [i_2])))));
            /* LoopSeq 2 */
            for (unsigned long long int i_9 = 2; i_9 < 19; i_9 += 2) 
            {
                var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((signed char) (signed char)(-127 - 1))))));
                arr_30 [i_8] [i_8] [i_8] [i_8] = ((/* implicit */int) arr_7 [i_2]);
                /* LoopSeq 2 */
                for (signed char i_10 = 0; i_10 < 21; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_11 = 3; i_11 < 20; i_11 += 1) 
                    {
                        arr_38 [i_2] [i_8] [i_9 + 1] [i_9] [i_2] [i_10] [i_2] &= ((/* implicit */long long int) (unsigned short)30440);
                        arr_39 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_11] = ((/* implicit */_Bool) 3144255948U);
                        arr_40 [i_2] [i_11] [i_9] [i_11] = ((_Bool) (short)63);
                    }
                    arr_41 [i_8] = (+((+(((/* implicit */int) var_0)))));
                }
                for (signed char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    arr_44 [i_2] [i_2] [i_2] [i_2] [i_9] [i_12] = ((/* implicit */int) (+(arr_34 [i_9] [i_9] [i_9 - 2] [i_12] [i_9])));
                    var_25 = ((/* implicit */_Bool) (+(var_3)));
                }
                var_26 -= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)127))));
            }
            for (signed char i_13 = 1; i_13 < 18; i_13 += 4) 
            {
                arr_49 [i_13] [i_13 + 3] [i_2] [i_13] = ((/* implicit */int) ((unsigned short) 250236567));
                arr_50 [i_13] [i_8] [i_13] = (+(((/* implicit */int) arr_6 [i_13 - 1])));
            }
            var_27 = ((/* implicit */signed char) var_9);
        }
        for (int i_14 = 0; i_14 < 21; i_14 += 1) /* same iter space */
        {
            var_28 = var_8;
            /* LoopSeq 4 */
            for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
            {
                arr_55 [i_2] [i_15] [i_15] [i_14] = ((/* implicit */int) (!(((/* implicit */_Bool) var_5))));
                arr_56 [i_14] [i_15 + 1] = ((/* implicit */unsigned long long int) 0);
                arr_57 [i_2] [i_14] [i_15] = var_5;
            }
            for (long long int i_16 = 0; i_16 < 21; i_16 += 2) 
            {
                arr_61 [i_2] [i_2] [i_14] [i_2] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_29 [i_14] [i_16]))));
                arr_62 [i_14] [i_14] [i_14] = ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_45 [i_2] [i_16] [i_16]))))));
                arr_63 [i_2] [i_14] [i_14] = ((/* implicit */unsigned int) arr_28 [i_16] [i_14] [i_14] [i_2]);
            }
            for (int i_17 = 1; i_17 < 19; i_17 += 2) 
            {
                /* LoopSeq 4 */
                for (unsigned int i_18 = 1; i_18 < 18; i_18 += 4) 
                {
                    arr_68 [i_14] [i_17] [i_14] [i_14] = ((/* implicit */long long int) ((unsigned int) 5980252753580239307ULL));
                    var_29 = ((/* implicit */unsigned short) arr_14 [i_14]);
                    var_30 = ((/* implicit */unsigned int) 17872797094028883789ULL);
                    var_31 *= ((/* implicit */_Bool) ((unsigned int) 396390729U));
                    var_32 = ((/* implicit */unsigned long long int) min((var_32), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_27 [i_18 + 1] [i_18] [i_17 + 2])))))));
                }
                for (unsigned long long int i_19 = 1; i_19 < 17; i_19 += 2) /* same iter space */
                {
                    arr_72 [i_19] [i_19] [i_19] [(unsigned short)10] [i_19] &= ((/* implicit */unsigned int) (+(arr_15 [i_17 - 1])));
                    arr_73 [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) (+(arr_70 [i_19 + 4] [i_19 + 1] [i_19 + 1] [i_19 + 2])));
                    var_33 = ((/* implicit */int) (signed char)17);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                    {
                        arr_76 [i_14] [i_14] [i_14] [i_2] = ((/* implicit */unsigned short) (-(arr_34 [i_19] [i_19 + 3] [i_19 + 3] [i_19 + 3] [i_19 + 3])));
                        var_34 = ((/* implicit */int) min((var_34), ((+(((/* implicit */int) (unsigned short)24091))))));
                    }
                }
                for (unsigned long long int i_21 = 1; i_21 < 17; i_21 += 2) /* same iter space */
                {
                    arr_80 [i_14] [i_21] [i_17] [i_2] [i_2] [i_14] = (unsigned short)65535;
                    var_35 = ((/* implicit */short) (+(((/* implicit */int) arr_27 [i_2] [i_17 - 1] [i_14]))));
                    var_36 = ((/* implicit */int) min((var_36), ((+(((/* implicit */int) arr_6 [i_14]))))));
                }
                for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) 
                {
                    arr_85 [i_22 + 1] [i_14] [i_14] = ((/* implicit */short) (+(var_6)));
                    /* LoopSeq 3 */
                    for (unsigned int i_23 = 1; i_23 < 17; i_23 += 3) 
                    {
                        var_37 = ((int) 1119640791547769209LL);
                        var_38 += ((/* implicit */short) (+(arr_71 [i_2] [i_22 + 1])));
                    }
                    for (signed char i_24 = 0; i_24 < 21; i_24 += 1) 
                    {
                        arr_91 [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */_Bool) (+(((/* implicit */int) var_9))));
                        arr_92 [i_17] [i_14] [i_17] [i_22 + 1] [i_17] [i_17] = ((/* implicit */unsigned short) arr_10 [i_17]);
                        var_39 *= ((/* implicit */signed char) 396390705U);
                        var_40 = ((/* implicit */short) arr_51 [i_24]);
                    }
                    for (short i_25 = 0; i_25 < 21; i_25 += 3) 
                    {
                        arr_96 [i_2] [i_14] [i_14] [i_22] [i_14] = var_10;
                        arr_97 [i_17] [i_25] [i_14] = ((/* implicit */signed char) arr_29 [i_22 + 1] [i_25]);
                        arr_98 [i_14] [i_17 - 1] [i_14] [i_17] [i_17 - 1] = ((/* implicit */unsigned long long int) ((unsigned int) var_1));
                    }
                    var_41 = ((/* implicit */int) (~(arr_33 [i_22] [i_22])));
                }
                arr_99 [i_14] [i_14] [i_17] = ((/* implicit */unsigned long long int) (+(arr_26 [i_2] [i_14] [i_17 + 2])));
            }
            for (int i_26 = 0; i_26 < 21; i_26 += 1) 
            {
                var_42 = ((/* implicit */unsigned int) ((long long int) ((unsigned int) var_2)));
                /* LoopSeq 1 */
                for (signed char i_27 = 0; i_27 < 21; i_27 += 1) 
                {
                    var_43 = ((/* implicit */short) ((signed char) var_9));
                    var_44 = ((/* implicit */_Bool) var_12);
                    /* LoopSeq 2 */
                    for (long long int i_28 = 0; i_28 < 21; i_28 += 1) 
                    {
                        arr_109 [i_2] [i_14] [i_26] [i_14] [i_26] [i_26] = ((/* implicit */short) (+((+(5973435455829402323ULL)))));
                        arr_110 [i_14] [i_14] [i_14] [i_14] [i_14] [i_14] = ((/* implicit */signed char) (~(((/* implicit */int) ((short) (short)-15821)))));
                        arr_111 [i_2] [i_2] [i_2] [i_14] [i_28] = ((/* implicit */unsigned short) arr_43 [i_2]);
                        var_45 = ((/* implicit */short) var_6);
                    }
                    for (int i_29 = 0; i_29 < 21; i_29 += 1) 
                    {
                        var_46 &= ((/* implicit */unsigned long long int) arr_32 [i_2] [i_2]);
                        var_47 = ((/* implicit */unsigned int) arr_66 [i_29] [i_2] [i_27] [i_26] [i_14] [i_2]);
                        var_48 *= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((long long int) (short)-10680)))));
                        var_49 |= ((/* implicit */long long int) (~(arr_5 [i_27])));
                    }
                    arr_115 [i_14] = var_2;
                }
            }
            var_50 += ((/* implicit */long long int) var_2);
        }
        for (int i_30 = 0; i_30 < 21; i_30 += 1) /* same iter space */
        {
            arr_118 [i_2] [16U] &= ((/* implicit */unsigned int) ((unsigned short) arr_36 [i_2] [i_30] [i_30] [i_2] [i_2] [i_30] [20ULL]));
            /* LoopSeq 1 */
            for (_Bool i_31 = 1; i_31 < 1; i_31 += 1) 
            {
                arr_122 [i_2] [i_30] [i_30] [i_2] = ((/* implicit */signed char) (~((+(((/* implicit */int) var_2))))));
                /* LoopSeq 1 */
                for (int i_32 = 2; i_32 < 20; i_32 += 3) 
                {
                    var_51 = ((/* implicit */unsigned int) var_5);
                    arr_125 [2ULL] [i_32] [i_31] [i_32] [i_31] [i_31] &= ((/* implicit */unsigned int) 33554432);
                    var_52 = (+((+(((/* implicit */int) var_9)))));
                }
                var_53 |= ((/* implicit */signed char) (!(arr_87 [i_2] [i_31] [(short)14] [i_2] [i_2])));
                arr_126 [i_30] [i_30] = (~(((/* implicit */int) var_2)));
                arr_127 [i_2] [(_Bool)1] [i_31] &= ((/* implicit */signed char) arr_16 [i_2] [i_30] [i_31 - 1]);
            }
        }
        var_54 = (+((+(((/* implicit */int) (short)-31195)))));
        /* LoopNest 2 */
        for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
        {
            for (long long int i_34 = 1; i_34 < 17; i_34 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned int i_35 = 2; i_35 < 20; i_35 += 4) 
                    {
                        var_55 *= ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_33 - 1] [i_34 - 1]))));
                        var_56 |= 3144255956U;
                        arr_134 [i_2] [i_33] [i_33] [i_35] = ((/* implicit */signed char) (+(1174452764U)));
                    }
                    for (unsigned short i_36 = 0; i_36 < 21; i_36 += 2) 
                    {
                        arr_139 [i_33] [i_34] [i_33 - 1] [i_33] = ((/* implicit */int) (+(1150711373U)));
                        /* LoopSeq 2 */
                        for (short i_37 = 0; i_37 < 21; i_37 += 4) 
                        {
                            arr_143 [i_2] [i_2] [i_2] [i_33] [i_2] [i_2] [i_2] = ((signed char) arr_37 [i_34 + 1]);
                            var_57 = ((/* implicit */_Bool) min((var_57), (((/* implicit */_Bool) (~(var_7))))));
                        }
                        for (short i_38 = 1; i_38 < 20; i_38 += 2) 
                        {
                            arr_146 [i_2] [i_33] [i_33] [i_33] [i_36] [i_38 - 1] [i_33] = ((/* implicit */unsigned short) (+(arr_104 [i_38] [i_33] [i_34 + 2])));
                            var_58 = ((/* implicit */long long int) ((unsigned int) (unsigned short)37555));
                        }
                        arr_147 [i_36] [i_33] [i_33] [i_2] = ((/* implicit */long long int) (~(((/* implicit */int) (short)20977))));
                    }
                    for (short i_39 = 0; i_39 < 21; i_39 += 2) 
                    {
                        arr_150 [i_2] [i_2] [i_2] [i_2] [i_33] = ((/* implicit */unsigned short) (+(((unsigned int) (unsigned short)0))));
                        arr_151 [i_33] = ((/* implicit */short) arr_9 [i_39] [i_2]);
                    }
                    var_59 = ((/* implicit */int) ((_Bool) arr_100 [i_2] [i_33 - 1] [i_34]));
                }
            } 
        } 
    }
    for (_Bool i_40 = 0; i_40 < 0; i_40 += 1) 
    {
        arr_155 [i_40] = ((/* implicit */short) arr_153 [i_40]);
        arr_156 [i_40] = ((/* implicit */unsigned short) arr_152 [i_40]);
    }
}
