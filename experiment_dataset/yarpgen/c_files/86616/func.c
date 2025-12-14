/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86616
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86616 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86616
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_11 = ((/* implicit */signed char) min((var_11), (((/* implicit */signed char) arr_5 [i_0] [i_3 - 1] [11LL]))));
                            var_12 = ((/* implicit */_Bool) arr_9 [i_2 - 1] [i_1 - 1] [i_1 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]);
                            var_13 += (-(-8953611308579894111LL));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_4 = 2; i_4 < 15; i_4 += 4) 
                {
                    for (unsigned short i_5 = 1; i_5 < 17; i_5 += 4) 
                    {
                        {
                            var_14 = ((/* implicit */_Bool) min((arr_2 [i_1 - 2] [i_1 - 2]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [i_5] [i_5 + 1] [i_0 + 1] [i_0])) ? (((/* implicit */int) arr_8 [i_5 + 1] [i_5 + 1] [i_0 + 1] [i_0 + 1])) : (var_9))))));
                            var_15 ^= ((/* implicit */long long int) ((arr_3 [i_1 + 2] [i_1] [i_1 + 1]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 17; i_6 += 4) 
                {
                    for (short i_7 = 1; i_7 < 17; i_7 += 4) 
                    {
                        {
                            var_16 -= ((/* implicit */signed char) arr_11 [i_0] [i_1] [i_6] [i_7]);
                            arr_20 [i_0] [i_0] [i_6 + 1] [i_6 + 1] = ((/* implicit */short) (~(((/* implicit */int) max((((/* implicit */unsigned short) min(((unsigned char)16), (((/* implicit */unsigned char) (_Bool)1))))), (((unsigned short) arr_17 [i_0 + 1] [(short)12] [i_0] [(short)12])))))));
                            var_17 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)26067))))), ((((_Bool)1) ? (arr_2 [i_0 + 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1 + 1] [i_1 - 2] [i_1])))))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_8 = 3; i_8 < 16; i_8 += 4) 
                {
                    for (unsigned long long int i_9 = 2; i_9 < 15; i_9 += 4) 
                    {
                        for (signed char i_10 = 4; i_10 < 17; i_10 += 4) 
                        {
                            {
                                arr_28 [i_0] [i_0] [i_0] [i_9 + 3] [i_0 + 1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) max((arr_19 [i_0 + 1] [i_8 - 1] [i_9] [i_9 + 1] [i_9]), (arr_19 [i_0 + 1] [i_0 + 1] [(signed char)7] [i_9 + 1] [(signed char)15]))))));
                                var_18 += ((/* implicit */short) max((((/* implicit */unsigned long long int) (-((-(((/* implicit */int) var_7))))))), (max((6163475500275284055ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)0)))))))));
                                var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) arr_3 [i_0] [i_8] [i_8]))));
                                var_20 = ((/* implicit */short) arr_7 [i_0] [(unsigned short)11]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 3; i_11 < 21; i_11 += 4) 
    {
        for (short i_12 = 1; i_12 < 20; i_12 += 4) 
        {
            {
                /* LoopNest 3 */
                for (int i_13 = 3; i_13 < 21; i_13 += 4) 
                {
                    for (unsigned char i_14 = 3; i_14 < 21; i_14 += 4) 
                    {
                        for (signed char i_15 = 3; i_15 < 21; i_15 += 4) 
                        {
                            {
                                arr_41 [i_15] [i_14] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (short)24024)), (8982584517627870470ULL)))) ? ((((_Bool)1) ? (((/* implicit */int) arr_37 [i_11] [i_11])) : (((/* implicit */int) var_5)))) : (((/* implicit */int) arr_34 [i_12 + 2] [i_14 + 1] [i_14 - 2])))));
                                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_31 [i_15] [i_12] [i_12])) ? (10801544555633948912ULL) : (((/* implicit */unsigned long long int) (+((~(((/* implicit */int) arr_33 [i_11] [i_12] [i_12] [18ULL])))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (int i_16 = 3; i_16 < 19; i_16 += 4) 
                {
                    for (signed char i_17 = 2; i_17 < 20; i_17 += 4) 
                    {
                        for (_Bool i_18 = 1; i_18 < 1; i_18 += 1) 
                        {
                            {
                                arr_48 [i_11] [i_17] [i_16] [i_12 + 1] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)496)) ? (((/* implicit */int) (short)-21022)) : (((/* implicit */int) (_Bool)0))));
                                arr_49 [i_11] [i_11] [i_18 - 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */_Bool) 1654592314U)) && (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) arr_35 [i_11] [i_12 - 1])) ? (((/* implicit */int) var_6)) : (arr_40 [i_11] [i_11 - 1])))))) ? ((~(arr_39 [i_17 - 2]))) : (((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((/* implicit */int) min((arr_42 [(_Bool)1]), (arr_42 [i_11])))) : (arr_40 [i_11] [i_18]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_19 = 1; i_19 < 20; i_19 += 4) 
                {
                    for (int i_20 = 1; i_20 < 21; i_20 += 4) 
                    {
                        {
                            arr_54 [i_11] [i_11] [i_11] [(unsigned char)6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned short) arr_34 [i_11] [i_11] [i_11]))))) & ((~(((/* implicit */int) (signed char)125)))))))));
                            var_22 = ((/* implicit */_Bool) ((short) ((unsigned char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (signed char)-125)) : (((/* implicit */int) arr_52 [i_11] [i_11]))))));
                            var_23 -= ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                            var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) (+((~(((var_6) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_11]))) : (var_0))))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_21 = 3; i_21 < 18; i_21 += 4) 
                {
                    for (signed char i_22 = 1; i_22 < 21; i_22 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) min((arr_29 [i_21]), (((/* implicit */signed char) min((var_1), ((!(((/* implicit */_Bool) var_7)))))))));
                            var_26 ^= ((/* implicit */int) ((arr_57 [i_21] [i_12]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (short i_23 = 1; i_23 < 20; i_23 += 4) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        for (signed char i_25 = 2; i_25 < 19; i_25 += 4) 
                        {
                            {
                                var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) arr_65 [i_11] [i_11] [i_11 - 3]))));
                                arr_73 [i_11 - 1] [i_12 + 2] [i_11] [i_12 + 2] [i_23] = ((/* implicit */short) arr_63 [i_12 - 1] [i_11 - 2] [i_25 + 2]);
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_26 = 2; i_26 < 16; i_26 += 4) 
    {
        for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned char i_28 = 3; i_28 < 16; i_28 += 4) 
                {
                    for (signed char i_29 = 3; i_29 < 15; i_29 += 4) 
                    {
                        for (unsigned long long int i_30 = 4; i_30 < 16; i_30 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */long long int) 2640374971U);
                                var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((5175373014785501290LL), (((/* implicit */long long int) (unsigned short)65521))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned short) var_7)), ((unsigned short)44570))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) (_Bool)0))))) ? (((((/* implicit */_Bool) arr_70 [(short)12] [i_30 - 1] [i_27] [(short)12] [i_27] [(unsigned char)0] [i_26])) ? (((/* implicit */int) (short)31640)) : (((/* implicit */int) (short)0)))) : (((/* implicit */int) arr_0 [i_26] [i_27]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (int i_31 = 3; i_31 < 14; i_31 += 4) 
                {
                    for (int i_32 = 1; i_32 < 13; i_32 += 4) 
                    {
                        {
                            arr_95 [i_31] [i_27] [i_27] [i_26] = ((/* implicit */signed char) arr_10 [i_32] [i_31 - 1] [(unsigned short)1] [(unsigned short)1]);
                            var_30 = (unsigned short)9;
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_33 = 2; i_33 < 16; i_33 += 4) 
                {
                    for (short i_34 = 2; i_34 < 15; i_34 += 4) 
                    {
                        for (int i_35 = 4; i_35 < 13; i_35 += 4) 
                        {
                            {
                                arr_104 [i_27] [i_35] [i_34] [(short)5] [(short)5] [i_27] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_29 [i_33 + 1])) ? (((/* implicit */int) arr_29 [i_33 - 2])) : (((/* implicit */int) var_7)))), (((((/* implicit */_Bool) arr_62 [i_27] [i_34])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_62 [i_35 - 4] [i_33 + 1]))))));
                                arr_105 [i_27] [i_27] [i_27] [i_34 + 1] [i_35] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) (+(7089604361668740246LL)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_34 [i_27] [i_27] [4])))) : (((-555978432) / (((/* implicit */int) (signed char)127)))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_36 = 2; i_36 < 16; i_36 += 4) 
                {
                    for (unsigned char i_37 = 2; i_37 < 14; i_37 += 4) 
                    {
                        {
                            arr_110 [i_26 - 2] [i_26 - 2] [i_27] [i_27] [i_36 + 1] [i_27] = ((/* implicit */unsigned long long int) var_0);
                            var_31 = ((/* implicit */short) min((var_31), (((/* implicit */short) (~(2640374982U))))));
                            var_32 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_26 - 2] [i_27] [i_27] [i_36] [i_26] [i_37 - 2]))))), (min((min((((/* implicit */int) (short)18393)), (arr_40 [(signed char)4] [i_27]))), (((/* implicit */int) arr_17 [i_26] [i_26] [i_36 + 1] [i_37 + 2]))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (short i_38 = 3; i_38 < 12; i_38 += 4) 
    {
        for (unsigned char i_39 = 1; i_39 < 12; i_39 += 4) 
        {
            for (signed char i_40 = 2; i_40 < 12; i_40 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_41 = 2; i_41 < 10; i_41 += 4) 
                    {
                        for (_Bool i_42 = 0; i_42 < 0; i_42 += 1) 
                        {
                            {
                                var_33 *= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-64)) ? (var_9) : (((/* implicit */int) arr_44 [i_42 + 1] [i_38] [(_Bool)1] [i_38]))))) ? (((/* implicit */long long int) 2640374975U)) : (min((((/* implicit */long long int) arr_62 [(unsigned short)8] [i_39 + 1])), (-4589152450412707076LL))))))));
                                arr_122 [i_40] [i_38] [i_40] [i_40 - 2] [i_40] [(signed char)5] [i_40 - 1] = ((/* implicit */short) (-(((((/* implicit */_Bool) 1654592343U)) ? (((/* implicit */int) arr_79 [i_38 - 3] [i_38])) : (((/* implicit */int) arr_79 [i_38 - 3] [i_38]))))));
                                arr_123 [i_38] = ((/* implicit */_Bool) arr_25 [(signed char)16] [i_39] [i_40] [i_38] [i_38]);
                                var_34 = ((/* implicit */short) (_Bool)1);
                                var_35 = (!(((/* implicit */_Bool) (~(arr_87 [i_38])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_43 = 3; i_43 < 11; i_43 += 4) 
                    {
                        for (long long int i_44 = 1; i_44 < 12; i_44 += 4) 
                        {
                            {
                                arr_130 [i_40] &= ((/* implicit */long long int) (!(arr_38 [i_44 - 1] [i_40] [i_39] [i_38])));
                                var_36 = ((/* implicit */unsigned long long int) max((((unsigned int) (!(((/* implicit */_Bool) arr_65 [i_44] [i_40 - 2] [i_38 - 1]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3325)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)151)))))));
                                var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_71 [i_39 - 1] [i_39] [i_39 + 1] [i_43] [i_39])))) ? (((/* implicit */int) arr_33 [i_38] [i_39 - 1] [(signed char)6] [i_40])) : (((/* implicit */int) ((((arr_97 [i_43]) / (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_45 = 3; i_45 < 21; i_45 += 4) 
    {
        for (unsigned int i_46 = 2; i_46 < 20; i_46 += 4) 
        {
            for (unsigned char i_47 = 3; i_47 < 21; i_47 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_48 = 1; i_48 < 1; i_48 += 1) 
                    {
                        for (unsigned char i_49 = 3; i_49 < 19; i_49 += 4) 
                        {
                            {
                                arr_146 [i_47] [i_47] = ((/* implicit */unsigned char) min((((((/* implicit */int) (_Bool)1)) + (-10525815))), (((/* implicit */int) (signed char)46))));
                                var_38 ^= ((/* implicit */unsigned char) max((((unsigned short) ((unsigned long long int) (_Bool)1))), (((unsigned short) max((-406564219), (arr_40 [i_45 - 3] [i_46 - 2]))))));
                                var_39 = ((/* implicit */int) max((var_39), (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_138 [i_46] [i_46]), (arr_138 [i_47 - 2] [i_46])))))))));
                                var_40 -= ((((_Bool) (~(((/* implicit */int) (unsigned short)16727))))) ? (min((arr_63 [i_45 - 3] [i_48 - 1] [i_45 - 3]), (arr_63 [i_45 - 3] [i_45 - 3] [i_47 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_50 = 3; i_50 < 19; i_50 += 4) 
                    {
                        for (int i_51 = 4; i_51 < 20; i_51 += 4) 
                        {
                            {
                                var_41 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_7)), (-14LL)))) ? (min((((/* implicit */int) arr_145 [i_47] [i_46] [i_46] [i_47] [i_46] [i_47] [i_51 - 3])), (var_9))) : (((/* implicit */int) ((1619444342) > (((/* implicit */int) var_1))))))))));
                                var_42 = ((/* implicit */unsigned short) (~((-(arr_71 [i_51] [(_Bool)1] [(_Bool)1] [i_46 - 1] [i_45 + 1])))));
                                var_43 = (((!(((/* implicit */_Bool) ((short) (signed char)3))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */int) (unsigned char)67)) : (((/* implicit */int) var_4))))) ? (((int) arr_34 [i_45] [i_47] [20ULL])) : ((~(((/* implicit */int) arr_61 [i_50])))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) 12521124094940576890ULL)) ? (((/* implicit */int) (signed char)103)) : (((/* implicit */int) (unsigned short)22565))))) ? (((/* implicit */int) min(((unsigned char)67), (((/* implicit */unsigned char) (_Bool)1))))) : (((/* implicit */int) min((((/* implicit */signed char) arr_50 [i_45 - 1] [i_45] [i_45])), ((signed char)-124)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_52 = 1; i_52 < 21; i_52 += 4) 
                    {
                        for (unsigned long long int i_53 = 2; i_53 < 19; i_53 += 4) 
                        {
                            {
                                arr_157 [i_47] [i_47] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_30 [i_47] [i_47 + 1]), ((signed char)7)))) ? ((+(((/* implicit */int) arr_30 [i_47] [i_47])))) : (((((/* implicit */_Bool) arr_30 [i_47] [i_52])) ? (((/* implicit */int) arr_30 [i_47] [i_47])) : (((/* implicit */int) arr_30 [i_47] [i_53]))))));
                                var_44 = var_1;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
