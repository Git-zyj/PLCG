/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 66243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=66243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/66243
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
    var_12 = ((/* implicit */short) (_Bool)1);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 2; i_1 < 8; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) ((((arr_8 [i_0] [(short)10] [i_1 + 2]) ? (((/* implicit */int) arr_8 [i_0] [2ULL] [i_1 - 2])) : (((/* implicit */int) arr_8 [i_0] [(unsigned short)0] [i_1 + 3])))) + ((~(((/* implicit */int) arr_8 [i_0] [(unsigned short)0] [i_1 + 2])))))))));
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 10; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
                        {
                            {
                                var_14 += ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_8))) != (((((/* implicit */_Bool) var_2)) ? (max((var_10), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((arr_1 [i_0]) ? (((/* implicit */int) (short)-27245)) : (((/* implicit */int) var_9)))))))));
                                var_15 -= ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_0] [i_0] [i_4]))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] [i_0] &= ((/* implicit */int) (~(((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (((2ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_2))))))));
    }
    /* vectorizable */
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                {
                    var_16 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) - (4592081078185207635ULL)));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        /* LoopSeq 4 */
                        for (long long int i_9 = 2; i_9 < 17; i_9 += 2) 
                        {
                            var_17 *= ((unsigned long long int) arr_24 [i_8] [i_6] [i_8 + 2] [(_Bool)1] [i_6] [(_Bool)1]);
                            arr_29 [i_5] [i_5] [i_7] = ((/* implicit */unsigned char) (~(arr_17 [i_5] [i_6])));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_19 [i_5] [i_5] [i_8 + 2])) < (((/* implicit */int) arr_19 [i_5] [i_5] [i_8 + 2]))));
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_8 + 2] [i_10])) * (((/* implicit */int) arr_22 [i_8 + 2] [i_10])))))));
                            var_20 -= var_1;
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 1) 
                        {
                            arr_35 [i_11] [i_6] [i_7] [i_5] [i_5] [i_11] [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
                            var_21 *= ((/* implicit */unsigned short) arr_30 [i_8 - 1] [i_8 - 1] [i_7] [i_8 - 1] [i_8 - 1]);
                        }
                        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
                        {
                            var_22 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_27 [i_5] [i_6] [i_7] [i_8] [(_Bool)1] [i_7]))));
                            arr_38 [i_5] [i_6] [i_6] [i_8] [i_6] [i_7] [i_5] = (!((_Bool)1));
                        }
                        arr_39 [i_5] [i_8] [i_7] [i_6] [i_5] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_5] [i_7])) ? (((((/* implicit */_Bool) -7764469857070469802LL)) ? (((/* implicit */unsigned long long int) 3002835553U)) : (10810758297186468659ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_5] [i_6] [i_7] [i_8] [i_5] [i_8 - 1])))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) var_6))));
                    }
                    for (signed char i_13 = 1; i_13 < 19; i_13 += 3) 
                    {
                        var_24 = ((/* implicit */_Bool) ((unsigned long long int) (_Bool)1));
                        /* LoopSeq 1 */
                        for (short i_14 = 1; i_14 < 19; i_14 += 3) 
                        {
                            arr_46 [i_5] [i_14] = ((/* implicit */unsigned long long int) ((arr_34 [i_5] [i_6] [i_6] [i_13] [(short)8] [i_13] [i_13 - 1]) ? (((((/* implicit */_Bool) 12083133087029848481ULL)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (signed char)-11)))) : ((+(((/* implicit */int) var_9))))));
                            arr_47 [i_5] [i_6] [i_7] = var_5;
                            var_25 = ((/* implicit */signed char) max((var_25), ((signed char)4)));
                        }
                    }
                }
            } 
        } 
        var_26 -= ((/* implicit */short) var_1);
        var_27 = (((((_Bool)1) ? (13149300593962363131ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_5]))));
        arr_48 [i_5] [i_5] = ((/* implicit */_Bool) ((unsigned long long int) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5]));
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 2) 
        {
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                {
                    var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5])) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_5] [i_15] [(unsigned short)5] [i_16] [i_5] [i_5] [i_5]))) : (arr_17 [i_5] [i_5]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
                    /* LoopNest 2 */
                    for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 20; i_18 += 3) 
                        {
                            {
                                var_29 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)237))));
                                arr_60 [i_18] [i_5] [(unsigned short)12] [i_5] [i_5] = ((/* implicit */unsigned short) 4294967285U);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_19 = 1; i_19 < 18; i_19 += 4) 
                    {
                        for (signed char i_20 = 2; i_20 < 19; i_20 += 2) 
                        {
                            {
                                arr_66 [i_5] [i_15] [i_15] [i_19 + 1] [i_19] [i_15] [i_15] = ((((/* implicit */int) arr_51 [i_5] [i_20 + 1])) >= (((/* implicit */int) var_7)));
                                var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) (_Bool)1))) ? (((/* implicit */int) (signed char)-32)) : (((/* implicit */int) (_Bool)1))));
                                var_31 = ((((/* implicit */_Bool) arr_19 [i_19 - 1] [i_5] [i_20 - 2])) && (((/* implicit */_Bool) arr_19 [i_19 + 1] [i_15] [i_20 - 2])));
                                var_32 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_51 [i_5] [i_20 - 1]))));
                                var_33 = ((/* implicit */unsigned long long int) min((var_33), ((~(7467974744449227284ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_34 *= ((/* implicit */signed char) ((((/* implicit */_Bool) 1840410928741599701ULL)) ? (((/* implicit */int) (unsigned short)25011)) : (((/* implicit */int) (signed char)-46))));
    var_35 *= ((/* implicit */unsigned int) var_2);
    /* LoopSeq 3 */
    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 2) 
    {
        var_36 = ((/* implicit */unsigned long long int) max((var_36), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_68 [i_21])) ? (((/* implicit */int) min((((/* implicit */short) arr_67 [i_21])), (arr_68 [i_21])))) : (((/* implicit */int) ((arr_67 [i_21]) && (((/* implicit */_Bool) var_10))))))), (((/* implicit */int) ((short) (+(((/* implicit */int) arr_67 [i_21])))))))))));
        arr_70 [i_21] = ((/* implicit */signed char) ((short) var_6));
    }
    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 3) 
    {
        /* LoopSeq 3 */
        for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
        {
            var_37 = ((/* implicit */_Bool) max((var_37), ((!(arr_71 [i_22] [i_23])))));
            /* LoopNest 3 */
            for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
            {
                for (unsigned long long int i_25 = 0; i_25 < 23; i_25 += 4) 
                {
                    for (unsigned long long int i_26 = 2; i_26 < 21; i_26 += 3) 
                    {
                        {
                            arr_83 [i_22] [i_22] [19ULL] [i_22] [(unsigned char)1] [i_22] [i_22] &= ((signed char) (+(((/* implicit */int) arr_79 [i_22] [i_23] [i_24 - 1] [i_26] [i_26]))));
                            var_38 = ((/* implicit */unsigned int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)41))));
                            var_39 = ((/* implicit */signed char) arr_82 [i_22] [i_22] [i_24 - 1] [i_25] [(unsigned char)17] [i_22]);
                            arr_84 [15ULL] [i_25] [i_24] [i_24] [i_23 - 1] [i_22] [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)107))))) ? (((/* implicit */int) (unsigned char)174)) : (max(((+(((/* implicit */int) (short)-24039)))), (((/* implicit */int) (short)-18411))))));
                            var_40 = (!((_Bool)1));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_27 = 0; i_27 < 23; i_27 += 2) 
            {
                arr_88 [i_27] [i_23] [(unsigned char)18] = ((/* implicit */unsigned long long int) var_10);
                arr_89 [i_22] [i_22] = ((/* implicit */short) ((_Bool) 13149300593962363124ULL));
            }
            var_41 -= 16364996652787285282ULL;
            var_42 *= ((/* implicit */signed char) 14435321641098817174ULL);
        }
        for (unsigned char i_28 = 1; i_28 < 22; i_28 += 4) 
        {
            arr_93 [i_22] [i_28] [i_28] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((((/* implicit */_Bool) 18096879966667497321ULL)) ? (8727343232606572206ULL) : (6759737153878707532ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) && (((/* implicit */_Bool) arr_92 [i_22] [i_28 - 1])))))))))));
            var_43 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) min((((/* implicit */short) (_Bool)1)), (var_0)))) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)32)), ((short)-27069))))) : (max((((/* implicit */long long int) var_4)), (842279315552996065LL))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) var_7)))))))))));
        }
        for (unsigned short i_29 = 0; i_29 < 23; i_29 += 3) 
        {
            arr_96 [i_29] [i_29] = ((/* implicit */short) (_Bool)1);
            var_44 = ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_67 [i_22]))))) < (max((63ULL), (((/* implicit */unsigned long long int) var_6)))))) ? (max((((((/* implicit */_Bool) (unsigned short)59165)) ? (16364996652787285299ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))), ((+(arr_87 [i_22]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_92 [i_22] [i_29]))));
            var_45 = ((/* implicit */_Bool) max((var_45), (((/* implicit */_Bool) ((max((max((arr_87 [i_29]), (((/* implicit */unsigned long long int) 199462630U)))), (((/* implicit */unsigned long long int) ((_Bool) (unsigned short)59664))))) * (((/* implicit */unsigned long long int) (+((-(((/* implicit */int) arr_71 [i_22] [i_29]))))))))))));
        }
        arr_97 [i_22] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) (short)30836)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-24868)))) >= ((~(((/* implicit */int) arr_72 [i_22]))))))) - (((((/* implicit */int) max((arr_77 [i_22] [i_22] [i_22]), (var_8)))) - ((((_Bool)1) ? (((/* implicit */int) (signed char)-83)) : (((/* implicit */int) (_Bool)1))))))));
        arr_98 [i_22] = ((/* implicit */_Bool) var_6);
    }
    for (short i_30 = 3; i_30 < 22; i_30 += 4) 
    {
        arr_102 [i_30] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_46 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) var_3)) * (((/* implicit */int) arr_101 [i_30] [i_30]))));
    }
}
