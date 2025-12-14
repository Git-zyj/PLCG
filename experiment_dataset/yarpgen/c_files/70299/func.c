/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70299
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
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0]))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            arr_5 [i_1] = ((/* implicit */long long int) (-((~(3001240202U)))));
            arr_6 [i_0] = ((/* implicit */unsigned char) max(((+(((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) (short)22715)))))), (((((/* implicit */_Bool) (short)22715)) ? ((-(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_0 [i_0] [i_1]))))));
            arr_7 [i_1] [i_1] = ((/* implicit */short) (-(((/* implicit */int) (short)22697))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 21; i_2 += 4) 
        {
            arr_10 [i_0] [i_2 + 1] [i_0] = ((/* implicit */unsigned char) (~(var_6)));
            arr_11 [10ULL] = ((/* implicit */long long int) ((var_12) + (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
        }
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            arr_15 [i_0] [i_3] = ((/* implicit */long long int) arr_1 [i_0]);
            arr_16 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */long long int) arr_0 [i_0] [i_3])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)22712)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22715))) : (4321795449639442600ULL)))) ? (((((/* implicit */_Bool) (short)-22715)) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_3]))) : (3807415609686988607LL))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))));
        }
        arr_17 [i_0] [(short)17] = ((/* implicit */short) var_4);
    }
    for (unsigned long long int i_4 = 1; i_4 < 14; i_4 += 3) 
    {
        arr_21 [i_4] = ((/* implicit */signed char) 898062223);
        arr_22 [i_4] = ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) arr_12 [i_4 + 1] [i_4]))));
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 15; i_5 += 3) 
        {
            arr_25 [i_4] [(unsigned short)5] [i_5] = ((/* implicit */unsigned char) var_4);
            arr_26 [i_4] [i_5] [i_5] = ((/* implicit */int) var_4);
        }
        /* vectorizable */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            /* LoopSeq 1 */
            for (short i_7 = 0; i_7 < 15; i_7 += 1) 
            {
                arr_32 [(_Bool)1] [(_Bool)1] [i_4] = ((/* implicit */_Bool) arr_3 [i_4 + 1] [i_6] [i_7]);
                arr_33 [i_4] [i_6] [i_4] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) var_9)))) ? (4321795449639442600ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7] [i_4 + 1])))));
                /* LoopSeq 3 */
                for (unsigned char i_8 = 1; i_8 < 13; i_8 += 1) 
                {
                    arr_36 [i_8] [i_6] [i_4] [i_8] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)0)) > (((/* implicit */int) var_7)))))));
                    arr_37 [i_4] [i_4] [i_7] [i_7] [i_7] [i_8 + 2] = ((((/* implicit */_Bool) ((var_2) ? (var_10) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_0 [i_4 + 1] [i_7])) : (((/* implicit */int) var_4)));
                    arr_38 [i_4 + 1] [i_6] [(short)8] [i_8] = ((((/* implicit */_Bool) arr_31 [i_4 + 1] [i_6] [i_8 + 1] [14ULL])) ? (((/* implicit */int) arr_18 [i_4 + 1])) : ((-(((/* implicit */int) (unsigned char)41)))));
                }
                for (unsigned char i_9 = 0; i_9 < 15; i_9 += 3) 
                {
                    arr_43 [i_4] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16380))) / (14124948624070109011ULL))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_4 - 1])))));
                    arr_44 [i_7] [i_4] [(unsigned char)10] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_4])) ? (((/* implicit */int) arr_30 [i_4 - 1] [i_6] [i_4 - 1] [i_9])) : (((/* implicit */int) (short)16380))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_4 + 1] [i_6]))) : (((unsigned int) arr_42 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))));
                    arr_45 [i_4 - 1] [i_6] [i_7] [0ULL] = ((/* implicit */unsigned long long int) arr_24 [(unsigned char)3]);
                }
                for (short i_10 = 1; i_10 < 14; i_10 += 3) 
                {
                    arr_49 [i_4] [i_4] [i_4] [i_10] = ((/* implicit */signed char) (~(((/* implicit */int) arr_30 [i_10] [i_7] [i_6] [3]))));
                    arr_50 [i_4] [i_4] [i_7] [i_10] = ((/* implicit */long long int) arr_28 [i_4] [i_10 - 1]);
                    arr_51 [i_4] [i_4] [i_6] [10] [i_10] = ((/* implicit */short) arr_4 [i_4] [i_10]);
                }
            }
            arr_52 [i_4] = ((/* implicit */unsigned char) ((((var_1) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_4 + 1] [i_6]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))));
            arr_53 [i_4] [i_4] = ((/* implicit */unsigned long long int) arr_42 [i_4 + 1] [i_4] [i_4] [(unsigned char)9] [i_4] [i_4]);
            /* LoopSeq 1 */
            for (long long int i_11 = 0; i_11 < 15; i_11 += 4) 
            {
                arr_56 [i_4] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_8)))) ? (((/* implicit */int) var_2)) : (var_10)));
                arr_57 [i_11] [i_6] [i_6] [i_6] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_30 [i_4] [i_4 - 1] [i_11] [i_4])) + (((/* implicit */int) var_2))));
                arr_58 [i_11] [i_4] [i_4] = var_1;
                arr_59 [i_4] [i_4] [i_4 + 1] [i_4 - 1] = ((/* implicit */long long int) arr_31 [i_4] [i_4 - 1] [i_11] [i_4]);
            }
        }
        for (signed char i_12 = 0; i_12 < 15; i_12 += 3) 
        {
            arr_62 [i_4] [i_4] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_12 [i_4 + 1] [i_4 - 1])), (max((((/* implicit */unsigned int) (short)16380)), (var_11)))));
            arr_63 [i_4] [i_4] = (+((((+(((/* implicit */int) var_7)))) + (((/* implicit */int) (short)-22716)))));
        }
        for (short i_13 = 0; i_13 < 15; i_13 += 3) 
        {
            arr_67 [i_4] [i_13] [i_4] = ((/* implicit */signed char) max(((~(((/* implicit */int) arr_60 [i_13] [i_4 - 1])))), (((/* implicit */int) arr_8 [i_13] [i_13]))));
            arr_68 [i_4 - 1] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) var_0)) ? (4321795449639442585ULL) : (((/* implicit */unsigned long long int) -1554326836303279453LL)))))), ((((+(((/* implicit */int) (unsigned short)65522)))) - (((/* implicit */int) ((11478616279362592455ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32757))))))))));
            arr_69 [i_4] [i_4] [i_13] = ((/* implicit */signed char) (-((((~(var_6))) ^ (((/* implicit */long long int) (-(((/* implicit */int) arr_24 [i_4])))))))));
            arr_70 [i_4] [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)255))) < (1729382256910270464LL)));
            arr_71 [i_4] [i_13] = ((/* implicit */int) arr_39 [i_4] [i_4] [i_4] [i_4 - 1] [i_4] [i_4]);
        }
        /* LoopSeq 2 */
        for (unsigned int i_14 = 0; i_14 < 15; i_14 += 3) 
        {
            arr_74 [i_4] = ((/* implicit */unsigned int) (+(((int) max((var_8), (((/* implicit */int) (unsigned char)169)))))));
            arr_75 [i_4] = (i_4 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_4] [i_4 - 1])) & (((/* implicit */int) arr_66 [i_4])))) >> ((((+(arr_41 [i_4]))) - (372434604U)))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_4 [i_4] [i_4 - 1])) & (((/* implicit */int) arr_66 [i_4])))) >> ((((((+(arr_41 [i_4]))) - (372434604U))) - (746391785U))))));
        }
        /* vectorizable */
        for (unsigned char i_15 = 0; i_15 < 15; i_15 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned int i_16 = 1; i_16 < 12; i_16 += 2) 
            {
                for (signed char i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    {
                        arr_83 [i_4] [i_4] [i_17] [(signed char)10] |= ((/* implicit */unsigned char) var_8);
                        arr_84 [i_4] [i_15] [i_4] [i_4] [i_4] [(signed char)11] = ((/* implicit */unsigned char) var_7);
                        arr_85 [i_4] [i_16] [13LL] = ((/* implicit */signed char) (-9223372036854775807LL - 1LL));
                        arr_86 [i_4 + 1] [i_15] [i_15] [i_17] [i_17] [i_17] = ((/* implicit */unsigned char) ((unsigned long long int) (unsigned short)0));
                        arr_87 [i_17] [i_17] [i_16] [i_15] = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (unsigned char)211)) < (((/* implicit */int) (unsigned short)19)))));
                    }
                } 
            } 
            arr_88 [i_4] = ((/* implicit */unsigned long long int) ((short) 12288U));
        }
    }
    /* vectorizable */
    for (signed char i_18 = 1; i_18 < 23; i_18 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 0; i_20 < 25; i_20 += 3) 
            {
                for (signed char i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    {
                        arr_102 [i_18] [i_18] = ((/* implicit */long long int) ((arr_91 [i_18 - 1]) < (((/* implicit */long long int) ((/* implicit */int) (unsigned short)15)))));
                        arr_103 [i_18] [8U] [i_20] [i_21] &= ((/* implicit */unsigned int) (~(((/* implicit */int) arr_97 [i_18] [i_19] [i_20]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (int i_22 = 2; i_22 < 24; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 25; i_23 += 1) 
                {
                    for (long long int i_24 = 3; i_24 < 24; i_24 += 4) 
                    {
                        {
                            arr_113 [i_18] [i_19] [i_22] [i_23] [i_24] = ((/* implicit */unsigned short) ((1967030671U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-6694)))));
                            arr_114 [i_19] [i_19] = ((/* implicit */long long int) ((arr_111 [i_18] [i_19] [i_19] [i_19] [i_24]) | (arr_111 [i_18] [i_19] [i_22] [i_23] [i_24])));
                            arr_115 [i_19] [i_19] [i_22 - 2] = arr_107 [i_22 + 1] [i_24 - 2] [i_22 + 1] [i_18 + 2] [i_22 + 1];
                            arr_116 [i_18] [i_23] [i_22 - 1] [i_23] [i_24] = ((/* implicit */unsigned long long int) arr_106 [i_18 + 1] [i_22] [i_23]);
                        }
                    } 
                } 
            } 
        }
        for (int i_25 = 0; i_25 < 25; i_25 += 4) 
        {
            arr_121 [i_18] = ((/* implicit */unsigned long long int) (~(arr_89 [i_18 + 2])));
            arr_122 [i_18] [i_18] [i_25] &= ((/* implicit */unsigned char) arr_119 [i_18 + 1] [i_18] [i_25]);
        }
        for (int i_26 = 0; i_26 < 25; i_26 += 3) 
        {
            arr_127 [i_18 - 1] [i_26] = ((/* implicit */short) arr_91 [i_18]);
            arr_128 [i_18 + 2] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_107 [i_18 - 1] [i_26] [i_18] [i_18 - 1] [i_18 - 1])) ? (arr_107 [(signed char)21] [i_18] [i_26] [i_26] [i_26]) : (arr_107 [i_18] [i_18] [i_18] [i_26] [i_18])));
        }
        /* LoopSeq 1 */
        for (unsigned char i_27 = 0; i_27 < 25; i_27 += 3) 
        {
            arr_131 [i_27] = ((/* implicit */unsigned short) (short)63);
            arr_132 [i_18] [13LL] [i_27] = ((/* implicit */_Bool) (((((_Bool)1) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))))) % (((/* implicit */long long int) ((/* implicit */int) var_9)))));
        }
    }
    for (signed char i_28 = 0; i_28 < 21; i_28 += 1) 
    {
        arr_137 [i_28] [i_28] = ((/* implicit */short) arr_14 [i_28]);
        /* LoopNest 2 */
        for (int i_29 = 2; i_29 < 18; i_29 += 3) 
        {
            for (unsigned int i_30 = 0; i_30 < 21; i_30 += 3) 
            {
                {
                    arr_142 [i_30] = ((/* implicit */signed char) (-(((/* implicit */int) (short)-18321))));
                    arr_143 [i_30] [i_30] [i_30] [i_28] = ((/* implicit */short) (+(((/* implicit */int) max((arr_12 [i_29 + 1] [i_29 + 2]), (((/* implicit */unsigned char) arr_124 [i_29 - 1] [i_29 + 2])))))));
                }
            } 
        } 
        arr_144 [(signed char)19] = ((/* implicit */unsigned int) (~(-1554326836303279453LL)));
    }
    var_13 = var_1;
    var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((unsigned char) var_2))) * (((/* implicit */int) (unsigned short)65296))))) ? ((+(((/* implicit */int) (short)22715)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(var_10)))))))));
}
