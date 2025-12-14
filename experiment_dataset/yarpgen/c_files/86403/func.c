/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86403
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_1])))))));
                    arr_10 [i_0] [i_2] [6U] [i_0] = (((+(((/* implicit */int) (unsigned char)185)))) | (max((((/* implicit */int) arr_7 [i_0] [i_0] [i_0])), (arr_3 [(unsigned char)10]))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) var_14))));
    /* LoopNest 2 */
    for (int i_3 = 2; i_3 < 14; i_3 += 4) 
    {
        for (int i_4 = 0; i_4 < 16; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    arr_19 [(short)4] [i_4] [i_5 - 1] = ((/* implicit */unsigned char) max(((-((~(((/* implicit */int) arr_12 [(short)1] [(short)11])))))), (((/* implicit */int) (short)28721))));
                    /* LoopSeq 1 */
                    for (short i_6 = 0; i_6 < 16; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((/* implicit */unsigned int) (~(arr_4 [i_5 - 1] [i_5 - 1] [i_5 + 2])))) ^ (max(((~(arr_18 [(short)8] [i_4] [i_5] [i_5]))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_5 [i_3] [i_5 + 2] [i_6]))))))))))));
                        arr_22 [i_3] [(unsigned char)10] [i_3] [i_3] [i_6] [(short)15] = ((/* implicit */short) arr_13 [i_5]);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_7 = 1; i_7 < 15; i_7 += 4) 
                    {
                        arr_26 [i_3] [i_4] [i_5] [1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) max((arr_21 [i_3] [i_3]), (arr_3 [i_4])))), (((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_3] [i_3] [(unsigned char)11])))))))) ? (((((/* implicit */int) (unsigned char)116)) * (((/* implicit */int) arr_23 [(short)3] [i_5] [i_5 + 1] [i_7 - 1])))) : (((/* implicit */int) (unsigned char)116))));
                        arr_27 [(short)8] [i_4] [(short)14] [i_4] = (-((-(((/* implicit */int) ((short) arr_0 [13U]))))));
                        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_25 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7] [i_7] [i_7]))) ? (((/* implicit */int) (short)-6864)) : (((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) (short)28714))))), (arr_2 [i_3 + 1]))))));
                        arr_28 [i_3] [i_4] [15] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_3] [11] [(short)5])) ? (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [i_3 - 1] [i_3] [i_3] [i_3])) ? (arr_21 [i_3] [i_4]) : (((/* implicit */int) arr_23 [i_3] [i_4] [i_5] [i_7 - 1]))))), (min((((/* implicit */unsigned int) arr_4 [i_3] [i_4] [i_5])), (arr_18 [i_4] [i_4] [9U] [i_4]))))) : (((/* implicit */unsigned int) ((arr_4 [i_3 + 1] [i_7 - 1] [i_5 + 1]) - (((/* implicit */int) (unsigned char)147)))))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) (+((-(min((var_3), (((/* implicit */unsigned int) var_4)))))))))));
                            arr_34 [i_8] [i_8] [(unsigned char)2] [i_8] [i_8] [(unsigned char)0] [(unsigned char)7] = min((arr_23 [(short)13] [i_3 - 1] [i_5] [i_5 + 1]), (max(((short)-21604), (arr_23 [i_9] [i_3 - 1] [i_9] [i_5 - 1]))));
                        }
                        for (short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            arr_38 [(short)4] [i_10] [i_5] [(short)7] [i_10] = ((/* implicit */short) (-(((/* implicit */int) (short)-28721))));
                            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) ((((/* implicit */unsigned int) (~(arr_4 [10] [i_3 - 2] [1])))) ^ ((+(arr_13 [i_3 - 2]))))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), ((unsigned char)65)));
                        }
                        for (short i_11 = 0; i_11 < 16; i_11 += 1) /* same iter space */
                        {
                            var_21 = ((/* implicit */unsigned char) ((short) max((((/* implicit */int) (short)7806)), ((+(((/* implicit */int) (short)28721)))))));
                            var_22 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_3] [(short)10] [i_3] [i_3 - 2] [i_3 + 2] [i_3])) && (((/* implicit */_Bool) arr_40 [(short)5] [i_3] [i_3] [i_3 + 2] [i_3 - 2] [i_3]))))), (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)15385)) : (((/* implicit */int) arr_1 [(short)9]))))), (arr_14 [i_3 - 1] [i_5 - 1])))));
                            arr_43 [13] [i_8] [i_8] [i_8] [15] = ((/* implicit */short) ((((/* implicit */_Bool) (short)19570)) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 4086112852U)))))) : ((+(((/* implicit */int) (unsigned char)24))))));
                        }
                        arr_44 [i_4] = ((/* implicit */unsigned char) -1479682460);
                    }
                    var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-(((/* implicit */int) (((+(-1100819170))) == (((/* implicit */int) arr_29 [(unsigned char)0] [(unsigned char)2] [i_5] [i_4] [i_5] [14U]))))))))));
                }
                arr_45 [i_3 - 2] [i_4] [(unsigned char)15] = ((/* implicit */unsigned char) arr_32 [i_3] [i_3] [i_3 + 2] [i_4] [i_4]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_12 = 0; i_12 < 21; i_12 += 3) 
    {
        for (unsigned int i_13 = 0; i_13 < 21; i_13 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 21; i_15 += 1) 
                    {
                        for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                        {
                            {
                                arr_58 [i_12] [i_13] [0U] [i_15] [i_16] [i_16] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) (-(965323163U)))) ? (((((/* implicit */_Bool) (unsigned char)30)) ? (((/* implicit */unsigned int) arr_48 [i_15] [i_13])) : (arr_49 [i_12]))) : (min((var_6), (((/* implicit */unsigned int) arr_46 [i_15] [i_15])))))), (((/* implicit */unsigned int) arr_54 [i_12] [i_12] [i_12] [i_12]))));
                                var_24 = ((/* implicit */unsigned int) arr_50 [i_15]);
                                arr_59 [(short)9] [(short)8] [i_14] [i_15] [(short)15] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_52 [(unsigned char)10] [i_13] [i_15] [i_16])))) > ((-(208854444U)))));
                                var_25 = ((/* implicit */short) arr_55 [(unsigned char)15] [i_13] [i_13] [i_13] [i_13]);
                                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) arr_54 [i_12] [i_12] [i_12] [i_12])) && ((!(((/* implicit */_Bool) arr_50 [i_12]))))));
                            }
                        } 
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned char i_17 = 2; i_17 < 18; i_17 += 1) 
                {
                    arr_62 [i_12] = ((/* implicit */short) 208854459U);
                    arr_63 [i_12] [i_12] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */int) (unsigned char)15)) >> (((((/* implicit */int) (short)-27210)) + (27229)))));
                }
                for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
                {
                    /* LoopSeq 2 */
                    for (short i_19 = 0; i_19 < 21; i_19 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_20 = 1; i_20 < 20; i_20 += 1) 
                        {
                            var_27 = ((/* implicit */int) min((((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) max(((short)-6878), ((short)9176))))))), (((/* implicit */unsigned int) var_1))));
                            var_28 = ((/* implicit */unsigned char) min((var_28), (((/* implicit */unsigned char) ((((/* implicit */int) var_8)) | (((/* implicit */int) (short)23041)))))));
                        }
                        for (unsigned char i_21 = 0; i_21 < 21; i_21 += 3) 
                        {
                            arr_75 [i_12] [i_12] [i_13] [(short)15] [(short)1] [i_19] [i_18] = ((/* implicit */short) ((1367565540U) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) min(((unsigned char)122), ((unsigned char)10)))))))));
                            arr_76 [i_18] [15] = ((/* implicit */short) min((((((/* implicit */int) (short)-6864)) | (((/* implicit */int) (unsigned char)208)))), (((/* implicit */int) (((-(965323163U))) >= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)119))))))));
                            var_29 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_49 [(short)20])) ? (((/* implicit */int) (unsigned char)249)) : (((/* implicit */int) arr_50 [i_12])))), (((((arr_48 [i_13] [(unsigned char)15]) == (((/* implicit */int) (short)14304)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [(unsigned char)16] [(unsigned char)8]))))) : (arr_68 [i_18] [(short)0] [i_18] [i_19] [i_21])))));
                        }
                        for (unsigned char i_22 = 3; i_22 < 17; i_22 += 1) 
                        {
                            arr_81 [i_18] [(short)0] [i_22] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_69 [(short)15] [i_22 + 4] [(short)3] [i_22 - 2] [i_22 - 1])) & (((/* implicit */int) (((-(((/* implicit */int) arr_80 [14U] [20] [i_18] [i_19] [i_22])))) <= (((/* implicit */int) arr_46 [i_12] [i_13])))))));
                            var_30 = ((/* implicit */unsigned char) (short)-4527);
                            var_31 = ((/* implicit */unsigned char) max((((((/* implicit */int) (short)27210)) + (((/* implicit */int) (short)8423)))), (((((/* implicit */int) arr_77 [(unsigned char)16] [i_13] [i_13] [i_19] [(short)15])) << (((((int) 585561559U)) - (585561549)))))));
                        }
                        var_32 = ((/* implicit */int) min((var_32), (((((((/* implicit */_Bool) arr_50 [i_12])) ? (((/* implicit */int) min((var_1), ((short)-15106)))) : (((arr_47 [i_19]) | (2120834850))))) % (((/* implicit */int) min(((short)16376), (((/* implicit */short) arr_51 [i_12])))))))));
                        /* LoopSeq 2 */
                        for (short i_23 = 0; i_23 < 21; i_23 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned char) var_5);
                            var_34 *= ((/* implicit */short) ((((/* implicit */_Bool) min((arr_56 [i_12] [i_13] [i_18] [(short)8] [i_23]), (arr_56 [i_12] [i_13] [i_18] [2U] [i_23])))) ? (max((arr_48 [i_13] [i_19]), (arr_48 [i_13] [i_18]))) : (((/* implicit */int) var_11))));
                            arr_84 [i_12] [i_18] = ((/* implicit */short) (((!(((/* implicit */_Bool) -66329536)))) ? (max(((-(arr_49 [(short)8]))), (((/* implicit */unsigned int) arr_73 [i_18] [(unsigned char)19])))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_69 [i_12] [i_13] [i_18] [i_19] [i_23])))))));
                        }
                        for (short i_24 = 1; i_24 < 20; i_24 += 3) 
                        {
                            var_35 = ((/* implicit */int) arr_82 [i_18] [i_13] [5U]);
                            var_36 = ((/* implicit */int) min((((/* implicit */unsigned int) (-(((((/* implicit */int) (short)16376)) - (((/* implicit */int) var_11))))))), (min((1822949831U), (((/* implicit */unsigned int) arr_80 [i_24 + 1] [i_24] [i_24 - 1] [i_24 - 1] [i_24 - 1]))))));
                            var_37 = ((/* implicit */unsigned char) min((var_37), ((unsigned char)22)));
                        }
                        var_38 = ((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) 2120834836)) + (arr_82 [i_18] [i_13] [i_18]))) % (((/* implicit */unsigned int) min((-727424722), (((/* implicit */int) arr_80 [19] [(short)2] [i_13] [i_18] [(short)19])))))))) && (((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_48 [i_18] [i_18])) % (((var_3) >> (((/* implicit */int) (unsigned char)12)))))))));
                        var_39 = ((/* implicit */unsigned char) -66329536);
                    }
                    for (unsigned char i_25 = 1; i_25 < 18; i_25 += 2) 
                    {
                        arr_91 [(short)2] [i_18] [13] = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) -237365183)) ? (((/* implicit */int) arr_77 [i_25] [(short)19] [i_25 + 1] [(short)16] [(short)8])) : (((/* implicit */int) (unsigned char)51)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_88 [i_13] [i_25 - 1] [i_25] [i_25] [i_25 + 3] [i_25])) || (((/* implicit */_Bool) arr_88 [i_13] [i_25 - 1] [i_25 - 1] [i_13] [i_25 + 3] [i_25 - 1])))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_26 = 3; i_26 < 20; i_26 += 1) 
                        {
                            var_40 = ((/* implicit */unsigned char) max((var_40), (((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) & (1577375513U))), (((/* implicit */unsigned int) (~((-(237365183)))))))))));
                            arr_94 [i_18] = ((/* implicit */short) (((-(((/* implicit */int) ((((/* implicit */_Bool) arr_51 [i_12])) || (((/* implicit */_Bool) var_13))))))) & (((/* implicit */int) (unsigned char)100))));
                            var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_54 [20U] [i_18] [i_25] [i_26 + 1])) ^ (((/* implicit */int) var_2))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_12] [i_13] [i_25] [i_26 - 1]))))) : ((-(((/* implicit */int) arr_54 [i_12] [(short)18] [i_12] [i_12])))))))));
                            var_42 = ((/* implicit */short) (+(((arr_47 [i_13]) & (arr_47 [i_12])))));
                        }
                        arr_95 [i_18] = ((/* implicit */unsigned char) (+((~(((/* implicit */int) (unsigned char)98))))));
                        arr_96 [i_18] = ((/* implicit */short) min((((/* implicit */unsigned int) min((2147483647), (((/* implicit */int) (unsigned char)255))))), ((+(min((var_6), (((/* implicit */unsigned int) arr_51 [i_12]))))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_27 = 1; i_27 < 20; i_27 += 1) 
                    {
                        for (short i_28 = 0; i_28 < 21; i_28 += 3) 
                        {
                            {
                                var_43 = ((/* implicit */unsigned char) -909641400);
                                var_44 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (short)5868))))))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
}
