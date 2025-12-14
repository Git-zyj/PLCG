/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94251
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
    var_12 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */unsigned long long int) -1006433346))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 19; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 0; i_1 < 19; i_1 += 2) /* same iter space */
        {
            arr_4 [18] [i_1] [13LL] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned char)160)) : (((/* implicit */int) var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_6)) | (((/* implicit */int) arr_3 [i_0])))))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) var_5))))));
            arr_5 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) : (arr_0 [i_1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_1]))))) : ((~(arr_0 [i_1])))));
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (arr_11 [17LL]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))))));
                        var_14 = ((/* implicit */int) max((var_14), ((((~(arr_10 [i_0]))) & (((/* implicit */int) ((((/* implicit */_Bool) ((1006433368) / (arr_9 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))) && (((/* implicit */_Bool) arr_7 [i_2 - 2] [i_2] [i_2 - 1] [(short)12])))))))));
                        var_15 = ((/* implicit */short) max((max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_10 [i_2]))))), (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_2] [i_0] [i_0])) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_2 + 1])))))));
                    }
                } 
            } 
            arr_12 [15] [i_0] [i_1] = ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_3 [i_0])));
        }
        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                for (unsigned int i_6 = 0; i_6 < 19; i_6 += 1) 
                {
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (+(var_10)))))));
                            arr_23 [(unsigned char)7] [i_4] [i_5] [i_6] [i_7] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_4] [i_5])) ? (arr_22 [i_0] [i_4] [i_5] [i_4] [i_5] [i_7]) : (((/* implicit */unsigned long long int) arr_6 [i_5] [i_0] [i_7])))))));
                            var_17 = ((/* implicit */_Bool) (+(((((((/* implicit */_Bool) arr_9 [i_0] [i_4] [(unsigned char)13] [i_6] [i_6] [i_7])) ? (arr_22 [i_7] [i_6] [2] [i_5] [i_4] [i_0]) : (((/* implicit */unsigned long long int) arr_1 [i_0])))) * (((/* implicit */unsigned long long int) ((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_4))))))))));
                        }
                    } 
                } 
            } 
            var_18 = ((/* implicit */_Bool) max((((/* implicit */long long int) (((~(arr_9 [i_0] [i_4] [i_4] [(_Bool)1] [i_0] [i_4]))) + (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))), ((~(arr_6 [(_Bool)1] [i_0] [i_4])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
            {
                arr_26 [(unsigned short)12] [i_0] [i_8] [i_8] = ((/* implicit */unsigned int) (+(arr_10 [i_8])));
                var_19 -= ((((arr_3 [i_0]) ? (((/* implicit */int) arr_15 [i_0] [i_8] [i_8])) : (((/* implicit */int) arr_25 [i_0])))) <= ((+(((/* implicit */int) arr_21 [i_0] [i_0] [i_4] [i_8] [i_8])))));
            }
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
            {
                arr_29 [i_0] [(short)18] [i_9] = ((/* implicit */_Bool) arr_11 [i_0]);
                var_20 = ((/* implicit */int) var_9);
                /* LoopSeq 2 */
                for (long long int i_10 = 3; i_10 < 16; i_10 += 2) 
                {
                    var_21 = (~((~(arr_20 [i_10 - 1] [i_10 - 2] [i_10] [i_10 - 1] [i_10 + 2] [i_10]))));
                    arr_34 [i_10] [9ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_17 [i_0] [i_0] [i_10 - 1] [i_10 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_0] [i_0] [i_10 - 1] [i_10])))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_16 [i_0] [i_4] [i_10 - 1] [i_10 - 3]))))) : (arr_17 [4ULL] [i_0] [i_10 - 1] [i_4])));
                    arr_35 [i_10] [i_4] [i_9] [i_10] [i_10] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [i_10])) ? (((/* implicit */int) var_4)) : (arr_10 [i_10])))) | (((((/* implicit */_Bool) ((int) arr_33 [i_0] [9ULL] [(unsigned short)9] [i_0]))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (max((((/* implicit */long long int) arr_13 [i_4])), (arr_0 [i_10])))))));
                }
                for (long long int i_11 = 0; i_11 < 19; i_11 += 2) 
                {
                    var_22 = arr_22 [i_0] [i_4] [i_0] [i_4] [i_0] [i_11];
                    arr_38 [i_0] [i_4] [i_9] [i_11] = ((/* implicit */short) ((long long int) ((((_Bool) var_11)) ? (((/* implicit */long long int) var_7)) : (arr_28 [i_4] [i_4]))));
                }
                /* LoopSeq 3 */
                for (unsigned char i_12 = 0; i_12 < 19; i_12 += 1) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 3) 
                    {
                        var_23 = ((/* implicit */long long int) (short)-14831);
                        var_24 = ((/* implicit */long long int) arr_37 [i_0] [i_4] [(_Bool)1] [i_9] [16ULL]);
                        arr_45 [i_13] [i_12] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_12] [i_0] [i_4] [i_0])) && (((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_0]))));
                        arr_46 [13LL] = ((/* implicit */unsigned int) var_3);
                    }
                    var_25 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) ((arr_10 [i_0]) < (((/* implicit */int) arr_15 [6] [6] [(unsigned char)6])))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_11)));
                    var_26 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (_Bool)1)), (2349333424940564828ULL)));
                    var_27 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) arr_31 [i_12] [i_12] [i_12] [i_12])) ? (((/* implicit */unsigned long long int) arr_31 [i_0] [i_0] [i_0] [i_0])) : (var_1)))));
                    arr_47 [i_0] [i_4] [i_9] [i_4] = ((/* implicit */unsigned int) arr_18 [i_0] [i_0] [i_0] [i_0] [(unsigned char)13]);
                }
                for (signed char i_14 = 3; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_50 [(unsigned short)3] [i_4] [i_4] = (~(((/* implicit */int) (!(arr_2 [i_4] [i_14] [i_14 - 1])))));
                    arr_51 [i_0] [i_0] [i_4] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_4] [i_4] [i_4])) ? ((((-(((/* implicit */int) arr_3 [i_0])))) << (((((((arr_36 [i_14]) + (2147483647))) >> (((((/* implicit */int) var_0)) - (149))))) - (571342))))) : (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    var_28 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((arr_18 [15] [i_14 + 1] [i_14 - 1] [i_14] [i_14]) ? (((/* implicit */int) arr_18 [i_9] [i_14 - 1] [i_14] [i_14 - 3] [i_14])) : (((/* implicit */int) arr_18 [i_9] [i_14 - 2] [i_14 - 2] [i_14] [i_14 - 3])))) : (min((((((/* implicit */int) arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) % (((/* implicit */int) var_0)))), (((/* implicit */int) (!(((/* implicit */_Bool) -3035659132383264569LL)))))))));
                }
                for (signed char i_15 = 3; i_15 < 18; i_15 += 4) /* same iter space */
                {
                    arr_54 [i_15] = ((/* implicit */long long int) ((_Bool) ((int) var_4)));
                    var_29 = ((/* implicit */long long int) (+(min((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_4] [i_4] [i_4] [i_9] [i_15])), (var_10))), (((/* implicit */unsigned long long int) arr_27 [i_0] [(unsigned char)0] [i_9] [i_15]))))));
                    var_30 = ((/* implicit */_Bool) (-(min((var_2), (((/* implicit */long long int) arr_9 [i_0] [i_4] [i_9] [i_0] [i_15 - 1] [i_4]))))));
                }
            }
        }
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((unsigned int) min((((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */int) arr_13 [(_Bool)1])) / (((/* implicit */int) arr_33 [i_0] [i_0] [(unsigned short)4] [i_0]))))))))));
        arr_55 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) arr_20 [i_0] [14ULL] [(signed char)17] [i_0] [i_0] [i_0])) : (arr_31 [(unsigned short)1] [i_0] [i_0] [(unsigned short)1])))) ? ((+(var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_21 [i_0] [i_0] [5] [i_0] [i_0]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))))) ? (((/* implicit */int) arr_18 [12ULL] [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (arr_49 [i_0] [(_Bool)1] [(_Bool)1] [i_0] [i_0] [i_0]) : (var_7)))) ? (((/* implicit */long long int) (+(arr_36 [i_0])))) : (((((/* implicit */_Bool) 3035659132383264541LL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
        arr_56 [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_14 [i_0] [i_0] [(short)2])))))));
    }
    for (int i_16 = 0; i_16 < 19; i_16 += 2) /* same iter space */
    {
        var_32 ^= ((/* implicit */unsigned int) (((-((+(var_10))))) + (((/* implicit */unsigned long long int) 3035659132383264560LL))));
        /* LoopSeq 3 */
        for (int i_17 = 1; i_17 < 18; i_17 += 2) 
        {
            /* LoopSeq 1 */
            for (int i_18 = 2; i_18 < 17; i_18 += 1) 
            {
                arr_64 [i_16] [i_16] [i_16] [i_16] |= ((/* implicit */_Bool) (+(var_1)));
                arr_65 [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_16])) ^ (((int) ((((/* implicit */_Bool) arr_1 [i_16])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_43 [i_16] [i_17] [(unsigned char)10] [(signed char)9] [(unsigned char)10] [i_18] [i_18 + 2])))))));
                var_33 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) (unsigned short)65534)) ? (((/* implicit */int) (_Bool)1)) : (-919703051)))));
            }
            var_34 = var_1;
            /* LoopSeq 1 */
            for (int i_19 = 2; i_19 < 18; i_19 += 1) 
            {
                var_35 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_30 [i_17] [i_17] [i_19] [(unsigned short)0]))));
                /* LoopNest 2 */
                for (long long int i_20 = 0; i_20 < 19; i_20 += 4) 
                {
                    for (unsigned short i_21 = 0; i_21 < 19; i_21 += 4) 
                    {
                        {
                            var_36 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((signed char) arr_32 [i_16] [i_16] [i_16] [i_16] [i_17 - 1] [i_19])))));
                            arr_74 [i_16] [i_17] [(unsigned char)4] [i_21] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [(short)15])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_73 [(unsigned char)13] [i_17 - 1] [i_19 + 1]))) / (arr_19 [i_19] [8U] [i_19 - 1] [i_19 - 2] [i_19 - 1]))) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_13 [i_16])))))));
                            var_37 |= ((/* implicit */int) ((short) ((arr_24 [i_17 - 1] [i_20] [i_21]) / (arr_24 [i_16] [i_20] [i_21]))));
                            arr_75 [i_17] [i_17] [i_19 - 1] [i_20] [i_21] = ((/* implicit */_Bool) ((((/* implicit */long long int) (+(max((-459483059), (((/* implicit */int) var_5))))))) / ((+(arr_8 [i_17 - 1] [i_17 + 1] [i_17 - 1] [i_17])))));
                            var_38 ^= ((/* implicit */unsigned long long int) var_9);
                        }
                    } 
                } 
                arr_76 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) var_5))))))) ? (var_11) : (((/* implicit */unsigned int) (~((~(arr_48 [i_17]))))))));
                /* LoopNest 2 */
                for (unsigned int i_22 = 0; i_22 < 19; i_22 += 2) 
                {
                    for (int i_23 = 0; i_23 < 19; i_23 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */unsigned short) (-((+(((arr_20 [i_16] [i_17 + 1] [i_19 - 1] [i_22] [i_23] [5]) - (((/* implicit */int) arr_39 [i_16] [(short)18] [i_19] [i_23]))))))));
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) min((((((/* implicit */_Bool) arr_44 [i_19 - 1] [i_19 - 2] [i_19])) ? (arr_44 [i_19] [i_19 - 1] [i_19 - 1]) : (arr_44 [i_19] [i_19 + 1] [i_19]))), (((/* implicit */long long int) (-(919703038)))))))));
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_17] [i_17 + 1] [15ULL] [i_17 - 1] [i_16]))) + (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) - (var_11))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_36 [i_17 + 1]))))));
        }
        for (signed char i_24 = 0; i_24 < 19; i_24 += 4) 
        {
            arr_83 [(short)2] [i_16] = ((/* implicit */unsigned short) ((signed char) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))));
            var_42 = ((/* implicit */signed char) ((_Bool) (~(arr_48 [i_24]))));
        }
        for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
        {
            arr_87 [i_25] [(unsigned short)14] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_1 [i_25]) ^ (((/* implicit */int) arr_67 [i_16] [i_25] [i_25]))))) ? ((~(arr_1 [i_16]))) : (((/* implicit */int) ((signed char) arr_1 [i_16])))));
            arr_88 [i_16] [i_25] = ((/* implicit */unsigned long long int) ((17688302174430449263ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)32765))))) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_25])))))))))));
            var_43 = ((/* implicit */short) max((var_43), (((/* implicit */short) ((((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_6)))) ? (((/* implicit */int) arr_18 [i_16] [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) max((arr_52 [i_16] [i_16] [i_16] [i_16] [i_16]), (((/* implicit */unsigned short) var_4)))))))) | (min((var_11), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_16] [i_16] [i_16])) ? (((/* implicit */int) arr_16 [i_16] [i_16] [i_16] [i_16])) : (((/* implicit */int) arr_86 [i_25]))))))))))));
        }
    }
    for (long long int i_26 = 0; i_26 < 13; i_26 += 1) 
    {
        arr_92 [i_26] [i_26] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+((+(arr_41 [i_26] [i_26] [i_26] [i_26])))))) ? (max((17688302174430449277ULL), (((/* implicit */unsigned long long int) -2184351202903480303LL)))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_33 [i_26] [i_26] [i_26] [i_26])))));
        /* LoopSeq 1 */
        for (short i_27 = 1; i_27 < 12; i_27 += 2) 
        {
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [14])) ? (((/* implicit */int) arr_33 [i_26] [i_26] [(unsigned char)8] [i_27 - 1])) : (arr_10 [6])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [18]))))) : (((/* implicit */int) arr_33 [i_27] [i_27] [i_27] [i_27 - 1]))));
            arr_95 [(short)3] = ((/* implicit */_Bool) (-(arr_8 [i_27 + 1] [i_26] [i_26] [i_26])));
            var_45 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_11 [i_27 + 1]) & (arr_11 [i_27 - 1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */long long int) arr_9 [11] [i_27 - 1] [i_27] [i_27 - 1] [i_26] [i_26])) : (arr_90 [i_27] [i_27])))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_73 [i_26] [i_27 + 1] [(short)2]))))) : (((arr_94 [i_27 - 1] [i_27]) ? (min((arr_57 [i_26] [i_26]), (((/* implicit */long long int) arr_18 [i_26] [i_26] [i_27] [i_26] [i_26])))) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_27] [i_27 + 1] [i_27] [i_27 + 1] [i_27] [10ULL] [i_27 + 1])))))));
            var_46 = ((/* implicit */long long int) ((((((/* implicit */long long int) (-(arr_69 [i_26] [i_26] [i_27] [i_27 - 1])))) < ((+(arr_91 [i_26]))))) ? (arr_63 [i_26] [i_27] [i_27] [12]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_40 [i_26] [i_27] [i_27 + 1] [i_26] [i_27])))))));
        }
    }
    var_47 |= ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(var_7)))) - (max((((/* implicit */unsigned long long int) var_11)), (16097410648768986773ULL)))))) ? (-1490330968) : (((/* implicit */int) (signed char)-106)));
}
