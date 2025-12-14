/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 91830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=91830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/91830
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
    for (unsigned char i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_1 - 1] [i_0] = ((/* implicit */unsigned int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_0 + 1] [i_1] [i_1 - 1]))) ^ (arr_2 [i_0])))));
                /* LoopNest 2 */
                for (unsigned int i_2 = 2; i_2 < 19; i_2 += 2) 
                {
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        {
                            arr_12 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1 - 1] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max(((short)-18160), ((short)(-32767 - 1)))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) arr_10 [i_3 + 1] [i_1 - 1] [i_1] [i_1 - 1] [i_0 - 3] [i_0 + 1])) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2]))) ^ (arr_2 [i_2])))))));
                            arr_13 [i_2] = ((/* implicit */signed char) arr_9 [i_1 - 1] [i_2 - 1] [i_0 - 2]);
                            arr_14 [i_0 + 1] [i_2] [i_2 - 1] [i_3 + 1] &= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) ? (((arr_10 [i_0] [i_2] [i_0] [i_3] [i_1] [i_3]) + (((/* implicit */int) arr_0 [i_2])))) : (((/* implicit */int) min((arr_1 [i_1]), (((/* implicit */unsigned short) arr_4 [i_0] [i_1] [i_2]))))))) / (((/* implicit */int) max((arr_1 [i_0 - 1]), (arr_1 [i_0 - 3]))))));
                            arr_15 [i_0] [i_0] [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0 - 3] [i_1 - 1] [i_2 + 1]))) ^ (var_7)))) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_1 - 1] [i_1 - 1] [i_2] [i_2 - 1] [i_3] [i_3]))))))));
                        }
                    } 
                } 
                arr_16 [18] = ((/* implicit */short) max((((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (short)32767)))), (min((((/* implicit */int) arr_1 [i_0 - 3])), (((((/* implicit */_Bool) arr_0 [(unsigned char)18])) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_1])) : (((/* implicit */int) var_11))))))));
                arr_17 [i_0] [i_0 - 2] [i_0] = ((/* implicit */int) (short)-15343);
                arr_18 [i_0] [i_1 - 1] [i_0] = ((/* implicit */signed char) ((((arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 2]) ^ (var_6))) ^ (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned int) -1957927792))))) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_0])))) : (arr_9 [i_1 - 1] [i_1] [i_0])))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            for (long long int i_6 = 2; i_6 < 15; i_6 += 3) 
            {
                for (short i_7 = 2; i_7 < 13; i_7 += 2) 
                {
                    {
                        arr_29 [i_5] [i_5] [i_4] [i_7] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_4]))) ^ (((((/* implicit */unsigned int) (-(((/* implicit */int) arr_4 [i_7] [i_6 - 1] [i_4]))))) ^ (min((((/* implicit */unsigned int) arr_28 [i_7] [i_7] [i_6] [i_5] [i_4] [i_4])), (1670176782U)))))));
                        arr_30 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */int) ((((arr_27 [i_5] [i_5] [i_5] [i_5]) ^ (((/* implicit */long long int) var_6)))) ^ (((arr_27 [i_5] [i_7 + 1] [i_7] [i_7]) ^ (((/* implicit */long long int) var_7))))));
                    }
                } 
            } 
        } 
        arr_31 [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_4])) ? (((/* implicit */int) (short)32767)) : (((((/* implicit */int) arr_20 [i_4])) ^ (((/* implicit */int) arr_4 [i_4] [i_4] [i_4]))))));
    }
    var_14 = ((/* implicit */short) ((((/* implicit */int) var_9)) ^ (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
    {
        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
                {
                    arr_42 [i_10] [i_8] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_32 [i_10])))), (((/* implicit */int) ((short) arr_41 [i_8] [i_10])))));
                    /* LoopNest 2 */
                    for (signed char i_11 = 0; i_11 < 24; i_11 += 3) 
                    {
                        for (_Bool i_12 = 0; i_12 < 0; i_12 += 1) 
                        {
                            {
                                arr_48 [i_8] = ((/* implicit */short) (-(((((/* implicit */_Bool) (short)-24236)) ? (8203474434394530659ULL) : (((/* implicit */unsigned long long int) 334105522U))))));
                                arr_49 [i_8] [i_9] [i_10] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6144)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_8] [i_9] [i_8] [i_11])) ? (((/* implicit */int) arr_40 [i_8] [i_10] [i_8] [i_12])) : (((/* implicit */int) arr_34 [i_8]))))) : (((((/* implicit */unsigned long long int) var_6)) ^ (arr_39 [i_8] [i_9] [i_10] [i_8])))))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_45 [i_11] [i_12 + 1] [i_12 + 1] [i_12] [i_12 + 1] [i_12]))))) : ((((-(var_3))) ^ (((/* implicit */long long int) ((/* implicit */int) arr_41 [i_8] [i_12 + 1])))))));
                                arr_50 [i_8] [i_8] [i_8] [i_9] [i_10] [i_11] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_11])) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_45 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]), (arr_45 [i_8] [i_9] [i_10] [i_11] [i_11] [i_12]))))) : (((((/* implicit */_Bool) arr_35 [i_8])) ? (((/* implicit */long long int) ((/* implicit */int) arr_45 [i_8] [i_9] [i_10] [i_12] [i_12] [i_11]))) : (arr_35 [i_11])))));
                                arr_51 [i_8] [i_8] [i_10] [i_10] [i_12] = ((/* implicit */unsigned short) arr_43 [i_8] [i_8]);
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (int i_13 = 1; i_13 < 23; i_13 += 3) 
                    {
                        arr_54 [i_8] [i_9] [i_10] [i_13] [i_9] [i_9] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_33 [i_13])) ^ (((/* implicit */int) arr_33 [i_8]))))) ? (((((/* implicit */unsigned long long int) arr_37 [i_8])) + (arr_43 [i_9] [i_8]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-2849))) : (var_7)))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_45 [i_8] [i_9] [i_9] [i_13 + 1] [i_13 + 1] [i_9])) ^ (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_47 [i_13] [i_10] [i_9] [i_8] [i_8])))))))));
                        arr_55 [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */int) (_Bool)1)) >> (((7970210224441192052ULL) - (7970210224441192042ULL))))), (((/* implicit */int) arr_46 [i_9] [i_10] [i_13 - 1]))));
                        arr_56 [i_8] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_39 [i_13 + 1] [i_9] [i_13] [i_8])) ? (7754141138231294285LL) : (((arr_36 [i_8] [i_10]) + (((/* implicit */long long int) ((/* implicit */int) var_4)))))))) ? (((((((/* implicit */unsigned long long int) arr_37 [i_8])) - (8203474434394530659ULL))) - ((-(arr_39 [i_8] [i_8] [i_10] [i_8]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_8])) - (((((/* implicit */_Bool) arr_32 [i_8])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)255))))))));
                    }
                    for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_15 = 0; i_15 < 24; i_15 += 3) 
                        {
                            arr_62 [i_8] [i_9] [i_14] [i_14 - 1] [i_15] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_8])) ^ (((/* implicit */int) (short)9937))))) ? (min((((/* implicit */unsigned int) arr_32 [i_8])), (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_8])) ? (10243269639315020943ULL) : (10243269639315020956ULL))))))) : (((((/* implicit */_Bool) arr_34 [i_8])) ? (((/* implicit */int) (unsigned char)0)) : (((((/* implicit */_Bool) (signed char)43)) ? (((/* implicit */int) arr_57 [i_8] [i_9] [i_10] [i_9] [i_15])) : (((/* implicit */int) (unsigned char)0))))))));
                            arr_63 [i_8] [i_9] [i_10] [i_14 - 1] [i_14] [i_15] [i_8] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-126)) & (((/* implicit */int) (unsigned short)19714))));
                            arr_64 [i_8] [i_14 - 1] [i_10] [i_10] [i_15] [i_10] [i_14] = ((/* implicit */long long int) ((((((/* implicit */int) arr_61 [i_10] [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])) ^ (((((/* implicit */_Bool) (unsigned char)178)) ? (var_6) : (((/* implicit */int) (_Bool)0)))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_57 [i_8] [i_14 - 1] [i_10] [i_14 - 1] [i_14])))))));
                            arr_65 [i_8] [i_9] [i_10] [i_10] [i_15] = ((/* implicit */signed char) arr_38 [i_8] [i_9] [i_8]);
                            arr_66 [i_8] [i_8] [i_10] [i_9] [i_10] [i_14] [i_15] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((((/* implicit */int) arr_60 [i_8] [i_8] [i_8] [i_8] [i_8])) ^ (((/* implicit */int) arr_60 [i_8] [i_9] [i_10] [i_14 - 1] [i_15])))), (((((/* implicit */int) arr_59 [i_8] [i_10])) ^ (((/* implicit */int) var_4))))))) ? (min((((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)-126)))), (((/* implicit */int) (signed char)0)))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_47 [i_8] [i_9] [i_10] [i_14 - 1] [i_15]))))) ^ (min((((/* implicit */int) (unsigned char)97)), (61861124)))))));
                        }
                        for (long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                        {
                            arr_70 [i_10] [i_10] = ((/* implicit */signed char) ((((/* implicit */_Bool) 8203474434394530659ULL)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (short)-32740))));
                            arr_71 [i_9] [i_9] [i_9] [i_9] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) min((arr_59 [i_14 - 1] [i_8]), (arr_59 [i_14 - 1] [i_8]))))) * (((((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_8] [i_9] [i_14]))) / (arr_35 [i_10]))) * (((/* implicit */long long int) ((/* implicit */int) ((signed char) -363347273))))))));
                        }
                        arr_72 [i_8] [i_9] [i_8] [i_14] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */long long int) max((max((arr_67 [i_8] [i_8] [i_8] [i_8] [i_8]), (((/* implicit */unsigned int) 363347291)))), (((/* implicit */unsigned int) ((int) 10476533849268359563ULL)))))) ^ (max((((/* implicit */long long int) (short)(-32767 - 1))), (-6517755934738326828LL)))));
                    }
                    for (unsigned char i_17 = 0; i_17 < 24; i_17 += 2) 
                    {
                        arr_76 [i_10] [i_8] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) (+(((arr_52 [i_8] [i_9] [i_10] [i_17]) ^ (arr_52 [i_17] [i_9] [i_10] [i_10])))));
                        arr_77 [i_10] [i_10] [i_9] [i_10] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_74 [i_8] [i_17] [i_10] [i_17]) ^ (((/* implicit */unsigned long long int) 569087809U))))) ? (((arr_74 [i_8] [i_17] [i_8] [i_8]) ^ (arr_74 [i_8] [i_10] [i_10] [i_17]))) : (((arr_74 [i_8] [i_10] [i_10] [i_17]) ^ (arr_74 [i_8] [i_10] [i_8] [i_8])))));
                    }
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        arr_80 [i_8] [i_8] [i_9] [i_10] [i_18] = ((/* implicit */long long int) (signed char)-24);
                        arr_81 [i_8] [i_8] [i_8] [i_18] [i_10] [i_18] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) arr_59 [i_8] [i_8])), (arr_43 [i_8] [i_8])))));
                    }
                }
                for (unsigned long long int i_19 = 0; i_19 < 24; i_19 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (long long int i_20 = 1; i_20 < 23; i_20 += 2) 
                    {
                        for (short i_21 = 0; i_21 < 24; i_21 += 2) 
                        {
                            {
                                arr_89 [i_8] [i_9] [i_19] [i_20] [i_8] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-120)) ? (arr_79 [i_8] [i_9] [i_19]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)77)))))) ? (min((((/* implicit */unsigned long long int) 363347272)), (2933286829297878673ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_20 - 1] [i_20] [i_20 - 1]))))))));
                                arr_90 [i_8] [i_9] [i_19] [i_20 - 1] [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */int) (short)(-32767 - 1))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) arr_88 [i_21] [i_20 + 1] [i_19] [i_8] [i_9] [i_8] [i_8])) : (var_6))))))));
                            }
                        } 
                    } 
                    arr_91 [i_19] [i_9] [i_19] = var_1;
                }
                for (int i_22 = 0; i_22 < 24; i_22 += 2) 
                {
                    arr_96 [i_8] = ((/* implicit */long long int) ((((2147483647) << (((((((/* implicit */int) (short)-32761)) + (32766))) - (5))))) ^ (((/* implicit */int) max(((unsigned char)108), ((unsigned char)10))))));
                    /* LoopNest 2 */
                    for (short i_23 = 3; i_23 < 23; i_23 += 3) 
                    {
                        for (short i_24 = 2; i_24 < 23; i_24 += 2) 
                        {
                            {
                                arr_103 [i_8] [i_23] [i_24] = ((((((/* implicit */int) arr_59 [i_23 + 1] [i_8])) ^ (((/* implicit */int) arr_59 [i_23 - 1] [i_8])))) ^ ((-(((/* implicit */int) var_4)))));
                                arr_104 [i_24] [i_8] [i_8] [i_23 + 1] [i_24] [i_23] [i_8] = ((/* implicit */_Bool) max((((/* implicit */long long int) (~(((((/* implicit */_Bool) 10408494188460154604ULL)) ? (var_12) : (var_7)))))), (min((((/* implicit */long long int) var_7)), (((((/* implicit */long long int) 1265552217)) + (arr_35 [i_9])))))));
                                arr_105 [i_8] [i_24] [i_23 - 3] [i_22] [i_9] [i_8] = ((/* implicit */short) (~(max((((/* implicit */int) (unsigned char)209)), (2147483647)))));
                            }
                        } 
                    } 
                    arr_106 [i_8] [i_9] [i_22] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)77)) ? (5172491087898909209ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)36)))))) ? (((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)84))) : (7042472111502043446ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_67 [i_8] [i_8] [i_8] [i_9] [i_22]))))))));
                    arr_107 [i_8] [i_9] [i_8] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */int) arr_87 [i_8] [i_9] [i_22] [i_22] [i_22])), (((((/* implicit */int) arr_99 [i_8] [i_9] [i_9] [i_9] [i_22])) ^ (((/* implicit */int) arr_75 [i_8] [i_8] [i_8] [i_8] [i_8] [i_8]))))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_101 [i_9] [i_9] [i_22] [i_8] [i_22] [i_22])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_82 [i_22] [i_9] [i_22] [i_22]))) : (arr_86 [i_8] [i_9] [i_22] [i_8] [i_22])))), ((+(arr_74 [i_8] [i_8] [i_22] [i_8]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_47 [i_22] [i_9] [i_22] [i_8] [i_22]), (arr_47 [i_8] [i_9] [i_8] [i_9] [i_8])))))));
                }
                /* LoopNest 3 */
                for (unsigned char i_25 = 1; i_25 < 23; i_25 += 3) 
                {
                    for (unsigned char i_26 = 2; i_26 < 20; i_26 += 2) 
                    {
                        for (unsigned long long int i_27 = 0; i_27 < 24; i_27 += 3) 
                        {
                            {
                                arr_115 [i_8] [i_9] [i_25] [i_26] [i_27] &= ((/* implicit */short) (-(max((((/* implicit */unsigned long long int) arr_112 [i_8] [i_8] [i_8] [i_8] [i_8])), (min((arr_79 [i_8] [i_25 - 1] [i_26 - 2]), (((/* implicit */unsigned long long int) arr_82 [i_8] [i_8] [i_8] [i_8]))))))));
                                arr_116 [i_8] [i_9] [i_25] [i_26] [i_8] = ((/* implicit */signed char) (unsigned short)35015);
                                arr_117 [i_8] [i_9] [i_25] [i_8] [i_27] = ((/* implicit */_Bool) ((3216247330U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)81)))));
                            }
                        } 
                    } 
                } 
                arr_118 [i_8] [i_8] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (signed char)99)) ^ (((/* implicit */int) (unsigned short)35015)))) ^ (2035877764)));
            }
        } 
    } 
}
