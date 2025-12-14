/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90101
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
    for (unsigned int i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 19; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_1] = max(((+(((/* implicit */int) min((arr_3 [i_0] [i_1]), (arr_3 [13ULL] [i_1])))))), ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0 + 1]))) != (var_14)))))));
                arr_5 [i_0] [i_1 + 3] [i_1] = max((((/* implicit */long long int) ((unsigned int) (~(var_14))))), (var_16));
                var_20 = ((/* implicit */short) arr_3 [i_1] [i_1]);
                arr_6 [i_1] [i_1 + 1] |= ((/* implicit */_Bool) (~(min((arr_1 [i_0 - 1]), (arr_1 [i_0 + 1])))));
            }
        } 
    } 
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        arr_11 [i_2] = (~((~(var_10))));
        /* LoopSeq 3 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_4 = 0; i_4 < 24; i_4 += 4) 
            {
                arr_18 [(unsigned short)3] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_12))));
                var_21 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [18ULL])) + (arr_7 [i_4])));
                arr_19 [i_2] = ((/* implicit */signed char) arr_15 [(signed char)18] [i_3]);
            }
            arr_20 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_0) <= (((/* implicit */unsigned long long int) -7474661844409221526LL))))) | (((/* implicit */int) arr_10 [4ULL]))));
        }
        for (unsigned char i_5 = 1; i_5 < 21; i_5 += 4) /* same iter space */
        {
            arr_24 [i_2] = (~(((/* implicit */int) (_Bool)1)));
            arr_25 [i_2] = ((/* implicit */long long int) arr_17 [i_5 + 1] [i_5 + 2]);
            var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 417733339U)) || (((/* implicit */_Bool) 416431362U))));
        }
        for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) /* same iter space */
        {
            /* LoopSeq 3 */
            for (int i_7 = 0; i_7 < 24; i_7 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    for (signed char i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            arr_36 [i_2] [i_2] [i_2] [i_8 - 2] [(unsigned char)16] = ((/* implicit */unsigned int) (~(7474661844409221522LL)));
                            arr_37 [i_9] [i_2] [i_6 + 2] [i_2] [i_2] = (+(-7474661844409221499LL));
                            arr_38 [i_2] [2LL] [i_9] [(short)4] [i_6] &= ((/* implicit */long long int) ((((/* implicit */int) arr_16 [i_6 - 1] [i_8] [i_8 - 2])) * (((/* implicit */int) arr_16 [i_6 + 2] [(signed char)12] [i_8 - 3]))));
                            arr_39 [i_2] [i_2] [i_6] [i_2] [i_8] [i_2] = ((/* implicit */_Bool) ((unsigned short) (!(((/* implicit */_Bool) 6934680223927062306ULL)))));
                            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) (!(arr_34 [2]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    for (long long int i_11 = 1; i_11 < 20; i_11 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */signed char) var_19);
                            var_25 = ((/* implicit */long long int) ((arr_33 [i_11 + 3] [i_10] [i_7] [i_6] [i_2]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_29 [i_11] [i_6] [i_2])) : (((/* implicit */int) arr_42 [i_2] [i_11] [i_2] [i_2] [i_2] [i_2])))))));
                            var_26 = ((/* implicit */unsigned char) 7474661844409221519LL);
                        }
                    } 
                } 
                var_27 = ((/* implicit */signed char) min((var_27), (((/* implicit */signed char) ((((var_17) >> (((/* implicit */int) arr_16 [i_6] [i_6] [i_7])))) ^ (((/* implicit */long long int) (-2147483647 - 1))))))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned short i_13 = 1; i_13 < 22; i_13 += 1) 
                {
                    arr_52 [i_2] [(short)2] [i_12] [11] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_50 [i_2] [i_6] [i_2] [i_13 + 1])) : (arr_40 [i_2] [i_2] [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_50 [i_2] [(signed char)7] [i_2] [i_13]))) : ((+(arr_33 [9] [i_2] [i_12] [9] [i_2])))));
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 24; i_14 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((long long int) arr_32 [i_13 + 1] [i_2] [i_2]));
                        var_29 *= ((/* implicit */signed char) ((arr_42 [22U] [i_12] [i_13 - 1] [(unsigned short)0] [i_14] [(unsigned short)0]) ? (arr_33 [i_14] [i_13] [i_12] [i_6 + 1] [i_2]) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [(short)14] [i_6])) ? (((/* implicit */int) arr_47 [i_14])) : (((/* implicit */int) arr_13 [i_2] [i_2])))))));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((signed char) ((int) arr_54 [i_2] [(_Bool)1] [i_2] [(_Bool)1]))))));
                    }
                    for (signed char i_15 = 2; i_15 < 23; i_15 += 4) /* same iter space */
                    {
                        arr_57 [i_2] [i_2] [i_12] [(unsigned short)3] [i_15 - 1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_10 [i_6 + 3]))));
                        var_31 = ((/* implicit */long long int) (+(arr_33 [i_15] [i_2] [i_2] [i_2] [i_2])));
                    }
                    for (signed char i_16 = 2; i_16 < 23; i_16 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned short) arr_55 [i_6 + 1] [i_16 - 2] [i_16 - 2] [i_16] [i_2] [i_16] [i_16]);
                        arr_61 [i_16] [i_2] [i_12] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_40 [i_2] [i_6 + 1] [i_6] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) : (var_5)))));
                    }
                    var_33 = ((/* implicit */short) arr_51 [i_12] [i_6 + 2] [i_6 + 2] [18LL] [i_6 - 1] [i_2]);
                    arr_62 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_2] [i_6] [i_6 + 2])) ^ (((/* implicit */int) arr_53 [i_6 + 3] [i_6] [i_6 + 3] [i_13] [i_6] [i_6]))));
                }
                for (unsigned int i_17 = 0; i_17 < 24; i_17 += 3) 
                {
                    var_34 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_2] [i_12] [(_Bool)1] [i_17] [i_6 + 2] [i_2])) ? (((/* implicit */int) ((((/* implicit */int) arr_31 [i_2] [i_2])) > (((/* implicit */int) arr_23 [i_17] [i_17]))))) : (arr_7 [i_17])));
                    var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */_Bool) 2147483640)) ? (12444604821440354286ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-47))))))));
                    arr_66 [i_2] [i_6 + 2] [i_6 + 2] [11] = (~(12444604821440354282ULL));
                }
                var_36 = ((/* implicit */short) 12444604821440354275ULL);
                var_37 ^= ((/* implicit */unsigned short) (+(var_6)));
                /* LoopNest 2 */
                for (unsigned int i_18 = 1; i_18 < 21; i_18 += 4) 
                {
                    for (short i_19 = 2; i_19 < 22; i_19 += 1) 
                    {
                        {
                            arr_73 [i_2] = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) 480013182U)))))));
                            arr_74 [i_2] [i_2] [i_12] [i_18] [i_18] = ((/* implicit */unsigned short) (+(arr_72 [i_2] [i_6 + 1] [i_19 - 1] [i_19])));
                            var_38 = ((/* implicit */unsigned long long int) (+(arr_7 [i_6 - 1])));
                            arr_75 [i_2] [i_2] [i_12] [i_18 + 1] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_6 + 2] [i_6 + 2] [i_18 - 1] [i_18] [i_19 - 1] [i_19])) ? (arr_35 [i_6 - 1] [i_6 + 2] [i_18 + 2] [i_19] [i_19 + 2] [i_19]) : (((/* implicit */int) arr_8 [i_18 + 1] [i_2]))));
                            var_39 = ((/* implicit */signed char) ((arr_55 [i_18 - 1] [i_18 + 1] [i_18 + 1] [i_18 + 3] [i_2] [i_18 - 1] [i_18 + 2]) << (((((/* implicit */int) arr_23 [i_6] [i_18 + 3])) >> (((((/* implicit */int) arr_29 [i_2] [i_6] [13LL])) + (122)))))));
                        }
                    } 
                } 
                arr_76 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
            }
            for (int i_20 = 0; i_20 < 24; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (short i_21 = 3; i_21 < 22; i_21 += 3) 
                {
                    for (int i_22 = 0; i_22 < 24; i_22 += 4) 
                    {
                        {
                            var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) ((4ULL) >> ((((+(((/* implicit */int) var_15)))) - (26930))))))));
                            arr_84 [i_2] [i_21 + 2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [i_6 - 1] [4LL] [(signed char)18] [0U] [i_6] [i_21 - 3]))));
                        }
                    } 
                } 
                arr_85 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_6 + 2] [i_6 + 1]))));
            }
            var_41 = ((/* implicit */unsigned short) (+(var_14)));
            var_42 = ((/* implicit */short) var_10);
            arr_86 [i_6 + 2] [20ULL] [20ULL] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_60 [i_2] [6U] [i_2] [22] [i_6] [i_6]))));
        }
        var_43 = ((/* implicit */signed char) (-(arr_12 [i_2] [i_2] [i_2])));
    }
    for (unsigned char i_23 = 2; i_23 < 11; i_23 += 3) 
    {
        var_44 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_53 [i_23 - 1] [(signed char)11] [i_23 + 3] [i_23] [i_23 - 1] [i_23 - 2]))))) == (((11512063849782489290ULL) ^ (((/* implicit */unsigned long long int) 3191353047U))))));
        /* LoopNest 2 */
        for (int i_24 = 0; i_24 < 14; i_24 += 1) 
        {
            for (signed char i_25 = 1; i_25 < 11; i_25 += 4) 
            {
                {
                    arr_93 [i_24] [i_24] [i_24] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (~(2147483647)))) ? (((((/* implicit */_Bool) 6934680223927062336ULL)) ? (2147483632) : (1424966688))) : ((+(var_10))))))));
                    arr_94 [i_23] [i_24] = ((/* implicit */unsigned short) ((long long int) (!(((/* implicit */_Bool) arr_3 [i_23 - 1] [i_23 + 3])))));
                }
            } 
        } 
    }
    for (int i_26 = 1; i_26 < 19; i_26 += 3) /* same iter space */
    {
        var_45 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((var_10) & (((/* implicit */int) var_15))))))) ? (((((/* implicit */_Bool) arr_81 [i_26] [i_26 - 1] [i_26] [i_26 + 2] [i_26] [i_26])) ? (var_6) : (arr_58 [i_26] [i_26 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (unsigned short)21231))))));
        /* LoopNest 2 */
        for (int i_27 = 0; i_27 < 22; i_27 += 3) 
        {
            for (unsigned long long int i_28 = 0; i_28 < 22; i_28 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_29 = 0; i_29 < 22; i_29 += 2) 
                    {
                        for (unsigned int i_30 = 2; i_30 < 21; i_30 += 3) 
                        {
                            {
                                var_46 ^= ((/* implicit */long long int) (((-(((arr_22 [i_28] [i_28]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_100 [i_28] [i_29] [i_30]))))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(arr_102 [i_28] [i_28] [i_28] [(unsigned short)2])))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_10 [i_26 + 1])))))));
                                arr_107 [i_26] [i_29] [i_28] [i_26] [i_26] [i_26] = ((/* implicit */int) max((((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) max((var_10), (((/* implicit */int) var_7))))))), ((!(((/* implicit */_Bool) (+(((/* implicit */int) var_12)))))))));
                                arr_108 [i_26] [i_28] [i_26] [i_26] [i_30] = ((/* implicit */signed char) (+((((-(var_6))) >> (((max((((/* implicit */unsigned long long int) var_17)), (11512063849782489315ULL))) - (11512063849782489289ULL)))))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_26] [i_27] [i_26] [i_26])) ? (((/* implicit */unsigned int) 2147483647)) : (((arr_64 [i_27] [i_28]) & (arr_64 [i_26 + 3] [i_28])))));
                    var_48 |= ((min((arr_81 [i_26] [i_26 + 2] [(unsigned char)10] [i_26] [i_26] [i_28]), (arr_81 [i_26] [i_26 - 1] [i_28] [i_27] [i_28] [i_28]))) >> ((((~(var_11))) + (1703986852))));
                    /* LoopNest 2 */
                    for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                    {
                        for (signed char i_32 = 3; i_32 < 21; i_32 += 1) 
                        {
                            {
                                var_49 = ((/* implicit */int) min((var_49), (((/* implicit */int) min((((long long int) arr_33 [10] [i_32] [(signed char)23] [i_32] [i_32 - 2])), (((/* implicit */long long int) (+(((/* implicit */int) arr_41 [i_32] [i_31] [i_28] [22U] [13ULL] [i_26 + 2]))))))))));
                                var_50 = ((/* implicit */int) min(((+(((((/* implicit */unsigned long long int) var_6)) | (arr_33 [19LL] [i_27] [19LL] [i_31] [(signed char)11]))))), (((/* implicit */unsigned long long int) var_3))));
                                arr_115 [i_26 + 3] [i_27] [i_26] [i_26] [i_27] [i_27] = ((/* implicit */unsigned char) max((((/* implicit */long long int) max(((!(((/* implicit */_Bool) arr_31 [i_26] [(_Bool)1])))), ((_Bool)1)))), (((((/* implicit */long long int) (+(3689339214U)))) - (((arr_42 [i_26] [i_27] [i_28] [i_31] [i_32] [i_32 - 3]) ? (var_16) : (((/* implicit */long long int) arr_32 [i_26] [i_26] [i_26]))))))));
                                arr_116 [i_26] [i_26] [i_26] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_48 [i_26 - 1] [i_27] [i_28] [i_31] [(signed char)2])))))));
                                var_51 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) max((arr_32 [i_26 + 2] [i_26] [i_31]), (((/* implicit */unsigned int) var_7))))) ? ((~(((/* implicit */int) arr_105 [i_28])))) : (((/* implicit */int) ((((/* implicit */int) (short)32520)) != (((/* implicit */int) (signed char)84))))))), (((/* implicit */int) (short)4))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_117 [i_26] = ((/* implicit */unsigned short) (+(max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_67 [i_26] [i_26] [i_26] [i_26 + 2])) ? (arr_68 [i_26] [i_26] [i_26] [i_26] [i_26] [i_26 + 3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_63 [(short)22] [i_26] [i_26 + 3] [i_26 + 3])))))), (max((var_1), (((/* implicit */unsigned long long int) var_4))))))));
    }
    for (int i_33 = 1; i_33 < 19; i_33 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_34 = 0; i_34 < 22; i_34 += 3) 
        {
            for (unsigned char i_35 = 0; i_35 < 22; i_35 += 4) 
            {
                {
                    var_52 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)48744))));
                    arr_126 [i_33] = ((/* implicit */unsigned int) max(((!(((/* implicit */_Bool) (unsigned short)27178)))), ((!(((/* implicit */_Bool) arr_51 [i_33] [i_33] [i_33 + 3] [i_33 + 3] [i_33 + 1] [i_33 - 1]))))));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_36 = 1; i_36 < 21; i_36 += 2) 
        {
            var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) (-(3689339219U))))));
            arr_130 [i_33] [i_33] = ((/* implicit */signed char) ((arr_16 [i_36] [i_36 + 1] [i_36]) ? (arr_98 [i_36] [i_36 - 1] [i_33]) : (arr_98 [i_36] [i_36 - 1] [i_33])));
            /* LoopNest 3 */
            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
            {
                for (int i_38 = 1; i_38 < 21; i_38 += 3) 
                {
                    for (int i_39 = 0; i_39 < 22; i_39 += 1) 
                    {
                        {
                            var_54 = arr_29 [i_37] [i_36] [i_33];
                            arr_140 [i_33] = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_106 [i_33]))));
                        }
                    } 
                } 
            } 
            arr_141 [i_33] [i_36 - 1] [i_36] = ((/* implicit */unsigned int) var_18);
        }
    }
}
