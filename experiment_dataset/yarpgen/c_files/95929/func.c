/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95929
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 8; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (signed char i_2 = 4; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_8 [(unsigned char)4] [(unsigned char)4] [i_1] [9U] = ((/* implicit */short) ((((/* implicit */int) arr_4 [i_2] [4LL] [i_2 - 2] [i_2])) > (arr_5 [i_2 + 2])));
                    arr_9 [i_0] [i_0] [i_1] [i_2] = ((/* implicit */int) ((1589523025) <= (((/* implicit */int) arr_7 [i_0] [i_1] [i_0] [i_0 + 1]))));
                    arr_10 [i_0 + 2] [6U] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_0 + 1] [i_0 + 4] [i_2 + 1] [i_2 - 3])) : (((/* implicit */int) (unsigned char)36))));
                }
            } 
        } 
        arr_11 [(short)9] [i_0] = ((/* implicit */unsigned long long int) 858081837);
        arr_12 [8ULL] = ((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) (short)1008))));
        /* LoopNest 2 */
        for (long long int i_3 = 3; i_3 < 9; i_3 += 2) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_20 [i_3] = ((/* implicit */unsigned char) var_6);
                    var_10 = ((/* implicit */short) max((var_10), (((/* implicit */short) (~(((/* implicit */int) var_0)))))));
                    /* LoopSeq 4 */
                    for (unsigned int i_5 = 4; i_5 < 10; i_5 += 2) 
                    {
                        arr_23 [i_0] [i_0 + 4] [i_3 - 1] [i_3] [(short)5] = ((/* implicit */long long int) (+(((/* implicit */int) arr_13 [i_0 + 1] [i_0]))));
                        var_11 = ((/* implicit */unsigned int) ((((/* implicit */int) var_1)) | (-858081838)));
                        arr_24 [i_0] [i_0] [i_3] [i_5 - 1] = 858081837;
                        var_12 += ((/* implicit */short) ((((/* implicit */_Bool) 0U)) ? ((-(3664403359U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 14U))))))));
                        var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_3 + 1] [i_4] [i_4])) ? (((/* implicit */int) arr_7 [(_Bool)1] [i_3 + 1] [i_4] [(_Bool)1])) : (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_5 - 2]))));
                    }
                    for (long long int i_6 = 3; i_6 < 11; i_6 += 4) 
                    {
                        var_14 = ((/* implicit */short) ((unsigned short) var_2));
                        var_15 += ((/* implicit */short) ((((/* implicit */int) var_6)) / (arr_5 [i_0 + 4])));
                        var_16 *= (!(((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_16 [i_0])))));
                        var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) arr_19 [(short)1] [(short)1] [0]))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 12; i_7 += 3) 
                    {
                        var_18 = ((/* implicit */signed char) ((short) arr_2 [i_0 + 1] [i_3] [i_3 + 3]));
                        var_19 = ((/* implicit */unsigned char) min((var_19), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_4] [(unsigned short)5])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (arr_6 [(unsigned short)10] [i_3] [i_3] [(unsigned short)10]) : (((/* implicit */int) (unsigned short)38328))))))))));
                        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((14280291906650865391ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)38328)))))))))));
                    }
                    for (unsigned int i_8 = 3; i_8 < 11; i_8 += 4) 
                    {
                        var_21 |= ((/* implicit */unsigned int) ((long long int) var_3));
                        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_4] [i_8])) % (((/* implicit */int) arr_27 [0U] [0U])))))));
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 12; i_9 += 1) 
                    {
                        for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                        {
                            {
                                arr_38 [i_0] [i_0] [i_4] [i_9] [i_3] = ((/* implicit */unsigned long long int) (+(arr_15 [i_3] [4U] [i_4])));
                                arr_39 [i_0] [i_3 - 2] [i_4] [i_3] [i_4] [i_4] [i_10] = ((/* implicit */short) ((((/* implicit */unsigned int) (~(((/* implicit */int) arr_32 [i_3] [i_3]))))) <= (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-1))) : (4294967281U)))));
                                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)7))) : (arr_31 [i_4] [i_3 - 1] [(unsigned char)6] [i_0 - 1])));
                                arr_40 [i_0 + 2] [i_0 + 2] [i_0 + 2] [i_3] [i_0 + 4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0 + 4])) ? (-858081838) : (((/* implicit */int) var_8))));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_41 [i_0] [(unsigned short)8] = ((/* implicit */short) ((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_8))));
    }
    /* LoopNest 3 */
    for (unsigned int i_11 = 0; i_11 < 25; i_11 += 4) 
    {
        for (signed char i_12 = 2; i_12 < 24; i_12 += 2) 
        {
            for (unsigned char i_13 = 2; i_13 < 21; i_13 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 1; i_15 < 22; i_15 += 4) 
                        {
                            {
                                var_24 *= ((/* implicit */short) (-(arr_50 [i_11] [i_12 + 1] [i_13 + 4] [i_15 - 1])));
                                arr_57 [i_11] [i_11] [i_13 - 1] [i_14] [i_15 + 1] = ((((/* implicit */_Bool) max(((short)-32585), (arr_44 [i_14])))) ? (((/* implicit */int) ((short) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)225))))));
                                var_25 &= ((/* implicit */short) ((((/* implicit */_Bool) (~((~(var_2)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_54 [2] [i_12])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_11] [i_13] [i_14] [i_13]))))) : (max((((/* implicit */unsigned int) var_3)), (arr_46 [i_11] [i_11]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_15] [i_13] [i_12 - 2] [i_11]))) / ((-(arr_50 [i_11] [i_13] [i_11] [i_15])))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_16 = 1; i_16 < 24; i_16 += 4) 
                    {
                        for (short i_17 = 2; i_17 < 24; i_17 += 3) 
                        {
                            {
                                arr_63 [i_11] [i_11] [i_11] = ((/* implicit */signed char) (+((-(((/* implicit */int) var_8))))));
                                arr_64 [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)0)), (((unsigned long long int) var_6)))))));
                                arr_65 [i_11] [i_16] [i_12] [i_16 + 1] [6U] = ((/* implicit */unsigned short) max((((/* implicit */int) (!(arr_61 [i_17 - 2] [11U] [i_16 + 1] [i_16 + 1] [i_13 + 3] [i_12 - 1] [i_11])))), ((-(((/* implicit */int) (unsigned char)30))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_18 = 0; i_18 < 15; i_18 += 3) 
    {
        for (short i_19 = 2; i_19 < 13; i_19 += 3) 
        {
            for (short i_20 = 0; i_20 < 15; i_20 += 1) 
            {
                {
                    arr_75 [i_18] [i_19] [i_19] [i_19] = (+(((((/* implicit */_Bool) arr_67 [i_19 - 1])) ? (arr_67 [i_18]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))))));
                    arr_76 [i_19] [13U] [i_20] = ((/* implicit */int) (-(((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [21U]))) : (4294967282U)))) - (((((/* implicit */_Bool) arr_55 [i_18] [i_18] [i_18] [i_18] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_55 [9U] [i_20] [i_19] [(unsigned char)6] [i_18])))))));
                    var_26 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_52 [i_19 + 1] [i_19 + 2] [i_19 - 2] [i_19]))));
                    arr_77 [i_19] = ((/* implicit */short) ((unsigned char) var_3));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (-(858081837)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)3374))))) : (-858081838))), (max((((/* implicit */int) max((((/* implicit */short) var_1)), (var_9)))), (((((/* implicit */int) var_3)) % (((/* implicit */int) (unsigned char)178))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_21 = 0; i_21 < 19; i_21 += 1) 
    {
        var_28 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))));
        arr_81 [3LL] = ((/* implicit */int) 14U);
    }
    for (short i_22 = 0; i_22 < 22; i_22 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_23 = 0; i_23 < 22; i_23 += 3) 
        {
            for (long long int i_24 = 0; i_24 < 22; i_24 += 1) 
            {
                for (unsigned int i_25 = 4; i_25 < 19; i_25 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_26 = 0; i_26 < 22; i_26 += 1) 
                        {
                            arr_96 [i_22] [i_22] [i_24] [i_25] [i_22] = ((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) arr_90 [i_25 - 2] [i_25 - 2] [i_24] [i_25] [i_25] [i_24])) ? (arr_90 [i_25 + 1] [i_23] [i_24] [i_25 + 1] [i_25 + 1] [i_25 + 3]) : (arr_90 [i_25 - 2] [i_23] [i_25 - 2] [(unsigned char)15] [i_26] [i_22]))));
                            arr_97 [i_25] [i_23] [i_23] [i_25 - 2] [i_25 - 2] [i_25 + 3] [i_26] = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) arr_44 [i_22])) : (((/* implicit */int) (unsigned char)118))))) != ((-(0U))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_58 [i_22] [i_24] [i_24] [i_26])) ? (((/* implicit */int) (unsigned char)77)) : (((/* implicit */int) var_0))))) ? ((((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_47 [i_23] [i_24] [i_25 + 1]))) : (arr_56 [i_22] [i_22] [i_24] [i_26]))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_55 [(short)18] [i_25] [i_24] [i_23] [i_22])))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_22] [i_23] [i_24] [i_25 + 2]))))))));
                            var_29 = ((/* implicit */signed char) min((var_29), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) min((max((var_1), (((/* implicit */unsigned char) arr_61 [i_22] [i_23] [(unsigned short)23] [i_23] [i_25 - 2] [i_23] [2LL])))), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)10550)) > (((/* implicit */int) var_9))))))))) >= (((((/* implicit */unsigned int) ((/* implicit */int) max((var_8), (((/* implicit */short) arr_93 [i_22] [i_23] [i_22] [i_25 - 3] [i_26])))))) | (((unsigned int) var_8)))))))));
                        }
                        arr_98 [i_23] [i_25] [i_25 + 2] = ((/* implicit */int) max((4294967295U), (((/* implicit */unsigned int) ((_Bool) 1674499304)))));
                    }
                } 
            } 
        } 
        arr_99 [i_22] [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */int) var_0)), (arr_45 [(unsigned short)11]))))));
        var_30 = ((/* implicit */unsigned int) var_4);
    }
}
