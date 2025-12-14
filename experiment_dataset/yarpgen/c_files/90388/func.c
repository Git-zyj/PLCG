/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90388
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90388 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90388
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned short i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_12))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_7))) : (((/* implicit */unsigned long long int) ((var_3) / (((/* implicit */int) var_13)))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_4))))) + (((((/* implicit */_Bool) var_9)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_11)))))));
        arr_5 [i_0] = ((/* implicit */_Bool) ((var_2) ? (var_3) : (((/* implicit */int) var_14))));
        arr_6 [i_0] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) + (2147483647))) >> (((/* implicit */int) var_2))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopSeq 2 */
        for (short i_2 = 0; i_2 < 19; i_2 += 2) /* same iter space */
        {
            arr_12 [i_1] [i_2] = ((/* implicit */short) min((((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) ((((/* implicit */int) var_9)) > (((/* implicit */int) var_9)))))));
            arr_13 [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_15))));
            var_17 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((var_12) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_11))))) & (((((/* implicit */unsigned long long int) ((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ^ (((var_7) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))));
        }
        for (short i_3 = 0; i_3 < 19; i_3 += 2) /* same iter space */
        {
            var_18 = ((/* implicit */short) min((max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) == (((/* implicit */int) var_9))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((((/* implicit */short) var_15)), (var_8)))) * (((/* implicit */int) var_12)))))));
            arr_16 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))) ? (max((var_10), (((/* implicit */unsigned long long int) var_3)))) : (var_10))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))), (min((var_7), (((/* implicit */unsigned long long int) var_15))))))));
            var_19 = ((/* implicit */unsigned short) var_7);
            arr_17 [i_1] [i_3] [i_3] = ((/* implicit */long long int) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */int) max((var_13), (((/* implicit */unsigned short) var_12))))) >= (var_3))))));
            arr_18 [i_1] = ((/* implicit */long long int) var_11);
        }
        var_20 = ((/* implicit */unsigned short) var_14);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_4 = 1; i_4 < 17; i_4 += 2) 
        {
            arr_23 [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */long long int) ((((/* implicit */int) var_2)) >> (((/* implicit */int) var_2))))) < (((((/* implicit */_Bool) var_7)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
            arr_24 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */int) var_1)) <= (((/* implicit */int) var_8))));
        }
        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_6 = 0; i_6 < 19; i_6 += 2) 
            {
                arr_29 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) var_5);
                /* LoopSeq 2 */
                for (int i_7 = 0; i_7 < 19; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_8 = 2; i_8 < 15; i_8 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (var_7)))) * (((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_1)))))))) * (max((((/* implicit */unsigned long long int) var_14)), (((((/* implicit */_Bool) var_8)) ? (var_5) : (((/* implicit */unsigned long long int) var_0))))))));
                        arr_35 [i_5] [i_6] [i_8] = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_8), (((/* implicit */short) var_12))))), (((var_0) & (((/* implicit */long long int) ((/* implicit */int) var_11)))))))) ? (((min((var_10), (((/* implicit */unsigned long long int) var_3)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_3)) ? (var_5) : (var_7)))))));
                    }
                    arr_36 [i_1] [i_5] [i_6] [i_7] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_12))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) % (var_7))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_15), (var_6)))), (((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_12))))))))));
                    var_22 = ((/* implicit */unsigned short) ((((((((/* implicit */int) var_11)) % (((/* implicit */int) var_4)))) == (((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_15)))))) ? (min((((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) + (2147483647))) << (((((((/* implicit */int) var_8)) + (4787))) - (26)))))), (min((var_10), (var_5))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_15))))), (((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5)))))));
                }
                /* vectorizable */
                for (unsigned short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    arr_39 [i_1] [i_1] [i_6] = ((/* implicit */short) ((((/* implicit */int) var_4)) >> (((var_0) - (2717478976009961965LL)))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) var_12))))) : (((var_0) >> (((((/* implicit */int) var_4)) - (21454)))))));
                }
            }
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) min((((/* implicit */int) var_12)), (var_3)))) | (max((((/* implicit */unsigned long long int) var_6)), (var_10)))));
        }
    }
    var_25 = ((/* implicit */short) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) / (((/* implicit */int) var_15))))) != (max((((/* implicit */unsigned long long int) var_8)), (var_10)))))), (var_0)));
    var_26 = min((((/* implicit */unsigned short) var_6)), (var_13));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) /* same iter space */
    {
        var_27 = ((/* implicit */unsigned long long int) ((var_11) ? (var_0) : (((/* implicit */long long int) var_3))));
        arr_44 [i_10] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) + (((/* implicit */int) var_13))))) * (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_10)))));
    }
    for (unsigned int i_11 = 0; i_11 < 19; i_11 += 1) /* same iter space */
    {
        arr_47 [i_11] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_9))))), (min((var_5), (var_5)))));
        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_8)) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) var_8)))) : (var_3))) - (((/* implicit */int) max((((/* implicit */signed char) var_11)), (var_14))))));
        arr_48 [i_11] [i_11] = ((/* implicit */long long int) var_10);
        arr_49 [i_11] = ((/* implicit */signed char) var_0);
    }
    /* LoopSeq 3 */
    for (unsigned short i_12 = 0; i_12 < 23; i_12 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_13 = 1; i_13 < 21; i_13 += 2) 
        {
            arr_54 [i_13 + 1] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_14), (var_6)))) ? (((((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_13)))))) ^ (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_4)))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) + (var_7))))))));
            arr_55 [i_13] = ((/* implicit */unsigned char) ((max((var_5), (((/* implicit */unsigned long long int) var_3)))) < (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) & (var_0))))));
        }
        arr_56 [i_12] = ((/* implicit */unsigned long long int) min((((var_2) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8)))), (((((((/* implicit */int) var_15)) | (((/* implicit */int) var_11)))) ^ (((/* implicit */int) var_14))))));
    }
    /* vectorizable */
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        /* LoopSeq 4 */
        for (unsigned short i_15 = 0; i_15 < 21; i_15 += 2) 
        {
            arr_65 [(_Bool)1] [i_14] [i_14] = var_9;
            /* LoopSeq 1 */
            for (long long int i_16 = 0; i_16 < 21; i_16 += 1) 
            {
                arr_69 [i_14] [i_16] = ((/* implicit */unsigned char) var_5);
                arr_70 [i_14] [i_16] [i_15] [i_16] = ((/* implicit */unsigned int) var_2);
            }
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_29 = ((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) var_0))));
            var_30 = ((/* implicit */long long int) var_10);
        }
        for (unsigned char i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
            {
                arr_78 [i_18] [i_18] [i_18] [i_18] = ((/* implicit */unsigned short) var_14);
                var_31 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_14)) : (((((/* implicit */int) var_6)) * (((/* implicit */int) var_2))))));
                arr_79 [i_14] [i_18] [i_19] = ((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_4))));
            }
            /* LoopSeq 2 */
            for (signed char i_20 = 1; i_20 < 17; i_20 += 2) 
            {
                arr_84 [i_14] [i_18] [i_14] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) ^ (var_7)));
                arr_85 [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_15))));
                /* LoopSeq 1 */
                for (_Bool i_21 = 1; i_21 < 1; i_21 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_22 = 0; i_22 < 21; i_22 += 1) 
                    {
                        arr_90 [i_14] [i_18] [i_20] [i_21] [i_20] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */int) var_11))))));
                        arr_91 [i_14] [i_18] = ((((/* implicit */int) var_8)) <= (((/* implicit */int) var_6)));
                        arr_92 [i_18] [i_18] [i_18] [16U] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) var_8))));
                    }
                    arr_93 [i_14] [(short)5] [i_20] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) * (var_5)));
                }
                arr_94 [i_18] [(_Bool)1] [(_Bool)1] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) ^ (((((/* implicit */int) var_11)) & (((/* implicit */int) var_11))))));
                arr_95 [i_18] = ((/* implicit */unsigned short) ((var_7) >> (((var_0) - (2717478976009961959LL)))));
            }
            for (unsigned long long int i_23 = 1; i_23 < 20; i_23 += 1) 
            {
                arr_99 [i_18] [i_18] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_1)) + (((/* implicit */int) var_12)))) : (((/* implicit */int) ((var_7) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                var_32 = ((var_12) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))));
                var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */int) var_13))));
                /* LoopSeq 2 */
                for (unsigned char i_24 = 1; i_24 < 19; i_24 += 2) 
                {
                    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (var_0)))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) var_15)))))));
                    var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) <= (((/* implicit */int) ((var_5) >= (var_7))))));
                    arr_102 [i_18] = ((/* implicit */unsigned short) ((((((/* implicit */int) var_6)) & (((/* implicit */int) var_15)))) * (((/* implicit */int) var_12))));
                    arr_103 [i_18] = ((/* implicit */short) var_9);
                    /* LoopSeq 2 */
                    for (unsigned long long int i_25 = 3; i_25 < 19; i_25 += 2) 
                    {
                        arr_107 [i_18] [i_24] [15LL] [i_18] = var_11;
                        var_36 = ((/* implicit */unsigned int) var_15);
                    }
                    for (unsigned short i_26 = 0; i_26 < 21; i_26 += 2) 
                    {
                        arr_110 [i_14] [i_14] [i_18] [i_23] [1LL] [i_18] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_5)))))) + (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_7)))));
                        var_37 = ((/* implicit */unsigned char) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                    }
                }
                for (unsigned char i_27 = 1; i_27 < 20; i_27 += 1) 
                {
                    arr_114 [i_14] [i_18] [i_23] [i_18] = ((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) var_3))));
                    arr_115 [i_18] = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((((/* implicit */int) var_12)) % (((/* implicit */int) var_9))))) : (var_0)));
                }
                /* LoopSeq 2 */
                for (_Bool i_28 = 0; i_28 < 0; i_28 += 1) 
                {
                    arr_118 [i_18] [i_18] [i_23 - 1] = ((/* implicit */signed char) ((var_7) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    /* LoopSeq 2 */
                    for (unsigned short i_29 = 4; i_29 < 19; i_29 += 1) 
                    {
                        arr_121 [i_18] [i_28 + 1] [i_23 - 1] [i_23] [i_18] [i_14] [i_18] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_9))));
                        arr_122 [i_18] [(unsigned short)9] [i_28] [i_23] [i_18] [(signed char)17] [i_18] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) == (var_10))) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
                    {
                        var_38 = ((/* implicit */unsigned short) ((((((/* implicit */int) var_1)) | (((/* implicit */int) var_2)))) & (((/* implicit */int) var_9))));
                        arr_125 [i_14] [1ULL] [i_18] [1ULL] = ((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
                    }
                }
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    var_39 = ((/* implicit */unsigned char) ((((/* implicit */int) var_15)) % (((((/* implicit */int) var_14)) - (((/* implicit */int) var_12))))));
                    /* LoopSeq 3 */
                    for (unsigned short i_32 = 0; i_32 < 21; i_32 += 2) 
                    {
                        var_40 = ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_8)));
                        var_41 = ((/* implicit */_Bool) var_10);
                        var_42 = ((/* implicit */unsigned short) ((((/* implicit */int) ((var_7) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))) >> (((((/* implicit */int) var_8)) + (4776)))));
                        var_43 = ((/* implicit */unsigned char) ((var_7) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_14)) : (var_3))))));
                        arr_132 [i_14] [(unsigned char)11] [i_18] [i_31] [(unsigned short)7] [i_32] [(_Bool)0] = ((/* implicit */signed char) ((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) + (var_7)))));
                    }
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        arr_136 [i_14] [i_18] [i_18] [i_31] [i_33] [i_18] [i_14] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_0)))));
                        arr_137 [i_33] [5ULL] [i_33] [i_18] [i_33] = ((/* implicit */_Bool) var_3);
                    }
                    for (short i_34 = 0; i_34 < 21; i_34 += 1) 
                    {
                        arr_140 [i_14] [i_18] [i_23 - 1] [i_18] [i_31] [i_34] [i_34] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_8))));
                        arr_141 [i_18] [i_31] [i_23 - 1] [(_Bool)1] [i_18] [i_18] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_15))))) : (((var_10) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))));
                    }
                }
            }
        }
        for (long long int i_35 = 2; i_35 < 19; i_35 += 2) 
        {
            arr_144 [i_14] [i_14] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_6)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
            var_44 = ((/* implicit */unsigned short) ((var_0) - (((/* implicit */long long int) ((/* implicit */int) var_14)))));
            arr_145 [i_14] [i_35] = ((/* implicit */unsigned short) ((((/* implicit */int) var_6)) < (((((/* implicit */int) var_13)) >> (((var_5) - (7734657684829815653ULL)))))));
        }
        var_45 = ((/* implicit */_Bool) var_15);
        var_46 = ((/* implicit */int) var_0);
    }
    for (unsigned short i_36 = 0; i_36 < 15; i_36 += 1) 
    {
        arr_148 [i_36] = ((/* implicit */unsigned char) var_4);
        arr_149 [i_36] [i_36] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((((/* implicit */int) var_8)) + (2147483647))) << (((var_7) - (7698466988254460705ULL))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) <= (var_7))))))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_1)))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) max((var_6), (((/* implicit */signed char) var_2)))))))) : (min((var_10), (((/* implicit */unsigned long long int) min((((/* implicit */int) var_14)), (var_3))))))));
        var_47 = ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) >> (((var_0) - (2717478976009961966LL)))))) <= (var_5)))) & (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_4))))));
    }
}
