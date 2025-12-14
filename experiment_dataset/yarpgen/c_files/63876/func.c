/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 63876
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=63876 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/63876
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (unsigned char i_2 = 2; i_2 < 10; i_2 += 2) 
            {
                {
                    var_11 |= ((/* implicit */unsigned long long int) -12);
                    var_12 = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned short) arr_11 [i_4] [i_4] [i_2] [i_2]);
                                var_14 = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) << (((/* implicit */int) ((unsigned char) arr_7 [i_1])))))));
                                arr_13 [i_1] [i_1] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 - 1] [i_2 - 1] [i_0] [i_1] [i_0] [i_0])))))) >= (((((/* implicit */_Bool) var_8)) ? (arr_10 [i_2] [i_4 + 1] [i_2] [i_4] [i_4] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1))))))));
                                var_15 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)11243))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (-(3312470532U)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 2251799813677056LL)) || (((/* implicit */_Bool) var_6)))))) / (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_0] [i_0])))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */short) ((4ULL) + (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-32766)))))));
                }
            } 
        } 
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) min(((unsigned short)57616), (((/* implicit */unsigned short) var_9))))))));
    }
    /* vectorizable */
    for (unsigned short i_5 = 3; i_5 < 8; i_5 += 3) 
    {
        arr_17 [i_5] = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_5]))));
        var_18 = ((/* implicit */unsigned short) ((signed char) arr_3 [i_5]));
    }
    for (int i_6 = 0; i_6 < 21; i_6 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_7 = 1; i_7 < 17; i_7 += 3) 
        {
            arr_25 [i_6] [i_6] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_20 [i_6])))), (2062770632)))) ? (13ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
            arr_26 [i_7] [i_6] [i_6] = ((/* implicit */_Bool) arr_20 [i_7 + 1]);
            var_19 = ((/* implicit */_Bool) (-(16049401186332493704ULL)));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 4; i_8 < 19; i_8 += 4) 
            {
                for (unsigned int i_9 = 2; i_9 < 20; i_9 += 3) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) max((((((/* implicit */int) ((unsigned char) arr_30 [i_6] [i_9] [i_9] [i_9]))) * (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))))), (((((/* implicit */_Bool) (signed char)99)) ? (((/* implicit */int) arr_30 [i_6] [i_6] [i_9] [i_6])) : (((/* implicit */int) (_Bool)1))))));
                        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_21 [i_6])) >= (((/* implicit */int) (unsigned short)15813)))) ? ((-(arr_31 [i_6] [i_6] [i_7 - 1] [i_8 - 3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_28 [i_7 + 1] [i_8 + 2] [i_8] [i_8]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))))));
                        var_22 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((arr_27 [i_6] [i_6] [i_6]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_6])))))))))));
                    }
                } 
            } 
            var_23 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */_Bool) 318803671U)) && (((/* implicit */_Bool) arr_23 [i_6] [i_6]))))))));
        }
        for (int i_10 = 2; i_10 < 20; i_10 += 4) 
        {
            var_24 = ((/* implicit */short) (+(min((arr_29 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10 - 1]), (arr_29 [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10 - 1])))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned long long int i_11 = 3; i_11 < 17; i_11 += 2) 
            {
                var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)106))));
                /* LoopSeq 2 */
                for (signed char i_12 = 1; i_12 < 19; i_12 += 3) 
                {
                    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_6] [i_12 + 1])) ? (((/* implicit */int) arr_21 [i_10 - 2])) : (((/* implicit */int) arr_21 [i_11 + 2]))));
                    var_27 = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_30 [i_12] [i_12 + 1] [i_12] [i_12 - 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_32 [i_6])) & (((/* implicit */int) (signed char)15))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_6] [i_6]))) : (288230376151711743ULL)));
                        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) 2914000017U))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_7))))) : (var_0)));
                    }
                    var_30 = ((/* implicit */unsigned short) var_9);
                    var_31 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? ((+(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_30 [i_12] [i_12 + 2] [i_12] [i_12]))));
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    arr_45 [i_6] [i_6] [i_14] [i_6] = ((/* implicit */long long int) (-(((/* implicit */int) (short)13819))));
                    var_32 = ((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-70)) / (((/* implicit */int) var_9))))) ^ (4294967283U));
                    var_33 = ((/* implicit */unsigned long long int) var_3);
                    var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15798))) >= (arr_27 [i_14 - 1] [i_11 + 2] [i_10 - 1])));
                }
            }
            /* vectorizable */
            for (signed char i_15 = 1; i_15 < 18; i_15 += 4) 
            {
                var_35 = ((/* implicit */short) (-((+(2829322561650316267ULL)))));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 21; i_16 += 2) 
                {
                    for (unsigned int i_17 = 4; i_17 < 20; i_17 += 4) 
                    {
                        {
                            arr_55 [i_6] [i_6] [i_6] [i_15] = (unsigned char)240;
                            arr_56 [i_6] [i_6] [i_6] [i_16] [i_16] [i_6] &= 2136529210U;
                            arr_57 [i_10] [i_15] [i_15] = ((/* implicit */unsigned long long int) (+(arr_18 [i_17 - 4] [i_15 + 3])));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_35 [i_17 + 1] [i_10] [i_10 - 1] [i_15 - 1])) ? (18446744073709551609ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_35 [i_17 + 1] [i_17 + 1] [i_10 - 1] [i_15 - 1])))));
                            var_37 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) arr_53 [i_6]))) <= (((((/* implicit */_Bool) 3130224812U)) ? (((/* implicit */long long int) 0U)) : (-7216554210180420859LL)))));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (unsigned int i_18 = 2; i_18 < 20; i_18 += 4) 
                {
                    arr_61 [i_6] [i_6] [i_15] [i_6] = ((/* implicit */short) arr_18 [i_18 - 1] [i_10 - 2]);
                    var_38 = arr_46 [i_6] [i_6] [i_6];
                    var_39 = ((/* implicit */signed char) ((unsigned short) arr_27 [i_18 - 1] [i_15 + 3] [i_10 - 2]));
                }
                for (unsigned long long int i_19 = 0; i_19 < 21; i_19 += 4) 
                {
                    var_40 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (signed char)112)) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_41 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (short)-6699)) ? (var_0) : (((/* implicit */unsigned long long int) var_1)))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_6] [i_6] [i_15 + 1])))));
                    var_42 &= (-(arr_52 [i_19] [i_15 + 1] [i_15] [i_15]));
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_33 [i_6])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))))))));
                }
                for (long long int i_20 = 0; i_20 < 21; i_20 += 1) 
                {
                    var_44 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 0U)) || ((_Bool)0))))) < (arr_31 [i_6] [i_6] [i_15] [i_20])));
                    var_45 = ((/* implicit */unsigned short) ((4294705152U) >> (((((/* implicit */int) (unsigned char)237)) - (235)))));
                    arr_67 [i_6] [i_6] [i_15] [i_15] = ((arr_50 [i_10 - 2] [i_10 - 2]) >= (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))));
                    var_46 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((15704987493939180474ULL) - (4611650834055299072ULL))))));
                }
                for (unsigned char i_21 = 0; i_21 < 21; i_21 += 4) 
                {
                    var_47 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_64 [i_6] [i_10 + 1]))));
                    arr_70 [i_6] [i_6] [i_6] [i_15] [i_6] = ((/* implicit */long long int) ((_Bool) arr_23 [i_6] [i_6]));
                    var_48 *= ((/* implicit */short) var_2);
                }
            }
            var_49 = ((/* implicit */long long int) (+(((((/* implicit */int) arr_38 [i_6] [i_10] [i_6] [i_6])) & (((/* implicit */int) arr_19 [i_6]))))));
        }
        var_50 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_3))));
        var_51 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_68 [i_6] [i_6] [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_40 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6]))))) ? (((/* implicit */long long int) ((/* implicit */int) max(((short)9389), (((/* implicit */short) var_10)))))) : (((((/* implicit */_Bool) var_0)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_63 [i_6] [i_6] [i_6] [i_6] [i_6]))))))), (((/* implicit */long long int) (-(((/* implicit */int) max((((/* implicit */signed char) var_7)), (var_5)))))))));
        /* LoopNest 2 */
        for (unsigned int i_22 = 4; i_22 < 17; i_22 += 2) 
        {
            for (unsigned long long int i_23 = 3; i_23 < 19; i_23 += 3) 
            {
                {
                    arr_76 [i_6] [i_22] [i_22] = ((/* implicit */short) var_4);
                    /* LoopNest 2 */
                    for (unsigned int i_24 = 0; i_24 < 21; i_24 += 4) 
                    {
                        for (unsigned char i_25 = 0; i_25 < 21; i_25 += 3) 
                        {
                            {
                                var_52 = ((/* implicit */long long int) (_Bool)1);
                                var_53 -= ((/* implicit */unsigned int) max(((unsigned char)239), ((unsigned char)134)));
                                var_54 -= (signed char)83;
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */short) (!(((/* implicit */_Bool) 4874475825362970358LL))));
                }
            } 
        } 
    }
    /* LoopNest 3 */
    for (unsigned char i_26 = 1; i_26 < 13; i_26 += 3) 
    {
        for (unsigned long long int i_27 = 1; i_27 < 14; i_27 += 4) 
        {
            for (unsigned long long int i_28 = 2; i_28 < 13; i_28 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_29 = 1; i_29 < 14; i_29 += 3) 
                    {
                        for (unsigned short i_30 = 3; i_30 < 14; i_30 += 2) 
                        {
                            {
                                var_56 = ((/* implicit */short) 9368473968619883461ULL);
                                var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) (short)-32002))));
                                var_58 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)200)) / (((/* implicit */int) ((signed char) var_9)))));
                            }
                        } 
                    } 
                    var_59 ^= ((/* implicit */short) (~(((((unsigned int) var_5)) | (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_62 [i_26] [i_27] [i_26] [i_27] [i_26] [i_26])) : (((/* implicit */int) (short)-15461)))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_31 = 2; i_31 < 12; i_31 += 2) 
    {
        for (unsigned short i_32 = 0; i_32 < 15; i_32 += 2) 
        {
            {
                var_60 -= ((/* implicit */unsigned char) arr_90 [i_31] [i_31 + 1] [i_31] [i_31]);
                var_61 ^= ((/* implicit */unsigned int) ((arr_77 [i_32] [i_32] [i_31] [i_32]) | (var_0)));
                /* LoopNest 2 */
                for (signed char i_33 = 0; i_33 < 15; i_33 += 3) 
                {
                    for (unsigned short i_34 = 0; i_34 < 15; i_34 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned int i_35 = 3; i_35 < 14; i_35 += 3) 
                            {
                                var_62 = ((/* implicit */short) var_2);
                                var_63 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) arr_94 [i_31] [i_31] [i_31] [i_34] [i_31])) ? (((((/* implicit */_Bool) arr_44 [i_34] [i_34] [i_34])) ? (-4874475825362970358LL) : (((/* implicit */long long int) arr_68 [i_31] [i_32] [i_33])))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))));
                                arr_112 [i_34] [i_34] [i_32] [i_32] [i_34] = ((/* implicit */short) (+(((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_108 [i_31] [i_31] [i_31])))) | (min((var_3), (((/* implicit */unsigned int) var_10))))))));
                            }
                            for (signed char i_36 = 1; i_36 < 14; i_36 += 2) 
                            {
                                var_64 = ((/* implicit */unsigned int) 5510073341891854672LL);
                                arr_115 [i_31] [i_34] [i_34] [i_34] = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-25826))))) <= (((((/* implicit */int) var_4)) + (((/* implicit */int) arr_41 [i_31] [i_32] [i_32] [i_33] [i_33])))));
                                var_65 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_40 [i_36] [i_36] [i_36] [i_36] [i_36] [i_36])) || (((/* implicit */_Bool) arr_20 [i_31])))))), (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 16724605551648182145ULL)) && (((/* implicit */_Bool) var_3)))))) : (-874206282244820817LL)))));
                                arr_116 [i_34] [i_34] = ((/* implicit */unsigned long long int) var_4);
                            }
                            arr_117 [i_34] = ((/* implicit */unsigned short) (-(973064851U)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_66 = ((/* implicit */unsigned long long int) var_5);
    /* LoopNest 3 */
    for (long long int i_37 = 1; i_37 < 20; i_37 += 3) 
    {
        for (unsigned int i_38 = 0; i_38 < 21; i_38 += 3) 
        {
            for (long long int i_39 = 4; i_39 < 20; i_39 += 2) 
            {
                {
                    var_67 = ((/* implicit */unsigned long long int) var_8);
                    var_68 ^= ((/* implicit */signed char) max(((~(128U))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5)))))));
                    arr_127 [i_38] [i_38] [i_38] = ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) | ((~((~(((/* implicit */int) arr_71 [i_38]))))))));
                }
            } 
        } 
    } 
}
