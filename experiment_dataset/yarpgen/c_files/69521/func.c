/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69521
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
    var_11 = ((/* implicit */short) var_1);
    var_12 = ((/* implicit */short) max((((((/* implicit */int) min(((unsigned short)6130), ((unsigned short)59405)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_9)), (var_3)))))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (short i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 24; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    {
                        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) (-(((((/* implicit */_Bool) arr_3 [i_1] [i_3])) ? (((/* implicit */int) min(((short)-24210), (arr_5 [i_0] [i_1] [i_0] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))))))));
                        arr_9 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */int) (unsigned short)6130)) / (((/* implicit */int) (unsigned short)2753)))), (((((/* implicit */_Bool) (unsigned short)59402)) ? (((/* implicit */int) (unsigned short)6130)) : (((/* implicit */int) (unsigned short)59406))))))) || (((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_9)) || (((/* implicit */_Bool) arr_3 [i_0] [i_0]))))))));
                        var_14 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_1] [i_2] [i_3])) / (((/* implicit */int) arr_7 [i_0] [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [(short)16] [i_1])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_2 - 1] [i_2 + 1] [i_1] [i_1])) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_9))))));
                        arr_10 [i_3] [i_1] [i_3] [i_0] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_6 [i_0] [i_3])), ((unsigned short)6138))))))) ? (((((/* implicit */_Bool) max(((unsigned short)59397), (((/* implicit */unsigned short) (short)16384))))) ? (((/* implicit */int) arr_0 [i_2] [i_3])) : (((/* implicit */int) max((arr_3 [i_3] [i_1]), (arr_2 [i_3] [(short)16] [i_0])))))) : (((/* implicit */int) (unsigned short)65535))));
                    }
                } 
            } 
        } 
        arr_11 [i_0] = ((/* implicit */short) (((~(((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3)))))) + (((((/* implicit */int) arr_1 [i_0])) * (((((/* implicit */int) arr_2 [i_0] [i_0] [i_0])) + (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
        /* LoopNest 3 */
        for (unsigned short i_4 = 0; i_4 < 25; i_4 += 4) 
        {
            for (short i_5 = 2; i_5 < 22; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 2) 
                {
                    {
                        var_15 *= ((/* implicit */short) ((unsigned short) min((((((/* implicit */_Bool) arr_8 [i_4] [i_4] [i_5] [i_6] [i_6] [i_4])) ? (((/* implicit */int) (short)-7613)) : (((/* implicit */int) arr_1 [i_6])))), ((-(((/* implicit */int) (short)-1165)))))));
                        arr_23 [i_0] [i_4] [i_0] [i_6] = ((/* implicit */short) (((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-13160))))))) != (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [(unsigned short)21])), (var_1)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1)) ? (((/* implicit */int) arr_3 [i_0] [i_6])) : (((/* implicit */int) var_5))))))))));
                        var_16 = ((/* implicit */short) min(((+(((((/* implicit */_Bool) (unsigned short)49826)) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_5])) : (((/* implicit */int) arr_4 [(unsigned short)4] [(unsigned short)4] [i_5] [(unsigned short)4])))))), (((((/* implicit */int) min((var_6), (arr_14 [i_4] [i_4] [i_4])))) - (((/* implicit */int) min((var_9), (arr_6 [i_0] [i_0]))))))));
                        arr_24 [i_5] [i_0] = var_8;
                        arr_25 [i_0] [i_4] [i_4] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((((/* implicit */_Bool) (short)-14333)) ? (((/* implicit */int) (unsigned short)53087)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) arr_12 [i_5]))))) ? (((((/* implicit */_Bool) (short)-1159)) ? (((/* implicit */int) max((arr_0 [i_5] [(unsigned short)7]), (var_0)))) : (((/* implicit */int) (short)1191)))) : ((+(((/* implicit */int) arr_22 [i_0] [i_4] [i_0] [i_5 - 1] [i_0] [i_4]))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned short i_7 = 0; i_7 < 14; i_7 += 1) 
    {
        var_17 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) min((var_1), ((unsigned short)6134))))) || (((/* implicit */_Bool) arr_27 [i_7]))));
        /* LoopNest 2 */
        for (short i_8 = 2; i_8 < 13; i_8 += 4) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    for (short i_10 = 2; i_10 < 13; i_10 += 1) /* same iter space */
                    {
                        var_18 = arr_3 [i_7] [i_10];
                        arr_38 [i_7] [i_9] [i_7] = min((((short) arr_18 [i_8 - 1] [i_10 - 1] [i_9] [i_10])), (((short) min(((unsigned short)4080), (((/* implicit */unsigned short) (short)-1))))));
                        arr_39 [i_7] [i_9] [i_7] [i_7] = var_7;
                    }
                    for (short i_11 = 2; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        arr_44 [i_9] [i_9] [i_9] [i_11] = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_22 [i_7] [i_8] [i_11 - 2] [i_8 + 1] [i_9] [i_11 + 1])))) ? (min((((/* implicit */int) (unsigned short)59397)), (((((/* implicit */_Bool) (unsigned short)6130)) ? (((/* implicit */int) (short)16565)) : (((/* implicit */int) (short)11242)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_40 [i_7] [i_9] [i_9]))))) ? (((/* implicit */int) ((((/* implicit */int) var_5)) == (((/* implicit */int) var_10))))) : ((+(((/* implicit */int) arr_6 [i_9] [i_11]))))))));
                        arr_45 [i_7] [i_9] [i_9] [i_11] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_43 [i_7])) > (((/* implicit */int) arr_32 [i_9] [i_8] [i_8 - 2]))))), (arr_12 [i_8])))) + (((/* implicit */int) arr_17 [i_7] [i_8] [i_9] [i_7]))));
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) min((var_5), (arr_26 [i_9] [i_8])))) + ((+(((/* implicit */int) var_3))))))) ? (((((/* implicit */_Bool) arr_13 [i_7])) ? (((/* implicit */int) arr_21 [i_8 - 2] [i_8] [i_9] [i_8 - 2])) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) arr_31 [i_8 - 2] [i_8 + 1] [i_8])) ? (((((/* implicit */_Bool) arr_22 [i_7] [i_8] [i_9] [i_7] [i_9] [i_11])) ? (((/* implicit */int) arr_6 [i_9] [i_8])) : (((/* implicit */int) (unsigned short)59397)))) : (((((/* implicit */int) arr_16 [i_9] [i_9] [i_7])) & (((/* implicit */int) (unsigned short)59398))))))));
                        arr_46 [i_11] [i_9] [i_9] [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)6130)) ? (((/* implicit */int) (short)1309)) : (((/* implicit */int) (unsigned short)18535))));
                        var_20 = ((/* implicit */unsigned short) min((((/* implicit */int) arr_6 [i_9] [i_9])), (((((/* implicit */_Bool) min((arr_2 [i_7] [i_7] [i_9]), (((/* implicit */unsigned short) arr_19 [(short)20] [i_8] [i_9] [i_9] [i_9] [i_11 + 1]))))) ? (((((/* implicit */_Bool) arr_7 [i_9] [i_8 - 2])) ? (((/* implicit */int) arr_16 [i_7] [i_9] [i_9])) : (((/* implicit */int) arr_36 [i_9])))) : (((((/* implicit */_Bool) arr_30 [i_7] [i_8])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_41 [i_9] [i_8] [i_9] [i_11] [i_11 - 1]))))))));
                    }
                    for (short i_12 = 2; i_12 < 13; i_12 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_20 [i_7] [i_7] [i_7] [i_9] [i_12 - 1])) ? (((/* implicit */int) arr_48 [i_12 - 1] [i_9])) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */unsigned short) arr_34 [i_8 + 1] [i_8 - 1] [i_12 - 2])), (arr_48 [i_12 + 1] [i_9]))))));
                        /* LoopSeq 2 */
                        for (short i_13 = 0; i_13 < 14; i_13 += 1) 
                        {
                            arr_53 [i_7] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (((((((/* implicit */int) arr_33 [i_9] [i_9] [i_12] [i_13])) == (((/* implicit */int) (unsigned short)6134)))) ? (((((/* implicit */_Bool) arr_43 [i_9])) ? (((/* implicit */int) arr_31 [i_7] [i_12] [i_12])) : (((/* implicit */int) var_1)))) : (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_5))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)45884))))))))));
                            arr_54 [i_7] [i_9] [i_9] [i_9] [i_12] [i_12] = arr_16 [i_7] [i_9] [i_7];
                            arr_55 [i_9] [i_12] [i_9] [i_8] [i_9] = ((/* implicit */short) max(((-(((/* implicit */int) arr_28 [i_8])))), (min((((((/* implicit */int) arr_51 [i_7] [i_7] [i_7] [i_13])) ^ (((/* implicit */int) arr_32 [i_9] [i_8] [i_9])))), (((((/* implicit */int) arr_18 [i_7] [i_7] [i_9] [i_7])) / (((/* implicit */int) arr_7 [i_9] [i_13]))))))));
                            arr_56 [i_7] [i_8 - 1] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) arr_5 [i_12 - 1] [i_12 - 2] [i_12 - 2] [i_8 - 1]))) ? (((/* implicit */int) max((arr_47 [i_7] [i_8] [i_9] [i_9] [i_13]), (arr_0 [i_12 + 1] [i_8])))) : (((((/* implicit */_Bool) arr_1 [i_9])) ? (((((/* implicit */_Bool) arr_51 [i_7] [i_7] [i_12] [i_9])) ? (((/* implicit */int) arr_31 [i_7] [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_7] [i_8] [i_9] [i_7])))) : (((/* implicit */int) ((short) arr_19 [i_7] [i_7] [i_7] [i_7] [i_7] [(unsigned short)22])))))));
                        }
                        for (short i_14 = 0; i_14 < 14; i_14 += 4) 
                        {
                            arr_59 [i_9] [i_8] [i_9] [i_12] [i_12] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_7)))) : ((~(((/* implicit */int) var_5))))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-15392)) && (((/* implicit */_Bool) (unsigned short)36745)))))));
                            arr_60 [i_9] = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_34 [i_14] [i_9] [i_7])), (var_7)))) || (((/* implicit */_Bool) (short)11402)))))));
                        }
                    }
                    for (short i_15 = 2; i_15 < 13; i_15 += 1) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) - (((/* implicit */int) var_6)))) + (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) max((arr_18 [i_7] [i_8] [i_8] [i_15 - 1]), (var_5)))) ? (((((/* implicit */_Bool) (short)1)) ? (((/* implicit */int) arr_4 [i_8] [i_8] [i_9] [i_15])) : (((/* implicit */int) arr_57 [i_7] [i_7] [i_7] [i_7])))) : (((/* implicit */int) max((var_8), (arr_20 [i_7] [i_8] [i_9] [i_8] [i_9])))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) max((((/* implicit */unsigned short) (short)32767)), ((unsigned short)11445)))) : (((/* implicit */int) min((arr_40 [i_9] [i_8] [i_7]), (arr_6 [i_8] [i_9]))))))));
                        arr_64 [i_7] [i_8] [i_8] [i_9] = var_8;
                    }
                    arr_65 [(short)11] [i_9] [i_9] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) max(((unsigned short)65535), ((unsigned short)65535)))) ? (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */int) arr_40 [i_7] [i_9] [i_7])) == (((/* implicit */int) var_1))))), (var_9)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_13 [i_9])), (max(((unsigned short)1), (((/* implicit */unsigned short) arr_40 [i_7] [i_9] [i_9])))))))));
                    arr_66 [i_7] [i_8 - 2] [i_9] [i_9] = ((/* implicit */short) (~(((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_2))))) | (((((/* implicit */int) (unsigned short)0)) << (((((/* implicit */int) var_9)) + (11426)))))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (short i_16 = 0; i_16 < 14; i_16 += 2) 
        {
            for (short i_17 = 0; i_17 < 14; i_17 += 4) 
            {
                for (short i_18 = 0; i_18 < 14; i_18 += 1) 
                {
                    {
                        arr_74 [i_7] [i_16] [i_17] [i_18] = ((/* implicit */short) min((((((/* implicit */int) (short)-15392)) - (((/* implicit */int) arr_2 [i_16] [i_17] [i_18])))), (((/* implicit */int) var_8))));
                        arr_75 [i_18] = ((/* implicit */short) ((((/* implicit */int) max((max((((/* implicit */unsigned short) var_5)), (arr_51 [i_7] [i_16] [i_17] [i_17]))), (min((arr_8 [i_18] [i_16] [i_17] [i_17] [i_16] [i_18]), (((/* implicit */unsigned short) arr_34 [i_7] [i_16] [i_16]))))))) / ((((-(((/* implicit */int) arr_1 [i_18])))) + (((/* implicit */int) arr_62 [i_18] [i_17] [i_16]))))));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */short) (unsigned short)27523);
        var_24 = ((/* implicit */unsigned short) (((((+(((/* implicit */int) (unsigned short)59709)))) / (((/* implicit */int) var_1)))) + (((/* implicit */int) (unsigned short)10762))));
    }
    /* vectorizable */
    for (short i_19 = 0; i_19 < 24; i_19 += 2) 
    {
        var_25 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_76 [(unsigned short)1]))))) < (((/* implicit */int) var_3))));
        var_26 = ((unsigned short) ((((/* implicit */_Bool) arr_0 [i_19] [i_19])) ? (((/* implicit */int) (short)7193)) : (((/* implicit */int) arr_21 [i_19] [i_19] [i_19] [i_19]))));
        arr_79 [i_19] [i_19] = var_9;
        /* LoopSeq 2 */
        for (unsigned short i_20 = 2; i_20 < 23; i_20 += 1) 
        {
            var_27 = arr_13 [i_19];
            var_28 *= arr_22 [i_19] [i_19] [i_19] [i_19] [i_19] [i_19];
        }
        for (unsigned short i_21 = 2; i_21 < 20; i_21 += 1) 
        {
            var_29 = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_21] [i_21] [i_21 + 1] [i_21] [i_21 + 4])) ? ((~(((/* implicit */int) var_3)))) : ((~(((/* implicit */int) arr_80 [i_19] [i_21]))))));
            arr_87 [i_21] [i_21] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)54787)) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) (short)-16566)) ? (((/* implicit */int) (unsigned short)65534)) : (((/* implicit */int) (short)264))))));
            /* LoopSeq 2 */
            for (short i_22 = 0; i_22 < 24; i_22 += 3) 
            {
                arr_91 [i_19] [i_21] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [i_21 + 4] [i_21] [i_21 + 2])) ? (((/* implicit */int) ((((/* implicit */int) arr_22 [i_21] [i_21] [i_21] [(short)7] [i_21] [i_19])) != (((/* implicit */int) arr_17 [i_19] [i_19] [i_21] [i_22]))))) : (((((/* implicit */_Bool) arr_13 [i_19])) ? (((/* implicit */int) arr_76 [i_22])) : (((/* implicit */int) (unsigned short)65517))))));
                arr_92 [i_19] [i_21] [i_19] = ((/* implicit */unsigned short) (+(((((/* implicit */int) (short)448)) / (((/* implicit */int) (unsigned short)59391))))));
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 24; i_23 += 4) 
                {
                    for (unsigned short i_24 = 2; i_24 < 23; i_24 += 1) 
                    {
                        {
                            arr_97 [i_21] [i_21] [i_21] [i_21] [i_24] [i_21] [i_22] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_15 [i_19] [i_21] [i_23])))) > (((/* implicit */int) arr_96 [i_21] [i_21 - 2]))));
                            arr_98 [i_19] [i_21 + 4] [(unsigned short)23] [i_21] [i_23] [i_23] [i_24] = ((/* implicit */short) (~(((/* implicit */int) arr_93 [i_19] [i_19] [i_22] [i_23] [i_21]))));
                        }
                    } 
                } 
            }
            for (short i_25 = 0; i_25 < 24; i_25 += 1) 
            {
                arr_102 [i_21] = ((/* implicit */short) (-(((/* implicit */int) (unsigned short)0))));
                var_30 *= ((/* implicit */short) (-(((/* implicit */int) arr_76 [i_21 + 2]))));
            }
            /* LoopNest 2 */
            for (short i_26 = 2; i_26 < 23; i_26 += 4) 
            {
                for (short i_27 = 2; i_27 < 23; i_27 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_28 = 1; i_28 < 22; i_28 += 1) 
                        {
                            var_31 = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_27 - 2] [i_27 + 1]))));
                            var_32 = ((/* implicit */short) (~(((/* implicit */int) var_8))));
                        }
                        var_33 *= ((/* implicit */short) arr_76 [(unsigned short)13]);
                    }
                } 
            } 
            var_34 = ((/* implicit */short) ((((/* implicit */int) (short)-14704)) > (((/* implicit */int) (short)-15392))));
        }
    }
}
