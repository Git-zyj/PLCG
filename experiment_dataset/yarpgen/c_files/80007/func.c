/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80007
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
    for (short i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 1; i_1 < 17; i_1 += 1) 
        {
            arr_5 [i_1] [i_0] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0])))))));
            arr_6 [i_0] [i_1] = var_0;
        }
        var_14 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [i_0]))));
        arr_7 [i_0 - 1] [i_0] = var_1;
        /* LoopSeq 3 */
        for (short i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            var_15 -= ((/* implicit */short) ((((((/* implicit */int) arr_9 [i_0] [i_0 + 1] [i_0])) & (((/* implicit */int) arr_9 [i_0] [i_0 - 1] [i_0])))) ^ (((((/* implicit */int) arr_9 [i_0 - 1] [i_0 + 1] [(short)7])) & (((/* implicit */int) arr_9 [(short)8] [i_0 + 1] [i_0 + 1]))))));
            var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_2 [i_2] [(short)11] [i_0]))))))) || (((/* implicit */_Bool) ((((/* implicit */int) arr_10 [i_0 - 1] [i_0 - 1])) / (((/* implicit */int) arr_10 [i_0 + 1] [i_0 + 1])))))));
            var_17 = ((/* implicit */short) min((var_17), (arr_1 [i_2])));
            var_18 ^= arr_1 [i_0 - 1];
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 19; i_3 += 1) 
        {
            /* LoopSeq 3 */
            for (short i_4 = 0; i_4 < 19; i_4 += 1) 
            {
                var_19 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0] [i_3] [i_4])) / (((((/* implicit */int) arr_12 [i_0] [i_3])) % (((/* implicit */int) arr_15 [i_0] [i_3]))))));
                arr_18 [i_4] [i_3] [i_0] |= ((/* implicit */short) ((((/* implicit */int) arr_8 [i_0 - 1])) | (((/* implicit */int) var_1))));
                arr_19 [i_4] = arr_10 [i_3] [i_4];
            }
            for (short i_5 = 2; i_5 < 15; i_5 += 1) 
            {
                arr_22 [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_5 - 2] [i_5]))));
                var_20 -= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                var_21 = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0 + 1] [i_0]))));
            }
            for (short i_6 = 0; i_6 < 19; i_6 += 4) 
            {
                var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7)))))));
                var_23 = arr_9 [i_6] [i_3] [i_0];
            }
            /* LoopSeq 1 */
            for (short i_7 = 1; i_7 < 17; i_7 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_8 = 0; i_8 < 19; i_8 += 4) 
                {
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_27 [i_0] [i_7] [i_8] [i_8]))));
                    var_25 = ((/* implicit */short) max((var_25), (var_4)));
                    var_26 = arr_4 [i_7 - 1] [i_0 + 1];
                }
                for (short i_9 = 0; i_9 < 19; i_9 += 1) 
                {
                    var_27 = ((/* implicit */short) ((((/* implicit */int) arr_17 [i_0 - 1] [i_0] [i_0 - 1])) * (((/* implicit */int) var_9))));
                    var_28 = arr_29 [i_0] [i_9] [i_0] [i_3];
                    var_29 = ((/* implicit */short) ((((/* implicit */int) arr_29 [i_0] [i_3] [i_7 + 2] [i_3])) - (((/* implicit */int) var_9))));
                }
                for (short i_10 = 1; i_10 < 17; i_10 += 3) 
                {
                    var_30 = ((/* implicit */short) (-(((/* implicit */int) arr_2 [i_10 + 2] [i_0 - 1] [i_7 + 1]))));
                    var_31 = arr_0 [i_0];
                    /* LoopSeq 2 */
                    for (short i_11 = 2; i_11 < 16; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) arr_32 [i_11 + 3]))));
                        arr_38 [i_11] [i_11] [i_7 - 1] [i_11] [(short)16] |= arr_2 [i_0] [i_0] [i_0];
                        var_33 = ((/* implicit */short) (+(((/* implicit */int) var_2))));
                        var_34 = var_0;
                        var_35 = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_11 + 2] [i_3] [i_0]))));
                    }
                    for (short i_12 = 3; i_12 < 16; i_12 += 2) 
                    {
                        var_36 += ((/* implicit */short) (+(((/* implicit */int) var_1))));
                        arr_43 [i_0] [i_0] [i_0] [i_0] [i_10] [i_0] [i_0] = var_8;
                    }
                }
                /* LoopSeq 4 */
                for (short i_13 = 0; i_13 < 19; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_14 = 0; i_14 < 19; i_14 += 1) 
                    {
                        var_37 = var_13;
                        arr_48 [i_0] [i_0] [i_7] [i_14] [i_14] = var_0;
                        var_38 = arr_30 [i_3] [i_0];
                        var_39 = ((/* implicit */short) (+(((/* implicit */int) arr_3 [i_0 + 1] [i_0 - 1]))));
                        var_40 = ((/* implicit */short) ((((/* implicit */int) (short)17662)) != (((/* implicit */int) (short)-18095))));
                    }
                    arr_49 [i_0] [i_3] [i_3] [i_3] [i_7 + 2] = ((/* implicit */short) (((-(((/* implicit */int) arr_28 [i_0] [i_0])))) != (((/* implicit */int) arr_36 [i_0 - 1] [(short)8] [(short)12] [i_0] [i_0] [i_7] [i_7 + 2]))));
                    var_41 = ((/* implicit */short) (!(((/* implicit */_Bool) arr_39 [(short)8] [i_0 - 1] [i_7 + 2] [i_7 - 1]))));
                    /* LoopSeq 2 */
                    for (short i_15 = 0; i_15 < 19; i_15 += 3) 
                    {
                        var_42 = ((/* implicit */short) max((var_42), (var_1)));
                        var_43 -= ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_0 - 1] [i_7 + 1] [(short)12] [i_7 + 1]))));
                    }
                    for (short i_16 = 0; i_16 < 19; i_16 += 3) 
                    {
                        arr_54 [i_0 + 1] [i_3] [(short)4] [i_13] [i_16] [i_7] |= ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */int) arr_50 [i_16] [i_0] [i_7] [i_13] [i_7])) != (((/* implicit */int) arr_44 [i_7] [i_7])))))));
                        var_44 = ((/* implicit */short) max((var_44), (var_12)));
                    }
                    /* LoopSeq 2 */
                    for (short i_17 = 0; i_17 < 19; i_17 += 1) 
                    {
                        var_45 = arr_15 [i_0 + 1] [i_0 - 1];
                        var_46 = arr_9 [i_0 - 1] [i_0 - 1] [i_7 + 1];
                        arr_59 [(short)17] [i_3] [(short)9] [i_17] [i_17] [(short)17] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_3 [i_7] [i_0])))))));
                    }
                    for (short i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        var_47 &= var_4;
                        arr_64 [i_18] [i_13] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_2 [(short)4] [i_7 + 2] [i_0 - 1]))));
                        var_48 = ((/* implicit */short) (+(((/* implicit */int) arr_47 [i_0 - 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0]))));
                    }
                }
                for (short i_19 = 0; i_19 < 19; i_19 += 1) 
                {
                    var_49 = ((/* implicit */short) ((((/* implicit */int) arr_35 [i_7 - 1] [i_7 - 1] [i_7] [i_7 + 2] [i_7 - 1] [i_7])) / (((/* implicit */int) var_4))));
                    var_50 = arr_40 [i_7] [i_7 - 1] [i_7] [i_7 + 2];
                    var_51 = ((/* implicit */short) ((((/* implicit */int) var_11)) | (((((/* implicit */int) arr_11 [i_19])) * (((/* implicit */int) arr_25 [i_0] [i_3]))))));
                    var_52 = ((/* implicit */short) ((((/* implicit */int) var_7)) + ((+(((/* implicit */int) var_12))))));
                }
                for (short i_20 = 0; i_20 < 19; i_20 += 1) 
                {
                    var_53 = ((/* implicit */short) max((var_53), (((/* implicit */short) (+(((/* implicit */int) arr_65 [i_0 - 1] [(short)18] [i_3] [i_7 + 2])))))));
                    var_54 += ((/* implicit */short) (!(((/* implicit */_Bool) var_0))));
                }
                for (short i_21 = 0; i_21 < 19; i_21 += 3) 
                {
                    arr_73 [i_0] [i_0 - 1] [(short)18] [i_7] = arr_58 [i_3] [i_21] [i_21] [i_21] [i_3] [i_3] [i_21];
                    arr_74 [i_21] [i_3] [(short)1] [i_7] [i_3] [i_0] = ((/* implicit */short) ((((/* implicit */int) var_11)) % ((+(((/* implicit */int) var_5))))));
                    arr_75 [i_0 + 1] = ((/* implicit */short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)27932)))))));
                    var_55 = arr_35 [i_0] [i_0] [i_7 - 1] [i_21] [i_3] [i_21];
                }
                /* LoopSeq 2 */
                for (short i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    arr_80 [i_22] [i_7] [(short)10] [i_0] = arr_23 [i_7 + 2] [i_7 + 1] [i_7 - 1] [i_7 + 2];
                    var_56 = arr_47 [i_0] [i_3] [i_3] [i_22] [i_3];
                    arr_81 [i_0] [i_3] [i_0] [i_22] = ((/* implicit */short) (-(((/* implicit */int) arr_42 [i_0 + 1] [i_0 + 1] [i_7 - 1] [i_0 + 1] [i_0 + 1]))));
                }
                for (short i_23 = 0; i_23 < 19; i_23 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_24 = 0; i_24 < 19; i_24 += 1) 
                    {
                        var_57 = ((/* implicit */short) (!(((/* implicit */_Bool) (short)-27933))));
                        arr_87 [i_0] [i_23] = arr_39 [i_23] [i_23] [i_0] [i_7 - 1];
                    }
                    for (short i_25 = 2; i_25 < 15; i_25 += 1) 
                    {
                        var_58 = ((/* implicit */short) (~(((/* implicit */int) arr_45 [i_0] [(short)9] [i_7 + 1] [i_23] [(short)16] [i_23]))));
                        var_59 = var_12;
                    }
                    for (short i_26 = 2; i_26 < 18; i_26 += 2) 
                    {
                        arr_93 [i_0] [i_0 - 1] [i_23] [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_16 [i_26 - 2] [i_7] [i_7 + 2] [i_7 - 1])) && (((/* implicit */_Bool) arr_65 [i_23] [i_23] [(short)13] [i_7 - 1]))));
                        var_60 |= var_4;
                    }
                    for (short i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        var_61 = arr_72 [i_3] [i_3] [i_3] [i_23];
                        var_62 = arr_26 [(short)12] [(short)18] [i_7 + 1] [i_23];
                        arr_97 [i_0 - 1] [i_23] = var_6;
                        var_63 = ((/* implicit */short) ((((/* implicit */int) arr_72 [i_0] [i_0] [i_0] [i_23])) % (((/* implicit */int) ((((/* implicit */int) arr_16 [i_0] [(short)9] [i_0 + 1] [i_0 - 1])) != (((/* implicit */int) var_1)))))));
                        arr_98 [i_0] [i_23] [i_7 + 2] [i_23] [(short)9] = arr_21 [i_23] [i_7] [(short)17] [(short)17];
                    }
                    var_64 = var_7;
                }
            }
        }
        for (short i_28 = 2; i_28 < 17; i_28 += 2) 
        {
            var_65 += arr_2 [i_0 + 1] [i_0 + 1] [i_0 + 1];
            arr_101 [i_0] = arr_21 [i_0] [i_0] [i_0] [i_0];
            var_66 = ((/* implicit */short) (+(((/* implicit */int) arr_63 [i_28 - 2] [i_28] [i_0] [i_28] [i_28] [(short)14]))));
        }
    }
    /* vectorizable */
    for (short i_29 = 0; i_29 < 13; i_29 += 1) 
    {
        arr_105 [i_29] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_11 [i_29]))));
        /* LoopSeq 1 */
        for (short i_30 = 0; i_30 < 13; i_30 += 3) 
        {
            arr_110 [i_29] [i_29] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_52 [i_29] [i_29] [i_30] [i_30] [i_30] [i_30]))));
            var_67 = ((/* implicit */short) min((var_67), (((/* implicit */short) (+(((/* implicit */int) arr_66 [i_29])))))));
        }
    }
    var_68 -= ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_31 = 0; i_31 < 22; i_31 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_32 = 1; i_32 < 20; i_32 += 2) 
        {
            arr_116 [i_32] [(short)9] [i_32] = var_4;
            var_69 += arr_111 [i_32];
        }
        for (short i_33 = 3; i_33 < 21; i_33 += 4) 
        {
            /* LoopSeq 1 */
            for (short i_34 = 0; i_34 < 22; i_34 += 4) 
            {
                var_70 = ((/* implicit */short) max((var_70), (((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_120 [i_31] [i_31] [i_31] [i_31]))))))))));
                var_71 = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) <= ((+(((/* implicit */int) arr_113 [i_31]))))));
                arr_121 [i_33] = arr_118 [i_33] [i_33];
            }
            arr_122 [i_33] [i_33] [(short)16] = ((/* implicit */short) (((+(((/* implicit */int) arr_111 [i_33])))) - (((((/* implicit */int) arr_112 [(short)21])) - (((/* implicit */int) arr_115 [(short)10]))))));
        }
        var_72 = ((/* implicit */short) (-(((/* implicit */int) arr_117 [i_31]))));
    }
}
