/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69779
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
    var_14 = ((/* implicit */int) (unsigned char)95);
    var_15 += ((/* implicit */unsigned short) max((max((max((var_3), (((/* implicit */unsigned long long int) -1000215629)))), (((/* implicit */unsigned long long int) (short)-17672)))), (max((((/* implicit */unsigned long long int) var_2)), (var_8)))));
    var_16 = ((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)93)), (1000215629)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 3; i_0 < 10; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            {
                arr_4 [i_0] [i_0] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) max((-1000215606), (1000215605))))));
                var_17 = ((/* implicit */signed char) ((unsigned char) 4052101569U));
                arr_5 [i_0] = ((/* implicit */unsigned int) 1481894175);
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_2 = 3; i_2 < 15; i_2 += 2) 
    {
        arr_8 [i_2] = ((/* implicit */signed char) (+(arr_7 [i_2])));
        var_18 += ((/* implicit */unsigned short) ((signed char) (unsigned short)60874));
        var_19 = ((/* implicit */signed char) var_4);
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 20; i_3 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_4 = 4; i_4 < 19; i_4 += 3) 
        {
            for (signed char i_5 = 1; i_5 < 19; i_5 += 1) 
            {
                for (unsigned short i_6 = 1; i_6 < 19; i_6 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) arr_21 [i_5 - 1] [i_4] [i_6 - 1] [i_6 - 1] [i_4 - 1] [i_3])))));
                        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((unsigned long long int) (~(((/* implicit */int) (signed char)-77))))))));
                    }
                } 
            } 
        } 
        arr_22 [i_3] = ((/* implicit */_Bool) var_10);
    }
    for (unsigned int i_7 = 1; i_7 < 24; i_7 += 3) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 3) 
        {
            for (unsigned short i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                for (int i_10 = 0; i_10 < 25; i_10 += 3) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) max((max((((/* implicit */unsigned long long int) ((unsigned short) (signed char)-89))), (((((/* implicit */_Bool) var_9)) ? (var_3) : (var_8))))), (((/* implicit */unsigned long long int) max((((/* implicit */int) var_11)), (-1000215580)))))))));
                        var_23 = ((/* implicit */unsigned char) max(((~(((((/* implicit */_Bool) (unsigned short)52664)) ? (11032543441892176884ULL) : (((/* implicit */unsigned long long int) 1000215605)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -1000215629)), (arr_33 [i_7] [i_7] [i_8] [i_8 - 1] [i_7] [i_7 + 1]))))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 1; i_11 < 23; i_11 += 3) 
                        {
                            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_34 [i_7] [i_11] [i_7] [i_11] [i_10]))));
                            arr_36 [i_7] [i_8] [i_7] [i_10] [i_11] = ((/* implicit */signed char) (-(max((((/* implicit */unsigned long long int) var_11)), (var_8)))));
                            var_25 = ((((/* implicit */_Bool) (unsigned short)45137)) ? (((((11068070480180728346ULL) == (((/* implicit */unsigned long long int) -1000215629)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15155))) - (var_4))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_26 [i_7])), ((unsigned char)136))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_26 [i_7])), (((unsigned short) arr_33 [(_Bool)1] [(_Bool)1] [i_9 - 1] [(unsigned short)21] [i_7] [i_9 - 1])))))));
                            var_26 = ((/* implicit */unsigned short) arr_26 [i_7]);
                        }
                        /* vectorizable */
                        for (unsigned char i_12 = 2; i_12 < 24; i_12 += 1) 
                        {
                            arr_40 [i_7] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9063279849117044361LL))));
                            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_33 [i_7] [i_7] [i_9] [i_9] [i_7] [i_7])))) ? ((-(((/* implicit */int) var_12)))) : (((/* implicit */int) ((unsigned short) var_11)))));
                        }
                        for (int i_13 = 3; i_13 < 22; i_13 += 1) 
                        {
                            arr_44 [i_13] [i_10] [i_7] [i_7] [(_Bool)1] [i_7 - 1] = ((/* implicit */unsigned long long int) max((8853312214736558090LL), (((/* implicit */long long int) (unsigned short)60885))));
                            arr_45 [i_7] [i_7] [3LL] [i_7] [i_7] [i_7] [(unsigned char)24] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)194))));
                        }
                        for (unsigned short i_14 = 0; i_14 < 25; i_14 += 1) 
                        {
                            var_28 += ((/* implicit */long long int) (-((+(((/* implicit */int) (unsigned short)4650))))));
                            arr_49 [i_7] [15U] [i_7] [i_7] [i_7 - 1] [i_7 - 1] [i_7] = ((/* implicit */_Bool) ((unsigned short) (~(((/* implicit */int) arr_32 [i_14] [i_14] [i_14] [i_14])))));
                        }
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_15 = 2; i_15 < 22; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 25; i_16 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_17 = 0; i_17 < 25; i_17 += 1) 
                    {
                        for (short i_18 = 2; i_18 < 21; i_18 += 1) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)52664))))) | (arr_59 [i_7 + 1] [i_15 + 1] [i_16] [i_17] [i_7 + 1]))) & (((/* implicit */long long int) (~((~(arr_25 [i_7 + 1] [i_17]))))))));
                                var_30 = ((/* implicit */unsigned char) min((1802875720U), (((/* implicit */unsigned int) (unsigned char)136))));
                            }
                        } 
                    } 
                    arr_62 [i_7] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_19 = 0; i_19 < 25; i_19 += 4) 
        {
            arr_66 [i_7] [i_19] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_48 [i_7 + 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_7 - 1])))));
            arr_67 [i_7] = ((/* implicit */unsigned int) ((unsigned short) arr_28 [i_7] [i_7 - 1] [i_7 - 1] [i_7 + 1]));
            arr_68 [i_7] [i_7] [i_19] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_28 [i_7] [i_19] [i_7 + 1] [(unsigned char)18])) - (arr_65 [i_7 - 1] [i_7 + 1] [i_7 + 1])));
        }
        for (signed char i_20 = 0; i_20 < 25; i_20 += 1) 
        {
            arr_72 [i_7] = ((/* implicit */signed char) ((((arr_38 [i_7] [i_7] [i_7] [i_7 - 1] [(signed char)8]) == (arr_38 [i_7 + 1] [i_7] [i_7] [i_7 + 1] [i_7 - 1]))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_41 [i_20] [i_20] [i_7] [i_20] [i_7] [i_20] [i_20])) : (((/* implicit */int) (unsigned short)60885)))))));
            /* LoopSeq 1 */
            for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
            {
                arr_75 [i_7 + 1] [7U] [i_7] = ((/* implicit */unsigned int) min((((((3679007368004344583ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_46 [i_7]))))) * (7414200631817374736ULL))), (((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) (unsigned short)4661))))))));
                var_31 += ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) arr_50 [16U] [16U])) ? (((/* implicit */int) (unsigned short)60844)) : (1475781327))), (((((/* implicit */int) arr_73 [i_7] [i_21] [i_21] [i_21])) / (1939032590))))), (max((((((/* implicit */_Bool) (unsigned short)12872)) ? (((/* implicit */int) (unsigned short)12872)) : (((/* implicit */int) (unsigned short)60875)))), (((243964468) / (((/* implicit */int) arr_50 [(unsigned short)14] [i_7]))))))));
                var_32 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)60844)) ? (arr_28 [(signed char)8] [i_7 - 1] [i_7 + 1] [i_7 - 1]) : (((/* implicit */int) arr_50 [10LL] [i_20])))))));
                var_33 += ((/* implicit */short) ((((long long int) var_12)) * (((/* implicit */long long int) max((((((/* implicit */_Bool) arr_31 [i_7] [i_20] [(signed char)6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)71)))), (((/* implicit */int) arr_41 [i_7 + 1] [i_7] [0LL] [i_7 + 1] [i_20] [i_7] [i_20])))))));
            }
            var_34 = ((/* implicit */signed char) max((((arr_52 [i_7 + 1] [i_7] [i_7 + 1]) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))), (((/* implicit */unsigned long long int) max((1645048637544073833LL), (((/* implicit */long long int) (unsigned char)81)))))));
            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) arr_41 [i_20] [i_20] [(unsigned short)2] [i_20] [i_20] [i_20] [i_20]))));
        }
        for (unsigned char i_22 = 0; i_22 < 25; i_22 += 1) 
        {
            var_36 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)52489))) : (var_6))))))), (((((/* implicit */_Bool) arr_24 [i_22] [i_7])) ? (arr_25 [i_22] [i_7 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7 - 1] [i_7])))))));
            /* LoopNest 2 */
            for (unsigned char i_23 = 2; i_23 < 24; i_23 += 1) 
            {
                for (unsigned int i_24 = 1; i_24 < 22; i_24 += 3) 
                {
                    {
                        var_37 = ((/* implicit */unsigned short) arr_79 [i_7]);
                        arr_84 [i_7] [i_7] [i_23] = ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) 1645048637544073833LL)) + (((unsigned long long int) arr_73 [i_7 - 1] [i_22] [i_23] [i_22])))), (((/* implicit */unsigned long long int) ((signed char) ((signed char) (unsigned char)158))))));
                        var_38 = arr_52 [i_7 - 1] [i_7 - 1] [i_23];
                    }
                } 
            } 
        }
        /* LoopNest 3 */
        for (signed char i_25 = 0; i_25 < 25; i_25 += 3) 
        {
            for (unsigned int i_26 = 2; i_26 < 22; i_26 += 3) 
            {
                for (unsigned long long int i_27 = 2; i_27 < 24; i_27 += 3) 
                {
                    {
                        var_39 += ((/* implicit */unsigned long long int) (signed char)-57);
                        var_40 += ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-12))))) ? ((-(((/* implicit */int) arr_53 [i_27 - 2] [i_25])))) : (((/* implicit */int) ((unsigned short) var_2)))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
        {
            for (unsigned char i_29 = 2; i_29 < 24; i_29 += 1) 
            {
                {
                    var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) (-(arr_34 [i_7] [i_7 + 1] [i_29 - 2] [i_28] [11ULL]))))));
                    /* LoopNest 2 */
                    for (signed char i_30 = 0; i_30 < 25; i_30 += 1) 
                    {
                        for (signed char i_31 = 0; i_31 < 25; i_31 += 3) 
                        {
                            {
                                var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) var_12)), ((short)10031)))) || (((/* implicit */_Bool) (signed char)-50))));
                                arr_104 [i_7 + 1] [i_7 - 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [i_7] = ((/* implicit */_Bool) (((~(318526600594681471ULL))) & (max((arr_52 [i_29 + 1] [i_29 - 2] [i_7 - 1]), (arr_52 [i_29 - 1] [i_28] [i_7 + 1])))));
                                var_43 = ((/* implicit */signed char) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)14853)));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (unsigned char i_32 = 0; i_32 < 19; i_32 += 3) 
    {
        arr_107 [i_32] [i_32] = ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_2)), (var_3))))))), (max((((/* implicit */int) max(((unsigned short)60837), (var_0)))), ((~(((/* implicit */int) arr_55 [i_32] [i_32] [i_32] [14ULL]))))))));
        arr_108 [i_32] = ((/* implicit */unsigned long long int) -1914920420);
    }
}
