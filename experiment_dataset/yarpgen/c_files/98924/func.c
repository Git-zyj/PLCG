/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 98924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=98924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/98924
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (unsigned short i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_14 ^= ((/* implicit */int) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [(_Bool)1]))) | (((arr_5 [i_0] [i_1] [i_2] [i_1]) % (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 17; i_3 += 4) 
                    {
                        for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */short) (-(((((/* implicit */_Bool) min((var_0), (((/* implicit */unsigned int) var_3))))) ? ((+(((/* implicit */int) (signed char)-119)))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_4 [i_0])), (var_5))))))));
                                var_16 = ((/* implicit */unsigned int) var_10);
                                arr_10 [i_4] [i_0] [i_2] [i_0] [i_4] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0] [i_0] [i_2])), (var_1)))) ? (((/* implicit */unsigned long long int) max((var_4), (((/* implicit */int) (unsigned short)50860))))) : (max((arr_7 [i_1]), (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (max((((/* implicit */int) (!(((/* implicit */_Bool) var_2))))), ((+(((/* implicit */int) arr_0 [i_0])))))) : (((/* implicit */int) var_3))));
                                arr_11 [i_4] [i_2] [i_3 + 3] [i_0] [i_2] [i_1] [i_0] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)60822))));
                            }
                        } 
                    } 
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 0; i_5 < 21; i_5 += 4) 
                    {
                        arr_14 [i_0] = ((/* implicit */unsigned short) (~(((arr_1 [i_0] [i_5]) ? (((((/* implicit */int) var_3)) | (((/* implicit */int) var_3)))) : ((+(arr_9 [i_0] [i_0] [i_1] [i_2] [i_5])))))));
                        var_17 = arr_6 [i_0] [i_0] [i_5];
                        var_18 &= ((/* implicit */int) min((((unsigned long long int) min((((/* implicit */short) arr_1 [i_1] [i_1])), (arr_2 [15U] [i_1] [i_2])))), (((arr_4 [i_0]) ? (var_2) : (((/* implicit */unsigned long long int) (-(var_0))))))));
                        var_19 *= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */int) arr_3 [i_5] [i_2])) << (((((/* implicit */int) var_6)) - (60992)))))), (288230376151711744LL)));
                    }
                    /* vectorizable */
                    for (short i_6 = 0; i_6 < 21; i_6 += 1) 
                    {
                        arr_18 [i_0] [i_0] [i_6] = (~(61006900));
                        var_20 = ((/* implicit */unsigned char) (+(-643561609)));
                    }
                    for (unsigned int i_7 = 1; i_7 < 20; i_7 += 1) 
                    {
                        arr_22 [i_0] [i_2] [i_0] [i_7 - 1] = ((/* implicit */_Bool) var_8);
                        /* LoopSeq 3 */
                        for (int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */unsigned short) ((((long long int) (~(arr_21 [i_2] [i_7 + 1] [i_2] [i_0])))) % (((/* implicit */long long int) (-(arr_9 [i_0] [i_0] [i_2] [i_7 - 1] [i_8]))))));
                            var_22 = ((/* implicit */int) max((var_22), (((int) min((max((((/* implicit */unsigned long long int) (short)19216)), (arr_20 [i_0] [i_2] [i_0]))), (max((10561371853488775855ULL), (((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [(_Bool)1] [i_7] [i_2])))))))));
                            var_23 = ((/* implicit */_Bool) min((var_1), (max((((/* implicit */long long int) (~(((/* implicit */int) arr_16 [i_1] [i_0] [i_1]))))), (((long long int) (_Bool)1))))));
                        }
                        /* vectorizable */
                        for (int i_9 = 0; i_9 < 21; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */short) ((arr_20 [i_7 + 1] [i_0] [i_7 - 1]) % (var_2)));
                            var_25 += ((((/* implicit */_Bool) arr_15 [i_1] [i_7 - 1] [i_7 - 1] [i_7 - 1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_23 [i_1] [i_7 - 1] [i_7 + 1] [i_7 + 1] [i_1])));
                        }
                        for (int i_10 = 3; i_10 < 19; i_10 += 2) 
                        {
                            arr_31 [i_0] [17] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) arr_21 [i_0] [i_0] [i_2] [i_0]);
                            var_26 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) 3705308907U))))) & (((((/* implicit */_Bool) arr_3 [i_0] [i_7])) ? (arr_9 [i_2] [i_0] [i_10] [i_10 - 1] [(signed char)9]) : (((/* implicit */int) var_6))))));
                        }
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_27 = ((/* implicit */short) ((_Bool) (~(((var_3) ? (-8599978917469974260LL) : (((/* implicit */long long int) 0)))))));
                        var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) (short)18493)) ? (var_13) : ((~(1291562729U)))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 4 */
    for (unsigned short i_12 = 0; i_12 < 15; i_12 += 4) 
    {
        var_29 = ((/* implicit */short) ((unsigned char) ((unsigned short) max((arr_30 [i_12] [i_12] [i_12] [i_12] [11] [i_12] [i_12]), (((/* implicit */long long int) arr_35 [i_12]))))));
        /* LoopSeq 1 */
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
        {
            var_30 = arr_16 [i_12] [i_13] [i_13];
            /* LoopSeq 1 */
            for (long long int i_14 = 2; i_14 < 13; i_14 += 1) 
            {
                var_31 = arr_30 [i_12] [i_12] [i_12] [i_13] [i_13] [i_14] [i_14 - 2];
                var_32 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_12] [i_13] [i_14] [i_14] [i_14])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 2023658381U)) ? (((/* implicit */int) (unsigned short)20509)) : (((/* implicit */int) arr_35 [i_12])))) : (((/* implicit */int) arr_37 [i_13] [i_12] [i_13]))))) ? ((~(((arr_30 [i_14] [i_14] [i_14] [i_14 + 2] [i_14] [i_14 - 2] [i_14]) ^ (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_13] [i_14]))))))) : (((/* implicit */long long int) min((((/* implicit */int) var_6)), (arr_38 [i_12] [i_13]))))));
            }
            var_33 &= ((/* implicit */unsigned short) arr_27 [i_13] [i_13] [i_13] [i_13] [i_13]);
        }
        var_34 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_39 [i_12] [i_12] [i_12])) ? (((/* implicit */int) arr_24 [(_Bool)1] [i_12] [(_Bool)1] [i_12] [(unsigned short)14])) : (((/* implicit */int) (unsigned short)10727))))), (((((/* implicit */_Bool) min((arr_9 [2ULL] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */int) var_10))))) ? (max((((/* implicit */long long int) var_7)), (arr_30 [i_12] [i_12] [11] [i_12] [i_12] [i_12] [13]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [6])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)58844)))))))));
        arr_43 [i_12] [(unsigned short)4] = ((/* implicit */_Bool) max((((/* implicit */int) arr_25 [i_12] [i_12])), (max((arr_41 [i_12]), (arr_41 [i_12])))));
    }
    for (short i_15 = 2; i_15 < 14; i_15 += 2) 
    {
        var_35 = ((/* implicit */int) var_5);
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 15; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (short i_17 = 0; i_17 < 15; i_17 += 3) 
            {
                arr_53 [i_17] [i_17] [i_17] [i_15] = ((/* implicit */int) var_13);
                var_36 = ((/* implicit */int) (short)-1924);
                var_37 = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_24 [i_15 - 1] [i_15 - 2] [i_15] [i_15 - 1] [i_15]))));
                var_38 = ((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (var_2) : (((/* implicit */unsigned long long int) var_1)))));
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                /* LoopSeq 1 */
                for (short i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    var_39 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_32 [i_15 - 1] [i_15 - 1] [i_15]))));
                    var_40 = ((/* implicit */short) 67108352);
                    var_41 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_7))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_3))));
                    var_42 = ((/* implicit */long long int) ((arr_36 [i_15 + 1]) ? (arr_39 [i_19] [i_15 - 1] [i_15 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_36 [i_15 - 1])))));
                }
                var_43 = ((/* implicit */_Bool) ((arr_4 [i_15]) ? (((((/* implicit */int) arr_0 [i_15])) % (var_11))) : ((+(var_8)))));
                var_44 = ((/* implicit */short) min((var_44), (((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_16])) ? (((/* implicit */int) arr_50 [i_15 + 1] [i_15] [i_18])) : ((~(((/* implicit */int) (unsigned char)173)))))))));
            }
            var_45 = ((/* implicit */int) arr_15 [i_15] [i_15] [i_15 + 1] [i_15 - 2]);
            /* LoopNest 2 */
            for (short i_20 = 2; i_20 < 13; i_20 += 2) 
            {
                for (signed char i_21 = 0; i_21 < 15; i_21 += 1) 
                {
                    {
                        var_46 = ((/* implicit */short) arr_32 [i_15 + 1] [i_15 + 1] [i_21]);
                        var_47 = ((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) arr_61 [i_15] [i_15] [i_21] [i_15])))) : (((/* implicit */int) arr_55 [i_20 + 2])));
                        var_48 = (-(arr_20 [i_16] [i_21] [i_15 + 1]));
                        var_49 &= ((/* implicit */int) (+(arr_49 [i_15])));
                    }
                } 
            } 
            var_50 = ((/* implicit */unsigned short) (short)3445);
            /* LoopNest 2 */
            for (unsigned short i_22 = 0; i_22 < 15; i_22 += 1) 
            {
                for (int i_23 = 0; i_23 < 15; i_23 += 4) 
                {
                    {
                        var_51 *= ((/* implicit */_Bool) ((int) arr_1 [i_15 + 1] [i_15 - 1]));
                        var_52 = ((/* implicit */_Bool) (-(arr_39 [i_22] [i_15 - 1] [i_22])));
                        var_53 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_40 [(short)2] [i_16] [i_23]))))) : (((((/* implicit */_Bool) (short)-28804)) ? (arr_5 [i_15] [(short)2] [i_15] [i_23]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_23] [i_22] [i_23])))))));
                    }
                } 
            } 
        }
    }
    for (signed char i_24 = 0; i_24 < 22; i_24 += 4) /* same iter space */
    {
        var_54 = ((/* implicit */short) min((var_54), (((/* implicit */short) (_Bool)0))));
        var_55 = ((/* implicit */signed char) min((var_55), (((/* implicit */signed char) arr_71 [i_24] [(_Bool)1]))));
        arr_73 [i_24] [i_24] = ((/* implicit */_Bool) var_0);
    }
    /* vectorizable */
    for (signed char i_25 = 0; i_25 < 22; i_25 += 4) /* same iter space */
    {
        arr_76 [15ULL] = ((/* implicit */long long int) var_2);
        var_56 = (-(((/* implicit */int) arr_74 [i_25] [i_25])));
    }
    var_57 = ((/* implicit */signed char) min((var_57), (((/* implicit */signed char) var_0))));
    /* LoopNest 2 */
    for (unsigned short i_26 = 0; i_26 < 23; i_26 += 1) 
    {
        for (unsigned short i_27 = 2; i_27 < 22; i_27 += 1) 
        {
            {
                arr_83 [i_26] [(unsigned char)1] [i_27] = ((/* implicit */short) var_13);
                arr_84 [(short)3] = ((/* implicit */_Bool) min((((/* implicit */int) arr_79 [i_26] [(_Bool)1])), (((int) arr_82 [i_26] [i_27 - 1] [i_27]))));
            }
        } 
    } 
}
