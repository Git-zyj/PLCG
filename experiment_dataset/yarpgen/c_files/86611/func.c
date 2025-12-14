/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86611
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86611 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86611
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
    var_18 = ((/* implicit */unsigned int) var_6);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        arr_3 [(signed char)17] = ((/* implicit */short) arr_2 [i_0]);
        arr_4 [(short)16] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (signed char)102)) && (((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (var_13) : (((/* implicit */int) (signed char)15))))), (max((arr_0 [i_0]), (((/* implicit */long long int) (signed char)16)))))))));
    }
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_2 = 2; i_2 < 8; i_2 += 1) 
        {
            var_19 = (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) var_16))))) < ((+(6723875098141990716ULL)))))));
            var_20 = ((/* implicit */long long int) var_15);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_14)))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) var_1))))) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))))) : (var_2))))));
            var_22 -= ((/* implicit */unsigned char) arr_7 [i_1]);
            var_23 = arr_0 [i_1];
            var_24 = ((/* implicit */signed char) arr_0 [i_3]);
        }
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            arr_17 [i_1] [7LL] [i_1] &= ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)29614))) | (var_7)))) ? (((((/* implicit */_Bool) var_12)) ? (arr_9 [i_4] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_11) : (var_6))))))) ? ((+(((/* implicit */int) max((arr_7 [i_4]), (((/* implicit */signed char) var_9))))))) : (((/* implicit */int) arr_16 [i_1] [i_4]))));
            /* LoopSeq 3 */
            for (long long int i_5 = 0; i_5 < 12; i_5 += 2) 
            {
                var_25 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) arr_10 [i_1])))), (((((/* implicit */int) (short)-19715)) | (((/* implicit */int) (_Bool)0))))));
                var_26 = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) % (-4462983612829621572LL)))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_8))))) : (((((((/* implicit */long long int) ((/* implicit */int) var_15))) <= (arr_13 [i_1] [i_1]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_1] [i_4]))) : (-578889732454399678LL))));
            }
            for (long long int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                var_27 -= ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (var_5)))))))) | ((-(((arr_15 [i_4]) % (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 3; i_7 < 11; i_7 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_8 = 0; i_8 < 12; i_8 += 3) 
                    {
                        var_28 = ((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1] [i_7 - 3]))));
                        var_29 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)39)) ? (((/* implicit */int) (signed char)43)) : (((/* implicit */int) (_Bool)1)))) / (((((/* implicit */_Bool) (signed char)46)) ? (((/* implicit */int) var_9)) : (var_13)))));
                        var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((unsigned int) (signed char)43)))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 12; i_9 += 3) 
                    {
                        var_31 -= ((/* implicit */long long int) ((var_3) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_7 - 1] [i_7 - 3] [i_7 - 1] [i_7 - 1])))));
                        var_32 -= ((/* implicit */signed char) arr_18 [i_9]);
                    }
                    for (signed char i_10 = 0; i_10 < 12; i_10 += 3) 
                    {
                        var_33 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_7 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (arr_6 [i_7 + 1])));
                        var_34 = ((/* implicit */unsigned int) ((int) ((4809262661630656994LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_31 [i_1] [i_1] [i_1] [i_1] [i_1])) < (((/* implicit */int) var_1))));
                        var_36 = ((((/* implicit */int) (short)19696)) <= (((/* implicit */int) arr_33 [i_7 - 2] [i_7 + 1] [i_4] [(short)2] [i_6] [i_4] [8])));
                    }
                    for (unsigned char i_11 = 0; i_11 < 12; i_11 += 2) 
                    {
                        arr_38 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) var_4)) : (var_13)));
                        var_37 &= ((/* implicit */unsigned long long int) ((unsigned short) arr_12 [i_1]));
                        arr_39 [i_4] &= arr_22 [i_7 - 1] [i_4] [i_6] [i_6];
                        var_38 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-22552))) : (13055550573117647058ULL)));
                    }
                    var_39 = ((/* implicit */short) (-(((/* implicit */int) arr_1 [i_7 + 1] [i_7 + 1]))));
                    arr_40 [i_1] [i_1] = ((/* implicit */short) var_11);
                    var_40 = ((/* implicit */signed char) ((unsigned long long int) var_9));
                }
                /* LoopSeq 1 */
                for (unsigned short i_12 = 1; i_12 < 11; i_12 += 1) 
                {
                    arr_43 [i_12] [(signed char)11] [i_12] [i_12 - 1] [i_12] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_17))) <= (((long long int) -1506784878)))))));
                    /* LoopSeq 1 */
                    for (long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        arr_46 [i_1] [9U] [(short)2] [i_13] [(signed char)3] [i_13] [i_12] = ((/* implicit */long long int) (-(min((((/* implicit */unsigned int) (~(((/* implicit */int) var_15))))), (((unsigned int) (signed char)47))))));
                        var_41 -= ((/* implicit */signed char) arr_24 [i_6] [i_4] [i_12 - 1] [i_12] [i_1]);
                    }
                }
                var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_41 [i_1] [(_Bool)1] [i_4] [i_1] [i_1]), (arr_41 [i_4] [(unsigned char)8] [i_6] [i_6] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)49384)) ? ((~(((/* implicit */int) arr_27 [i_6] [i_6] [i_6] [i_6] [i_6] [10LL])))) : (max((var_13), (((/* implicit */int) arr_21 [i_1] [4U]))))))) : ((+((+(var_2)))))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 3) 
            {
                arr_50 [i_1] [(unsigned short)8] [i_14] &= ((/* implicit */int) var_6);
                /* LoopNest 2 */
                for (unsigned int i_15 = 1; i_15 < 9; i_15 += 2) 
                {
                    for (short i_16 = 2; i_16 < 11; i_16 += 1) 
                    {
                        {
                            arr_56 [i_1] [i_4] [i_4] [(signed char)6] [i_16 + 1] = ((/* implicit */unsigned long long int) min((max((((/* implicit */unsigned int) (_Bool)0)), (arr_32 [i_14] [i_16 - 2]))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (arr_14 [i_15 + 1]) : (((/* implicit */int) var_16)))))));
                            arr_57 [i_4] [i_4] = ((/* implicit */unsigned short) ((int) ((_Bool) ((((/* implicit */_Bool) arr_49 [(_Bool)1])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            var_43 = ((/* implicit */short) (unsigned char)99);
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 4) 
            {
                for (signed char i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    {
                        arr_62 [i_1] [i_4] [i_17] [i_1] [i_4] [(_Bool)1] = ((/* implicit */unsigned char) (+(((((/* implicit */int) var_16)) - (((/* implicit */int) var_9))))));
                        var_44 = arr_0 [i_1];
                    }
                } 
            } 
            arr_63 [i_1] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) ((short) ((var_11) > (((/* implicit */long long int) ((/* implicit */int) var_12))))))), (var_15)));
        }
        /* LoopNest 3 */
        for (short i_19 = 2; i_19 < 9; i_19 += 3) 
        {
            for (signed char i_20 = 1; i_20 < 11; i_20 += 3) 
            {
                for (unsigned short i_21 = 1; i_21 < 11; i_21 += 1) 
                {
                    {
                        arr_73 [(signed char)4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_1] [i_1] [i_1])) ? (arr_68 [i_1] [i_19] [i_19] [i_21 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_58 [i_1] [i_19 + 3] [i_21 + 1])))))) ? (((((/* implicit */_Bool) arr_30 [i_1] [i_19] [i_20] [i_21 + 1] [i_21])) ? (((/* implicit */int) arr_58 [i_1] [i_1] [i_1])) : (((/* implicit */int) arr_58 [i_20 + 1] [i_19 + 2] [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) var_2)) > (15828713298987489504ULL))))));
                        arr_74 [i_21] [(_Bool)1] [i_20] [i_19] [(unsigned short)11] [(unsigned short)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) arr_18 [i_1])))) / (((((/* implicit */_Bool) arr_20 [i_1])) ? (arr_68 [(unsigned char)8] [(unsigned char)8] [i_20] [i_20 - 1]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)56))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (~(553087542U)))) ? (((/* implicit */int) ((arr_61 [i_1] [i_19] [i_20] [i_21 - 1]) > (((/* implicit */long long int) ((/* implicit */int) (signed char)93)))))) : (((/* implicit */int) arr_35 [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1] [i_21 - 1])))))));
                        /* LoopSeq 1 */
                        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                        {
                            arr_78 [i_1] [i_19 + 1] [i_20 + 1] [i_21] [i_21 - 1] [i_22] [i_22] = ((/* implicit */long long int) ((min((max((arr_71 [3ULL] [i_19 + 1]), (((/* implicit */unsigned int) var_1)))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)53670))))))) < (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)-19688)))))))));
                            var_45 -= ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_17))) <= (arr_61 [i_1] [i_21 - 1] [i_20 - 1] [i_19 + 3]))) ? ((-(var_10))) : (max((((/* implicit */long long int) arr_37 [i_19 + 3])), (arr_61 [i_1] [i_21 - 1] [i_20 + 1] [i_19 + 2])))));
                            var_46 = ((/* implicit */int) ((((/* implicit */unsigned int) (~((-(((/* implicit */int) var_12))))))) + ((+(arr_64 [11U] [i_20 + 1] [i_20])))));
                        }
                        arr_79 [(unsigned short)9] [(unsigned short)9] [i_20] [(unsigned short)9] = ((/* implicit */short) (+(((((/* implicit */_Bool) ((((/* implicit */int) arr_53 [(signed char)3] [i_20] [i_19] [5])) | (((/* implicit */int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_1] [i_20] [i_21 + 1]))))) : (((/* implicit */int) arr_37 [i_19 - 1]))))));
                    }
                } 
            } 
        } 
        var_47 -= ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
    }
    /* LoopNest 2 */
    for (long long int i_23 = 1; i_23 < 21; i_23 += 2) 
    {
        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
        {
            {
                var_48 = ((/* implicit */int) ((((/* implicit */_Bool) max(((-(var_3))), (((/* implicit */unsigned long long int) max((var_10), (((/* implicit */long long int) var_12)))))))) ? ((+(max((((/* implicit */unsigned long long int) arr_84 [i_23] [i_23])), (15130937249593428205ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))));
                /* LoopNest 2 */
                for (signed char i_25 = 2; i_25 < 21; i_25 += 2) 
                {
                    for (long long int i_26 = 2; i_26 < 20; i_26 += 3) 
                    {
                        {
                            arr_91 [i_26] = ((/* implicit */unsigned int) max(((-(arr_85 [i_26 + 2] [i_25 + 1]))), (((/* implicit */long long int) ((unsigned char) arr_85 [i_23 - 1] [i_23 + 1])))));
                            arr_92 [i_23] [i_23] [i_23] [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) max(((short)12848), (((/* implicit */short) (signed char)3)))))) ? (((/* implicit */int) (short)27410)) : (max((((/* implicit */int) min((((/* implicit */short) var_9)), (var_1)))), ((~(((/* implicit */int) (short)12848))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
